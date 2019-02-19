#ifndef CL_USE_DEPRECATED_OPENCL_1_1_APIS
#define CL_USE_DEPRECATED_OPENCL_1_1_APIS 1
#endif

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <CL/cl.hpp>

int main() {
    // get all platforms (drivers), e.g. NVIDIA
    std::vector<cl::Platform> all_platforms;
    cl::Platform::get(&all_platforms);

    if (all_platforms.empty()) {
        std::cout << " No platforms found. Check OpenCL installation!\n";
        exit(1);
    }
    cl::Platform default_platform = all_platforms[0];
    std::cout << "Using platform: " << default_platform.getInfo<CL_PLATFORM_NAME>() << "\n";

    // get default device (CPUs, GPUs) of the default platform
    std::vector<cl::Device> all_devices;
    default_platform.getDevices(CL_DEVICE_TYPE_ALL, &all_devices);
    if (all_devices.empty()) {
        std::cout << " No devices found. Check OpenCL installation!\n";
        exit(1);
    } else {
        for (auto &d: all_devices) {
            std::cout << "Found device: "
                      << d.getInfo<CL_DEVICE_NAME>()
                      << " " << d.getInfo<CL_DEVICE_VERSION>()
                      << " " << d.getInfo<CL_DEVICE_MAX_CLOCK_FREQUENCY>()
                      << "MHz"
                      << "\n";
        }
    }

#if defined(__ANDROID__) || defined(ANDROID)
    // device[0] is usually the GPU on Android
    cl::Device default_device = all_devices[0];
#else
    // use device[1] because that's a GPU for Mac; device[0] is the CPU
    cl::Device default_device = all_devices[1];
#endif
    std::cout << "Using device: " << default_device.getInfo<CL_DEVICE_NAME>() << "\n";

    // a context is like a "runtime link" to the device and platform;
    // i.e. communication is possible
    cl::Context context({default_device});

    // create the program that we want to execute on the device
    cl::Program::Sources sources;

    // calculates for each element; C = A + B
    std::string kernel_code =
            "   void kernel simple_add(global const int* A, global const int* B, global int* C, "
                    "                          global const int* N) {"
                    "       int ID, Nthreads, n, ratio, start, stop;"
                    ""
                    "       ID = get_global_id(0);"
                    "       Nthreads = get_global_size(0);"
                    "       n = N[0];"
                    ""
                    "       ratio = (n / Nthreads);"  // number of elements for each thread
                    "       start = ratio * ID;"
                    "       stop  = ratio * (ID + 1);"
                    ""
                    "       for (int i=start; i<stop; i++)"
                    "           C[i] = A[i] + B[i];"
                    "   }";
    sources.emplace_back(kernel_code.c_str(), kernel_code.length());

    cl::Program program(context, sources);
    if (program.build({default_device}) != CL_SUCCESS) {
        std::cout << "Error building: " << program.getBuildInfo<CL_PROGRAM_BUILD_LOG>(default_device) << std::endl;
        exit(1);
    }

    // apparently OpenCL only likes arrays ...
    // N holds the number of elements in the vectors we want to add
    int N[1] = {20};
    int n = N[0];

    // create buffers on device (allocate space on GPU)
    cl::Buffer buffer_A(context, CL_MEM_READ_WRITE, sizeof(int) * n);
    cl::Buffer buffer_B(context, CL_MEM_READ_WRITE, sizeof(int) * n);
    cl::Buffer buffer_C(context, CL_MEM_READ_WRITE, sizeof(int) * n);
    cl::Buffer buffer_N(context, CL_MEM_READ_ONLY, sizeof(int));

    // create things on here (CPU)
    int A[n], B[n];
    for (int i = 0; i < n; i++) {
        A[i] = i;
        B[i] = n - i - 1;
    }
    // create a queue (a queue of commands that the GPU will execute)
    cl::CommandQueue queue(context, default_device);

    // push write commands to queue
    queue.enqueueWriteBuffer(buffer_A, CL_TRUE, 0, sizeof(int) * n, A);
    queue.enqueueWriteBuffer(buffer_B, CL_TRUE, 0, sizeof(int) * n, B);
    queue.enqueueWriteBuffer(buffer_N, CL_TRUE, 0, sizeof(int), N);

    // RUN ZE KERNEL
    cl::KernelFunctor simple_add(cl::Kernel(program, "simple_add"), queue, cl::NullRange, cl::NDRange(10),
                                 cl::NullRange);
    simple_add(buffer_A, buffer_B, buffer_C, buffer_N);

    int C[n];
    // read result from GPU to here
    queue.enqueueReadBuffer(buffer_C, CL_TRUE, 0, sizeof(int) * n, C);

    std::cout << "result: {";
    for (int i = 0; i < n; i++) {
        std::cout << C[i] << " ";
    }
    std::cout << "}" << std::endl;

    return 0;
}

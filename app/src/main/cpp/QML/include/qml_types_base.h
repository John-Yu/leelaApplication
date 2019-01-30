#ifndef QML_TYPES_BASE_H
#define QML_TYPES_BASE_H

#ifdef __cplusplus
    #include <complex>
    #include <cstdint>
#else
    #include <complex.h>
    #include <stdint.h>
#endif

#include <qml_architecture.h>


#if defined(QML_STRICT_BLAS_SPEC)

typedef int32_t qml_int;
typedef int32_t qml_long;

typedef uint32_t qml_uint;
typedef uint32_t qml_ulong;

#else
    #if defined(QML_ARM_32) || defined(QML_X86)

    typedef int32_t qml_int;
    typedef int32_t qml_long;

    typedef uint32_t qml_uint;
    typedef uint32_t qml_ulong;

    #elif defined(QML_ARM_64) || defined(QML_X86_64)

    typedef int32_t qml_int;
    typedef int64_t qml_long;

    typedef uint32_t qml_uint;
    typedef uint64_t qml_ulong;

    #endif
#endif

#if defined(QML_ARM_32) || defined(QML_X86)

    typedef uint32_t qml_ptr_size;

#elif defined(QML_ARM_64) || defined(QML_X86_64)

    typedef uint64_t qml_ptr_size;

#endif

typedef int16_t qml_int16;
typedef uint16_t qml_uint16;
typedef int8_t  qml_int8;
typedef uint8_t qml_uint8;

// qml_single_complex -> qml_single_complex
struct fft_plan_c_s;
typedef struct fft_plan_c_s fft_plan_c_s;
typedef fft_plan_c_s* fft_plan_c;

// qml_double_complex -> qml_double_complex
struct fft_plan_z_s;
typedef struct fft_plan_z_s fft_plan_z_s;
typedef fft_plan_z_s* fft_plan_z;

// qml_single_complex -> float
struct fft_plan_c2s_s;
typedef struct fft_plan_c2s_s fft_plan_c2s_s;
typedef fft_plan_c2s_s* fft_plan_c2s;

// qml_double_complex -> double
struct fft_plan_z2d_s;
typedef struct fft_plan_z2d_s fft_plan_z2d_s;
typedef fft_plan_z2d_s* fft_plan_z2d;

// float -> qml_single_complex
struct fft_plan_s2c_s;
typedef struct fft_plan_s2c_s fft_plan_s2c_s;
typedef fft_plan_s2c_s* fft_plan_s2c;

// double -> qml_double_complex -> double
struct fft_plan_d2z_s;
typedef struct fft_plan_d2z_s fft_plan_d2z_s;
typedef fft_plan_d2z_s* fft_plan_d2z;


#ifdef __cplusplus
    typedef std::complex<float> qml_single_complex;
    typedef std::complex<double> qml_double_complex;
#else
    typedef float complex qml_single_complex;
    typedef double complex qml_double_complex;
#endif

#endif // QML_TYPES_BASE_H

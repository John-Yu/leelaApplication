# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.6.0)

#------------------libcl_stub-----------------------
set(cl_stub_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(cl_stub_SRC "${cl_stub_DIR}/cl_stub-master")
set(cl_stub_build_DIR ${PROJECT_BINARY_DIR}/cl_stub_outputs)
file(MAKE_DIRECTORY ${cl_stub_build_DIR})
add_subdirectory(${cl_stub_SRC} ${cl_stub_build_DIR})
add_library(libcl_stub SHARED IMPORTED)
set_target_properties(libcl_stub PROPERTIES IMPORTED_LOCATION ${cl_stub_build_DIR}/${ANDROID_ABI}/libcl_stub.so)
include_directories( ${cl_stub_SRC}/include )
#------------------boost -----------------------
add_library (boost_program_options SHARED IMPORTED)
set_target_properties( boost_program_options PROPERTIES IMPORTED_LOCATION
        ${CMAKE_CURRENT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libboost_program_options.so
        )
#-----------------------------------------
add_library (boost_filesystem SHARED IMPORTED)
set_target_properties( boost_filesystem PROPERTIES IMPORTED_LOCATION
        ${CMAKE_CURRENT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libboost_filesystem.so
        )
#-----------------------------------------
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/boost1.69/include
        )
#-----------------------------------------
# Qualcomm Math lib
add_library( lib_QML  SHARED   IMPORTED )
set_target_properties(lib_QML PROPERTIES IMPORTED_LOCATION  ${CMAKE_CURRENT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libQML-1.0.0.so)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/QML/include/ )
#-----------------------------------------

AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR}/leela0.16  leela_src)
#-----------------------------------------
add_library( leelaz
        SHARED
        leelazero.cpp
        ${leela_src})

#set_target_properties( leelaz   PROPERTIES     LIBRARY_OUTPUT_DIRECTORY     "${CMAKE_CURRENT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}")
#set_target_properties(leelaz PROPERTIES IMPORTED_LOCATION  ${CMAKE_CURRENT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libleelaz.so)

target_link_libraries( # Specifies the target library.
        leelaz

        # Links the target library to the log library
        # included in the NDK.
        boost_filesystem
        boost_program_options
        libcl_stub
        lib_QML
        z)
#-----------------------------------------

#-----------------------------------------

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
        native-lib

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        native-lib.cpp
        )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        native-lib

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib}
        leelaz)





#ifndef QML_ARCHITECTURE_H
#define QML_ARCHITECTURE_H

// ARM
// GCC
#ifdef __arm__
#define QML_ARM_32
#define QML_ARCH_DETECTED
#endif

// Clang
#ifdef __ARM_ARCH_7A__
#define QML_ARM_32
#define QML_ARCH_DETECTED
#endif

// MSVC
#ifdef _M_ARM
#define QML_ARM_32
#define QML_ARCH_DETECTED
#endif

// ARM64
// GCC
#ifdef __aarch64__
#define QML_ARM_64
#define QML_ARCH_DETECTED
#endif

// Clang
#ifdef __ARM_ARCH_ISA_A64
#define QML_ARM_64
#define QML_ARCH_DETECTED
#endif

// MSVC
#ifdef _M_ARM64
#define QML_ARM_64
#define QML_ARCH_DETECTED
#endif

// x86
// GCC
#ifdef __i386__
#define QML_X86
#define QML_ARCH_DETECTED
#endif

// MSVC
#ifdef _M_IX86
#define QML_X86
#define QML_ARCH_DETECTED
#endif

// x86_64
// GCC
#ifdef __x86_64__
#define QML_X86_64
#define QML_ARCH_DETECTED
#endif

// MSVC
#ifdef _M_AMD64
#define QML_X86_64
#define QML_ARCH_DETECTED
#endif

#ifndef QML_ARCH_DETECTED
#error "QML could not detect or does not support the requested architecture"
#endif


#endif // QML_ARCHITECTURE_H

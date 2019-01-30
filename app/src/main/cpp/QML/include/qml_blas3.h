


#ifndef QML_BLAS3_H
#define QML_BLAS3_H

#include <qml_types.h>

#ifdef __cplusplus

typedef qml_single_complex QML_SINGLE_COMPLEX;
typedef qml_double_complex QML_DOUBLE_COMPLEX;

#else

typedef void QML_SINGLE_COMPLEX;
typedef void QML_DOUBLE_COMPLEX;

#endif

#ifdef __cplusplus
extern "C" {
#endif

/// GEMM
void sgemm(const char *TRANSA, const char *TRANSB, const qml_long *M, const qml_long *N, const qml_long *K, const float *ALPHA, const float *A,
           const qml_long *LDA, const float *B, const qml_long *LDB, const float *BETA, float *C, const qml_long *LDC);

void dgemm(const char *TRANSA, const char *TRANSB, const qml_long *M, const qml_long *N, const qml_long *K, const double *ALPHA, const double *A,
           const qml_long *LDA, const double *B, const qml_long *LDB, const double *BETA, double *C, const qml_long *LDC);

void cgemm(const char *TRANSA, const char *TRANSB, const qml_long *M, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *ALPHA,
           const QML_SINGLE_COMPLEX *A, const qml_long *LDA, const QML_SINGLE_COMPLEX *B, const qml_long *LDB,
           const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *C, const qml_long *LDC);

void zgemm(const char *TRANSA, const char *TRANSB, const qml_long *M, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *ALPHA,
           const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const QML_DOUBLE_COMPLEX *B, const qml_long *LDB,
           const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *C, const qml_long *LDC);


/// HEMM
void chemm(const char *SIDE, const char *UPLO, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A,
           const qml_long *LDA, const QML_SINGLE_COMPLEX *B, const qml_long *LDB, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *C,
           const qml_long *LDC);

void zhemm(const char *SIDE, const char *UPLO, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A,
           const qml_long *LDA, const QML_DOUBLE_COMPLEX *B, const qml_long *LDB, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *C,
           const qml_long *LDC);

/// HERK
void cherk(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const float *ALPHA, const QML_SINGLE_COMPLEX *A,
                    const qml_long *LDA, const float *BETA, QML_SINGLE_COMPLEX *C, const qml_long *LDC);

void zherk(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const double *ALPHA, const QML_DOUBLE_COMPLEX *A,
                    const qml_long *LDA, const double *BETA, QML_DOUBLE_COMPLEX *C, const qml_long *LDC);

/// HER2K
void cher2k(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                     const QML_SINGLE_COMPLEX *B, const qml_long *LDB, const float *BETA, QML_SINGLE_COMPLEX *C, const qml_long *LDC);

void zher2k(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                     const QML_DOUBLE_COMPLEX *B, const qml_long *LDB, const double *BETA, QML_DOUBLE_COMPLEX *C, const qml_long *LDC);


/// SYMM
void ssymm(const char *SIDE, const char *UPLO, const qml_long *M, const qml_long *N, const float *ALPHA, const float *A,
                    const qml_long *LDA, const float *B, const qml_long *LDB, const float *BETA, float *C, const qml_long *LDC);

void dsymm(const char *SIDE, const char *UPLO, const qml_long *M, const qml_long *N, const double *ALPHA, const double *A,
                    const qml_long *LDA, const double *B, const qml_long *LDB, const double *BETA, double *C, const qml_long *LDC);

void csymm(const char *SIDE, const char *UPLO, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A,
           const qml_long *LDA, const QML_SINGLE_COMPLEX *B, const qml_long *LDB, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *C,
           const qml_long *LDC);

void zsymm(const char *SIDE, const char *UPLO, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A,
           const qml_long *LDA, const QML_DOUBLE_COMPLEX *B, const qml_long *LDB, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *C,
           const qml_long *LDC);

/// SYRK
void ssyrk(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const float *ALPHA, const float *A,
                    const qml_long *LDA, const float *BETA, float *C, const qml_long *LDC);

void dsyrk(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const double *ALPHA, const double *A,
           const qml_long *LDA, const double *BETA, double *C, const qml_long *LDC);

void csyrk(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A,
           const qml_long *LDA, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *C, const qml_long *LDC);

void zsyrk(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A,
           const qml_long *LDA, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *C, const qml_long *LDC);

/// SYR2K
void ssyr2k(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const float *ALPHA, const float *A, const qml_long *LDA,
                     const float *B, const qml_long *LDB, const float *BETA, float *C, const qml_long *LDC);

void dsyr2k(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const double *ALPHA, const double *A, const qml_long *LDA,
                     const double *B, const qml_long *LDB, const double *BETA, double *C, const qml_long *LDC);

void csyr2k(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                     const QML_SINGLE_COMPLEX *B, const qml_long *LDB, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *C, const qml_long *LDC);

void zsyr2k(const char *UPLO, const char *TRANS, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                     const QML_DOUBLE_COMPLEX *B, const qml_long *LDB, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *C, const qml_long *LDC);


/// TRMM
void strmm(const char *SIDE, const char *UPLO, const char *TRANSA, const char *DIAG, const qml_long *M, const qml_long *N,
                    const float *ALPHA, const float *A, const qml_long *LDA, float *B, const qml_long *LDB);

void dtrmm(const char *SIDE, const char *UPLO, const char *TRANSA, const char *DIAG, const qml_long *M, const qml_long *N,
                    const double *ALPHA, const double *A, const qml_long *LDA, double *B, const qml_long *LDB);

void ctrmm(const char *SIDE, const char *UPLO, const char *TRANSA, const char *DIAG, const qml_long *M, const qml_long *N,
                    const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB);

void ztrmm(const char *SIDE, const char *UPLO, const char *TRANSA, const char *DIAG, const qml_long *M, const qml_long *N,
                    const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB);


/// TRSM
void strsm(const char *SIDE, const char *UPLO, const char *TRANSA, const char *DIAG, const qml_long *M, const qml_long *N,
                    const float *ALPHA, const float *A, const qml_long *LDA, float *B, const qml_long *LDB);

void dtrsm(const char *SIDE, const char *UPLO, const char *TRANSA, const char *DIAG, const qml_long *M, const qml_long *N,
                    const double *ALPHA, const double *A, const qml_long *LDA, double *B, const qml_long *LDB);

void ctrsm(const char *SIDE, const char *UPLO, const char *TRANSA, const char *DIAG, const qml_long *M, const qml_long *N,
                    const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB);

void ztrsm(const char *SIDE, const char *UPLO, const char *TRANSA, const char *DIAG, const qml_long *M, const qml_long *N,
                    const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB);

#ifdef __cplusplus
}
#endif

#endif // QML_BLAS3_H

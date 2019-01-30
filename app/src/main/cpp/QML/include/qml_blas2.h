


#ifndef QML_BLAS2_H
#define QML_BLAS2_H

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

/// GBMV
void sgbmv(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void dgbmv(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);

void cgbmv(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zgbmv(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

/// GEMV
void sgemv(const char *TRANS, const qml_long *M, const qml_long *N, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void dgemv(const char *TRANS, const qml_long *M, const qml_long *N, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);

void cgemv(const char *TRANS, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zgemv(const char *TRANS, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

/// GER
void sger(const qml_long *M, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY, float *A, const qml_long *LDA);

void dger(const qml_long *M, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY, double *A, const qml_long *LDA);

/// GERC
void cgerc(const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y,
           const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zgerc(const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y,
           const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// GERU
void cgeru(const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
                    const QML_SINGLE_COMPLEX *Y, const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zgeru(const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
                    const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);

/// HBMV
void chbmv(const char *UPLO, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A,
                    const qml_long *LDA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zhbmv(const char *UPLO, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A,
                    const qml_long *LDA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

/// HEMV
void chemv(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zhemv(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

/// HER2
void cher2(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
                    const QML_SINGLE_COMPLEX *Y, const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zher2(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
                    const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// HER
void cher(const char *UPLO, const qml_long *N, const float *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zher(const char *UPLO, const qml_long *N, const double *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// HPMV
void chpmv(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *AP, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
           const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zhpmv(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *AP, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
           const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

/// HPR2
void chpr2(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y,
           const qml_long *INCY, QML_SINGLE_COMPLEX *AP);

void zhpr2(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y,
           const qml_long *INCY, QML_DOUBLE_COMPLEX *AP);

/// HPR
void chpr(const char *UPLO, const qml_long *N, const float *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *AP);

void zhpr(const char *UPLO, const qml_long *N, const double *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *AP);

/// SBMV
void ssbmv(const char *UPLO, const qml_long *N, const qml_long *K, const float *ALPHA, const float *A,
                    const qml_long *LDA, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void dsbmv(const char *UPLO, const qml_long *N, const qml_long *K, const double *ALPHA, const double *A,
                    const qml_long *LDA, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);

/// SPMV
void sspmv(const char *UPLO, const qml_long *N, const float *ALPHA, const float *AP, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void dspmv(const char *UPLO, const qml_long *N, const double *ALPHA, const double *AP, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);


/// SPR2
void sspr2(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY, float *AP);

void dspr2(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY, double *AP);


/// SPR
void sspr(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *AP);

void dspr(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *AP);


/// SYMV
void ssymv(const char *UPLO, const qml_long *N, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void dsymv(const char *UPLO, const qml_long *N, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);


/// SYR2
void ssyr2(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX,
                    const float *Y, const qml_long *INCY, float *A, const qml_long *LDA);

void dsyr2(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX,
                    const double *Y, const qml_long *INCY, double *A, const qml_long *LDA);


/// SYR
void ssyr(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *A, const qml_long *LDA);

void dsyr(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *A, const qml_long *LDA);


/// TBMV
void stbmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);

void dtbmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);

void ctbmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void ztbmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// TBSV
void stbsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);

void dtbsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);

void ctbsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);


void ztbsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);

/// TPMV
void stpmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *AP, float *X, const qml_long *INCX);

void dtpmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *AP, double *X, const qml_long *INCX);

void ctpmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *AP, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void ztpmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *AP, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// TPSV
void stpsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *AP, float *X, const qml_long *INCX);

void dtpsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *AP, double *X, const qml_long *INCX);

void ctpsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *AP, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void ztpsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *AP, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);

/// TRMV
void strmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);

void dtrmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);

void ctrmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void ztrmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);

/// TRSV
void strsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);

void dtrsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);

void ctrsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void ztrsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);

#ifdef __cplusplus
}
#endif

#endif // QML_BLAS2_H

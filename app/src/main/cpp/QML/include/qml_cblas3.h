



#ifndef QML_CBLAS3_H
#define QML_CBLAS3_H


#include <qml_cblas_common.h>
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
void cblas_sgemm(const CBLAS_ORDER ORDER, const CBLAS_TRANSPOSE TRANSA, const CBLAS_TRANSPOSE TRANSB, const qml_long M, const qml_long N, const qml_long K, const float ALPHA, const float *A,
           const qml_long LDA, const float *B, const qml_long LDB, const float BETA, float *C, const qml_long LDC);

void cblas_dgemm(const CBLAS_ORDER ORDER, const CBLAS_TRANSPOSE TRANSA, const CBLAS_TRANSPOSE TRANSB, const qml_long M, const qml_long N, const qml_long K, const double ALPHA, const double *A,
           const qml_long LDA, const double *B, const qml_long LDB, const double BETA, double *C, const qml_long LDC);

void cblas_cgemm(const CBLAS_ORDER ORDER, const CBLAS_TRANSPOSE TRANSA, const CBLAS_TRANSPOSE TRANSB, const qml_long M, const qml_long N, const qml_long K, const QML_SINGLE_COMPLEX *ALPHA,
           const QML_SINGLE_COMPLEX *A, const qml_long LDA, const QML_SINGLE_COMPLEX *B, const qml_long LDB,
           const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *C, const qml_long LDC);

void cblas_zgemm(const CBLAS_ORDER ORDER, const CBLAS_TRANSPOSE TRANSA, const CBLAS_TRANSPOSE TRANSB, const qml_long M, const qml_long N, const qml_long K, const QML_DOUBLE_COMPLEX *ALPHA,
           const QML_DOUBLE_COMPLEX *A, const qml_long LDA, const QML_DOUBLE_COMPLEX *B, const qml_long LDB,
           const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *C, const qml_long LDC);


/// HEMM
void cblas_chemm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const qml_long M, const qml_long N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A,
           const qml_long LDA, const QML_SINGLE_COMPLEX *B, const qml_long LDB, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *C,
           const qml_long LDC);

void cblas_zhemm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const qml_long M, const qml_long N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A,
           const qml_long LDA, const QML_DOUBLE_COMPLEX *B, const qml_long LDB, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *C,
           const qml_long LDC);

/// HERK
void cblas_cherk(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const float ALPHA, const QML_SINGLE_COMPLEX *A,
                    const qml_long LDA, const float BETA, QML_SINGLE_COMPLEX *C, const qml_long LDC);

void cblas_zherk(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const double ALPHA, const QML_DOUBLE_COMPLEX *A,
                    const qml_long LDA, const double BETA, QML_DOUBLE_COMPLEX *C, const qml_long LDC);

/// HER2K
void cblas_cher2k(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long LDA,
                     const QML_SINGLE_COMPLEX *B, const qml_long LDB, const float BETA, QML_SINGLE_COMPLEX *C, const qml_long LDC);

void cblas_zher2k(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long LDA,
                     const QML_DOUBLE_COMPLEX *B, const qml_long LDB, const double BETA, QML_DOUBLE_COMPLEX *C, const qml_long LDC);


/// SYMM
void cblas_ssymm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const qml_long M, const qml_long N, const float ALPHA, const float *A,
                    const qml_long LDA, const float *B, const qml_long LDB, const float BETA, float *C, const qml_long LDC);

void cblas_dsymm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const qml_long M, const qml_long N, const double ALPHA, const double *A,
                    const qml_long LDA, const double *B, const qml_long LDB, const double BETA, double *C, const qml_long LDC);

void cblas_csymm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const qml_long M, const qml_long N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A,
           const qml_long LDA, const QML_SINGLE_COMPLEX *B, const qml_long LDB, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *C,
           const qml_long LDC);

void cblas_zsymm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const qml_long M, const qml_long N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A,
           const qml_long LDA, const QML_DOUBLE_COMPLEX *B, const qml_long LDB, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *C,
           const qml_long LDC);

/// SYRK
void cblas_ssyrk(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const float ALPHA, const float *A,
                    const qml_long LDA, const float BETA, float *C, const qml_long LDC);

void cblas_dsyrk(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const double ALPHA, const double *A,
           const qml_long LDA, const double BETA, double *C, const qml_long LDC);

void cblas_csyrk(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A,
           const qml_long LDA, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *C, const qml_long LDC);

void cblas_zsyrk(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A,
           const qml_long LDA, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *C, const qml_long LDC);

/// SYR2K
void cblas_ssyr2k(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const float ALPHA, const float *A, const qml_long LDA,
                     const float *B, const qml_long LDB, const float BETA, float *C, const qml_long LDC);

void cblas_dsyr2k(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const double ALPHA, const double *A, const qml_long LDA,
                     const double *B, const qml_long LDB, const double BETA, double *C, const qml_long LDC);

void cblas_csyr2k(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long LDA,
                     const QML_SINGLE_COMPLEX *B, const qml_long LDB, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *C, const qml_long LDC);

void cblas_zsyr2k(const CBLAS_ORDER ORDER, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANS, const qml_long N, const qml_long K, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long LDA,
                     const QML_DOUBLE_COMPLEX *B, const qml_long LDB, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *C, const qml_long LDC);


/// TRMM
void cblas_strmm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANSA, const CBLAS_DIAG DIAG, const qml_long M, const qml_long N,
                    const float ALPHA, const float *A, const qml_long LDA, float *B, const qml_long LDB);

void cblas_dtrmm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANSA, const CBLAS_DIAG DIAG, const qml_long M, const qml_long N,
                    const double ALPHA, const double *A, const qml_long LDA, double *B, const qml_long LDB);

void cblas_ctrmm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANSA, const CBLAS_DIAG DIAG, const qml_long M, const qml_long N,
                    const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long LDA, QML_SINGLE_COMPLEX *B, const qml_long LDB);

void cblas_ztrmm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANSA, const CBLAS_DIAG DIAG, const qml_long M, const qml_long N,
                    const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long LDA, QML_DOUBLE_COMPLEX *B, const qml_long LDB);


/// TRSM
void cblas_strsm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANSA, const CBLAS_DIAG DIAG, const qml_long M, const qml_long N,
                    const float ALPHA, const float *A, const qml_long LDA, float *B, const qml_long LDB);

void cblas_dtrsm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANSA, const CBLAS_DIAG DIAG, const qml_long M, const qml_long N,
                    const double ALPHA, const double *A, const qml_long LDA, double *B, const qml_long LDB);

void cblas_ctrsm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANSA, const CBLAS_DIAG DIAG, const qml_long M, const qml_long N,
                    const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long LDA, QML_SINGLE_COMPLEX *B, const qml_long LDB);

void cblas_ztrsm(const CBLAS_ORDER ORDER, const CBLAS_SIDE SIDE, const CBLAS_UPLO UPLO, const CBLAS_TRANSPOSE TRANSA, const CBLAS_DIAG DIAG, const qml_long M, const qml_long N,
                    const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long LDA, QML_DOUBLE_COMPLEX *B, const qml_long LDB);

#ifdef __cplusplus
}
#endif

#endif // QML_CBLAS3_H

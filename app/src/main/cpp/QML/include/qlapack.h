#ifndef QLAPACK_H
#define QLAPACK_H


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

/// GESV
void sgesv(const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, qml_long *IPIV, float *B, const qml_long *LDB, qml_long *INFO);

void dgesv(const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, qml_long *IPIV, double *B, const qml_long *LDB, qml_long *INFO);

void cgesv(const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);

void zgesv(const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);


/// GETF2
void sgetf2(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void dgetf2(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void cgetf2(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void zgetf2(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);


/// GETRF
void sgetrf(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void dgetrf(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void cgetrf(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void zgetrf(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);


/// GETRI
void sgetri(const qml_long *N, float *A, const qml_long *LDA, const qml_long *IPIV, float *WORK, const qml_long *LWORK, qml_long *INFO);

void dgetri(const qml_long *N, double *A, const qml_long *LDA, const qml_long *IPIV, double *WORK, const qml_long *LWORK, qml_long *INFO);

void cgetri(const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, const qml_long *IPIV, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);

void zgetri(const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const qml_long *IPIV, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);


/// GETRS
void sgetrs(const char *TRANS, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, qml_long *IPIV, float *B, const qml_long *LDB, qml_long *INFO);

void dgetrs(const char *TRANS, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, qml_long *IPIV, double *B, const qml_long *LDB, qml_long *INFO);

void cgetrs(const char *TRANS, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);

void zgetrs(const char *TRANS, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);


/// GEQR2
void sgeqr2(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, float *TAU, float *WORK, qml_long *INFO);

void dgeqr2(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, double *TAU, double *WORK, qml_long *INFO);

void cgeqr2(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, qml_long *INFO);

void zgeqr2(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, qml_long *INFO);


/// GEQRF
void sgeqrf(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);

void dgeqrf(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);

void cgeqrf(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);

void zgeqrf(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);


/// HETD2
void chetd2(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *D, float *E, QML_SINGLE_COMPLEX *TAU, qml_long *INFO);

void zhetd2(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *D, double *E, QML_DOUBLE_COMPLEX *TAU, qml_long *INFO);

/// HETRD
void chetrd(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *D, float *E, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);

void zhetrd(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *D, double *E, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);


/// ILAXLC
qml_long ilaslc(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA);

qml_long iladlc(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA);

qml_long ilaclc(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

qml_long ilazlc(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// ILAXLR
qml_long ilaslr(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA);

qml_long iladlr(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA);

qml_long ilaclr(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

qml_long ilazlr(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// LACGV
void clacgv(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void zlacgv(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// LADIV
void sladiv(const float *A, const float *B, const float *C, const float *D, float *P, float *Q);

void dladiv(const double *A, const double *B, const double *C, const double *D, double *P, double *Q);

void cladiv(QML_SINGLE_COMPLEX *result, const QML_SINGLE_COMPLEX *X, const QML_SINGLE_COMPLEX *Y);

void zladiv(QML_DOUBLE_COMPLEX *result, const QML_DOUBLE_COMPLEX *X, const QML_DOUBLE_COMPLEX *Y);


/// LAPY
float slapy2(const float *X, const float *Y);

double dlapy2(const double *X, const double *Y);

float slapy3(const float *X, const float *Y, const float *Z);

double dlapy3(const double *X, const double *Y, const double *Z);


/// LARF
void slarf(const char *SIDE, const qml_long *M, const qml_long *N, const float *V, const qml_long *INCV, const float *TAU, float *C, const qml_long *LDC, float *WORK);

void dlarf(const char *SIDE, const qml_long *M, const qml_long *N, const double *V, const qml_long *INCV, const double *TAU, double *C, const qml_long *LDC, double *WORK);

void clarf(const char *SIDE, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *V, const qml_long *INCV, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK);

void zlarf(const char *SIDE, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *V, const qml_long *INCV, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK);


/// LARFB
void slarfb(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const float *V, const qml_long *LDV, const float *T, const qml_long *LDT, float *C,
            const qml_long *LDC, float *WORK, const qml_long *LDWORK);

void dlarfb(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const double *V, const qml_long *LDV, const double *T, const qml_long *LDT, double *C,
            const qml_long *LDC, double *WORK, const qml_long *LDWORK);

void clarfb(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const QML_SINGLE_COMPLEX *V, const qml_long *LDV, const QML_SINGLE_COMPLEX *T, const qml_long *LDT,
            QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, const qml_long *LDWORK);

void zlarfb(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const QML_DOUBLE_COMPLEX *V, const qml_long *LDV, const QML_DOUBLE_COMPLEX *T, const qml_long *LDT,
            QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, const qml_long *LDWORK);


/// LARFG
void slarfg(const qml_long *N, float *ALPHA, float *X, const qml_long *INCX, float *TAU);

void dlarfg(const qml_long *N, double *ALPHA, double *X, const qml_long *INCX, double *TAU);

void clarfg(const qml_long *N, QML_SINGLE_COMPLEX *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *TAU);

void zlarfg(const qml_long *N, QML_DOUBLE_COMPLEX *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *TAU);


/// LARFT
void slarft(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const float *V, const qml_long *LDV, const float *TAU, float *T, const qml_long *LDT);

void dlarft(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const double *V, const qml_long *LDV, const double *TAU, double *T, const qml_long *LDT);

void clarft(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *V, const qml_long *LDV, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *T, const qml_long *LDT);

void zlarft(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *V, const qml_long *LDV, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *T, const qml_long *LDT);

/// LATRD
void slatrd(const char *UPLO, const qml_long *N, const qml_long *NB, float *A, const qml_long *LDA, float *E, float *TAU, float *W, const qml_long *LDW);

void dlatrd(const char *UPLO, const qml_long *N, const qml_long *NB, double *A, const qml_long *LDA, double *E, double *TAU, double *W, const qml_long *LDW);

void clatrd(const char *UPLO, const qml_long *N, const qml_long *NB, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *E, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *W, const qml_long *LDW);

void zlatrd(const char *UPLO, const qml_long *N, const qml_long *NB, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *E, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *W, const qml_long *LDW);


/// POSV
void sposv(const char *UPLO, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);

void dposv(const char *UPLO, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);

void cposv(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);

void zposv(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);


/// POTF2
void spotf2(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);

void dpotf2(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);

void cpotf2(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);

void zpotf2(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);


/// POTRF
void spotrf(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);

void dpotrf(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);

void cpotrf(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);

void zpotrf(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);


/// POTRS
void spotrs(const char *UPLO, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);

void dpotrs(const char *UPLO, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);

void cpotrs(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);

void zpotrs(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);


/// SYTD2
void ssytd2(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, float *D, float *E, float *TAU, qml_long *INFO);

void dsytd2(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, double *D, double *E, double *TAU, qml_long *INFO);


/// SYTRD
void ssytrd(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, float *D, float *E, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);

void dsytrd(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, double *D, double *E, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);


/// TRTI2
void strti2(const char *UPLO, const char *DIAG, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);

void dtrti2(const char *UPLO, const char *DIAG, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);

void ctrti2(const char *UPLO, const char *DIAG, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);

void ztrti2(const char *UPLO, const char *DIAG, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);


/// TRTRI
void strtri(const char *UPLO, const char *DIAG, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);

void dtrtri(const char *UPLO, const char *DIAG, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);

void ctrtri(const char *UPLO, const char *DIAG, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);

void ztrtri(const char *UPLO, const char *DIAG, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);


/// LACPY
void slacpy(const char *uplo, const qml_long *M, const qml_long *N, const float *A, const qml_long *LDA, float *B, const qml_long *LDB);

void dlacpy(const char *uplo, const qml_long *M, const qml_long *N, const double *A, const qml_long *LDA, double *B, const qml_long *LDB);

void clacpy(const char *uplo, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB);

void zlacpy(const char *uplo, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB);


/// LASET
void slaset(const char *uplo, const qml_long *M, const qml_long *N, const float *ALPHA, const float *BETA, float *A, const qml_long *LDA);

void dlaset(const char *uplo, const qml_long *M, const qml_long *N, const double *ALPHA, const double *BETA, double *A, const qml_long *LDA);

void claset(const char *uplo, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zlaset(const char *uplo, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// LASSQ
void slassq(const qml_long *N, const float *X, const qml_long *INCX, float *SCALE, float *SUMSQ);

void dlassq(const qml_long *N, const double *X, const qml_long *INCX, double *SCALE, double *SUMSQ);

void classq(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, float *SCALE, float *SUMSQ);

void zlassq(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, double *SCALE, double *SUMSQ);


/// LANGE
float slange(const char *NORM, const qml_long *M, const qml_long *N, const float *A, const qml_long *LDA, float *WORK);

double dlange(const char *NORM, const qml_long *M, const qml_long *N, const double *A, const qml_long *LDA, double *WORK);

float clange(const char *NORM, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *WORK);

double zlange(const char *NORM, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *WORK);


/// LASCL
void slascl(const char *TYPE, const qml_long *KL, const qml_long *KU, const float *CFROM, const float *CTO, const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);

void dlascl(const char *TYPE, const qml_long *KL, const qml_long *KU, const double *CFROM, const double *CTO, const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);

void clascl(const char *TYPE, const qml_long *KL, const qml_long *KU, const float *CFROM, const float *CTO, const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);

void zlascl(const char *TYPE, const qml_long *KL, const qml_long *KU, const double *CFROM, const double *CTO, const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);


/// LAS2
void slas2(const float *F, const float *G, const float *H, float *SSMIN, float *SSMAX);

void dlas2(const double *F, const double *G, const double *H, double *SSMIN, double *SSMAX);


/// LASRT
void slasrt(const char *ID, const qml_long *N, float *D, qml_long *INFO);

void dlasrt(const char *ID, const qml_long *N, double *D, qml_long *INFO);


/// LASR
void slasr(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const float *C, const float *S, float *A, const qml_long *LDA);

void dlasr(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const double *C, const double *S, double *A, const qml_long *LDA);

void clasr(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const float *C, const float *S, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zlasr(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const double *C, const double *S, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// LASV2
void slasv2(const float *F, const float *G, const float *H, float *SSMIN, float *SSMAX, float *SNR, float *CSR, float *SNL, float *CSL);

void dlasv2(const double *F, const double *G, const double *H, double *SSMIN, double *SSMAX, double *SNR, double *CSR, double *SNL, double *CSL);


/// LARTG
void slartg(const float *F, const float *G, float *CS, float *SN, float *R);

void dlartg(const double *F, const double *G, double *CS, double *SN, double *R);

void clartg(const QML_SINGLE_COMPLEX *F, const QML_SINGLE_COMPLEX *G, float *CS, QML_SINGLE_COMPLEX *SN, QML_SINGLE_COMPLEX *R);

void zlartg(const QML_DOUBLE_COMPLEX *F, const QML_DOUBLE_COMPLEX *G, double *CS, QML_DOUBLE_COMPLEX *SN, QML_DOUBLE_COMPLEX *R);


/// LASQ1
void slasq1(const qml_long *N, float *D, float *E, float *WORK, qml_long *INFO);

void dlasq1(const qml_long *N, double *D, double *E, double *WORK, qml_long *INFO);


/// BDSQR
void sbdsqr(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, float *D, float *E, float *VT, const qml_long *LDVT, float *Umat, const qml_long *LDU, float *C, const qml_long *LDC, float *RWORK, qml_long *INFO);

void dbdsqr(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, double *D, double *E, double *VT, const qml_long *LDVT, double *Umat, const qml_long *LDU, double *C, const qml_long *LDC, double *RWORK, qml_long *INFO);

void cbdsqr(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, float *D, float *E, QML_SINGLE_COMPLEX *VT, const qml_long *LDVT, QML_SINGLE_COMPLEX *Umat, const qml_long *LDU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, float *RWORK, qml_long *INFO);

void zbdsqr(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, double *D, double *E, QML_DOUBLE_COMPLEX *VT, const qml_long *LDVT, QML_DOUBLE_COMPLEX *Umat, const qml_long *LDU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, double *RWORK, qml_long *INFO);


/// LAQPS
void slaqps(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *VN1, float *VN2, float *AUXV, float *F, const qml_long *LDF);

void dlaqps(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *VN1, double *VN2, double *AUXV, double *F, const qml_long *LDF);

void claqps(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, float *VN1, float *VN2, QML_SINGLE_COMPLEX *AUXV, QML_SINGLE_COMPLEX *F, const qml_long *LDF);

void zlaqps(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, double *VN1, double *VN2, QML_DOUBLE_COMPLEX *AUXV, QML_DOUBLE_COMPLEX *F, const qml_long *LDF);


/// LAQP2
void slaqp2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *VN1, float *VN2, float *WORK);

void dlaqp2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *VN1, double *VN2, double *WORK);

void claqp2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, float *VN1, float *VN2, QML_SINGLE_COMPLEX *WORK);

void zlaqp2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, double *VN1, double *VN2, QML_DOUBLE_COMPLEX *WORK);


/// ORM2R
void sorm2r(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const float *A, const qml_long *LDA, const float *TAU, float *C, const qml_long *LDC, float *WORK, qml_long *INFO);

void dorm2r(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const double *A, const qml_long *LDA, const double *TAU, double *C, const qml_long *LDC, double *WORK, qml_long *INFO);


/// UNM2R
void cunm2r(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, qml_long *INFO);

void zunm2r(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, qml_long *INFO);


/// ORMQR
void sormqr(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const float *A, const qml_long *LDA, const float *TAU, float *C, const qml_long *LDC, float *WORK, const qml_long *LWORK, qml_long *INFO);

void dormqr(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const double *A, const qml_long *LDA, const double *TAU, double *C, const qml_long *LDC, double *WORK, const qml_long *LWORK, qml_long *INFO);


/// UNMQR
void cunmqr(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);

void zunmqr(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);


/// GEQP3
void sgeqp3(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);

void dgeqp3(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);

void cgeqp3(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, float *RWORK, qml_long *INFO);

void zgeqp3(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, double *RWORK, qml_long *INFO);


/// TRTRS
void strtrs(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);

void dtrtrs(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);

void ctrtrs(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);

void ztrtrs(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);


/// LAE2
void slae2(const float *A, const float *B, const float *C, float *RT1, float *RT2);

void dlae2(const double *A, const double *B, const double *C, double *RT1, double *RT2);


/// LAEV2
void slaev2(const float *A, const float *B, const float *C, float *RT1, float *RT2, float *CS1, float *SN1);

void dlaev2(const double *A, const double *B, const double *C, double *RT1, double *RT2, double *CS1, double *SN1);

void claev2(const QML_SINGLE_COMPLEX *A, const QML_SINGLE_COMPLEX *B, const QML_SINGLE_COMPLEX *C, float *RT1, float *RT2, float *CS1, QML_SINGLE_COMPLEX *SN1);

void zlaev2(const QML_DOUBLE_COMPLEX *A, const QML_DOUBLE_COMPLEX *B, const QML_DOUBLE_COMPLEX *C, double *RT1, double *RT2, double *CS1, QML_DOUBLE_COMPLEX *SN1);

#include <netlib_lapack.h>

#ifdef __cplusplus
}
#endif

#endif // QLAPACK_H

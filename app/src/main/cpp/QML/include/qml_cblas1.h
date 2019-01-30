


#ifndef QML_CBLAS1_H
#define QML_CBLAS1_H

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

/// AMAX
qml_long cblas_isamax(const qml_long N, const float *X, const qml_long INCX);

qml_long cblas_idamax(const qml_long N, const double *X, const qml_long INCX);

qml_long cblas_icamax(const qml_long N, const QML_SINGLE_COMPLEX *X, const qml_long INCX);

qml_long cblas_izamax(const qml_long N, const QML_DOUBLE_COMPLEX *X, const qml_long INCX);


/// AMIN
qml_long cblas_isamin(const qml_long N, const float *X, const qml_long INCX);

qml_long cblas_idamin(const qml_long N, const double *X, const qml_long INCX);

qml_long cblas_icamin(const qml_long N, const QML_SINGLE_COMPLEX *X, const qml_long INCX);

qml_long cblas_izamin(const qml_long N, const QML_DOUBLE_COMPLEX *X, const qml_long INCX);



/// ASUM
float cblas_sasum(const qml_long N, const float *X, const qml_long INCX);

double cblas_dasum(const qml_long N, const double *X, const qml_long INCX);

float cblas_scasum(const qml_long N, const QML_SINGLE_COMPLEX *X, const qml_long INCX);

double cblas_dzasum(const qml_long N, const QML_DOUBLE_COMPLEX *X, const qml_long INCX);


/// AXPY
void cblas_saxpy(const qml_long N, const float ALPHA, const float *X, const qml_long INCX, float *Y, const qml_long INCY);

void cblas_daxpy(const qml_long N, const double ALPHA, const double *X, const qml_long INCX, double *Y, const qml_long INCY);

void cblas_caxpy(const qml_long N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long INCX, QML_SINGLE_COMPLEX *Y, const qml_long INCY);

void cblas_zaxpy(const qml_long N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long INCX, QML_DOUBLE_COMPLEX *Y, const qml_long INCY);


/// AXPBY
void cblas_saxpby(const qml_long N, const float ALPHA, const float *X, const qml_long INCX, const float BETA, float *Y, const qml_long INCY);

void cblas_daxpby(const qml_long N, const double ALPHA, const double *X, const qml_long INCX, const double BETA, double *Y, const qml_long INCY);

void cblas_caxpby(const qml_long N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long INCY);

void cblas_zaxpby(const qml_long N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long INCY);


/// CABS1
float cblas_scabs1(const QML_SINGLE_COMPLEX *Z);

double cblas_dcabs1(const QML_DOUBLE_COMPLEX *Z);



/// COPY
void cblas_scopy(const qml_long N, const float *X, const qml_long INCX, float *Y, const qml_long INCY);

void cblas_dcopy(const qml_long N, const double *X, const qml_long INCX, double *Y, const qml_long INCY);

void cblas_ccopy(const qml_long N, const QML_SINGLE_COMPLEX *X, const qml_long INCX, QML_SINGLE_COMPLEX *Y, const qml_long INCY);

void cblas_zcopy(const qml_long N, const QML_DOUBLE_COMPLEX *X, const qml_long INCX, QML_DOUBLE_COMPLEX *Y, const qml_long INCY);


/// DOT
float cblas_sdot(const qml_long N, const float *X, const qml_long INCX, const float *Y, const qml_long INCY);

double cblas_ddot(const qml_long N, const double *X, const qml_long INCX, const double *Y, const qml_long INCY);


/// DOTC
void cblas_cdotc_sub(const qml_long N, const QML_SINGLE_COMPLEX *X, const qml_long INCX, const QML_SINGLE_COMPLEX *Y, const qml_long INCY, QML_SINGLE_COMPLEX *result);

void cblas_zdotc_sub(const qml_long N, const QML_DOUBLE_COMPLEX *X, const qml_long INCX, const QML_DOUBLE_COMPLEX *Y, const qml_long INCY, QML_DOUBLE_COMPLEX *result);


/// DOTU
void cblas_cdotu_sub(const qml_long N, const QML_SINGLE_COMPLEX *X, const qml_long INCX, const QML_SINGLE_COMPLEX *Y, const qml_long INCY, QML_SINGLE_COMPLEX *result);

void cblas_zdotu_sub(const qml_long N, const QML_DOUBLE_COMPLEX *X, const qml_long INCX, const QML_DOUBLE_COMPLEX *Y, const qml_long INCY, QML_DOUBLE_COMPLEX *result);


/// NRM2
float cblas_snrm2(const qml_long N, const float *X, const qml_long INCX);

double cblas_dnrm2(const qml_long N, const double *X, const qml_long INCX);

float cblas_scnrm2(const qml_long N, const QML_SINGLE_COMPLEX *X, const qml_long INCX);

double cblas_dznrm2(const qml_long N, const QML_DOUBLE_COMPLEX *X, const qml_long INCX);


/// ROT
void cblas_srot(const qml_long N, float *X, const qml_long INCX, float *Y, const qml_long INCY, const float C, const float S);

void cblas_drot(const qml_long N, double *X, const qml_long INCX, double *Y, const qml_long INCY, const double C, const double S);

void cblas_crot(const qml_long N, QML_SINGLE_COMPLEX *X, const qml_long INCX, QML_SINGLE_COMPLEX *Y, const qml_long INCY, const float C, const QML_SINGLE_COMPLEX *S);

void cblas_csrot(const qml_long N, QML_SINGLE_COMPLEX *X, const qml_long INCX, QML_SINGLE_COMPLEX *Y, const qml_long INCY, const float C, const float S);

void cblas_zrot(const qml_long N, QML_DOUBLE_COMPLEX *X, const qml_long INCX, QML_DOUBLE_COMPLEX *Y, const qml_long INCY, const double C, const QML_DOUBLE_COMPLEX *S);

void cblas_zdrot(const qml_long N, QML_DOUBLE_COMPLEX *X, const qml_long INCX, QML_DOUBLE_COMPLEX *Y, const qml_long INCY, const double C, const double S);


/// ROTG
void cblas_srotg(float *A, float *B, float *C, float *S);

void cblas_drotg(double *A, double *B, double *C, double *S);

void cblas_crotg(QML_SINGLE_COMPLEX *A, const QML_SINGLE_COMPLEX *B, float *C, QML_SINGLE_COMPLEX *S);

void cblas_zrotg(QML_DOUBLE_COMPLEX *A, const QML_DOUBLE_COMPLEX *B, double *C, QML_DOUBLE_COMPLEX *S);

/// ROTM
void cblas_srotm(const qml_long N, float *X, const qml_long INCX, float *Y, const qml_long INCY, const float *PARAM);

void cblas_drotm(const qml_long N, double *X, const qml_long INCX, double *Y, const qml_long INCY, const double *PARAM);

/// ROTMG
void cblas_srotmg(float *D1, float *D2, float *X1, const float Y1, float *PARAM);

void cblas_drotmg(double *D1, double *D2, double *X1, const double Y1, double *PARAM);

/// SCAL

void cblas_sscal(const qml_long N, const float ALPHA, float *X, const qml_long INCX);

void cblas_dscal(const qml_long N, const double ALPHA, double *X, const qml_long INCX);

void cblas_cscal(const qml_long N, const QML_SINGLE_COMPLEX *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long INCX);

void cblas_zscal(const qml_long N, const QML_DOUBLE_COMPLEX *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long INCX);

void cblas_csscal(const qml_long N, const float ALPHA, QML_SINGLE_COMPLEX *X, const qml_long INCX);

void cblas_zdscal(const qml_long N, const double ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long INCX);


/// SDOT
float cblas_sdsdot(const qml_long N, const float B, const float *X, const qml_long INCX, const float *Y, const qml_long INCY);

double cblas_dsdot(const qml_long N, const float *X, const qml_long INCX, const float *Y, const qml_long INCY);



/// SWAP
void cblas_sswap(const qml_long N, float *X, const qml_long INCX, float *Y, const qml_long INCY);

void cblas_dswap(const qml_long N, double *X, const qml_long INCX, double *Y, const qml_long INCY);

void cblas_cswap(const qml_long N, QML_SINGLE_COMPLEX *X, const qml_long INCX, QML_SINGLE_COMPLEX *Y, const qml_long INCY);

void cblas_zswap(const qml_long N, QML_DOUBLE_COMPLEX *X, const qml_long INCX, QML_DOUBLE_COMPLEX *Y, const qml_long INCY);



#ifdef __cplusplus
}
#endif


#endif // QML_CBLAS1_H

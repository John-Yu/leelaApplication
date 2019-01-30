


#ifndef QML_BLAS1_H
#define QML_BLAS1_H

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
qml_long isamax(const qml_long *N, const float *X, const qml_long *INCX);

qml_long idamax(const qml_long *N, const double *X, const qml_long *INCX);

qml_long icamax(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);

qml_long izamax(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// AMIN
qml_long isamin(const qml_long *N, const float *X, const qml_long *INCX);

qml_long idamin(const qml_long *N, const double *X, const qml_long *INCX);

qml_long icamin(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);

qml_long izamin(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);



/// ASUM
float sasum(const qml_long *N, const float *X, const qml_long *INCX);

double dasum(const qml_long *N, const double *X, const qml_long *INCX);

float scasum(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);

double dzasum(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// AXPY
void saxpy(const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *Y, const qml_long *INCY);

void daxpy(const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *Y, const qml_long *INCY);

void caxpy(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zaxpy(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);


/// AXPBY
void saxpby(const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void daxpby(const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);

void caxpby(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zaxpby(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);


/// CABS1
float scabs1(const QML_SINGLE_COMPLEX *Z);

double dcabs1(const QML_DOUBLE_COMPLEX *Z);



/// COPY
void scopy(const qml_long *N, const float *X, const qml_long *INCX, float *Y, const qml_long *INCY);

void dcopy(const qml_long *N, const double *X, const qml_long *INCX, double *Y, const qml_long *INCY);

void ccopy(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zcopy(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);


/// DOT
float sdot(const qml_long *N, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);

double ddot(const qml_long *N, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY);


/// DOTC
void cdotc(QML_SINGLE_COMPLEX *result, const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zdotc(QML_DOUBLE_COMPLEX *result, const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);


/// DOTU
void cdotu(QML_SINGLE_COMPLEX *result, const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zdotu(QML_DOUBLE_COMPLEX *result, const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);


/// NRM2
float snrm2(const qml_long *N, const float *X, const qml_long *INCX);

double dnrm2(const qml_long *N, const double *X, const qml_long *INCX);

float scnrm2(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);

double dznrm2(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// ROT
void srot(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY, const float *C, const float *S);

void drot(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY, const double *C, const double *S);

void crot(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY, const float *C, const QML_SINGLE_COMPLEX *S);

void csrot(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY, const float *C, const float *S);

void zrot(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, const double *C, const QML_DOUBLE_COMPLEX *S);

void zdrot(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, const double *C, const double *S);


/// ROTG
void srotg(float *A, float *B, float *C, float *S);

void drotg(double *A, double *B, double *C, double *S);

void crotg(QML_SINGLE_COMPLEX *A, const QML_SINGLE_COMPLEX *B, float *C, QML_SINGLE_COMPLEX *S);

void zrotg(QML_DOUBLE_COMPLEX *A, const QML_DOUBLE_COMPLEX *B, double *C, QML_DOUBLE_COMPLEX *S);

/// ROTM
void srotm(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY, const float *PARAM);

void drotm(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY, const double *PARAM);

/// ROTMG
void srotmg(float *D1, float *D2, float *X1, const float *Y1, float *PARAM);

void drotmg(double *D1, double *D2, double *X1, const double *Y1, double *PARAM);

/// SCAL

void sscal(const qml_long *N, const float *ALPHA, float *X, const qml_long *INCX);

void dscal(const qml_long *N, const double *ALPHA, double *X, const qml_long *INCX);

void cscal(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void zscal(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);

void csscal(const qml_long *N, const float *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void zdscal(const qml_long *N, const double *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// SDOT
float sdsdot(const qml_long *N, const float *B, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);

double dsdot(const qml_long *N, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);



/// SWAP
void sswap(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY);

void dswap(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY);

void cswap(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zswap(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

#ifdef __cplusplus
}
#endif

#endif // QML_BLAS1_H

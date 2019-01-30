



#ifndef QML_CBLAS_COMMON_H
#define QML_CBLAS_COMMON_H

typedef enum CBLAS_ORDER {CblasRowMajor = 101, CblasColMajor = 102} CBLAS_ORDER;
typedef enum CBLAS_TRANSPOSE {CblasNoTrans = 111, CblasTrans = 112, CblasConjTrans = 113} CBLAS_TRANSPOSE;
typedef enum CBLAS_UPLO {CblasUpper = 121, CblasLower = 122} CBLAS_UPLO;
typedef enum CBLAS_DIAG {CblasNonUnit = 131, CblasUnit = 132} CBLAS_DIAG;
typedef enum CBLAS_SIDE {CblasLeft = 141, CblasRight = 142} CBLAS_SIDE;

#endif // QML_CBLAS_COMMON_H



#ifndef QML_INFO_H
#define QML_INFO_H

#include <qml_types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum QML_INFO_TYPE { QML_BLAS_CPU=1, QML_BLAS_CPU_AND_DSP=2 } QML_INFO_TYPE;

struct qml_info
{
    const char *productName;
    const char *vendor;
    qml_int major;
    qml_int minor;
    qml_int mark;
    QML_INFO_TYPE type;
    const char *cpuOptimization;
    const char *cpuArch;
    const char *buildDate;
    qml_int lp64;
};


void QMLVersionString(const char **string);

void QMLVersionInfo(qml_info *info);

qml_int QML_IS_SUPPORTED();

#ifdef __cplusplus
}
#endif

#endif // QML_INFO_H

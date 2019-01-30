


#ifndef QML_RUNTIME_H
#define QML_RUNTIME_H

#include <qml_types.h>

#ifdef __cplusplus
extern "C" {
#endif

qml_int QMLGetNumThreads(void);

void QMLSetNumThreads(qml_int numThreads);

#ifdef __cplusplus
}
#endif

#endif // QML_RUNTIME_H

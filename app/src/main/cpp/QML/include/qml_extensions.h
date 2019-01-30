
#ifndef QML_EXTENSIONS_H
#define QML_EXTENSIONS_H

#include <qml_types.h>

#ifdef __cplusplus
extern "C" {
#endif


void sconv_mm(const bool biased, const float* src, const qml_int srcX, const qml_int srcY,
              const qml_int channels, const float* filters, const qml_int numFilters,
              const qml_int filterX, const qml_int filterY, const qml_int padX, const qml_int padY,
              const qml_int strideX, const qml_int strideY, float* output, const qml_int outputX, const qml_int outputY);


#ifdef __cplusplus
}
#endif

#endif // QML_EXTENSIONS_H


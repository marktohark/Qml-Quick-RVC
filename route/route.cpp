#include "route.h"

QVariantMap Route::post(QString url,QVariantMap data) {
    return m_controllerFunc[url](data);
}

Route::~Route() {
    qDeleteAll(m_controller);
}

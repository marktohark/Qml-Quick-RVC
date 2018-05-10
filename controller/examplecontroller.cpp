#include "examplecontroller.h"

ExampleController::ExampleController(QObject *parent) : QObject(parent)
{

}

QVariantMap ExampleController::exampleFunc(QVariantMap data) {
    qDebug() << "is success";
    return QVariantMap();
}

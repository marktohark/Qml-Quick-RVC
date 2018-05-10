#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "route/route.h"

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);
    Route a;



    QQmlApplicationEngine engine;

    QQmlContext *ctxt = engine.rootContext();
    ctxt->setContextProperty("Route",&a);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

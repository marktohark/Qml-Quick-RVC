#ifndef ROUTE_H
#define ROUTE_H

#include <QObject>
#include <QList>
#include <QDebug>
#include <QVariantMap>
#include <QVariantList>
#include <QVariant>
#include <QHash>
#include <QStringList>
#include <functional>

#define RegisterControllerBegin(Controller) { \
    auto ptr = new Controller(); \
    m_controller[#Controller]; \
    QString controllerName(#Controller);

#define RegisterControllerEnd }

#define RegisterFunction(Func) \
    m_controllerFunc[controllerName + "@"#Func] = [=](QVariantMap data)->QVariantMap { \
    return ptr->Func(data);\
    };\

#define RouteTableBegin Route::Route(QObject *parent) : QObject(parent) {
#define RouteTableEnd }



class Route : public QObject
{
    Q_OBJECT
public:
    explicit Route(QObject *parent = nullptr);
    Q_INVOKABLE QVariantMap post(QString url,QVariantMap data = QVariantMap());
    ~Route();
signals:


public slots:

private:
    QHash<QString,std::function<QVariantMap(QVariantMap)>> m_controllerFunc;
    QHash<QString,QObject*> m_controller;
};

#endif // ROUTE_H

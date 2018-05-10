#ifndef EXAMPLECONTROLLER_H
#define EXAMPLECONTROLLER_H

#include <QObject>
#include <QDebug>

class ExampleController : public QObject
{
    Q_OBJECT
public:
    explicit ExampleController(QObject *parent = nullptr);
    QVariantMap exampleFunc(QVariantMap data);
signals:

public slots:
};

#endif // EXAMPLECONTROLLER_H

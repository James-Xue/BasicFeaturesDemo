// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QGENERICPLUGIN_H
#define QGENERICPLUGIN_H

#include <QtGui/qtguiglobal.h>
#include <QtCore/qplugin.h>
#include <QtCore/qfactoryinterface.h>

QT_BEGIN_NAMESPACE

#define QGenericPluginFactoryInterface_iid "org.qt-project.Qt.QGenericPluginFactoryInterface"

class Q_GUI_EXPORT QGenericPlugin : public QObject
{
    Q_OBJECT
public:
    explicit QGenericPlugin(QObject *parent = nullptr);
    ~QGenericPlugin();

    virtual QObject* create(const QString& name, const QString &spec) = 0;
};

QT_END_NAMESPACE

#endif // QGENERICPLUGIN_H

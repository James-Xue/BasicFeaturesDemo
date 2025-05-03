// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QIOSAPPLICATIONSTATE_H
#define QIOSAPPLICATIONSTATE_H

#include <QtCore/qobject.h>

#include <UIKit/UIApplication.h>

QT_BEGIN_NAMESPACE

class QIOSApplicationState : public QObject
{
    Q_OBJECT
public:
    QIOSApplicationState();

    static void handleApplicationStateChanged(UIApplicationState state, const QString &reason);
    static Qt::ApplicationState toQtApplicationState(UIApplicationState state);

Q_SIGNALS:
    void applicationStateWillChange(Qt::ApplicationState oldState, Qt::ApplicationState newState);
    void applicationStateDidChange(Qt::ApplicationState oldState, Qt::ApplicationState newState);
};

QT_END_NAMESPACE

#endif

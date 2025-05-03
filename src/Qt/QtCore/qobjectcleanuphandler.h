// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QOBJECTCLEANUPHANDLER_H
#define QOBJECTCLEANUPHANDLER_H

#include <QtCore/qobject.h>

QT_BEGIN_NAMESPACE

class Q_CORE_EXPORT QObjectCleanupHandler : public QObject
{
    Q_OBJECT

public:
    QObjectCleanupHandler();
    ~QObjectCleanupHandler();

    QObject *add(QObject *object);
    void remove(QObject *object);
    bool isEmpty() const;
    void clear();

private:
    // ### move into d pointer
    QObjectList cleanupObjects;

private Q_SLOTS:
    void objectDestroyed(QObject *);
};

QT_END_NAMESPACE

#endif // QOBJECTCLEANUPHANDLER_H

// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QABSTRACTNATIVEEVENTFILTER_H
#define QABSTRACTNATIVEEVENTFILTER_H

#include <QtCore/qnamespace.h>

QT_BEGIN_NAMESPACE

class QAbstractNativeEventFilterPrivate;

class Q_CORE_EXPORT QAbstractNativeEventFilter
{
public:
    QAbstractNativeEventFilter();
    virtual ~QAbstractNativeEventFilter();

    virtual bool nativeEventFilter(const QByteArray &eventType, void *message, qintptr *result) = 0;

private:
    Q_DISABLE_COPY(QAbstractNativeEventFilter)
    QAbstractNativeEventFilterPrivate *d;
};

QT_END_NAMESPACE

#endif /* QABSTRACTNATIVEEVENTFILTER_H */

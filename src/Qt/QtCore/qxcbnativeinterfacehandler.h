// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QXCBNATIVEINTERFACEHANDLER_H
#define QXCBNATIVEINTERFACEHANDLER_H

#include <QtCore/QByteArray>
#include <QtGui/qpa/qplatformnativeinterface.h>

#include "qxcbexport.h"

QT_BEGIN_NAMESPACE

class QXcbNativeInterface;
class Q_XCB_EXPORT QXcbNativeInterfaceHandler
{
public:
    QXcbNativeInterfaceHandler(QXcbNativeInterface *nativeInterface);
    virtual ~QXcbNativeInterfaceHandler();

    virtual QPlatformNativeInterface::NativeResourceForIntegrationFunction nativeResourceFunctionForIntegration(const QByteArray &resource) const;
    virtual QPlatformNativeInterface::NativeResourceForContextFunction nativeResourceFunctionForContext(const QByteArray &resource) const;
    virtual QPlatformNativeInterface::NativeResourceForScreenFunction nativeResourceFunctionForScreen(const QByteArray &resource) const;
    virtual QPlatformNativeInterface::NativeResourceForWindowFunction nativeResourceFunctionForWindow(const QByteArray &resource) const;
    virtual QPlatformNativeInterface::NativeResourceForBackingStoreFunction nativeResourceFunctionForBackingStore(const QByteArray &resource) const;

    virtual QFunctionPointer platformFunction(const QByteArray &function) const;
protected:
    QXcbNativeInterface *m_native_interface;
};

QT_END_NAMESPACE

#endif //QXCBNATIVEINTERFACEHANDLER_H

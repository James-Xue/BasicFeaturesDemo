// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QXCBEGLNATIVEINTERFACEHANDLER_H
#define QXCBEGLNATIVEINTERFACEHANDLER_H

#include "qxcbnativeinterfacehandler.h"

QT_BEGIN_NAMESPACE

class QXcbEglNativeInterfaceHandler : public QXcbNativeInterfaceHandler
{
public:
    enum ResourceType {
        EglDisplay,
        EglContext,
        EglConfig
    };

    QXcbEglNativeInterfaceHandler(QXcbNativeInterface *nativeInterface);

    QPlatformNativeInterface::NativeResourceForIntegrationFunction nativeResourceFunctionForIntegration(const QByteArray &resource) const override;
    QPlatformNativeInterface::NativeResourceForContextFunction nativeResourceFunctionForContext(const QByteArray &resource) const override;
    QPlatformNativeInterface::NativeResourceForWindowFunction nativeResourceFunctionForWindow(const QByteArray &resource) const override;
private:
    static void *eglDisplay();
    static void *eglDisplayForWindow(QWindow *window);
    static void *eglContextForContext(QOpenGLContext *context);
    static void *eglConfigForContext(QOpenGLContext *context);
};

QT_END_NAMESPACE

#endif //QXCBEGLNATIVEINTERFACEHANDLER_H

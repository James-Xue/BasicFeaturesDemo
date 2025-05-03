// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QEGLFSBRCMINTEGRATION_H
#define QEGLFSBRCMINTEGRATION_H

#include "private/qeglfsdeviceintegration_p.h"

QT_BEGIN_NAMESPACE

class QEglFSBrcmIntegration : public QEglFSDeviceIntegration
{
public:
    void platformInit() override;
    void platformDestroy() override;
    EGLNativeDisplayType platformDisplay() const override;
    QSize screenSize() const override;
    EGLNativeWindowType createNativeWindow(QPlatformWindow *window, const QSize &size, const QSurfaceFormat &format) override;
    void destroyNativeWindow(EGLNativeWindowType window) override;
    bool hasCapability(QPlatformIntegration::Capability cap) const override;
};

QT_END_NAMESPACE

#endif

// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QWINDOWSDIRECT2DPAINTDEVICE_H
#define QWINDOWSDIRECT2DPAINTDEVICE_H

#include <QtCore/qscopedpointer.h>
#include <QtGui/qpaintdevice.h>
#include "qwindowsdirect2dpaintengine.h"

QT_BEGIN_NAMESPACE

class QWindowsDirect2DBitmap;

class QWindowsDirect2DPaintDevicePrivate;
class QWindowsDirect2DPaintDevice : public QPaintDevice
{
    Q_DECLARE_PRIVATE(QWindowsDirect2DPaintDevice)

public:
    QWindowsDirect2DPaintDevice(QWindowsDirect2DBitmap *bitmap, QInternal::PaintDeviceFlags flags,
                                QWindowsDirect2DPaintEngine::Flags paintFlags = QWindowsDirect2DPaintEngine::NoFlag);
    ~QWindowsDirect2DPaintDevice();

    QPaintEngine *paintEngine() const override;
    int devType() const override;

protected:
    int metric(PaintDeviceMetric metric) const override;

private:
    QScopedPointer<QWindowsDirect2DPaintDevicePrivate> d_ptr;
};

QT_END_NAMESPACE

#endif // QWINDOWSDIRECT2DPAINTDEVICE_H

// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QWINDOWSDIRECT2DBACKINGSTORE_H
#define QWINDOWSDIRECT2DBACKINGSTORE_H

#include <QtGui/qpa/qplatformbackingstore.h>

QT_BEGIN_NAMESPACE

class QWindowsDirect2DWindow;

class QWindowsDirect2DBackingStore : public QPlatformBackingStore
{
    Q_DISABLE_COPY_MOVE(QWindowsDirect2DBackingStore)

public:
    QWindowsDirect2DBackingStore(QWindow *window);
    ~QWindowsDirect2DBackingStore();

    void beginPaint(const QRegion &) override;
    void endPaint() override;

    QPaintDevice *paintDevice() override;
    void flush(QWindow *targetWindow, const QRegion &region, const QPoint &offset) override;
    void resize(const QSize &size, const QRegion &staticContents) override;

    QImage toImage() const override;
};

QT_END_NAMESPACE

#endif // QWINDOWSDIRECT2DBACKINGSTORE_H

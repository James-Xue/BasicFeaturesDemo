// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QWINDOWSURFACE_DIRECTFB_H
#define QWINDOWSURFACE_DIRECTFB_H

#include <qpa/qplatformbackingstore.h>
#include <private/qpixmap_blitter_p.h>

#include <directfb.h>

#include "qdirectfbconvenience.h"

QT_BEGIN_NAMESPACE

class QDirectFbBackingStore : public QPlatformBackingStore
{
public:
    QDirectFbBackingStore(QWindow *window);

    QPaintDevice *paintDevice() override;
    void flush(QWindow *window, const QRegion &region, const QPoint &offset) override;
    void resize (const QSize &size, const QRegion &staticContents) override;
    bool scroll(const QRegion &area, int dx, int dy) override;

    QImage toImage() const override;

private:
    void lockSurfaceToImage();

    QScopedPointer<QPixmap> m_pixmap;
    QBlittablePlatformPixmap *m_pmdata;
    QDirectFBPointer<IDirectFBSurface> m_dfbSurface;
};

QT_END_NAMESPACE

#endif

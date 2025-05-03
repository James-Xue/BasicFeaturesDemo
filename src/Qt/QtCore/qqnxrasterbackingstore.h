// Copyright (C) 2011 - 2012 Research In Motion


#ifndef QQNXRASTERWINDOWSURFACE_H
#define QQNXRASTERWINDOWSURFACE_H

#include <qpa/qplatformbackingstore.h>

#include <screen/screen.h>

QT_BEGIN_NAMESPACE

class QQnxRasterWindow;

class QQnxRasterBackingStore : public QPlatformBackingStore
{
public:
    QQnxRasterBackingStore(QWindow *window);
    ~QQnxRasterBackingStore();

    QPaintDevice *paintDevice() override;
    void flush(QWindow *window, const QRegion &region, const QPoint &offset) override;
    void resize(const QSize &size, const QRegion &staticContents) override;
    bool scroll(const QRegion &area, int dx, int dy) override;
    void beginPaint(const QRegion &region) override;
    void endPaint() override;

private:
    QQnxRasterWindow *platformWindow() const;

    QWindow *m_window;
    bool m_needsPosting;
    bool m_scrolled;
};

QT_END_NAMESPACE

#endif // QQNXRASTERWINDOWSURFACE_H

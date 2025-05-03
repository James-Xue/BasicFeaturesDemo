// Copyright (C) 2018 The Qt Company Ltd.


#ifndef QBACKINGSTORE_X11_H
#define QBACKINGSTORE_X11_H

#include <qpa/qplatformbackingstore.h>

typedef struct _XDisplay Display;

QT_BEGIN_NAMESPACE

class QXcbWindow;

class QXcbNativeBackingStore : public QPlatformBackingStore
{
public:
    QXcbNativeBackingStore(QWindow *window);
    ~QXcbNativeBackingStore();

    QPaintDevice *paintDevice() override;
    void flush(QWindow *window, const QRegion &region, const QPoint &offset) override;

    QImage toImage() const override;

    void resize(const QSize &size, const QRegion &staticContents) override;
    bool scroll(const QRegion &area, int dx, int dy) override;

    void beginPaint(const QRegion &region) override;

private:
    Display *display() const;

    QPixmap m_pixmap;
    bool m_translucentBackground;
};

QT_END_NAMESPACE

#endif // QBACKINGSTORE_X11_H

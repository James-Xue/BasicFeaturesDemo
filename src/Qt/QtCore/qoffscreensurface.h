// Copyright (C) 2020 The Qt Company Ltd.


#ifndef QOFFSCREENSURFACE_H
#define QOFFSCREENSURFACE_H

#include <QtGui/qtguiglobal.h>
#include <QtCore/QObject>
#include <QtCore/qnativeinterface.h>
#include <QtGui/qsurface.h>
Q_MOC_INCLUDE(<QtGui/qscreen.h>)

QT_BEGIN_NAMESPACE

class QOffscreenSurfacePrivate;

class QScreen;
class QPlatformOffscreenSurface;

class Q_GUI_EXPORT QOffscreenSurface : public QObject, public QSurface
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(QOffscreenSurface)

public:
    explicit QOffscreenSurface(QScreen *screen = nullptr, QObject *parent = nullptr);
    ~QOffscreenSurface();

    SurfaceType surfaceType() const override;

    void create();
    void destroy();

    bool isValid() const;

    void setFormat(const QSurfaceFormat &format);
    QSurfaceFormat format() const override;
    QSurfaceFormat requestedFormat() const;

    QSize size() const override;

    QScreen *screen() const;
    void setScreen(QScreen *screen);

    QPlatformOffscreenSurface *handle() const;

    QT_DECLARE_NATIVE_INTERFACE_ACCESSOR(QOffscreenSurface)

Q_SIGNALS:
    void screenChanged(QScreen *screen);

private Q_SLOTS:
    void screenDestroyed(QObject *screen);

private:

    QPlatformSurface *surfaceHandle() const override;

    Q_DISABLE_COPY(QOffscreenSurface)
};

QT_END_NAMESPACE

#include <QtGui/qoffscreensurface_platform.h>

#endif // QOFFSCREENSURFACE_H

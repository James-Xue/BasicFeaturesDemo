// Copyright (C) 2020 The Qt Company Ltd.


#ifndef QDESKTOPSERVICES_H
#define QDESKTOPSERVICES_H

#include <QtGui/qtguiglobal.h>
#include <QtCore/qstring.h>

QT_BEGIN_NAMESPACE


#ifndef QT_NO_DESKTOPSERVICES

class QUrl;
class QObject;

class Q_GUI_EXPORT QDesktopServices
{
public:
    static bool openUrl(const QUrl &url);
    static void setUrlHandler(const QString &scheme, QObject *receiver, const char *method);
    static void unsetUrlHandler(const QString &scheme);
};

#endif // QT_NO_DESKTOPSERVICES

QT_END_NAMESPACE

#endif // QDESKTOPSERVICES_H


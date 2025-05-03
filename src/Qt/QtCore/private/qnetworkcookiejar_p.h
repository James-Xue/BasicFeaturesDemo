// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QNETWORKCOOKIEJAR_P_H
#define QNETWORKCOOKIEJAR_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of the Network Access framework.  This header file may change from
// version to version without notice, or even be removed.
//
// We mean it.
//

#include <QtNetwork/private/qtnetworkglobal_p.h>
#include "private/qobject_p.h"
#include "qnetworkcookie.h"

QT_BEGIN_NAMESPACE

class QNetworkCookieJarPrivate: public QObjectPrivate
{
public:
    QList<QNetworkCookie> allCookies;

    Q_DECLARE_PUBLIC(QNetworkCookieJar)
};

QT_END_NAMESPACE

#endif

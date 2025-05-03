// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QTCPSOCKET_P_H
#define QTCPSOCKET_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API. It exists purely as an
// implementation detail. This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QtNetwork/private/qtnetworkglobal_p.h>
#include <QtNetwork/qtcpsocket.h>
#include <private/qabstractsocket_p.h>

QT_BEGIN_NAMESPACE

class QTcpSocketPrivate : public QAbstractSocketPrivate
{
    Q_DECLARE_PUBLIC(QTcpSocket)
};

QT_END_NAMESPACE

#endif

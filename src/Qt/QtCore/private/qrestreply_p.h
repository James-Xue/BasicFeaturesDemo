// Copyright (C) 2023 The Qt Company Ltd.


#ifndef QRESTREPLY_P_H
#define QRESTREPLY_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of the Network Access API.  This header file may change from
// version to version without notice, or even be removed.
//
// We mean it.
//

#include <QtCore/private/qstringconverter_p.h>

#include <optional>

QT_BEGIN_NAMESPACE

class QByteArray;
class QNetworkReply;

class QRestReplyPrivate
{
public:
    QRestReplyPrivate();
    ~QRestReplyPrivate();

    std::optional<QStringDecoder> decoder;

    static QByteArray contentCharset(const QNetworkReply *reply);
};

QT_END_NAMESPACE

#endif

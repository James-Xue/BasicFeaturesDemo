// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QDATAURL_P_H
#define QDATAURL_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of qDecodeDataUrl. This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QtCore/private/qglobal_p.h>
#include "QtCore/qurl.h"
#include "QtCore/qbytearray.h"
#include "QtCore/qstring.h"

QT_BEGIN_NAMESPACE

Q_CORE_EXPORT bool qDecodeDataUrl(const QUrl &url, QString &mimeType, QByteArray &payload);

QT_END_NAMESPACE

#endif // QDATAURL_P_H

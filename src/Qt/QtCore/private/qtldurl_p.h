// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QTLDURL_P_H
#define QTLDURL_P_H

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

#include <QtNetwork/private/qtnetworkglobal_p.h>
#include "QtCore/qstring.h"

QT_REQUIRE_CONFIG(topleveldomain);

QT_BEGIN_NAMESPACE

Q_NETWORK_EXPORT bool qIsEffectiveTLD(QStringView domain);
inline bool qIsEffectiveTLD(const QString &domain)
{
    return qIsEffectiveTLD(qToStringViewIgnoringNull(domain));
}

QT_END_NAMESPACE

#endif // QTLDURL_P_H

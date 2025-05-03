// Copyright (C) 2022 The Qt Company Ltd.


#ifndef QTESTBLACKLIST_P_H
#define QTESTBLACKLIST_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QtTest/qttestglobal.h>
#include <QtCore/private/qglobal_p.h>

QT_BEGIN_NAMESPACE

namespace QTestPrivate {
    // Export functions so they can also be used by QQuickTest
    Q_TESTLIB_EXPORT void parseBlackList();
    Q_TESTLIB_EXPORT bool checkBlackLists(const char *slot, const char *data,
                                          const char *global = nullptr);
}

QT_END_NAMESPACE

#endif

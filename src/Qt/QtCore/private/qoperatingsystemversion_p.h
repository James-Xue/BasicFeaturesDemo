// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QOPERATINGSYSTEMVERSION_P_H
#define QOPERATINGSYSTEMVERSION_P_H

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

#include "qoperatingsystemversion.h"
#include "private/qglobal_p.h"

#ifdef Q_OS_WIN
#include <qt_windows.h>
#endif

QT_BEGIN_NAMESPACE

#ifdef Q_OS_WIN
OSVERSIONINFOEX qWindowsVersionInfo();
#endif

QT_END_NAMESPACE

#endif // QOPERATINGSYSTEMVERSION_P_H

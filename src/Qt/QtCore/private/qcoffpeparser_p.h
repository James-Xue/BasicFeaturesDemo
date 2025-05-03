// Copyright (C) 2021 Intel Corporation.


// no, this is not a misspelling of "coffeeparser"
#ifndef QCOFFPEPARSER_H
#define QCOFFPEPARSER_H

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

#include "qlibrary_p.h"

#if defined(Q_OS_WIN)

QT_BEGIN_NAMESPACE

struct QCoffPeParser
{
    static QLibraryScanResult parse(QByteArrayView data, QString *errMsg);
};

QT_END_NAMESPACE

#endif // defined(Q_OF_ELF) && defined(Q_CC_GNU)

#endif // QCOFFPEPARSER_H

// Copyright (C) 2018 The Qt Company Ltd.


#ifndef QBENCHMARKMETRIC_P_H
#define QBENCHMARKMETRIC_P_H

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
#include <QtTest/qbenchmarkmetric.h>
#include <QtCore/private/qglobal_p.h>

QT_BEGIN_NAMESPACE


namespace QTest {
    const char * benchmarkMetricName(QBenchmarkMetric metric);
    const char * benchmarkMetricUnit(QBenchmarkMetric metric);
}

QT_END_NAMESPACE

#endif // QBENCHMARK_H

// Copyright (C) 2019 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com, author Marc Mutz <marc.mutz@kdab.com>


#ifndef QEVDEVUTIL_P_H
#define QEVDEVUTIL_P_H

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

#include <QList>
#include <QString>
#include <QStringList>
#include <QStringView>
#include <private/qglobal_p.h>

QT_BEGIN_NAMESPACE

namespace QEvdevUtil {

struct ParsedSpecification
{
    QString spec;
    QStringList devices;
    QList<QStringView> args;
};

ParsedSpecification parseSpecification(const QString &specification);

}

QT_END_NAMESPACE

#endif // QEVDEVUTIL_P_H

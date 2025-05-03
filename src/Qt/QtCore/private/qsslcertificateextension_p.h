// Copyright (C) 2011 Richard J. Moore <rich@kde.org>


#ifndef QSSLCERTIFICATEEXTENSION_P_H
#define QSSLCERTIFICATEEXTENSION_P_H

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

#include <QtNetwork/private/qtnetworkglobal_p.h>
#include "qsslcertificateextension.h"

QT_BEGIN_NAMESPACE

class QSslCertificateExtensionPrivate : public QSharedData
{
public:
    inline QSslCertificateExtensionPrivate()
        : critical(false),
          supported(false)
    {
    }

    QString oid;
    QString name;
    QVariant value;
    bool critical;
    bool supported;
};

QT_END_NAMESPACE

#endif // QSSLCERTIFICATEEXTENSION_P_H


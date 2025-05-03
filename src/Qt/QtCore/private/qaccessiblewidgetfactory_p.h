// Copyright (C) 2016 The Qt Company Ltd.


#include <QtWidgets/private/qtwidgetsglobal_p.h>

#ifndef QACCESSIBLEWIDGETFACTORY_H
#define QACCESSIBLEWIDGETFACTORY_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

QT_BEGIN_NAMESPACE

class QObject;
class QAccessibleInterface;
class QString;

QAccessibleInterface *qAccessibleFactory(const QString &classname, QObject *object);

QT_END_NAMESPACE

#endif

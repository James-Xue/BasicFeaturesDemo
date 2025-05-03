// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QTDBUSGLOBAL_H
#define QTDBUSGLOBAL_H

#include <QtCore/qglobal.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qvariant.h>

#ifndef Q_MOC_RUN
# define Q_NOREPLY
#endif

#ifdef Q_CC_MSVC
#include <QtCore/qlist.h>
#include <QtCore/qset.h>
#endif

#ifndef QT_NO_DBUS
#include <QtDBus/qtdbusexports.h>
#endif // QT_NO_DBUS

#endif

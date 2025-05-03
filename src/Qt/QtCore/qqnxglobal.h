// Copyright (C) 2011 - 2014 BlackBerry Limited. All rights reserved.


#ifndef QQNXGLOBAL_H
#define QQNXGLOBAL_H

#include <qglobal.h>

QT_BEGIN_NAMESPACE

void qScreenCheckError(int rc, const char *funcInfo, const char *message, bool critical);

#define Q_SCREEN_CHECKERROR(x, message) \
qScreenCheckError(x, Q_FUNC_INFO, message, false)

#define Q_SCREEN_CRITICALERROR(x, message) \
qScreenCheckError(x, Q_FUNC_INFO, message, true)

QT_END_NAMESPACE

#endif // QQNXGLOBAL_H

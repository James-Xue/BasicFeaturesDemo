// Copyright (C) 2016 The Qt Company Ltd.


#ifndef Q_C89_QPLATFORMDEFS_H
#define Q_C89_QPLATFORMDEFS_H

// #include <stdio.h>

#define QT_FPOS_T               fpos_t
#define QT_OFF_T                long

#define QT_FOPEN                ::fopen
#define QT_FSEEK                ::fseek
#define QT_FTELL                ::ftell
#define QT_FGETPOS              ::fgetpos
#define QT_FSETPOS              ::fsetpos

#endif // include guard

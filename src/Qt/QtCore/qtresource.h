// Copyright (C) 2022 The Qt Company Ltd.


#ifndef QTRESOURCE_H
    #define QTRESOURCE_H

    #include <QtCore/qtconfigmacros.h>

    #if 0
        #pragma qt_class(QtResource)
        #pragma qt_sync_stop_processing
    #endif

    #define Q_INIT_RESOURCE(name) \
        do { extern int QT_MANGLE_NAMESPACE(qInitResources_ ## name) ();       \
            QT_MANGLE_NAMESPACE(qInitResources_ ## name) (); } while (false)
    #define Q_CLEANUP_RESOURCE(name) \
        do { extern int QT_MANGLE_NAMESPACE(qCleanupResources_ ## name) ();    \
            QT_MANGLE_NAMESPACE(qCleanupResources_ ## name) (); } while (false)

#endif // QTRESOURCE_H

// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QTESTTOUCH_H
#define QTESTTOUCH_H

#if 0
// inform syncqt
#pragma qt_no_master_include
#endif

#include <QtTest/qttestglobal.h>
#include <QtTest/qtestassert.h>
#include <QtTest/qtestsystem.h>
#include <QtTest/qtestspontaneevent.h>
#include <QtCore/qmap.h>
#include <QtGui/qevent.h>
#include <QtGui/qpointingdevice.h>
#include <QtGui/qwindow.h>
#include <QtGui/qpointingdevice.h>
#ifdef QT_WIDGETS_LIB
#include <QtWidgets/qwidget.h>
#include <QtWidgets/qtestsupport_widgets.h>
#else
#include <QtGui/qtestsupport_gui.h>
#endif

QT_BEGIN_NAMESPACE

namespace QTest
{
#if defined(QT_WIDGETS_LIB) || defined(Q_QDOC)
    inline
    QTouchEventWidgetSequence touchEvent(QWidget *widget,
                                   QPointingDevice *device,
                                   bool autoCommit = true)
    {
        return QTouchEventWidgetSequence(widget, device, autoCommit);
    }
#endif
    inline
    QTouchEventSequence touchEvent(QWindow *window,
                                   QPointingDevice *device,
                                   bool autoCommit = true)
    {
        return QTouchEventSequence(window, device, autoCommit);
    }

}

QT_END_NAMESPACE

#endif // QTESTTOUCH_H

// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QXCBGLXWINDOW_H
#define QXCBGLXWINDOW_H

#include "qxcbglxintegration.h"
#include "qxcbwindow.h"

QT_BEGIN_NAMESPACE

class QXcbGlxWindow : public QXcbWindow
{
public:
    QXcbGlxWindow(QWindow *window);
    ~QXcbGlxWindow();

protected:
    const xcb_visualtype_t *createVisual() override;
};

QT_END_NAMESPACE

#endif //QXCBGLXWINDOW_H

// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QFOCUSFRAME_H
#define QFOCUSFRAME_H

#include <QtWidgets/qtwidgetsglobal.h>
#include <QtWidgets/qwidget.h>

QT_BEGIN_NAMESPACE


class QFocusFramePrivate;
class QStyleOption;

class Q_WIDGETS_EXPORT QFocusFrame : public QWidget
{
    Q_OBJECT
public:
    QFocusFrame(QWidget *parent = nullptr);
    ~QFocusFrame();

    void setWidget(QWidget *widget);
    QWidget *widget() const;

protected:
    bool event(QEvent *e) override;

    bool eventFilter(QObject *, QEvent *) override;
    void paintEvent(QPaintEvent *) override;
    virtual void initStyleOption(QStyleOption *option) const;

private:
    Q_DECLARE_PRIVATE(QFocusFrame)
    Q_DISABLE_COPY(QFocusFrame)
};

QT_END_NAMESPACE

#endif // QFOCUSFRAME_H

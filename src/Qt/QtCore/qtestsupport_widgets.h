// Copyright (C) 2018 The Qt Company Ltd.


#ifndef QTESTSUPPORT_WIDGETS_H
#define QTESTSUPPORT_WIDGETS_H

#include <QtWidgets/qtwidgetsglobal.h>
#include <QtGui/qtestsupport_gui.h>

QT_BEGIN_NAMESPACE

class QPointingDevice;
class QWidget;

namespace QTest {

[[nodiscard]] Q_WIDGETS_EXPORT bool qWaitForWindowActive(QWidget *widget, int timeout = 5000);
[[nodiscard]] Q_WIDGETS_EXPORT bool qWaitForWindowFocused(QWidget *widget, QDeadlineTimer timeout = std::chrono::seconds{5});
[[nodiscard]] Q_WIDGETS_EXPORT bool qWaitForWindowExposed(QWidget *widget, int timeout = 5000);

class Q_WIDGETS_EXPORT QTouchEventWidgetSequence : public QTouchEventSequence
{
public:
    ~QTouchEventWidgetSequence() override;
    QTouchEventWidgetSequence& press(int touchId, const QPoint &pt, QWidget *widget = nullptr);
    QTouchEventWidgetSequence& move(int touchId, const QPoint &pt, QWidget *widget = nullptr);
    QTouchEventWidgetSequence& release(int touchId, const QPoint &pt, QWidget *widget = nullptr);
    QTouchEventWidgetSequence& stationary(int touchId) override;

    bool commit(bool processEvents = true) override;

private:
    QTouchEventWidgetSequence(QWidget *widget, QPointingDevice *aDevice, bool autoCommit);

    QPoint mapToScreen(QWidget *widget, const QPoint &pt);

    QWidget *targetWidget = nullptr;

    friend QTouchEventWidgetSequence touchEvent(QWidget *widget, QPointingDevice *device, bool autoCommit);
};

} // namespace QTest

QT_END_NAMESPACE

#endif

// Copyright (C) 2011 - 2012 Research In Motion


#ifndef QQNXINPUTCONTEXT_H
#define QQNXINPUTCONTEXT_H

#include <QtCore/QLocale>
#include <qpa/qplatforminputcontext.h>
#include <qpa/qplatformintegration.h>

QT_BEGIN_NAMESPACE

class QQnxAbstractVirtualKeyboard;
class QQnxIntegration;

class QQnxInputContext : public QPlatformInputContext
{
    Q_OBJECT
public:
    explicit QQnxInputContext(QQnxIntegration *integration, QQnxAbstractVirtualKeyboard &keyboard);
    ~QQnxInputContext();

    bool isValid() const override;

    void reset() override;
    bool filterEvent(const QEvent *event) override;
    QRectF keyboardRect() const override;
    bool handleKeyboardEvent(int flags, int sym, int mod, int scan, int cap);

    void showInputPanel() override;
    void hideInputPanel() override;
    bool isInputPanelVisible() const override;

    QLocale locale() const override;
    void setFocusObject(QObject *object) override;

private Q_SLOTS:
    void keyboardHeightChanged();
    void keyboardVisibilityChanged(bool visible);
    void keyboardLocaleChanged(const QLocale &locale);

private:
    bool hasPhysicalKeyboard();

    bool m_inputPanelVisible;
    QLocale m_inputPanelLocale;
    QQnxIntegration *m_integration;
    QQnxAbstractVirtualKeyboard &m_virtualKeyboard;
};

QT_END_NAMESPACE

#endif // QQNXINPUTCONTEXT_H

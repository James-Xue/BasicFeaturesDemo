// Copyright (C) 2022 The Qt Company Ltd.


#ifndef QIOSFONTDIALOG_H
#define QIOSFONTDIALOG_H

#include <QtCore/qeventloop.h>
#include <qpa/qplatformdialoghelper.h>

@interface QIOSFontDialogController : UIFontPickerViewController <UIFontPickerViewControllerDelegate,
                                                                    UIAdaptivePresentationControllerDelegate>
@end

QT_BEGIN_NAMESPACE

class QIOSFontDialog : public QPlatformFontDialogHelper
{
public:
    QIOSFontDialog();
    ~QIOSFontDialog();

    void exec() override;

    bool show(Qt::WindowFlags windowFlags, Qt::WindowModality windowModality, QWindow *parent) override;
    void hide() override;

    void setCurrentFont(const QFont &) override;
    QFont currentFont() const override;

    void updateCurrentFont(const QFont &);

private:
    QEventLoop m_eventLoop;
    QIOSFontDialogController *m_viewController;
    QFont m_currentFont;

};

QT_END_NAMESPACE

#endif // QIOSFONTDIALOG_H

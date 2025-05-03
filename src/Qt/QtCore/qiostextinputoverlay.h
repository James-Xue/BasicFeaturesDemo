// Copyright (C) 2017 The Qt Company Ltd.


#ifndef QIOSTEXTEDITOVERLAY_H
#define QIOSTEXTEDITOVERLAY_H

#include <QtCore/QObject>

Q_FORWARD_DECLARE_OBJC_CLASS(QIOSEditMenu);
Q_FORWARD_DECLARE_OBJC_CLASS(QIOSCursorRecognizer);
Q_FORWARD_DECLARE_OBJC_CLASS(QIOSSelectionRecognizer);
Q_FORWARD_DECLARE_OBJC_CLASS(QIOSTapRecognizer);

QT_BEGIN_NAMESPACE

class QIOSTextInputOverlay : public QObject
{
public:
    QIOSTextInputOverlay();
    ~QIOSTextInputOverlay();

    static QIOSEditMenu *s_editMenu;

private:
    QIOSCursorRecognizer *m_cursorRecognizer;
    QIOSSelectionRecognizer *m_selectionRecognizer;
    QIOSTapRecognizer *m_openMenuOnTapRecognizer;

    void updateFocusObject();
};

QT_END_NAMESPACE

#endif

// Copyright (C) 2016 The Qt Company Ltd.


#ifndef QIOSSERVICES_H
#define QIOSSERVICES_H

#include <qurl.h>
#include <qpa/qplatformservices.h>

QT_BEGIN_NAMESPACE

class QIOSServices : public QPlatformServices
{
public:
    bool openUrl(const QUrl &url);
    bool openDocument(const QUrl &url);

    bool handleUrl(const QUrl &url);

private:
    QUrl m_handlingUrl;
};

QT_END_NAMESPACE

#endif // QIOSSERVICES_H

// Copyright (C) 2016 The Qt Company Ltd.

#ifndef QTICOHANDLER_H
#define QTICOHANDLER_H

#include <QtGui/QImageIOHandler>

QT_BEGIN_NAMESPACE

class ICOReader;
class QtIcoHandler: public QImageIOHandler
{
public:
    QtIcoHandler(QIODevice *device);
    virtual ~QtIcoHandler();

    bool canRead() const override;
    bool read(QImage *image) override;
    bool write(const QImage &image) override;

    int imageCount() const override;
    bool jumpToImage(int imageNumber) override;
    bool jumpToNextImage() override;

    static bool canRead(QIODevice *device);

    bool supportsOption(ImageOption option) const override;
    QVariant option(ImageOption option) const override;

private:
    int m_currentIconIndex;
    ICOReader *m_pICOReader;
    mutable bool knownCanRead = false;
};

QT_END_NAMESPACE

#endif /* QTICOHANDLER_H */


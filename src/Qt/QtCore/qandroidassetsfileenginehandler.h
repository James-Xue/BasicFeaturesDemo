// Copyright (C) 2012 BogDan Vatra <bogdan@kde.org>


#ifndef QANDROIDASSETSFILEENGINEHANDLER_H
#define QANDROIDASSETSFILEENGINEHANDLER_H

#include <QtCore/private/qabstractfileengine_p.h>
#include <QCache>
#include <QMutex>
#include <QSharedPointer>

#include <android/asset_manager.h>

QT_BEGIN_NAMESPACE

class AndroidAssetsFileEngineHandler: public QAbstractFileEngineHandler
{
    Q_DISABLE_COPY_MOVE(AndroidAssetsFileEngineHandler)
public:
    AndroidAssetsFileEngineHandler();
    std::unique_ptr<QAbstractFileEngine> create(const QString &fileName) const override;

private:
    AAssetManager *m_assetManager;
};

QT_END_NAMESPACE

#endif // QANDROIDASSETSFILEENGINEHANDLER_H

// Copyright (C) 2017 The Qt Company Ltd.


#ifndef QANDROIDPLATFORMVULKANINSTANCE_H
#define QANDROIDPLATFORMVULKANINSTANCE_H

#include <QtGui/private/qbasicvulkanplatforminstance_p.h>
#include <QLibrary>

QT_BEGIN_NAMESPACE

class QAndroidPlatformVulkanInstance : public QBasicPlatformVulkanInstance
{
public:
    QAndroidPlatformVulkanInstance(QVulkanInstance *instance);
    ~QAndroidPlatformVulkanInstance();

    void createOrAdoptInstance() override;

private:
    QVulkanInstance *m_instance;
    QLibrary m_lib;
};

QT_END_NAMESPACE

#endif // QANDROIDPLATFORMVULKANINSTANCE_H

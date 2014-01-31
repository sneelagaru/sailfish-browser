/****************************************************************************
**
** Copyright (C) 2013 Jolla Ltd.
** Contact: Dmitry Rozhkov <dmitry.rozhkov@jollamobile.com>
**
****************************************************************************/

/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef SETTINGMANAGER_H
#define SETTINGMANAGER_H

#include <MGConfItem>

class SettingManager : public QObject
{
    Q_OBJECT

public:
    explicit SettingManager(QObject *parent = 0);

public slots:
    void initialize();

private slots:
    void clearPrivateData();
    void setSearchEngine();

private:
    MGConfItem *m_clearPrivateDataConfItem;
    MGConfItem *m_searchEngineConfItem;
};

#endif

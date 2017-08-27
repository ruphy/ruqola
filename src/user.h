/*
   Copyright (c) 2017 Montel Laurent <montel@kde.org>

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU Library General Public License as published
   by the Free Software Foundation; either version 2 of the License or
   ( at your option ) version 3 or, at the discretion of KDE e.V.
   ( which shall act as a proxy as in section 14 of the GPLv3 ), any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
*/

#ifndef USER_H
#define USER_H

#include <QString>
#include <QObject>
#include <QDebug>
#include "libruqola_private_export.h"
class LIBRUQOLACORE_TESTS_EXPORT User
{
    Q_GADGET
public:

    enum class PresenceStatus {
        PresenceOnline,
        PresenceBusy,
        PresenceAway,
        PresenceOffline
    };
    Q_ENUM(PresenceStatus)

    User();

    QString name() const;
    void setName(const QString &name);

    QString userId() const;
    void setUserId(const QString &userId);

    QString status() const;
    void setStatus(const QString &status);
    bool operator ==(const User &other) const;

    QStringList listRooms() const;
    void setListRooms(const QStringList &listRooms);
private:
    QString mStatus;
    QString mUserId;
    QString mName;
    QStringList mListRooms;
};

LIBRUQOLACORE_EXPORT QDebug operator <<(QDebug d, const User &t);


#endif // USER_H

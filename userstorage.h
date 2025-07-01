#ifndef USERSTORAGE_H
#define USERSTORAGE_H
#include <QString>
#include <QStringList>

class UserStorage
{
public:
    static bool saveUser(const QString& name, const QString& lastname,
                         const QString& phone, const QString& email,
                         const QString& username, const QString& password,
                         const QString& filename = "users.txt");

    static bool loginUser(const QString& username, const QString& password);

    static bool phoneExists(const QString& phone);

    static bool loadUserProfile(const QString& username, QStringList& profileFields);
    static bool updateUserProfile(const QString& username, const QStringList& newFields);

    static QString findUsernameByPhone(const QString& phone);

};

#endif // USERSTORAGE_H

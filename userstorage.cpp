#include "userstorage.h"

#include <QFile>
#include <QTextStream>
#include <QCryptographicHash>

QString hashPassword(const QString& password) {
    QByteArray hashed = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return QString(hashed.toHex());
}

bool UserStorage::saveUser(const QString& name, const QString& lastname,
                           const QString& phone, const QString& email,
                           const QString& username, const QString& password,
                           const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        return false;
    }

    QTextStream out(&file);
    out << username << "|" << hashPassword(password) << "|" << name << "|"
        << lastname << "|" << phone << "|" << email << "\n";

    file.close();
    return true;
}

bool UserStorage::loginUser(const QString& username, const QString& password) {
    QFile file("users.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }

    QTextStream in(&file);
    QString hashedInputPassword = hashPassword(password);

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList parts = line.split('|');

        if (parts.size() < 6) continue;

        QString fileUsername = parts[0];
        QString fileHashedPassword = parts[1];

        if (fileUsername == username && fileHashedPassword == hashedInputPassword) {
            return true;
        }
    }

    return false;
}

bool UserStorage::phoneExists(const QString& phone) {
    QFile file("users.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList parts = line.split('|');

        if (parts.size() < 6) continue;

        QString filePhone = parts[4];

        if (filePhone == phone) {
            return true;
        }
    }

    return false;
}

bool UserStorage::loadUserProfile(const QString& username, QStringList& profileFields) {
    QFile file("users.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList parts = line.split('|');

        if (parts.size() < 6) continue;

        if (parts[0] == username) {
            profileFields = parts;
            return true;
        }
    }

    return false;
}

bool UserStorage::updateUserProfile(const QString& username, const QStringList& newFields) {
    QFile file("users.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QStringList lines;
    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList parts = line.split('|');
        if (parts.size() < 6) continue;

        if (parts[0] == username) {
            lines << newFields.join("|");
        } else {
            lines << line;
        }
    }

    file.close();

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate))
        return false;

    QTextStream out(&file);
    for (const QString& line : lines)
        out << line << "\n";

    return true;
}

QString UserStorage::findUsernameByPhone(const QString& phone) {
    QFile file("users.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return "";

    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList parts = line.split('|');
        if (parts.size() < 6) continue;

        if (parts[4] == phone) {
            return parts[0]; // username
        }
    }

    return "";
}



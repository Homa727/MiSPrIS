#include "database.h"

Database::Database(QObject *parent) : QObject(parent)
{
    //dbPath = QDir::currentPath() + "/tourism_firm.db";
    db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setDatabaseName(dbPath);
}

Database::~Database()
{
    if (db.isOpen()) {
        db.close();
    }
}

bool Database::connectToDatabase()
{
    if (!db.open()) {

        qDebug() << "Ошибка подключения к БД:" << db.lastError().text();
            return false;
    }
    qDebug() << "База данных подключена:" << dbPath;
    return true;
}

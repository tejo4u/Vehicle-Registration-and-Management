#ifndef DATABASE_CONNECTION_H
#define DATABASE_CONNECTION_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDir>
#include <QString>

class ConnectDatabase
{
public:

    QSqlDatabase VehicleDB = QSqlDatabase::addDatabase("QSQLITE");
    bool connectionStatus;

    QString databasePath = QDir::currentPath() + "/Database/Vehicle_Reg.db"; // Database path

   void openConnection(){
        VehicleDB.setDatabaseName(databasePath);
        connectionStatus= VehicleDB.open();
    }

     void closeConnection(){
        VehicleDB.close();
     }

     std::string checkConnection(){
        if(connectionStatus){
            return "connected!";
        }
        else{
            return "not connected!";
        }
    }
};
#endif // DATABASE_CONNECTION_H

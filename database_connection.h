#ifndef DATABASE_CONNECTION_H
#define DATABASE_CONNECTION_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDir>
#include <QString>
#include <iostream>

class ConnectDatabase
{
private:

    QSqlDatabase VehicleDB; bool connectionStatus; QString databasePath="";

 public:
    ConnectDatabase(){

        VehicleDB = QSqlDatabase::addDatabase("QSQLITE");
        databasePath = QDir::currentPath() + "/Database/Vehicle_Reg.db";
    }

   void openConnection(){
        VehicleDB.setDatabaseName(databasePath);
        connectionStatus= VehicleDB.open();
    }

   void closeConnection(){
        VehicleDB.close();
     }

     std::string checkConnection(){

        if(connectionStatus){

            return "Database Connected!";
        }
        else{

            return "Databse not connected!";
        }
    }
};
#endif // DATABASE_CONNECTION_H

#ifndef LOGIN_VERIFICATION_H
#define LOGIN_VERIFICATION_H

#include <QMessageBox>
#include <QDebug>
#include <iostream>
#include <database_connection.h>
#include "password_hasher.h"

class VerifyLogin
{

private:

    QVariant userName,passwordHash,userDesig;
    bool isEntryExist;

public:
    VerifyLogin() {

    }

    void getUserPass(QVariant uName,QVariant uPassHash,QVariant uDesig){
        userName = uName;
        passwordHash = uPassHash;
        userDesig = uDesig;
    }

    bool userLoginCheck(){
        QSqlQuery existingUserQuery;

        existingUserQuery.prepare("SELECT * FROM user_login where user_name = :userName;");
        existingUserQuery.bindValue(":userName",userName);

        isEntryExist = existingUserQuery.exec(); // Returns True if Entry Exist

        if(isEntryExist ==  false){
            return false;
    }
        else{
               std::string userdbName,userdbsalt,userdbDesig;

                while(existingUserQuery.next()){
                 userdbName = existingUserQuery.value(0).toString().toStdString();
                 userdbsalt = existingUserQuery.value(1).toString().toStdString();
                 userdbDesig = existingUserQuery.value(2).toString().toStdString();
                }

                if(userName.toString().toStdString() == userdbName && comapreHashPass(userdbsalt,passwordHash.toString().toStdString()) && userDesig.toString().toStdString() == userdbDesig){
                    return true;
                }
                else{
                    return false;
                }
            }
           existingUserQuery.clear();
        }


};

#endif // LOGIN_VERIFICATION_H

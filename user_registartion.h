#ifndef USER_REGISTARTION_H
#define USER_REGISTARTION_H

#include<QSql>
#include <QDialog>
#include <QSqlQuery>
#include <QString>
#include <QVariant>
#include <string>
#include "password_hasher.h"

namespace Ui {
class user_registartion;
}

class user_registartion : public QDialog
{
    Q_OBJECT

public:
    explicit user_registartion(QWidget *parent = 0);
    ~user_registartion();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::user_registartion *ui;
};


class NewRegistration
{

private:

    QVariant userName,passSalt,userDesig,hashedPass;
    std::string userdbName;
    QSqlQuery newUserQuery;

public:

    NewRegistration(QVariant uname, QVariant upass, QVariant udesig) {
     userName = uname;
     passSalt = upass;
     userDesig = udesig;
    }

    bool registerNewUser(){

    newUserQuery.prepare("SELECT user_name FROM user_login where user_name = :userName;");
    newUserQuery.bindValue(":userName",userName);
    newUserQuery.exec();

    while(newUserQuery.next()){
     userdbName = newUserQuery.value(0).toString().toStdString();
    }

    if(userdbName == userName.toString().toStdString()){
       newUserQuery.clear();
        return false;
    }

    else{

    hashedPass.setValue(QString::fromStdString(returnHash(passSalt.toString().toStdString().c_str())));
    newUserQuery.prepare("INSERT INTO user_login (user_name, hash_pass, user_desig)"
                         "VALUES (:usern, :userph, :userdes);");
    newUserQuery.bindValue(":usern",userName);
    newUserQuery.bindValue(":userph",hashedPass);
    newUserQuery.bindValue(":userdes",userDesig);

    newUserQuery.exec();
    newUserQuery.clear();
    return true;

    }

    }

};

#endif // USER_REGISTARTION_H

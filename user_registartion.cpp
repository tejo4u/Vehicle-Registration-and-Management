#include "user_registartion.h"
#include "ui_user_registartion.h"
#include "database_connection.h"
#include <QMessageBox>
#include <iostream>

user_registartion::user_registartion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_registartion)
{
    ui->setupUi(this);

    // Combobox Opitons
    QStringList designationList=(QStringList()<<"Administrator"<<"Data Operator");
    ui->comboBox->addItems(designationList);

}

user_registartion::~user_registartion()
{
    delete ui;
}

void user_registartion::on_pushButton_clicked()
{
    // Open database connection

    ConnectDatabase regConnection;
    regConnection.openConnection();

    if(ui->lineEdit->text()!= "" || ui->lineEdit_2->text() != "" || ui->comboBox->itemData(ui->comboBox->currentIndex()).toString() != ""){
         NewRegistration newEntry;
         newEntry.getUserPassDesig(ui->lineEdit->text(),ui->lineEdit_2->text(),ui->comboBox->currentText());
         newEntry.registerNewUser();
}
    else {
        QMessageBox::about(this,"Input Error!","Please Enter all the Details to continue");
    }
    regConnection.closeConnection();

}

#include "login_page.h"
#include "ui_login_page.h"
#include <database_connection.h>
#include "login_verification.h"
#include <QMessageBox>

Login_page::Login_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login_page)
{
    ui->setupUi(this);
    // Combobox Opitons
    QStringList designationList=(QStringList()<<"Administrator"<<"Data Operator");
    ui->comboBox->addItems(designationList);

}

Login_page::~Login_page()
{
    delete ui;
}

void Login_page::on_pushButton_clicked()
{
    // Open database connection

    ConnectDatabase regConnection;
    regConnection.openConnection();

    if(ui->lineEdit->text() != "" && ui->lineEdit_2->text() != "" && ui->comboBox->currentText() != ""){
        VerifyLogin newLogin;
        newLogin.getUserPass(ui->lineEdit->text(),ui->lineEdit_2->text(),ui->comboBox->currentText());

        bool result = newLogin.userLoginCheck();

        if(result){
            QMessageBox::about(this,"Login Successful!","Redirecting! Please wait...");
        }
        else{
            QMessageBox::about(this,"Wrong Input Error!","Entry Does not exist! Please create a new account.");
        }
    }
    else{
        QMessageBox::about(this,"Wrong Input Error!","Please Enter Username,Password and Designation");
    }
    regConnection.closeConnection();
}

void Login_page::on_pushButton_4_clicked()
{
    user_reg_form.show();
}

void Login_page::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
}

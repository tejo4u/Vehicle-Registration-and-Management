#include "login_page.h"
#include "ui_login_page.h"
#include <database_connection.h>
#include <iostream>

Login_page::Login_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login_page)
{
    ui->setupUi(this);

}

Login_page::~Login_page()
{
    delete ui;
}

void Login_page::on_pushButton_clicked()
{

}

void Login_page::on_pushButton_4_clicked()
{
    user_reg_form.show();
}

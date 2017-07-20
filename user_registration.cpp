#include "user_registration.h"
#include "ui_user_registration.h"
#include "databaseconnection.h"

user_registartion::user_registartion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_registartion)
{
    ui->setupUi(this);


}

user_registartion::~user_registartion()
{
    delete ui;
}

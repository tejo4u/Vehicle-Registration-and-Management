#include "login_page.h"
#include "ui_login_page.h"

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

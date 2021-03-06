#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

#include <QMainWindow>
#include "user_registartion.h"
#include "admin_dashboard.h"

namespace Ui {
class Login_page;
}

class Login_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login_page(QWidget *parent = 0);
    ~Login_page();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Login_page *ui;
    user_registartion user_reg_form;
    admin_dashboard admin_dash_form;
};


#endif // LOGIN_PAGE_H

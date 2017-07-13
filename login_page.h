#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

#include <QMainWindow>

namespace Ui {
class Login_page;
}

class Login_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login_page(QWidget *parent = 0);
    ~Login_page();

private:
    Ui::Login_page *ui;
};

#endif // LOGIN_PAGE_H

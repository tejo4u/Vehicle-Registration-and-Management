#include "login_page.h"
#include <QApplication>
#include "database_connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login_page w;
    w.show();
    return a.exec();
}

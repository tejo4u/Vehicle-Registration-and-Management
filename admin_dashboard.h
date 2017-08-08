#ifndef ADMIN_DASHBOARD_H
#define ADMIN_DASHBOARD_H

#include <QMainWindow>

namespace Ui {
class admin_dashboard;
}

class admin_dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin_dashboard(QWidget *parent = 0);
    ~admin_dashboard();

private:
    Ui::admin_dashboard *ui;
};

#endif // ADMIN_DASHBOARD_H

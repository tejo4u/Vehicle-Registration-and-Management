/********************************************************************************
** Form generated from reading UI file 'login_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_PAGE_H
#define UI_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_page
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QComboBox *comboBox;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QMainWindow *Login_page)
    {
        if (Login_page->objectName().isEmpty())
            Login_page->setObjectName(QStringLiteral("Login_page"));
        Login_page->resize(557, 403);
        centralWidget = new QWidget(Login_page);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 581, 91));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 100, 101, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 160, 101, 41));
        pushButton_2->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 101, 41));
        label_2->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 160, 81, 41));
        label_3->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 300, 171, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Sans"));
        font2.setPointSize(11);
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 340, 121, 41));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(160, 230, 211, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 230, 91, 31));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(410, 340, 111, 41));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 110, 211, 31));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 170, 211, 31));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        Login_page->setCentralWidget(centralWidget);

        retranslateUi(Login_page);

        QMetaObject::connectSlotsByName(Login_page);
    } // setupUi

    void retranslateUi(QMainWindow *Login_page)
    {
        Login_page->setWindowTitle(QApplication::translate("Login_page", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("Login_page", "Vehicle Registration and Management Login", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Login_page", "Login", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Login_page", "Clear", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login_page", "Username", Q_NULLPTR));
        label_3->setText(QApplication::translate("Login_page", "Password", Q_NULLPTR));
        label_4->setText(QApplication::translate("Login_page", "Check Licence Status", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Login_page", "Get Status", Q_NULLPTR));
        label_5->setText(QApplication::translate("Login_page", "Designation", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Login_page", "Register", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login_page: public Ui_Login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_PAGE_H

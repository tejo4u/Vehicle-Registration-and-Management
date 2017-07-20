/********************************************************************************
** Form generated from reading UI file 'user_registartion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_REGISTARTION_H
#define UI_USER_REGISTARTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_user_registartion
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;

    void setupUi(QDialog *user_registartion)
    {
        if (user_registartion->objectName().isEmpty())
            user_registartion->setObjectName(QStringLiteral("user_registartion"));
        user_registartion->resize(534, 345);
        label = new QLabel(user_registartion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 20, 171, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(user_registartion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 100, 101, 16));
        label_2->setFont(font);
        label_3 = new QLabel(user_registartion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 160, 101, 16));
        label_3->setFont(font);
        label_5 = new QLabel(user_registartion);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 210, 121, 31));
        label_5->setFont(font);
        pushButton = new QPushButton(user_registartion);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 270, 111, 41));
        lineEdit = new QLineEdit(user_registartion);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 90, 191, 31));
        lineEdit_2 = new QLineEdit(user_registartion);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 150, 191, 31));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        comboBox = new QComboBox(user_registartion);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(200, 210, 191, 31));

        retranslateUi(user_registartion);

        QMetaObject::connectSlotsByName(user_registartion);
    } // setupUi

    void retranslateUi(QDialog *user_registartion)
    {
        user_registartion->setWindowTitle(QApplication::translate("user_registartion", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("user_registartion", "User Registration", Q_NULLPTR));
        label_2->setText(QApplication::translate("user_registartion", "Username", Q_NULLPTR));
        label_3->setText(QApplication::translate("user_registartion", "Password", Q_NULLPTR));
        label_5->setText(QApplication::translate("user_registartion", "Designation", Q_NULLPTR));
        pushButton->setText(QApplication::translate("user_registartion", "Register", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class user_registartion: public Ui_user_registartion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_REGISTARTION_H

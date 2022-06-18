/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *loginBtn;
    QPushButton *exit;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(777, 588);
        loginBtn = new QPushButton(login);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(120, 460, 93, 28));
        exit = new QPushButton(login);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(460, 470, 93, 28));
        lineEdit_name = new QLineEdit(login);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(290, 110, 113, 21));
        lineEdit_password = new QLineEdit(login);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(300, 170, 113, 21));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        loginBtn->setText(QCoreApplication::translate("login", "\347\231\273\351\231\206", nullptr));
        exit->setText(QCoreApplication::translate("login", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

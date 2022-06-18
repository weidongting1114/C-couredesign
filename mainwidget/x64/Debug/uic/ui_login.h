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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *exit;
    QPushButton *loginBtn;
    QLabel *label_4;
    QLabel *label_3;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLineEdit *lineEdit_password;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(1200, 600);
        login->setMinimumSize(QSize(0, 0));
        login->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        login->setWindowIcon(icon);
        login->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color:rgb(255, 255, 255);\n"
"}"));
        exit = new QPushButton(login);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(1040, 430, 91, 41));
        exit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"background-color:rgb(170, 255, 127);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:rgb(85, 255, 0);\n"
"}\n"
"/*\346\214\211\351\222\256\346\214\211\344\270\213\346\200\201*/\n"
"QPushButton:pressed\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:rgb(14 , 135 , 228);\n"
"    /*\345\267\246\345\206\205\350\276\271\350\267\235\344\270\2723\345\203\217\347\264\240\357\274\214\350\256\251\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\345\217\263\347\247\273\345\212\2503\345\203\217\347\264\240*/  \n"
"    padding-left:3px;\n"
"    /*\344\270\212\345\206\205\350\276\271\350\267\235\344\270\2723\345\203\217\347\264\240\357\274\214\350\256\251\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\344\270\213\347\247\273\345\212\2503\345\203\217\347\264\240*/  \n"
"    padding-top:3px;\n"
"}\n"
""));
        exit->setIconSize(QSize(376, 25));
        loginBtn = new QPushButton(login);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(920, 430, 91, 41));
        loginBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"background-color:rgb(116, 200, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:rgb(0, 170, 255);\n"
"}\n"
"/*\346\214\211\351\222\256\346\214\211\344\270\213\346\200\201*/\n"
"QPushButton:pressed\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:rgb(14 , 135 , 228);\n"
"    /*\345\267\246\345\206\205\350\276\271\350\267\235\344\270\2723\345\203\217\347\264\240\357\274\214\350\256\251\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\345\217\263\347\247\273\345\212\2503\345\203\217\347\264\240*/  \n"
"    padding-left:3px;\n"
"    /*\344\270\212\345\206\205\350\276\271\350\267\235\344\270\2723\345\203\217\347\264\240\357\274\214\350\256\251\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\344\270\213\347\247\273\345\212\2503\345\203\217\347\264\240*/  \n"
"    padding-top:3px;\n"
"}\n"
"\n"
""));
        loginBtn->setIconSize(QSize(376, 50));
        label_4 = new QLabel(login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(910, 90, 221, 201));
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border-image:url(:/images/swjtu.jpg);\n"
"}"));
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 891, 661));
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border-image:url(:/images/loginbackground.png);\n"
"}"));
        splitter = new QSplitter(login);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(900, 320, 241, 31));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgb(85, 255, 255);\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        splitter->addWidget(label);
        lineEdit_name = new QLineEdit(splitter);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        splitter->addWidget(lineEdit_name);
        splitter_2 = new QSplitter(login);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(900, 370, 241, 31));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::RightToLeft);
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgb(85, 255, 255);\n"
"}"));
        splitter_2->addWidget(label_2);
        lineEdit_password = new QLineEdit(splitter_2);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        splitter_2->addWidget(lineEdit_password);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "\350\245\277\345\215\227\344\272\244\345\244\247\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        exit->setText(QCoreApplication::translate("login", "\351\200\200\345\207\272", nullptr));
        loginBtn->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("login", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("login", "\345\267\245\345\217\267", nullptr));
        lineEdit_name->setText(QString());
        label_2->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

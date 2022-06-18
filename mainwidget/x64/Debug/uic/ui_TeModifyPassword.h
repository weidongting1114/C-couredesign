/********************************************************************************
** Form generated from reading UI file 'TeModifyPassword.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMODIFYPASSWORD_H
#define UI_TEMODIFYPASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeModifyPassword
{
public:
    QPushButton *Login;
    QPushButton *Exit;
    QLabel *label;
    QLineEdit *OldPassword;

    void setupUi(QWidget *TeModifyPassword)
    {
        if (TeModifyPassword->objectName().isEmpty())
            TeModifyPassword->setObjectName(QString::fromUtf8("TeModifyPassword"));
        TeModifyPassword->resize(322, 175);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TeModifyPassword->sizePolicy().hasHeightForWidth());
        TeModifyPassword->setSizePolicy(sizePolicy);
        TeModifyPassword->setMinimumSize(QSize(322, 175));
        TeModifyPassword->setMaximumSize(QSize(322, 175));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TeModifyPassword->setWindowIcon(icon);
        Login = new QPushButton(TeModifyPassword);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setGeometry(QRect(40, 100, 101, 31));
        Login->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"background-color:rgb(159, 159, 159);\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"color:black;\n"
"background-color:rgb(255, 255, 255);\n"
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
        Exit = new QPushButton(TeModifyPassword);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(180, 100, 101, 31));
        Exit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"background-color:rgb(159, 159, 159);\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"color:black;\n"
"background-color:rgb(255, 255, 255);\n"
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
        label = new QLabel(TeModifyPassword);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 281, 20));
        OldPassword = new QLineEdit(TeModifyPassword);
        OldPassword->setObjectName(QString::fromUtf8("OldPassword"));
        OldPassword->setGeometry(QRect(40, 60, 241, 21));
        OldPassword->setEchoMode(QLineEdit::Password);

        retranslateUi(TeModifyPassword);

        QMetaObject::connectSlotsByName(TeModifyPassword);
    } // setupUi

    void retranslateUi(QWidget *TeModifyPassword)
    {
        TeModifyPassword->setWindowTitle(QString());
        Login->setText(QCoreApplication::translate("TeModifyPassword", "\347\241\256\345\256\232", nullptr));
        Exit->setText(QCoreApplication::translate("TeModifyPassword", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("TeModifyPassword", "\350\257\267\350\276\223\345\205\245\347\231\273\345\275\225\345\257\206\347\240\201\344\273\245\351\252\214\350\257\201\346\230\257\345\220\246\346\230\257\346\234\254\344\272\272:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeModifyPassword: public Ui_TeModifyPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMODIFYPASSWORD_H

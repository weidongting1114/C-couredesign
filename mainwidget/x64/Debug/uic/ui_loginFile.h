/********************************************************************************
** Form generated from reading UI file 'loginFile.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFILE_H
#define UI_LOGINFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginFile
{
public:
    QLineEdit *lineEdit_number;
    QLineEdit *lineEdit_gender;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_score;
    QLineEdit *lineEdit_grade;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_number_2;
    QLineEdit *lineEdit_gender_2;
    QLineEdit *lineEdit_name_2;
    QLineEdit *lineEdit_score_2;
    QLineEdit *lineEdit_grade_2;

    void setupUi(QWidget *loginFile)
    {
        if (loginFile->objectName().isEmpty())
            loginFile->setObjectName(QString::fromUtf8("loginFile"));
        loginFile->resize(1067, 634);
        lineEdit_number = new QLineEdit(loginFile);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));
        lineEdit_number->setGeometry(QRect(110, 120, 113, 21));
        lineEdit_gender = new QLineEdit(loginFile);
        lineEdit_gender->setObjectName(QString::fromUtf8("lineEdit_gender"));
        lineEdit_gender->setGeometry(QRect(120, 170, 113, 21));
        lineEdit_name = new QLineEdit(loginFile);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(120, 230, 113, 21));
        lineEdit_score = new QLineEdit(loginFile);
        lineEdit_score->setObjectName(QString::fromUtf8("lineEdit_score"));
        lineEdit_score->setGeometry(QRect(120, 290, 113, 21));
        lineEdit_grade = new QLineEdit(loginFile);
        lineEdit_grade->setObjectName(QString::fromUtf8("lineEdit_grade"));
        lineEdit_grade->setGeometry(QRect(120, 330, 113, 21));
        textEdit = new QTextEdit(loginFile);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(660, 250, 371, 261));
        lineEdit_number_2 = new QLineEdit(loginFile);
        lineEdit_number_2->setObjectName(QString::fromUtf8("lineEdit_number_2"));
        lineEdit_number_2->setGeometry(QRect(330, 140, 113, 21));
        lineEdit_gender_2 = new QLineEdit(loginFile);
        lineEdit_gender_2->setObjectName(QString::fromUtf8("lineEdit_gender_2"));
        lineEdit_gender_2->setGeometry(QRect(320, 180, 113, 21));
        lineEdit_name_2 = new QLineEdit(loginFile);
        lineEdit_name_2->setObjectName(QString::fromUtf8("lineEdit_name_2"));
        lineEdit_name_2->setGeometry(QRect(330, 230, 113, 21));
        lineEdit_score_2 = new QLineEdit(loginFile);
        lineEdit_score_2->setObjectName(QString::fromUtf8("lineEdit_score_2"));
        lineEdit_score_2->setGeometry(QRect(330, 290, 113, 21));
        lineEdit_grade_2 = new QLineEdit(loginFile);
        lineEdit_grade_2->setObjectName(QString::fromUtf8("lineEdit_grade_2"));
        lineEdit_grade_2->setGeometry(QRect(340, 340, 113, 21));

        retranslateUi(loginFile);

        QMetaObject::connectSlotsByName(loginFile);
    } // setupUi

    void retranslateUi(QWidget *loginFile)
    {
        loginFile->setWindowTitle(QCoreApplication::translate("loginFile", "loginFile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginFile: public Ui_loginFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFILE_H

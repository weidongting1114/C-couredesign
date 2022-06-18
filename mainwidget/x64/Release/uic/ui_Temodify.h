/********************************************************************************
** Form generated from reading UI file 'Temodify.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMODIFY_H
#define UI_TEMODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Temodify
{
public:
    QPushButton *BtnSave;
    QPushButton *BtnExit;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEdit_name;
    QLabel *label;
    QLineEdit *lineEdit_grade;
    QLineEdit *lineEdit_number;
    QLineEdit *lineEdit_gender;
    QLineEdit *lineEdit_score;
    QLabel *label_4;
    QLabel *label_2;

    void setupUi(QWidget *Temodify)
    {
        if (Temodify->objectName().isEmpty())
            Temodify->setObjectName(QString::fromUtf8("Temodify"));
        Temodify->resize(566, 306);
        BtnSave = new QPushButton(Temodify);
        BtnSave->setObjectName(QString::fromUtf8("BtnSave"));
        BtnSave->setGeometry(QRect(80, 250, 93, 28));
        BtnExit = new QPushButton(Temodify);
        BtnExit->setObjectName(QString::fromUtf8("BtnExit"));
        BtnExit->setGeometry(QRect(390, 260, 93, 28));
        label_3 = new QLabel(Temodify);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 90, 72, 15));
        label_5 = new QLabel(Temodify);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 150, 72, 15));
        lineEdit_name = new QLineEdit(Temodify);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(380, 40, 113, 21));
        label = new QLabel(Temodify);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 40, 72, 15));
        lineEdit_grade = new QLineEdit(Temodify);
        lineEdit_grade->setObjectName(QString::fromUtf8("lineEdit_grade"));
        lineEdit_grade->setGeometry(QRect(380, 80, 113, 21));
        lineEdit_number = new QLineEdit(Temodify);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));
        lineEdit_number->setGeometry(QRect(130, 40, 113, 21));
        lineEdit_gender = new QLineEdit(Temodify);
        lineEdit_gender->setObjectName(QString::fromUtf8("lineEdit_gender"));
        lineEdit_gender->setGeometry(QRect(130, 90, 113, 21));
        lineEdit_score = new QLineEdit(Temodify);
        lineEdit_score->setObjectName(QString::fromUtf8("lineEdit_score"));
        lineEdit_score->setGeometry(QRect(250, 150, 113, 21));
        label_4 = new QLabel(Temodify);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(320, 80, 72, 15));
        label_2 = new QLabel(Temodify);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 40, 72, 15));

        retranslateUi(Temodify);

        QMetaObject::connectSlotsByName(Temodify);
    } // setupUi

    void retranslateUi(QWidget *Temodify)
    {
        Temodify->setWindowTitle(QCoreApplication::translate("Temodify", "Temodify", nullptr));
        BtnSave->setText(QCoreApplication::translate("Temodify", "\344\277\235\345\255\230", nullptr));
        BtnExit->setText(QCoreApplication::translate("Temodify", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("Temodify", "\346\200\247\345\210\253", nullptr));
        label_5->setText(QCoreApplication::translate("Temodify", "\346\210\220\347\273\251", nullptr));
        label->setText(QCoreApplication::translate("Temodify", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("Temodify", "\346\225\231\345\255\246\347\217\255", nullptr));
        label_2->setText(QCoreApplication::translate("Temodify", "\345\267\245\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Temodify: public Ui_Temodify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMODIFY_H

/********************************************************************************
** Form generated from reading UI file 'AlterCLass.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERCLASS_H
#define UI_ALTERCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlterCLass
{
public:
    QLineEdit *lineEdit_number;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_gender;
    QLineEdit *lineEdit_grade;
    QLineEdit *lineEdit_score;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *BtnSave;
    QPushButton *BtnExit;

    void setupUi(QWidget *AlterCLass)
    {
        if (AlterCLass->objectName().isEmpty())
            AlterCLass->setObjectName(QString::fromUtf8("AlterCLass"));
        AlterCLass->resize(618, 362);
        lineEdit_number = new QLineEdit(AlterCLass);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));
        lineEdit_number->setGeometry(QRect(150, 80, 113, 21));
        lineEdit_name = new QLineEdit(AlterCLass);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(400, 80, 113, 21));
        lineEdit_gender = new QLineEdit(AlterCLass);
        lineEdit_gender->setObjectName(QString::fromUtf8("lineEdit_gender"));
        lineEdit_gender->setGeometry(QRect(150, 130, 113, 21));
        lineEdit_grade = new QLineEdit(AlterCLass);
        lineEdit_grade->setObjectName(QString::fromUtf8("lineEdit_grade"));
        lineEdit_grade->setGeometry(QRect(400, 120, 113, 21));
        lineEdit_score = new QLineEdit(AlterCLass);
        lineEdit_score->setObjectName(QString::fromUtf8("lineEdit_score"));
        lineEdit_score->setGeometry(QRect(270, 190, 113, 21));
        label = new QLabel(AlterCLass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 80, 72, 15));
        label_2 = new QLabel(AlterCLass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 80, 72, 15));
        label_3 = new QLabel(AlterCLass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 130, 72, 15));
        label_4 = new QLabel(AlterCLass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 120, 72, 15));
        label_5 = new QLabel(AlterCLass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 190, 72, 15));
        BtnSave = new QPushButton(AlterCLass);
        BtnSave->setObjectName(QString::fromUtf8("BtnSave"));
        BtnSave->setGeometry(QRect(100, 290, 93, 28));
        BtnExit = new QPushButton(AlterCLass);
        BtnExit->setObjectName(QString::fromUtf8("BtnExit"));
        BtnExit->setGeometry(QRect(410, 300, 93, 28));

        retranslateUi(AlterCLass);

        QMetaObject::connectSlotsByName(AlterCLass);
    } // setupUi

    void retranslateUi(QWidget *AlterCLass)
    {
        AlterCLass->setWindowTitle(QCoreApplication::translate("AlterCLass", "AlterCLass", nullptr));
        label->setText(QCoreApplication::translate("AlterCLass", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("AlterCLass", "\345\255\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("AlterCLass", "\346\200\247\345\210\253", nullptr));
        label_4->setText(QCoreApplication::translate("AlterCLass", "\347\217\255\347\272\247", nullptr));
        label_5->setText(QCoreApplication::translate("AlterCLass", "\346\210\220\347\273\251", nullptr));
        BtnSave->setText(QCoreApplication::translate("AlterCLass", "\344\277\235\345\255\230", nullptr));
        BtnExit->setText(QCoreApplication::translate("AlterCLass", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlterCLass: public Ui_AlterCLass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERCLASS_H

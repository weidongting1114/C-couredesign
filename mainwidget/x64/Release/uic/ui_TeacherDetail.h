/********************************************************************************
** Form generated from reading UI file 'TeacherDetail.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERDETAIL_H
#define UI_TEACHERDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherDetail
{
public:
    QLineEdit *lineEdit_number;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_gender;
    QLineEdit *lineEdit_grade;
    QLineEdit *lineEdit_score;
    QPushButton *BtnModiftPassword;
    QPushButton *BtnModifyT;

    void setupUi(QWidget *TeacherDetail)
    {
        if (TeacherDetail->objectName().isEmpty())
            TeacherDetail->setObjectName(QString::fromUtf8("TeacherDetail"));
        TeacherDetail->resize(795, 526);
        lineEdit_number = new QLineEdit(TeacherDetail);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));
        lineEdit_number->setGeometry(QRect(150, 100, 113, 21));
        lineEdit_number->setReadOnly(true);
        lineEdit_name = new QLineEdit(TeacherDetail);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(150, 160, 113, 21));
        lineEdit_name->setReadOnly(true);
        lineEdit_gender = new QLineEdit(TeacherDetail);
        lineEdit_gender->setObjectName(QString::fromUtf8("lineEdit_gender"));
        lineEdit_gender->setGeometry(QRect(150, 220, 113, 21));
        lineEdit_gender->setReadOnly(true);
        lineEdit_grade = new QLineEdit(TeacherDetail);
        lineEdit_grade->setObjectName(QString::fromUtf8("lineEdit_grade"));
        lineEdit_grade->setGeometry(QRect(150, 290, 113, 21));
        lineEdit_grade->setReadOnly(true);
        lineEdit_score = new QLineEdit(TeacherDetail);
        lineEdit_score->setObjectName(QString::fromUtf8("lineEdit_score"));
        lineEdit_score->setGeometry(QRect(160, 350, 113, 21));
        lineEdit_score->setReadOnly(true);
        BtnModiftPassword = new QPushButton(TeacherDetail);
        BtnModiftPassword->setObjectName(QString::fromUtf8("BtnModiftPassword"));
        BtnModiftPassword->setGeometry(QRect(480, 320, 93, 28));
        BtnModifyT = new QPushButton(TeacherDetail);
        BtnModifyT->setObjectName(QString::fromUtf8("BtnModifyT"));
        BtnModifyT->setGeometry(QRect(470, 160, 93, 28));

        retranslateUi(TeacherDetail);

        QMetaObject::connectSlotsByName(TeacherDetail);
    } // setupUi

    void retranslateUi(QWidget *TeacherDetail)
    {
        TeacherDetail->setWindowTitle(QCoreApplication::translate("TeacherDetail", "TeacherDetail", nullptr));
        BtnModiftPassword->setText(QCoreApplication::translate("TeacherDetail", "\344\277\256\346\224\271\346\210\221\347\232\204\345\257\206\347\240\201", nullptr));
        BtnModifyT->setText(QCoreApplication::translate("TeacherDetail", "\344\277\256\346\224\271\346\210\221\347\232\204\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherDetail: public Ui_TeacherDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERDETAIL_H

/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwidgetClass
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QTableView *tableView;
    QPushButton *BtnDel;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QWidget *widget_7;
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_gender;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_number;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_grade;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_score;
    QPushButton *BtnResearch;
    QPushButton *back;
    QPushButton *BtnAlter;
    QPushButton *AddBtn;
    QPushButton *BtnTeacherInformation;
    QPushButton *Btnexit;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEdit_User;

    void setupUi(QWidget *mainwidgetClass)
    {
        if (mainwidgetClass->objectName().isEmpty())
            mainwidgetClass->setObjectName(QString::fromUtf8("mainwidgetClass"));
        mainwidgetClass->resize(1183, 618);
        lineEdit = new QLineEdit(mainwidgetClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 60, 113, 21));
        label = new QLabel(mainwidgetClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(510, 0, 511, 61));
        tableView = new QTableView(mainwidgetClass);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 130, 281, 401));
        BtnDel = new QPushButton(mainwidgetClass);
        BtnDel->setObjectName(QString::fromUtf8("BtnDel"));
        BtnDel->setGeometry(QRect(560, 440, 151, 41));
        radioButton_2 = new QRadioButton(mainwidgetClass);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(50, 70, 87, 19));
        radioButton = new QRadioButton(mainwidgetClass);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(50, 40, 87, 19));
        widget_7 = new QWidget(mainwidgetClass);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(540, 110, 254, 284));
        gridLayout = new QGridLayout(widget_7);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(widget_7);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_name);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(widget_7);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit_gender = new QLineEdit(widget_2);
        lineEdit_gender->setObjectName(QString::fromUtf8("lineEdit_gender"));
        lineEdit_gender->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_gender);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new QWidget(widget_7);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit_number = new QLineEdit(widget_3);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));
        lineEdit_number->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_number);


        gridLayout->addWidget(widget_3, 2, 0, 1, 1);

        widget_4 = new QWidget(widget_7);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_grade = new QLineEdit(widget_4);
        lineEdit_grade->setObjectName(QString::fromUtf8("lineEdit_grade"));
        lineEdit_grade->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_grade);


        gridLayout->addWidget(widget_4, 3, 0, 1, 1);

        widget_5 = new QWidget(widget_7);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_7 = new QHBoxLayout(widget_5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_score = new QLineEdit(widget_5);
        lineEdit_score->setObjectName(QString::fromUtf8("lineEdit_score"));
        lineEdit_score->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_score);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        gridLayout->addWidget(widget_5, 4, 0, 1, 1);

        BtnResearch = new QPushButton(mainwidgetClass);
        BtnResearch->setObjectName(QString::fromUtf8("BtnResearch"));
        BtnResearch->setGeometry(QRect(310, 40, 93, 28));
        back = new QPushButton(mainwidgetClass);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(310, 80, 93, 28));
        BtnAlter = new QPushButton(mainwidgetClass);
        BtnAlter->setObjectName(QString::fromUtf8("BtnAlter"));
        BtnAlter->setGeometry(QRect(560, 390, 151, 41));
        AddBtn = new QPushButton(mainwidgetClass);
        AddBtn->setObjectName(QString::fromUtf8("AddBtn"));
        AddBtn->setGeometry(QRect(560, 490, 151, 41));
        BtnTeacherInformation = new QPushButton(mainwidgetClass);
        BtnTeacherInformation->setObjectName(QString::fromUtf8("BtnTeacherInformation"));
        BtnTeacherInformation->setGeometry(QRect(980, 460, 93, 28));
        Btnexit = new QPushButton(mainwidgetClass);
        Btnexit->setObjectName(QString::fromUtf8("Btnexit"));
        Btnexit->setGeometry(QRect(1060, 560, 93, 28));
        widget_6 = new QWidget(mainwidgetClass);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(860, 70, 262, 48));
        verticalLayout = new QVBoxLayout(widget_6);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(widget_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lineEdit_User = new QLineEdit(widget_6);
        lineEdit_User->setObjectName(QString::fromUtf8("lineEdit_User"));
        lineEdit_User->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_User);


        verticalLayout->addLayout(horizontalLayout_8);


        retranslateUi(mainwidgetClass);

        QMetaObject::connectSlotsByName(mainwidgetClass);
    } // setupUi

    void retranslateUi(QWidget *mainwidgetClass)
    {
        mainwidgetClass->setWindowTitle(QCoreApplication::translate("mainwidgetClass", "mainwidget", nullptr));
        label->setText(QCoreApplication::translate("mainwidgetClass", "\346\237\245\346\211\276\345\255\246\347\224\237", nullptr));
        BtnDel->setText(QCoreApplication::translate("mainwidgetClass", "\345\210\240\351\231\244\350\257\245\345\255\246\347\224\237\346\241\243\346\241\210", nullptr));
        radioButton_2->setText(QCoreApplication::translate("mainwidgetClass", "\346\240\271\346\215\256\345\255\246\345\217\267", nullptr));
        radioButton->setText(QCoreApplication::translate("mainwidgetClass", "\346\240\271\346\215\256\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("mainwidgetClass", "\345\247\223\345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("mainwidgetClass", "\346\200\247\345\210\253", nullptr));
        label_3->setText(QCoreApplication::translate("mainwidgetClass", "\345\255\246\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("mainwidgetClass", "\347\217\255\347\272\247", nullptr));
        label_6->setText(QCoreApplication::translate("mainwidgetClass", "\346\210\220\347\273\251", nullptr));
        BtnResearch->setText(QCoreApplication::translate("mainwidgetClass", "\346\237\245\346\211\276", nullptr));
        back->setText(QCoreApplication::translate("mainwidgetClass", "\345\217\226\346\266\210\346\237\245\346\211\276", nullptr));
        BtnAlter->setText(QCoreApplication::translate("mainwidgetClass", "\344\277\256\346\224\271\350\257\245\345\255\246\347\224\237\346\241\243\346\241\210", nullptr));
        AddBtn->setText(QCoreApplication::translate("mainwidgetClass", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        BtnTeacherInformation->setText(QCoreApplication::translate("mainwidgetClass", "\346\210\221\347\232\204\344\277\241\346\201\257", nullptr));
        Btnexit->setText(QCoreApplication::translate("mainwidgetClass", "\351\200\200\345\207\272", nullptr));
        label_7->setText(QCoreApplication::translate("mainwidgetClass", "\345\275\223\345\211\215\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwidgetClass: public Ui_mainwidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H

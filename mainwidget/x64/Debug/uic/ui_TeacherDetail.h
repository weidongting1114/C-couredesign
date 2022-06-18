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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherDetail
{
public:
    QWidget *widget_6;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_gender;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_number;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_grade;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_score;
    QPushButton *BtnModifyT;
    QFrame *frame;

    void setupUi(QWidget *TeacherDetail)
    {
        if (TeacherDetail->objectName().isEmpty())
            TeacherDetail->setObjectName(QString::fromUtf8("TeacherDetail"));
        TeacherDetail->resize(278, 353);
        TeacherDetail->setMinimumSize(QSize(278, 353));
        TeacherDetail->setMaximumSize(QSize(278, 353));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TeacherDetail->setWindowIcon(icon);
        widget_6 = new QWidget(TeacherDetail);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(0, 0, 271, 261));
        verticalLayout = new QVBoxLayout(widget_6);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(widget_6);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_name = new QLineEdit(widget_2);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));
        lineEdit_name->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_name);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_6);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_gender = new QLineEdit(widget_3);
        lineEdit_gender->setObjectName(QString::fromUtf8("lineEdit_gender"));
        lineEdit_gender->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));
        lineEdit_gender->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_gender);


        verticalLayout->addWidget(widget_3);

        widget = new QWidget(widget_6);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout->addWidget(label);

        lineEdit_number = new QLineEdit(widget);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));
        lineEdit_number->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));
        lineEdit_number->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_number);


        verticalLayout->addWidget(widget);

        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_grade = new QLineEdit(widget_4);
        lineEdit_grade->setObjectName(QString::fromUtf8("lineEdit_grade"));
        lineEdit_grade->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));
        lineEdit_grade->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_grade);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_score = new QLineEdit(widget_5);
        lineEdit_score->setObjectName(QString::fromUtf8("lineEdit_score"));
        lineEdit_score->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));
        lineEdit_score->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_score);


        verticalLayout->addWidget(widget_5);

        BtnModifyT = new QPushButton(TeacherDetail);
        BtnModifyT->setObjectName(QString::fromUtf8("BtnModifyT"));
        BtnModifyT->setGeometry(QRect(50, 270, 161, 31));
        BtnModifyT->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        frame = new QFrame(TeacherDetail);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 278, 353));
        frame->setStyleSheet(QString::fromUtf8("#frame\n"
"{\n"
"	border-image: url(:/images/bd1.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        widget_6->raise();
        BtnModifyT->raise();

        retranslateUi(TeacherDetail);

        QMetaObject::connectSlotsByName(TeacherDetail);
    } // setupUi

    void retranslateUi(QWidget *TeacherDetail)
    {
        TeacherDetail->setWindowTitle(QString());
        label_3->setText(QCoreApplication::translate("TeacherDetail", "\345\247\223\345\220\215:", nullptr));
        label_2->setText(QCoreApplication::translate("TeacherDetail", "\346\200\247\345\210\253:", nullptr));
        label->setText(QCoreApplication::translate("TeacherDetail", "\345\267\245\345\217\267:", nullptr));
        label_4->setText(QCoreApplication::translate("TeacherDetail", "\345\267\245\344\275\234\345\215\225\344\275\215:", nullptr));
        label_5->setText(QCoreApplication::translate("TeacherDetail", "\345\267\245\344\275\234\346\210\220\347\273\251:", nullptr));
        BtnModifyT->setText(QCoreApplication::translate("TeacherDetail", "\344\277\256\346\224\271\346\210\221\347\232\204\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherDetail: public Ui_TeacherDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERDETAIL_H

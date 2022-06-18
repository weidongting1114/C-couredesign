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

class Ui_AlterCLass
{
public:
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_number;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_gender;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_grade;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_score;
    QPushButton *BtnExit;
    QPushButton *BtnSave;
    QFrame *frame;

    void setupUi(QWidget *AlterCLass)
    {
        if (AlterCLass->objectName().isEmpty())
            AlterCLass->setObjectName(QString::fromUtf8("AlterCLass"));
        AlterCLass->resize(278, 353);
        AlterCLass->setMinimumSize(QSize(278, 353));
        AlterCLass->setMaximumSize(QSize(278, 353));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AlterCLass->setWindowIcon(icon);
        widget_7 = new QWidget(AlterCLass);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(10, 10, 256, 284));
        verticalLayout_3 = new QVBoxLayout(widget_7);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(widget_7);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout->addWidget(label_2);

        lineEdit_number = new QLineEdit(widget);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));
        lineEdit_number->setFont(font);
        lineEdit_number->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));

        horizontalLayout->addWidget(lineEdit_number);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(widget_7);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
""));

        horizontalLayout_2->addWidget(label);

        lineEdit_name = new QLineEdit(widget_2);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setFont(font);
        lineEdit_name->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));

        horizontalLayout_2->addWidget(lineEdit_name);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(widget_2);

        widget_3 = new QWidget(widget_7);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
""));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_gender = new QLineEdit(widget_3);
        lineEdit_gender->setObjectName(QString::fromUtf8("lineEdit_gender"));
        lineEdit_gender->setFont(font);
        lineEdit_gender->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));

        horizontalLayout_3->addWidget(lineEdit_gender);


        verticalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(widget_7);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color:white;\n"
""));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_grade = new QLineEdit(widget_4);
        lineEdit_grade->setObjectName(QString::fromUtf8("lineEdit_grade"));
        lineEdit_grade->setFont(font);
        lineEdit_grade->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));

        horizontalLayout_4->addWidget(lineEdit_grade);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(widget_4);

        widget_5 = new QWidget(widget_7);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color:white;\n"
""));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_score = new QLineEdit(widget_5);
        lineEdit_score->setObjectName(QString::fromUtf8("lineEdit_score"));
        lineEdit_score->setFont(font);
        lineEdit_score->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));

        horizontalLayout_5->addWidget(lineEdit_score);


        verticalLayout_3->addWidget(widget_5);

        BtnExit = new QPushButton(AlterCLass);
        BtnExit->setObjectName(QString::fromUtf8("BtnExit"));
        BtnExit->setGeometry(QRect(140, 290, 111, 31));
        BtnExit->setFont(font);
        BtnExit->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        BtnSave = new QPushButton(AlterCLass);
        BtnSave->setObjectName(QString::fromUtf8("BtnSave"));
        BtnSave->setGeometry(QRect(20, 290, 111, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font1.setStyleStrategy(QFont::PreferDefault);
        BtnSave->setFont(font1);
        BtnSave->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        frame = new QFrame(AlterCLass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 281, 361));
        frame->setStyleSheet(QString::fromUtf8("#frame\n"
"{\n"
"	border-image: url(:/images/bd1.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        widget_7->raise();
        BtnExit->raise();
        BtnSave->raise();

        retranslateUi(AlterCLass);

        QMetaObject::connectSlotsByName(AlterCLass);
    } // setupUi

    void retranslateUi(QWidget *AlterCLass)
    {
        AlterCLass->setWindowTitle(QString());
        label_2->setText(QCoreApplication::translate("AlterCLass", "\345\255\246\345\217\267:", nullptr));
        label->setText(QCoreApplication::translate("AlterCLass", "\345\247\223\345\220\215:", nullptr));
        label_3->setText(QCoreApplication::translate("AlterCLass", "\346\200\247\345\210\253:", nullptr));
        label_4->setText(QCoreApplication::translate("AlterCLass", "\347\217\255\347\272\247:", nullptr));
        label_5->setText(QCoreApplication::translate("AlterCLass", "\346\210\220\347\273\251:", nullptr));
        BtnExit->setText(QCoreApplication::translate("AlterCLass", "\351\200\200\345\207\272", nullptr));
        BtnSave->setText(QCoreApplication::translate("AlterCLass", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlterCLass: public Ui_AlterCLass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERCLASS_H

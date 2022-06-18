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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QTableView *tableView;
    QWidget *widget_7;
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_score;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_gender;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_grade;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_number;
    QPushButton *BtnTeacherInformation;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEdit_User;
    QFrame *frame;
    QPushButton *BtnAlter;
    QPushButton *BtnDel;
    QPushButton *AddBtn;
    QLabel *label;
    QRadioButton *radioButton;
    QPushButton *Btnexit;
    QPushButton *back;
    QLineEdit *lineEdit;
    QRadioButton *radioButton_2;
    QPushButton *BtnResearch;
    QPushButton *BtnHelp;

    void setupUi(QWidget *mainwidgetClass)
    {
        if (mainwidgetClass->objectName().isEmpty())
            mainwidgetClass->setObjectName(QString::fromUtf8("mainwidgetClass"));
        mainwidgetClass->resize(1188, 618);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainwidgetClass->setWindowIcon(icon);
        mainwidgetClass->setStyleSheet(QString::fromUtf8("#frame\n"
"{\n"
"border-image:url(:/images/back.png);\n"
"}"));
        tableView = new QTableView(mainwidgetClass);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 120, 331, 431));
        tableView->setStyleSheet(QString::fromUtf8("QTableView{\n"
"    color: rgb(0, 0, 0);\n"
"    border: 1px solid #C07010;          /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    background-color: rgb(255, 255, 255);\n"
"    alternate-background-color: rgb(200, 200, 200); \n"
"    selection-background-color: rgb(71, 160, 255);\n"
"}\n"
" \n"
"QTableView::item:!alternate:!selected{\n"
"    background-color: rgb(220, 220, 220);    \n"
"}\n"
"QHeaderView                   \n"
"{\n"
"    background:transparent;     	//\350\241\250\345\244\264\350\203\214\346\231\257\351\242\234\350\211\262   \n"
"}"));
        tableView->horizontalHeader()->setHighlightSections(false);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        widget_7 = new QWidget(mainwidgetClass);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(360, 120, 241, 301));
        gridLayout = new QGridLayout(widget_7);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
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
        lineEdit_score->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:0;border-style:outset\n"
"}"));
        lineEdit_score->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_score);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        gridLayout->addWidget(widget_5, 4, 0, 1, 1);

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
        lineEdit_gender->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:0;border-style:outset\n"
"}"));
        lineEdit_gender->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_gender);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

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
        lineEdit_name->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:0;border-style:outset\n"
"}"));
        lineEdit_name->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_name);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

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
        lineEdit_grade->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:0;border-style:outset\n"
"}"));
        lineEdit_grade->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_grade);


        gridLayout->addWidget(widget_4, 3, 0, 1, 1);

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
        lineEdit_number->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:0;border-style:outset\n"
"}"));
        lineEdit_number->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_number);


        gridLayout->addWidget(widget_3, 2, 0, 1, 1);

        BtnTeacherInformation = new QPushButton(mainwidgetClass);
        BtnTeacherInformation->setObjectName(QString::fromUtf8("BtnTeacherInformation"));
        BtnTeacherInformation->setGeometry(QRect(1090, 40, 91, 51));
        BtnTeacherInformation->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"color:black;\n"
"background-color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"\n"
"background-color:rgb(159, 159, 159);\n"
"color:white;\n"
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
"}"
                        "\n"
""));
        widget_6 = new QWidget(mainwidgetClass);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(860, 70, 262, 48));
        verticalLayout = new QVBoxLayout(widget_6);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layoutWidget = new QWidget(mainwidgetClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(940, 10, 241, 30));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lineEdit_User = new QLineEdit(layoutWidget);
        lineEdit_User->setObjectName(QString::fromUtf8("lineEdit_User"));
        lineEdit_User->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));
        lineEdit_User->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_User);

        frame = new QFrame(mainwidgetClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1200, 681));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        BtnAlter = new QPushButton(frame);
        BtnAlter->setObjectName(QString::fromUtf8("BtnAlter"));
        BtnAlter->setGeometry(QRect(380, 430, 61, 51));
        BtnAlter->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"background-color:rgb(116, 200, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/ \n"
"color:white; \n"
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
"}"));
        BtnDel = new QPushButton(frame);
        BtnDel->setObjectName(QString::fromUtf8("BtnDel"));
        BtnDel->setGeometry(QRect(450, 430, 61, 51));
        BtnDel->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"background-color:rgb(170, 255, 127);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"color:white;\n"
"    background-color:rgb(0, 170, 0);\n"
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
        AddBtn = new QPushButton(frame);
        AddBtn->setObjectName(QString::fromUtf8("AddBtn"));
        AddBtn->setGeometry(QRect(380, 490, 61, 51));
        AddBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"background-color:rgb(255, 115, 157);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"color:white;\n"
"    background-color:rgb(255, 0, 127);\n"
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
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 91, 20));
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(40, 92, 101, 19));
        Btnexit = new QPushButton(frame);
        Btnexit->setObjectName(QString::fromUtf8("Btnexit"));
        Btnexit->setGeometry(QRect(1120, 570, 61, 51));
        Btnexit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"background-color:rgb(170, 170, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"color:white;\n"
"    background-color:rgb(170, 85, 255);\n"
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
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(270, 90, 75, 23));
        back->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 60, 131, 19));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;border-width:1;border-style: outset; \n"
"border-color: white;\n"
"color:white;\n"
"}"));
        radioButton_2 = new QRadioButton(frame);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(150, 92, 111, 20));
        BtnResearch = new QPushButton(frame);
        BtnResearch->setObjectName(QString::fromUtf8("BtnResearch"));
        BtnResearch->setGeometry(QRect(270, 60, 75, 23));
        BtnResearch->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        BtnHelp = new QPushButton(frame);
        BtnHelp->setObjectName(QString::fromUtf8("BtnHelp"));
        BtnHelp->setGeometry(QRect(450, 490, 61, 51));
        BtnHelp->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"background-color:rgb(255, 126, 128);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"color:white;\n"
"    background-color:rgb(255, 82, 93);\n"
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
        frame->raise();
        tableView->raise();
        widget_7->raise();
        BtnTeacherInformation->raise();
        widget_6->raise();
        layoutWidget->raise();

        retranslateUi(mainwidgetClass);

        QMetaObject::connectSlotsByName(mainwidgetClass);
    } // setupUi

    void retranslateUi(QWidget *mainwidgetClass)
    {
        mainwidgetClass->setWindowTitle(QCoreApplication::translate("mainwidgetClass", "\350\245\277\345\215\227\344\272\244\345\244\247\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_6->setText(QCoreApplication::translate("mainwidgetClass", "\346\210\220\347\273\251:", nullptr));
        label_5->setText(QCoreApplication::translate("mainwidgetClass", "\346\200\247\345\210\253:", nullptr));
        label_2->setText(QCoreApplication::translate("mainwidgetClass", "\345\247\223\345\220\215:", nullptr));
        label_4->setText(QCoreApplication::translate("mainwidgetClass", "\347\217\255\347\272\247:", nullptr));
        label_3->setText(QCoreApplication::translate("mainwidgetClass", "\345\255\246\345\217\267:", nullptr));
        BtnTeacherInformation->setText(QCoreApplication::translate("mainwidgetClass", "\346\210\221\347\232\204\344\277\241\346\201\257", nullptr));
        label_7->setText(QCoreApplication::translate("mainwidgetClass", "\345\275\223\345\211\215\347\224\250\346\210\267:", nullptr));
        BtnAlter->setText(QCoreApplication::translate("mainwidgetClass", "\344\277\256\346\224\271", nullptr));
        BtnDel->setText(QCoreApplication::translate("mainwidgetClass", "\345\210\240\351\231\244", nullptr));
        AddBtn->setText(QCoreApplication::translate("mainwidgetClass", "\346\267\273\345\212\240", nullptr));
        label->setText(QCoreApplication::translate("mainwidgetClass", "\346\237\245\346\211\276\345\255\246\347\224\237:", nullptr));
        radioButton->setText(QCoreApplication::translate("mainwidgetClass", "\346\240\271\346\215\256\345\247\223\345\220\215", nullptr));
        Btnexit->setText(QCoreApplication::translate("mainwidgetClass", "\351\200\200\345\207\272", nullptr));
        back->setText(QCoreApplication::translate("mainwidgetClass", "\345\217\226\346\266\210\346\237\245\346\211\276", nullptr));
        radioButton_2->setText(QCoreApplication::translate("mainwidgetClass", "\346\240\271\346\215\256\345\255\246\345\217\267", nullptr));
        BtnResearch->setText(QCoreApplication::translate("mainwidgetClass", "\346\237\245\346\211\276", nullptr));
        BtnHelp->setText(QCoreApplication::translate("mainwidgetClass", "\345\270\256\345\212\251\n"
"\346\226\207\346\241\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwidgetClass: public Ui_mainwidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H

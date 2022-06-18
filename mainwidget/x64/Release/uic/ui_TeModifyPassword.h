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
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeModifyPassword
{
public:

    void setupUi(QWidget *TeModifyPassword)
    {
        if (TeModifyPassword->objectName().isEmpty())
            TeModifyPassword->setObjectName(QString::fromUtf8("TeModifyPassword"));
        TeModifyPassword->resize(400, 300);

        retranslateUi(TeModifyPassword);

        QMetaObject::connectSlotsByName(TeModifyPassword);
    } // setupUi

    void retranslateUi(QWidget *TeModifyPassword)
    {
        TeModifyPassword->setWindowTitle(QCoreApplication::translate("TeModifyPassword", "TeModifyPassword", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeModifyPassword: public Ui_TeModifyPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMODIFYPASSWORD_H

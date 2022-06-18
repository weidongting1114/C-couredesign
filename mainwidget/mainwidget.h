#pragma once
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include <QtWidgets/QWidget>
#include "ui_mainwidget.h"
#include"Teacher.h"
#include"Student.h"
#include"loginFile.h"
#include<qstandarditemmodel.h>
#include"AlterCLass.h"
#include<qstring.h>
#include"TeacherDetail.h"
#include"Temodify.h"
#include"TeModifyPassword.h"
class mainwidget : public QWidget
{
	Q_OBJECT
public:
	mainwidget(QWidget* parent = Q_NULLPTR);
	void setTlist(QList<Teacher*>);
	void setSlist(QList<Student*>);
	void showItem(QStandardItemModel*);
	void deleteItem(QStandardItemModel*);
	void setCurrentAccount(QString);
	Ui::mainwidgetClass ui;
	void showUser();
	void FindTeacher(QString);
private:
	QList<Teacher*> Tlist;
	QList<Student*> Slist;
	int k;
	AlterCLass Al;
	loginFile loginFileexe;
	QString CurrentAccount;
	int i;
	TeacherDetail te;
	Temodify temodify;
	TeModifyPassword tepass;
	int modifytype;
};

#pragma once
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include <QWidget>
#include "ui_TeacherDetail.h"
#include"Teacher.h"
#include<qlist.h>
#include<qstring.h>
class TeacherDetail : public QWidget
{
	Q_OBJECT

public:
	TeacherDetail(QWidget *parent = Q_NULLPTR);
	~TeacherDetail();
	Ui::TeacherDetail ui;
	void setTlist(QList<Teacher*>);
	void setCurrentAccount(QString);
	void FindUser();
	void showLine();
private:
	QList<Teacher*> Tlist;
	QString CurrentAccount;
	int i=0;
};

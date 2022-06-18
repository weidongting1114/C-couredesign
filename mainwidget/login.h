#pragma once
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include <QWidget>
#include "ui_login.h"
#include<qstring.h>
#include<qlist.h>
#include"Teacher.h"
#include"mainwidget.h"
class login : public QWidget
{
	Q_OBJECT

public:
	login(QWidget* parent = Q_NULLPTR);
	void BtnLoginClicked();
	~login();
	
private:
	Ui::login ui;
	QList<Teacher*> Tlist;
	mainwidget *w=new mainwidget();
};

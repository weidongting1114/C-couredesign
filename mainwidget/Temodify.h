#pragma once

#include <QWidget>
#include "ui_Temodify.h"
#include"Teacher.h"
#include<qlist.h>
class Temodify : public QWidget
{
	Q_OBJECT

public:
	Temodify(QWidget *parent = Q_NULLPTR);
	~Temodify();
	QList<Teacher*> Tlist;
	QString currentID;
	QList<Teacher*> getTlist();
	void setTlist(QList<Teacher*>);
	void setcurrentID(QString);
	Ui::Temodify ui;
private:
	
};

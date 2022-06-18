#pragma once
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include <QWidget>
#include "ui_loginFile.h"
#include <QString>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include"Student.h"
#include"Teacher.h"
class loginFile : public QWidget
{
	Q_OBJECT

public:
	loginFile(QWidget* parent = Q_NULLPTR);
	~loginFile();
	QList<Student*> getSlist();

	QList<Teacher*> getTlist();

private:
	QList<Student*> Slist;
	QList<Teacher*> Tlist;
};

#include "loginFile.h"
#include"Student.h"
#include <QString>
#include <QStringList>
#include <QFile>
#include<qtextstream.h>
#include<qlist.h>
#include"Teacher.h"
#include<mysqlconnect.h>

loginFile::loginFile(QWidget* parent)
	: QWidget(parent)
{
	//连接mysql
	Connectmysql();
	//查询学生信息
	mysql_query(&mysql, select_student);
	result = mysql_store_result(&mysql);
	while ((row = mysql_fetch_row(result))!=NULL)
	{
		Student* student1 = new Student(row[0], row[1], row[2], row[3], row[4]);
		Slist.push_back(student1);
	}

	//查询老师信息
	mysql_query(&mysql, select_teacher);
	result = mysql_store_result(&mysql);

	while ((row = mysql_fetch_row(result)) != NULL)
	{
		//number,  name, gender,  grade, password,score
		Teacher* teacher1 = new Teacher(row[0], row[1], row[2], row[3], row[4],row[5]);
		Tlist.push_back(teacher1);
	}
	FreeConnect();

}
QList<Student*> loginFile::getSlist()
{
	return Slist;
}
QList<Teacher*> loginFile::getTlist()
{
	return Tlist;
}
loginFile::~loginFile()
{
}




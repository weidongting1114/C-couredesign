#pragma once
#include<qstring.h>
class Student
{
private:
	QString number;
	QString grade;
	QString name;
	QString score;
	QString gender;
public:
	Student()
	{

	}
	Student(QString number, QString name, QString gender, QString score, QString grade)
	{
		this->number = number;
		this->name = name;
		this->gender = gender;
		this->score = score;
		this->grade = grade;
	}
	QString getnumber()
	{
		return this->number;
	}
	QString getgrade()
	{
		return this->grade;
	}
	QString getname()
	{
		return this->name;
	}
	QString getscore()
	{
		return this->score;
	}
	QString getgender()
	{
		return this->gender;
	}
	void setnumber(QString number)
	{
		this->number = number;
	}
	void setgrade(QString grade)
	{
		this->grade = grade;
	}
	void setname(QString name)
	{
		this->name = name;
	}
	void setscore(QString score)
	{
		this->score = score;
	}
	void setgender(QString gender)
	{
		this->gender = gender;
	}
};
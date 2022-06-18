#pragma once
#include<qstring.h>
class Teacher
{
public:
	
	Teacher()
	{

	}
	Teacher(QString number, QString name, QString gender, QString grade, QString password,QString score)
	{
		this->number = number;
		this->name = name;
		this->gender = gender;
		this->grade = grade;
		this->password = password;
		this->score = score;
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
	QString getgender()
	{
		return this->gender;
	}
	QString getPassword()
	{
		return this->password;
	}
	QString getscore()
	{
		return this->score;
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
	void setgender(QString gender)
	{
		this->gender = gender;
	}
	void setPassword(QString password)
	{
		this->password = password;
	}
	void setscore(QString score)
	{
		this->score = score;
	}
	~Teacher();

private:
	QString number;
	QString grade;
	QString name;
	QString gender;
	QString password;
	QString id;
	QString score;
};
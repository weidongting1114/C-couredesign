#include "login.h"
#include<qpushbutton.h>
#include<qstring.h>
#include<qmessagebox.h>
#include"Teacher.h"
#include <QStringList>
#include <QFile>
#include<qtextstream.h>
#include<qlist.h>
#include"mainwidget.h"
#include"mysqlconnect.h"

login::login(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	mainwidget* w = new mainwidget();

	this->setFixedSize(1200, 600);
	ui.label_3->setPixmap(QPixmap("./images/loginbackground.png"));
	ui.label_3->setScaledContents(true);
	ui.label_3->setFixedSize(849,669);

	Connectmysql();
	mysql_query(&mysql, select_teacher);
	result = mysql_store_result(&mysql);

	while ((row = mysql_fetch_row(result)) != NULL)
	{
		//number,  name, gender,  grade, password,score
		Teacher* teacher1 = new Teacher(row[0], row[1], row[2], row[3], row[4], row[5]);
		Tlist.push_back(teacher1);
	}
	FreeConnect();

	connect(ui.loginBtn, &QAbstractButton::clicked, this, &login::BtnLoginClicked);
	connect(ui.exit, &QAbstractButton::clicked, this, &QWidget::close);
}
void login::BtnLoginClicked()
{
	QString name = ui.lineEdit_name->text();
	QString password = ui.lineEdit_password->text();
	for (int i = 0; i <= Tlist.size() - 1; i++)
	{
		if (Tlist[i]->getnumber() == name && Tlist[i]->getPassword() == password)
		{
			QMessageBox::information(this, "提示", "登陆成功");
			close();
			/*w->setCurrentAccount(name);*/
			w->FindTeacher(name);
			w->showUser();
			w->show();
			break;
		}
		else
			if(i== Tlist.size() - 1)
		{ 
			QMessageBox::information(this, "警告", "登陆失败");
			break;
		}
			
	}
}
login::~login()
{
	delete(w);
}

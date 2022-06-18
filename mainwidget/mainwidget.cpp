#include "mainwidget.h"
#include"TeacherDetail.h"
#include"TeModifyPassword.h"
#include"mysqlconnect.h"
#include"AlterCLass.h"

#include<qtableview.h>
#include<qstandarditemmodel.h>
#include<qdebug.h>
#include<qitemselectionmodel.h>
#include <QString>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include<qlist.h>
#include<QCloseEvent>
#include<qmessagebox.h>
#include <QDesktopServices>
using namespace std;

mainwidget::mainwidget(QWidget* parent)
	: QWidget(parent)
{

	Connectmysql();
	this->setFixedSize(1183, 618);


	ui.setupUi(this);

	setSlist(loginFileexe.getSlist());
	setTlist(loginFileexe.getTlist());
	ui.radioButton->setChecked(1);
	k = 1;
	
	//tableview出的基础设计
	QStandardItemModel* qsmodel = new QStandardItemModel(this);
	ui.tableView->setModel(qsmodel);
	QStringList table_h_lable, table_v_lable;
	table_h_lable << "学号" << "姓名";
	qsmodel->setHorizontalHeaderLabels(table_h_lable);
	ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows);//设置整行选中
	ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	//添加学生到tableview中
	this->showItem(qsmodel);
	ui.tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	//检索学生 按照姓名
	connect(ui.radioButton, &QAbstractButton::clicked, this, [&]() {
		k = 1;
		});

	//按照学号
	connect(ui.radioButton_2, &QAbstractButton::clicked, this, [&]() {
		k = 2;
		});

	//查找
	connect(ui.BtnResearch, &QAbstractButton::clicked, this, [=]() {
		this->deleteItem(qsmodel);
		QString search = ui.lineEdit->text();
		if (k == 1)
		{
			int i = 0;
			int m = 0;
			for (i = 0; i <= Slist.size() - 1; i++)
			{
				if (Slist[i]->getname() == search)
				{
					qsmodel->setItem(m, 0, new QStandardItem(Slist[i]->getnumber()));
					qsmodel->setItem(m, 1, new QStandardItem(Slist[i]->getname()));
					qsmodel->item(m, 0)->setTextAlignment(Qt::AlignCenter);
					qsmodel->item(m, 1)->setTextAlignment(Qt::AlignCenter);
					m++;
				}
			}
		}
		if (k == 2)
		{
			int i = 0;
			int m = 0;
			for (i = 0; i <= Slist.size() - 1; i++)
			{
				if (Slist[i]->getnumber() == search)
				{
					qsmodel->setItem(m, 0, new QStandardItem(Slist[i]->getnumber()));
					qsmodel->setItem(m, 1, new QStandardItem(Slist[i]->getname()));
					qsmodel->item(m, 0)->setTextAlignment(Qt::AlignCenter);
					qsmodel->item(m, 1)->setTextAlignment(Qt::AlignCenter);
					m++;
				}
			}
		}
		});

	//修改学生信息窗口打开
	connect(ui.BtnAlter, &QAbstractButton::clicked, this, [=]() {
		modifytype = 1;;
		Al.setWindowModality(Qt::ApplicationModal);//设置当修改窗口打开后，查找学生窗口不可用
		if (ui.lineEdit_number->text() == NULL) {
			QMessageBox::warning(this, "错误", "没有选中学生", QMessageBox::Apply);
		}
		else
		{
			QMessageBox::information(this, "提示", "不能有重复的学号", QMessageBox::Apply);
			int i;
			QString TheID = ui.lineEdit_number->text();
			for (i = 0; i <= Slist.size() - 1; i++)
				if (Slist[i]->getnumber() == TheID)
					break;
			Al.ui.lineEdit_name->setText(Slist[i]->getname());
			Al.ui.lineEdit_gender->setText(Slist[i]->getgender());
			Al.ui.lineEdit_grade->setText(Slist[i]->getgrade());
			Al.ui.lineEdit_number->setText(Slist[i]->getnumber());
			Al.ui.lineEdit_score->setText(Slist[i]->getscore());
			Al.show();
		}
		});

	//修改学生信息
	connect(Al.ui.BtnSave, &QAbstractButton::clicked, this, [=]() {
		int i;
		
		string CurrentId = ui.lineEdit_number->text().toStdString();

		string TheId = Al.ui.lineEdit_number->text().toStdString();
		string TheName= Al.ui.lineEdit_name->text().toStdString();
		string TheGender= Al.ui.lineEdit_gender->text().toStdString();
		string TheScore= Al.ui.lineEdit_score->text().toStdString();
		string TheGrade= Al.ui.lineEdit_grade->text().toStdString();


		//i为学生序号
		for (i = 0; i <= Slist.size() - 1; i++)
			if (Slist[i]->getnumber().toStdString() == CurrentId)
				break;

		if (modifytype == 1)//修改学生信息
		{
			if (TheId == "" || TheName == "" || TheGender == "" || TheScore == "" || TheGrade == "")
			{
				QMessageBox::warning(this, "错误", "信息没有补充完整", QMessageBox::Ok);
			}
			else {
				string s1 = "update student set id = ";
				string s2 = " name = ";
				string s3 = " gender = ";
				string s4 = " score = ";
				string s5 = " grade = ";
				string s6 = " where name = ";
				string s7 = Slist[i]->getname().toStdString();
				string s = s1 + TheId +','+ s2 + '\"' + TheName + '\"' + ',' + s3 + '\"' + TheGender + '\"' + ',' + s4 + TheScore + ',' + s5 + TheGrade  + s6 + '\"' + s7 + '\"';
				const char* modify_student = s.c_str();
				//QMessageBox::warning(this, "错误", modify_student, QMessageBox::Ok);
				mysql_query(&mysql, modify_student);
			}
		}
		if (modifytype == 2)//添加学生信息
		{
			if (TheId == "" || TheName == "" || TheGender == "" || TheScore == ""|| TheGrade == "")
			{
				QMessageBox::warning(this, "错误", "信息没有补充完整", QMessageBox::Ok);
			}
			else {
				string s1 = "insert into student (id,name,gender,score,grade) values(";

				string s = s1 + TheId + ',' + '\"' + TheName + '\"' + ',' + '\"' + TheGender + '\"' + ',' + TheScore + ',' + TheGrade + ')';
				const char* add_student = s.c_str();
				//QMessageBox::warning(this, "错误", add_student, QMessageBox::Ok);
				mysql_query(&mysql, add_student);
			}
		}
		
		loginFile a;
		setSlist(a.getSlist());
		this->deleteItem(qsmodel);
		this->showItem(qsmodel);
		TheId = Al.ui.lineEdit_number->text().toStdString();
		for (int i = 0; i <= Slist.size() - 1; i++)
			if (Slist[i]->getnumber().toStdString() == TheId)
			{

				ui.lineEdit_number->setText(Slist[i]->getnumber());
				ui.lineEdit_name->setText(Slist[i]->getname());
				ui.lineEdit_gender->setText(Slist[i]->getgender());
				ui.lineEdit_score->setText(Slist[i]->getscore());
				ui.lineEdit_grade->setText(Slist[i]->getgrade());

			}
		Al.close();
		modifytype = 0;
		});

	//删除学生
	connect(ui.BtnDel, &QAbstractButton::clicked, this, [=]() {
		int i;
		if (ui.lineEdit_number->text() == NULL) {
			QMessageBox::warning(this, "错误", "没有选中学生", QMessageBox::Apply);
		}
		else {
			QString TheID = ui.lineEdit_number->text();
			for (i = 0; i <= Slist.size() - 1; i++)
				if (Slist[i]->getnumber() == TheID)
					break;

			//利用mysql_query函数将表中数据删除，

			string s1 = "delete from student where name=";
			string s2 = Slist[i]->getname().toStdString();
			string s = s1+'\"'+s2+'\"';
			const char* delete_student = s.c_str();
			//QMessageBox::warning(this, "错误", delete_student, QMessageBox::Apply);
			mysql_query(&mysql, delete_student);

			ui.lineEdit_gender->setText("");
			ui.lineEdit_name->setText("");
			ui.lineEdit_grade->setText("");
			ui.lineEdit_score->setText("");
			ui.lineEdit_number->setText("");
			loginFile a;
			setSlist(a.getSlist());
			this->deleteItem(qsmodel);
			this->showItem(qsmodel);
		}
		});

	//添加学生
	connect(ui.AddBtn, &QAbstractButton::clicked, this, [=]() {
		QMessageBox::information(this, "提示", "不能有重复的学号", QMessageBox::Apply);
		modifytype = 2;
		Al.setWindowModality(Qt::ApplicationModal);
		Al.ui.lineEdit_name->setText("");
		Al.ui.lineEdit_gender->setText("");
		Al.ui.lineEdit_grade->setText("");
		Al.ui.lineEdit_number->setText("");
		Al.ui.lineEdit_score->setText("");
		Al.show();
		});


	//恢复正常显示
	connect(ui.back, &QAbstractButton::clicked, this, [=]() {
		this->deleteItem(qsmodel);
		this->showItem(qsmodel);
		});

	//显示学习的细节
	connect(ui.tableView, &QAbstractItemView::clicked, ui.widget_7, [=]() {
		int row = ui.tableView->currentIndex().row();
		QModelIndex current = qsmodel->index(row, 0);
		QString TheID = qsmodel->data(current).toString();
		for (int i = 0; i <= Slist.size() - 1; i++)
			if (Slist[i]->getnumber() == TheID)
			{
				ui.lineEdit_number->setText(Slist[i]->getnumber());
				ui.lineEdit_name->setText(Slist[i]->getname());
				ui.lineEdit_gender->setText(Slist[i]->getgender());
				ui.lineEdit_score->setText(Slist[i]->getscore());
				ui.lineEdit_grade->setText(Slist[i]->getgrade());
			}
		});

	//显示老师信息
	connect(ui.BtnTeacherInformation, &QAbstractButton::clicked, [=]() {
		te.setTlist(Tlist);
		te.setCurrentAccount(CurrentAccount);
		te.FindUser();
		te.showLine();
		te.show();
		});

	//修改老师信息
	connect(te.ui.BtnModifyT, &QAbstractButton::clicked, [=]() {
		te.close();
		tepass.ui.OldPassword->setText("");
		tepass.show();
		});


	connect(tepass.ui.Login, &QAbstractButton::clicked, [=]() {
		int k1 = 0;
		QString password = tepass.ui.OldPassword->text();
		QString TheID = te.ui.lineEdit_number->text();
		if (Tlist[i]->getPassword() == password)
		{
			QMessageBox::information(this, "提示", "密码正确");
			k1 = 1;
		}
		else
			QMessageBox::information(this, "警告", "密码错误");
		for (i = 0; i <= Tlist.size() - 1; i++)
			if (Tlist[i]->getnumber() == TheID)
				break;
		if (k1 == 1) {
			
			temodify.ui.lineEdit_name->setText(Tlist[i]->getname());
			temodify.ui.lineEdit_gender->setText(Tlist[i]->getgender());
			temodify.ui.lineEdit_grade->setText(Tlist[i]->getgrade());
			temodify.ui.lineEdit_number->setText(Tlist[i]->getnumber());
			temodify.ui.lineEdit_password->setText(Tlist[i]->getPassword());
			tepass.close();
			temodify.show();
		}
		if (k1 == 0) {
			tepass.ui.OldPassword->setText("");
			tepass.close();
			tepass.show();
		}
		});

	//修改老师信息窗口
	connect(temodify.ui.BtnSave, &QAbstractButton::clicked, [=]() {
		int k1 = 0;
		//把当前登录的账号传递给Temodify
		temodify.setcurrentID(te.ui.lineEdit_number->text());
		//给Temodify传递老师信息
		temodify.setTlist(Tlist);
		for (i = 0; i <= Tlist.size() - 1; i++)
			if (Tlist[i]->getnumber() == temodify.currentID)
				break;

		string TheId = temodify.ui.lineEdit_number->text().toStdString();
		string TheName = temodify.ui.lineEdit_name->text().toStdString();
		string TheGender = temodify.ui.lineEdit_gender->text().toStdString();
		string ThePassword = temodify.ui.lineEdit_password->text().toStdString();
		string TheGrade = temodify.ui.lineEdit_grade->text().toStdString();

		if (TheId =="" || TheName=="" || TheGender=="" || ThePassword=="" || TheGrade=="")
		{
			QMessageBox::warning(this, "错误", "信息没有补充完整", QMessageBox::Ok);
			k1 = 0;
		}
		else {
			string s1 = "update teacher set id = ";
			string s2 = " name = ";
			string s3 = " gender = ";
			string s4 = " password = ";
			string s5 = " workplace = ";
			string s6 = " where name = ";
			string s7 = Tlist[i]->getname().toStdString();
			string s = s1 + TheId + ',' + s2 + '\"' + TheName + '\"' + ',' + s3 + '\"' + TheGender + '\"' + ',' + s4 + ThePassword + ',' + s5 + '\"' + TheGrade + '\"' + s6 + '\"' + s7 + '\"';
			const char* modify_teacher = s.c_str();
			//QMessageBox::warning(this, "错误", modify_teacher, QMessageBox::Ok);
			mysql_query(&mysql, modify_teacher);
			
			k1 = 1;
		}
		if (k1 == 1)
		{
			loginFile a;
			setTlist(a.getTlist());
			temodify.currentID = temodify.ui.lineEdit_number->text();
			for (int i = 0; i <= Tlist.size() - 1; i++)
				if (Tlist[i]->getnumber() == temodify.currentID)
				{
					te.ui.lineEdit_name->setText(Tlist[i]->getname());
					te.ui.lineEdit_gender->setText(Tlist[i]->getgender());
					te.ui.lineEdit_grade->setText(Tlist[i]->getgrade());
					te.ui.lineEdit_number->setText(Tlist[i]->getnumber());
					te.ui.lineEdit_score->setText(Tlist[i]->getscore());
				}
			temodify.close();
		}
		});
	//
	connect(tepass.ui.Exit, &QAbstractButton::clicked, &tepass, &QWidget::close);

	//
	connect(temodify.ui.BtnExit, &QAbstractButton::clicked, &temodify, &QWidget::close);
	//关闭窗口
	connect(ui.Btnexit, &QAbstractButton::clicked, this, &QWidget::close);

	//帮助文档
	connect(ui.BtnHelp, &QAbstractButton::clicked, [=]() {
		QDesktopServices::openUrl(QUrl::fromLocalFile("./help"));
		});
}

void mainwidget::setTlist(QList<Teacher*> Tlist)
{
	this->Tlist = Tlist;
}
void mainwidget::setSlist(QList<Student*> Slist)
{
	this->Slist = Slist;
}

void mainwidget::showItem(QStandardItemModel* qsmodel)
{
	qsmodel->setRowCount(Slist.size());
	//对Slist中内容按照学号排序
	QStringList ID;
	for (int row = 0; row < qsmodel->rowCount(); row++)
		ID.append(Slist[row]->getnumber());
	qSort(ID.begin(), ID.end(), [](const QString& s1, const QString& s2) {
		return s1.toInt() < s2.toInt(); });
	for (int row = 0; row < qsmodel->rowCount(); row++)
	{

		QString TheID = ID[row];
		for (int i = 0; i < qsmodel->rowCount(); i++)
			if (Slist[i]->getnumber() == TheID)
			{
				qsmodel->setItem(row, 0, new QStandardItem(Slist[i]->getnumber()));
				qsmodel->setItem(row, 1, new QStandardItem(Slist[i]->getname()));
				qsmodel->item(row, 0)->setTextAlignment(Qt::AlignCenter);
				qsmodel->item(row, 1)->setTextAlignment(Qt::AlignCenter);
			}
	}
}
void mainwidget::deleteItem(QStandardItemModel* qsmodel)
{
	qsmodel->removeRows(0, qsmodel->rowCount());
}
void mainwidget::setCurrentAccount(QString CurrentAccount)
{
	this->CurrentAccount = CurrentAccount;
}
void mainwidget::showUser()
{
	ui.lineEdit_User->setText(Tlist[i]->getname());
	setCurrentAccount(Tlist[i]->getname());
}
void mainwidget::FindTeacher(QString CurrentAccount)
{
	for (i = 0; i <= Tlist.size() - 1; i++)
		if (Tlist[i]->getnumber() == CurrentAccount)
			break;
}
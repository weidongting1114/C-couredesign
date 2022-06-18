#include "TeacherDetail.h"
#include"Teacher.h"
#include<qstring.h>
TeacherDetail::TeacherDetail(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}
TeacherDetail::~TeacherDetail()
{
}
void TeacherDetail::setTlist(QList<Teacher*> Tlist)
{
	this->Tlist = Tlist;
}
void TeacherDetail::setCurrentAccount(QString CurrentAccount)
{
	this->CurrentAccount = CurrentAccount;
}
void TeacherDetail::FindUser()
{
	for (i = 0; i <= Tlist.size() - 1; i++)
		if (Tlist[i]->getname() == CurrentAccount)//��ʦ���û�����������ͬ��ʵ��������ȥ�޸Ĵ�����
			break;
}
void TeacherDetail::showLine()
{
	ui.lineEdit_name->setText(Tlist[i]->getname());
	ui.lineEdit_number->setText(Tlist[i]->getnumber());
	ui.lineEdit_grade->setText(Tlist[i]->getgrade());
	ui.lineEdit_gender->setText(Tlist[i]->getgender());
	ui.lineEdit_score->setText(Tlist[i]->getscore());
}
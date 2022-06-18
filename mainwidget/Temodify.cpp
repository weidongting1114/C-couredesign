#include "Temodify.h"
#include"Teacher.h"
#include<qlist.h>
#include "ui_Temodify.h"
Temodify::Temodify(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

}
Temodify::~Temodify()
{
}
void Temodify::setTlist(QList<Teacher*> Tlist)
{
	this->Tlist = Tlist;
}
QList<Teacher*> Temodify::getTlist()
{
	return this->Tlist;
}
void Temodify::setcurrentID(QString currentID)
{
	this->currentID = currentID;
}
#pragma once
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include <QWidget>
#include "ui_AlterCLass.h"
#include<QCloseEvent>
class AlterCLass : public QWidget
{
	Q_OBJECT

public:
	AlterCLass(QWidget *parent = Q_NULLPTR);
	~AlterCLass();

public:
	Ui::AlterCLass ui;
};

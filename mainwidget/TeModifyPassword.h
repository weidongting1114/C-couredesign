#pragma once

#include <QWidget>
#include "ui_TeModifyPassword.h"
class TeModifyPassword : public QWidget
{
	Q_OBJECT

public:
	TeModifyPassword(QWidget *parent = Q_NULLPTR);
	~TeModifyPassword();
	Ui::TeModifyPassword ui;
private:
	
};

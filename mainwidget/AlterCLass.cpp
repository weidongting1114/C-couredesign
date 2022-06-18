#include "AlterCLass.h"
#include<qmessagebox.h>
#include<QCloseEvent>
AlterCLass::AlterCLass(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.BtnExit, &QAbstractButton::clicked, this, &QWidget::close);
	setWindowFlag(Qt::WindowCloseButtonHint, false);
	setWindowFlag(Qt::WindowMinimizeButtonHint, false);
	setWindowFlag(Qt::WindowMaximizeButtonHint, false);
}

AlterCLass::~AlterCLass()
{
}


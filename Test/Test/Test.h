#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test.h"

namespace Ui {
	class Test;
}

class Test : public QMainWindow
{
	Q_OBJECT

public:
	explicit Test(QWidget *parent = Q_NULLPTR);
	~Test();

private:
	Ui::Test *ui;


};

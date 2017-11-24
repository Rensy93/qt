#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FirstQtProgram.h"

//namespace Ui 
//{
//	class FirstQtProgram;
//}

class FirstQtProgram : public QMainWindow
{
	Q_OBJECT

public:
	FirstQtProgram(QWidget *parent = Q_NULLPTR);
	//~FirstQtProgram();
	
private:
	Ui::FirstQtProgramClass ui;
};

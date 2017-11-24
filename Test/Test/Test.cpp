#include "Test.h"
//#include "ui_Test.h"

Test::Test(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::Test)
{
	
	ui->setupUi(this);
	ui.connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
		ui->progressBar, SLOT(setValue(int)));

	ui.disconnect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
		ui->progressBar, SLOT(setValue(int)));
}
Test::~Test()
{
	delete ui;
}


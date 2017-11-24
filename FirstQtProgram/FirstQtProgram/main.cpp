#include "FirstQtProgram.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FirstQtProgram w;
	w.show();
	return a.exec();
}

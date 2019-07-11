#include "stdafx.h"
#include "animacion.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	animacion w;
	w.show();
	return a.exec();
}

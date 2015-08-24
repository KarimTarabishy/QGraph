#include "QGraphWidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QGraphWidget w;
	w.show();

	return a.exec();
}

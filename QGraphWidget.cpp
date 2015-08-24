#include "QGraphWidget.h"

#include <QBoxLayout>

QGraphWidget::QGraphWidget(QWidget *parent) :
	QWidget(parent)
{
	view = new QGraphView();
	QBoxLayout *layout = new QBoxLayout(QBoxLayout::LeftToRight);
	layout->addWidget(view);
	this->setLayout(layout);
}

QGraphWidget::~QGraphWidget()
{

}

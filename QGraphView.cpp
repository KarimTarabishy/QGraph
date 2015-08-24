#include "QGraphView.h"

#include <QDebug>
#include <QGraphicsTextItem>
#include <QStyle>

#define RADIUS_DIAMETER 23

QGraphView::QGraphView(QObject *parent):
	numberOfCircles(0)
{
	this->setScene(&scene);
}

void QGraphView::mousePressEvent(QMouseEvent * event)
{
	int x = event->pos().x() - (RADIUS_DIAMETER/2);
	int y = event->pos().y() - (RADIUS_DIAMETER/2);
	createNode(x, y);
	QGraphicsTextItem *text = new QGraphicsTextItem();
	text->setPos(x, y+3);
	text->setPlainText(QString::number(numberOfCircles++));
	text->setScale(0.8);
	scene.addItem(text);
}

void QGraphView::mouseMoveEvent(QMouseEvent * event)
{
	qDebug() << "mouse moved";
}

void QGraphView::createNode(int x, int y)
{
	scene.addEllipse(x, y, RADIUS_DIAMETER, RADIUS_DIAMETER);
}

void QGraphView::deleteNode()
{

}

void QGraphView::resizeEvent(QResizeEvent *event)
{
	scene.setSceneRect(0, 0, event->size().width(), event->size().height());
}

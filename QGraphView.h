#ifndef QGRAPHVIEW_H
#define QGRAPHVIEW_H

#include <QObject>
#include <QGraphicsView>
#include <QMouseEvent>

class QGraphView : public QGraphicsView
{
	Q_OBJECT
public:
	explicit QGraphView(QObject *parent = 0);

private:
	QGraphicsScene scene;
	void mousePressEvent(QMouseEvent * event);
	void mouseMoveEvent(QMouseEvent * event);
	void resizeEvent(QResizeEvent *event);
	void createNode(int x, int y);
	void deleteNode();
	int numberOfCircles;
};

#endif // QGRAPHVIEW_H

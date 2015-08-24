#ifndef QGRAPHWIDGET_H
#define QGRAPHWIDGET_H

#include <QWidget>
#include <QGraphView.h>

class QGraphWidget : public QWidget
{
	Q_OBJECT

public:
	explicit QGraphWidget(QWidget *parent = 0);
	~QGraphWidget();

private:
	QGraphView *view;
};

#endif // QGRAPHWIDGET_H

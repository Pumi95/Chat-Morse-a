#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>
#include <QtNetwork>
#include <QTabWidget>
#include "chatpage.h"
#include "settingspage.h"

class Widget : public QWidget
{
    Q_OBJECT

    QGridLayout *mainLayout;
    QTabWidget *tabWidget;

public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H

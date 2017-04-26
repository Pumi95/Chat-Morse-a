#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this -> setMinimumSize(701,701);
    this -> setMaximumSize(701,701);

    mainLayout = new QGridLayout(this);
    tabWidget = new QTabWidget(this);

    settingsPage *sp=new settingsPage;
    chatPage *cp=new chatPage(sp);

    tabWidget -> addTab(cp, tr("chat"));
    tabWidget -> addTab(sp, tr("settings"));

    mainLayout -> addWidget(tabWidget);
}

Widget::~Widget()
{

}


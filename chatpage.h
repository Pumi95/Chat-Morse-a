#ifndef CHATPAGE_H
#define CHATPAGE_H

#include <QtWidgets>
#include <QTNetwork>
#include "settingspage.h"
#include <windows.h>
#include <QMediaPlayer>


class settingsPage;

class chatPage : public QWidget
{
    Q_OBJECT

    QTextEdit *text, *plain;
    QLineEdit *line;
    QGridLayout *mainLayout;
    QTcpSocket *socket;

    QScrollBar *textScroll;

    QMediaPlayer *player;
    settingsPage *settings;

private slots:
    void writeToSocket();
    void readToSocket();
    void blockText();
    void changeToGraphic();
    void delay(int);
    void changeToDecode();
    void changeToSound();
    void changeToCode();

public:
    explicit chatPage(settingsPage *, QWidget *parent = 0);

signals:

public slots:
};

#endif // CHATPAGE_H

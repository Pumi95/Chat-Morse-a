#ifndef SETTINGSPAGE_H
#define SETTINGSPAGE_H

#include <QtWidgets>
#include <QGroupBox>
#include <QDialog>
#include "chatpage.h"

class settingsPage : public QWidget
{
    Q_OBJECT

    //options window
    QGridLayout *mainLayout;

    //mode box
    QRadioButton *codeButton,*soundButton,*graphicButton,*decodeButton;

    //others box
    QLabel *nickLabel;
    QLineEdit *nick;
    QPushButton *setNickButton;
    QDialog *setNickWindow;

    //nick Window
    QGridLayout *nickLayout;


private slots:
    QGroupBox *creatNickExclusiveGroup();
    QGroupBox *creatModeExclusiveGroup();
    void blockNick();
    void creatNickWindow();
    void setToCode();
    void setToDecode();
    void setToGraphic();
    void setToSound();

public:
    explicit settingsPage(QWidget *parent = 0);
    QString getNick();
    bool setCodeValue=false, setDecodeValue=false, setGraphicValue=false, setSoundValue=false;

signals:

public slots:
};

#endif // SETTINGSPAGE_H

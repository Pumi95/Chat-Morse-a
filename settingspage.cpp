#include "settingspage.h"

settingsPage::settingsPage(QWidget *parent) : QWidget(parent)
{
    mainLayout = new QGridLayout(this);

    mainLayout -> addWidget(creatModeExclusiveGroup(),0,0);
    mainLayout -> addWidget(creatNickExclusiveGroup(),1,0);


    connect(setNickButton, SIGNAL(pressed()), setNickWindow, SLOT(exec()));
    connect(nick, SIGNAL(returnPressed()), SLOT(blockNick()));
    connect(nick, SIGNAL(returnPressed()), setNickWindow, SLOT(close()));
    connect(codeButton, SIGNAL(pressed()), SLOT(setToCode()));
    connect(graphicButton, SIGNAL(pressed()), SLOT(setToGraphic()));
    connect(decodeButton, SIGNAL(pressed()), SLOT(setToDecode()));
    connect(soundButton, SIGNAL(pressed()), SLOT(setToSound()));
}



QGroupBox *settingsPage::creatModeExclusiveGroup()
{
    QGroupBox *modeBox = new QGroupBox(tr("Mode"),this);

    codeButton = new QRadioButton(tr("code"),this);
    soundButton = new QRadioButton(tr("sound"),this);
    graphicButton = new QRadioButton(tr("graphic"),this);
    decodeButton = new QRadioButton(tr("decode"),this);

    QVBoxLayout *vboxMode = new QVBoxLayout(modeBox);
    vboxMode -> addWidget(codeButton);
    vboxMode -> addWidget(soundButton);
    vboxMode -> addWidget(graphicButton);
    vboxMode -> addWidget(decodeButton);


    return modeBox;
}

QGroupBox *settingsPage::creatNickExclusiveGroup()
{
    QGroupBox *nickBox = new QGroupBox(tr("Others"),this);

    QVBoxLayout *vboxNick = new QVBoxLayout(nickBox);
    nickLabel = new QLabel(tr("nick: "),this);
    nickLabel -> setGeometry(15,430,20,20);
    setNickButton = new QPushButton(tr("set nick"), nickBox);

    vboxNick -> addWidget(setNickButton);

    creatNickWindow();

    return nickBox;
}

void settingsPage::blockNick()
{
    nick -> setReadOnly(true);
}



void settingsPage::creatNickWindow()
{
    setNickWindow = new QDialog;
    nickLayout = new QGridLayout(setNickWindow);
    setNickWindow -> setMinimumSize(180,80);
    setNickWindow -> setMaximumSize(180,80);

    nick = new QLineEdit(setNickWindow);

    nickLayout -> addWidget(nick);
}


QString settingsPage::getNick() {
    return nick->text();
}

void settingsPage::setToCode()
{
    setCodeValue=true;
    setDecodeValue=false;
    setGraphicValue=false;
    setSoundValue=false;
}

void settingsPage::setToDecode()
{
    setCodeValue=false;
    setDecodeValue=true;
    setGraphicValue=false;
    setSoundValue=false;
}

void settingsPage::setToGraphic()
{
    setCodeValue=false;
    setDecodeValue=false;
    setGraphicValue=true;
    setSoundValue=false;
}

void settingsPage::setToSound()
{
    setCodeValue=false;
    setDecodeValue=false;
    setGraphicValue=false;
    setSoundValue=true;
}

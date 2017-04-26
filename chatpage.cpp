#include "chatpage.h"
#include <QString>


chatPage::chatPage(settingsPage *sp, QWidget *parent) : QWidget(parent)
{

    socket = new QTcpSocket(this);
    socket->connectToHost("25.37.250.180",5000);

    mainLayout = new QGridLayout(this);
    text = new QTextEdit(this);
    text->setMaximumSize(500,700);

    line = new QLineEdit(this);

    player = new QMediaPlayer(this);

    plain = new QTextEdit(this);
    plain -> setStyleSheet("QTextEdit {background-color:#000000;}");
    plain -> setGeometry(516, 10, 150, 150);
    plain -> setReadOnly(true);




    settings = sp;

    mainLayout -> addWidget(text);
    mainLayout -> addWidget(line);


    blockText();

    connect(line,SIGNAL(returnPressed()),SLOT(writeToSocket()));
    connect(socket,SIGNAL(readyRead()),SLOT(readToSocket()));
}

void chatPage::readToSocket()
{
    QString s=socket->readAll();
    text->setText(text->toPlainText()+"\n"+s); //odczytywanie z okienka
    textScroll = text->verticalScrollBar();
    textScroll->setValue(textScroll->maximum());

       if(settings->setSoundValue==true)
       {

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==('a')||s[i]==('A'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/A_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('b')||s[i]==('B'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/B_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('c')||s[i]==('C'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/C_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('d')||s[i]==('D'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/D_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('e')||s[i]==('E'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/E_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('f')||s[i]==('F'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/F_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('g')||s[i]==('G'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/H_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }

                  if(s[i]==('h')||s[i]==('H'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/H_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('i')||s[i]==('I'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/I_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('j')||s[i]==('J'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/J_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('k')||s[i]==('K'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/K_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('l')||s[i]==('L'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/L_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('m')||s[i]==('M'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/M_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('n')||s[i]==('N'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/N_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('o')||s[i]==('O'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/O_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('p')||s[i]==('P'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/P_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('r')||s[i]==('R'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/R_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('s')||s[i]==('S'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/S_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('t')||s[i]==('T'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/T_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('u')||s[i]==('U'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/U_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('x')||s[i]==('X'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/X_morse_code.mp3"));
                  player->play();
               Sleep(1000);
                  }
                  if(s[i]==('v')||s[i]==('V'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/V_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('w')||s[i]==('W'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/W_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('y')||s[i]==('Y'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/Y_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('z')||s[i]==('Z'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/Z_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==(' ')||s[i]==('  '))
                 {
           Sleep(2000);
                  }

           }
        }
       if(settings->setGraphicValue==true)
       {
           for(int i=0;i<s.size();i++)
           {

              if(s[i]==('a')||s[i]==('A'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");//yellow
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");//black
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('b')||s[i]==('B'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('c')||s[i]==('C'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('d')||s[i]==('D'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('e')||s[i]==('E'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('f')||s[i]==('F'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('g')||s[i]==('G'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);

              }
              if(s[i]==('h')||s[i]==('H'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('i')||s[i]==('I'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('j')||s[i]==('J'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('k')||s[i]==('K'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('l')||s[i]==('L'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('m')||s[i]==('M'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('n')||s[i]==('N'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('o')||s[i]==('O'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('p')||s[i]==('P'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('r')||s[i]==('R'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('s')||s[i]==('S'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('t')||s[i]==('T'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('u')||s[i]==('U'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('x')||s[i]==('X'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('v')||s[i]==('V'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('w')||s[i]==('W'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('y')||s[i]==('Y'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              if(s[i]==('z')||s[i]==('Z'))
              {
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(3);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
                  delay(1);
                  plain->setStyleSheet("QTextEdit {background-color:#000000;}");
                  delay(1);
              }
              delay(3);
              }


          line->clear();

       }




}
void chatPage::blockText()
{
    text -> setReadOnly(true);
}

void chatPage::delay(int n)
{
    QTime dieTime= QTime::currentTime().addSecs(n);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void chatPage::changeToSound()
{
    text->setTextColor(QColor(255,255,255));
    QString s=socket->readAll();
        text->setText(text->toPlainText()+"\n"+s); //odczytywanie z okienka

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==('a')||s[i]==('A'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/A_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('b')||s[i]==('B'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/B_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('c')||s[i]==('C'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/C_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('d')||s[i]==('D'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/D_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('e')||s[i]==('E'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/E_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('f')||s[i]==('F'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/F_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('g')||s[i]==('G'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/H_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }

                  if(s[i]==('h')||s[i]==('H'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/H_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('i')||s[i]==('I'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/I_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('j')||s[i]==('J'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/J_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('k')||s[i]==('K'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/K_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('l')||s[i]==('L'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/L_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('m')||s[i]==('M'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/M_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('n')||s[i]==('N'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/N_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('o')||s[i]==('O'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/O_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('p')||s[i]==('P'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/P_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('r')||s[i]==('R'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/R_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('s')||s[i]==('S'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/S_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('t')||s[i]==('T'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/T_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('u')||s[i]==('U'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/U_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('x')||s[i]==('X'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/X_morse_code.mp3"));
                  player->play();
               Sleep(1000);
                  }
                  if(s[i]==('v')||s[i]==('V'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/V_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('w')||s[i]==('W'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/W_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('y')||s[i]==('Y'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/Y_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==('z')||s[i]==('Z'))
                 {player->setMedia(QUrl("c:/Chat/Sounds/Z_morse_code.mp3"));
                  player->play();
           Sleep(1000);
                  }
                  if(s[i]==(' ')||s[i]==('  '))
                 {
           Sleep(2000);
                  }

           }
}

void chatPage::changeToGraphic()
{
    text->setTextColor(QColor(255,255,255));
    QString s=socket->readAll();
        text->setText(text->toPlainText()+"\n"+s); //odczytywanie z okienka

        for(int i=0;i<s.size();i++)
        {

           if(s[i]==('a')||s[i]==('A'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");//yellow
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");//black
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('b')||s[i]==('B'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('c')||s[i]==('C'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('d')||s[i]==('D'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('e')||s[i]==('E'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('f')||s[i]==('F'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('g')||s[i]==('G'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);

           }
           if(s[i]==('h')||s[i]==('H'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('i')||s[i]==('I'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('j')||s[i]==('J'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('k')||s[i]==('K'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('l')||s[i]==('L'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('m')||s[i]==('M'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('n')||s[i]==('N'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('o')||s[i]==('O'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('p')||s[i]==('P'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('r')||s[i]==('R'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('s')||s[i]==('S'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('t')||s[i]==('T'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('u')||s[i]==('U'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('x')||s[i]==('X'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('v')||s[i]==('V'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('w')||s[i]==('W'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('y')||s[i]==('Y'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           if(s[i]==('z')||s[i]==('Z'))
           {
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(3);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#FFFF00;}");
               delay(1);
               plain->setStyleSheet("QTextEdit {background-color:#000000;}");
               delay(1);
           }
           delay(3);
           }


       line->clear();

}

void chatPage::changeToDecode()
{


    QString znak=line ->text().toUtf8();
    int size=line ->text().toUtf8().size();
    for(int i=0;i<size;i++)//dzwieki
         {
            int j;
            j=i;

          if(znak[j]==('.')&&znak[j+1]==('-')&& znak[j+2]==(' '))
         {  if(i==0||znak[j-1]==' ')
              socket->write("a");


          }

          if(znak[j]==('-')&&znak[j+1]==('.')&& znak[j+2]==('.')&& znak[j+3]==('.')&& znak[j+4]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("b");

          }

          if(znak[j]==('-')&&znak[j+1]==('.')&& znak[j+2]==('-')&& znak[j+3]==('.')&& znak[j+4]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("c");

          }
          if(znak[j]==('-')&&znak[j+1]==('.')&& znak[j+2]==('.')&& znak[j+3]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("d");

          }
          if(znak[j]==('.')&&znak[j+1]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("e");

          }
          if(znak[j]==('.')&&znak[j+1]==('.')&& znak[j+2]==('-')&& znak[j+3]==('.')&& znak[j+4]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("f");

          }


          if(znak[j]==('-')&&znak[j+1]==('-')&& znak[j+2]==('.')&& znak[j+3]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("g");

          }
          if(znak[j]==('.')&&znak[j+1]==('.')&& znak[j+2]==('.')&& znak[j+3]==('.')&& znak[j+4]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("h");

          }
          if(znak[j]==('.')&&znak[j+1]==('.')&& znak[j+2]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("i");

          }
          if(znak[j]==('.')&&znak[j+1]==('-')&& znak[j+2]==('-')&&znak[j+3]==('-')&&znak[j+4]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("j");

          }
          if(znak[j]==('-')&&znak[j+1]==('.')&& znak[j+2]==('-')&&znak[j+3]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("k");

          }
          if(znak[j]==('.')&&znak[j+1]==('-')&& znak[j+2]==('.')&&znak[j+3]==('.')&&znak[j+4]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("l");

          }
          if(znak[j]==('-')&&znak[j+1]==('-')&& znak[j+2]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("m");

          }
          if(znak[j]==('-')&&znak[j+1]==('.')&& znak[j+2]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("n");

          }
          if(znak[j]==('-')&&znak[j+1]==('-')&& znak[j+2]==('-')&& znak[j+3]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("o");

          }
          if(znak[j]==('.')&&znak[j+1]==('-')&& znak[j+2]==('-')&& znak[j+3]==('.')&& znak[j+4]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("p");

          }
          if(znak[j]==('.')&&znak[j+1]==('-')&& znak[j+2]==('.')&& znak[j+3]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("r");

          }
          if(znak[j]==('.')&&znak[j+1]==('.')&& znak[j+2]==('.')&& znak[j+3]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("s");

          }
          if(znak[j]==('-')&&znak[j+1]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("t");

          }
          if(znak[j]==('.')&&znak[j+1]==('.')&& znak[j+2]==('-')&& znak[j+3]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("u");

          }
          if(znak[j]==('.')&&znak[j+1]==('.')&& znak[j+2]==('.')&&znak[j+3]==('-')&&znak[j+4]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("v");

          }
          if(znak[j]==('.')&&znak[j+1]==('-')&& znak[j+2]==('-')&&znak[j+3]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("w");

          }
          if(znak[j]==('-')&&znak[j+1]==('.')&& znak[j+2]==('.')&&znak[j+3]==('-')&&znak[j+4]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("x");

          }
          if(znak[j]==('-')&&znak[j+1]==('.')&& znak[j+2]==('-')&&znak[j+3]==('-')&&znak[j+4]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("y");

          }
          if(znak[j]==('-')&&znak[j+1]==('-')&& znak[j+2]==('.')&&znak[j+3]==('.')&&znak[j+4]==(' '))
         {if(i==0||znak[j-1]==' ')
              socket->write("z");

          }
          if(znak[j]==(' ')&&znak[j+1]==(' '))
         {
              socket->write(" ");
          }








     }


}

void chatPage::changeToCode()
{
    socket->write(settings->getNick().toUtf8()); // wypisuje nick
       socket->write(": "); // robi przerwe miedzy nickiem a tekstem

    QString znak=line ->text().toUtf8();
    int size=line ->text().toUtf8().size();








        for(int i=0;i<size;i++)
         {
            if(znak[i]==(' '))
           socket->write("  ");
        if(znak[i]==('a')||znak[i]==('A'))
       socket->write(".- ");


    if(znak[i]==('b')||znak[i]==('B'))
          socket->write("-... ");

       if(znak[i]==('c')||znak[i]==('C'))
      socket->write("-.-. ");



      if (znak[i]==('d')||znak[i]==('D'))
           socket->write("-.. ");
      if(znak[i]==('e')||znak[i]==('E'))
          socket->write(". ");



          if (znak[i]==('f')||znak[i]==('F'))
               socket->write("..-. ");
          if(znak[i]==('g')||znak[i]==('G'))
              socket->write("--. ");



              if (znak[i]==('h')||znak[i]==('H'))
                   socket->write(".... ");
              if(znak[i]==('i')||znak[i]==('I'))
                  socket->write(".. ");



                  if (znak[i]==('j')||znak[i]==('J'))
                       socket->write(".--- ");
                  if(znak[i]==('k')||znak[i]==('K'))
                      socket->write("-.- ");



                      if (znak[i]==('l')||znak[i]==('L'))
                           socket->write(".-.. ");
                      if(znak[i]==('m')||znak[i]==('M'))
                          socket->write("-- ");



                          if (znak[i]==('n')||znak[i]==('N'))
                               socket->write("-. ");
                          if(znak[i]==('o')||znak[i]==('O'))
                              socket->write("--- ");



                              if (znak[i]==('p')||znak[i]==('P'))
                                   socket->write(".--. ");
                              if(znak[i]==('r')||znak[i]==('R'))
                                  socket->write(".-. ");



                                  if (znak[i]==('s')||znak[i]==('S'))
                                       socket->write("... ");
                                  if(znak[i]==('t')||znak[i]==('T'))
                                      socket->write("- ");



                                      if (znak[i]==('u')||znak[i]==('U'))
                                           socket->write("..- ");
                                      if(znak[i]==('v')||znak[i]==('V'))
                                          socket->write("...- ");



                                          if (znak[i]==('w')||znak[i]==('W'))
                                               socket->write(".-- ");


                                          if (znak[i]==('x')||znak[i]==('X'))
                                               socket->write("-..- ");
                                          if(znak[i]==('y')||znak[i]==('Y'))
                                              socket->write("-.-- ");

                                          if (znak[i]==('z')||znak[i]==('Z'))
                                               socket->write("--.. ");
                                         if(znak[i]==('1'))
                                              socket->write(".---- ");
                                         if(znak[i]==('2'))
                                              socket->write("..--- ");
                                         if(znak[i]==('3'))
                                              socket->write("...-- ");
                                         if(znak[i]==('4'))
                                              socket->write("....- ");
                                         if(znak[i]==('5'))
                                              socket->write("..... ");
                                         if(znak[i]==('6'))
                                              socket->write("-.... ");
                                         if(znak[i]==('7'))
                                              socket->write("--... ");
                                         if(znak[i]==('8'))
                                              socket->write("---.. ");
                                         if(znak[i]==('9'))
                                              socket->write("----. ");
                                         if(znak[i]==('0'))
                                              socket->write("----- ");









    }
}


void chatPage::writeToSocket()
{
    text->setTextColor(QColor(0,0,0));
    if(settings->setCodeValue==true)
    {

    changeToCode();
    line->clear();
    }

    if (settings->setGraphicValue==true)
    {

        socket->write(line ->text().toUtf8());
        changeToGraphic();
        line -> clear();
    }
    if(settings->setDecodeValue==true)
    {
        socket->write(settings->getNick().toUtf8());
        socket->write(": ");

        changeToDecode();
        line->clear();
    }
    if(settings->setSoundValue==true)
    {


        socket->write(": ");
        socket->write(line ->text().toUtf8());
        changeToSound();
        line->clear();
    }
}



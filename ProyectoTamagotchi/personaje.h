#ifndef PERSONAJE_H
#define PERSONAJE_H
/***********/
#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>

/***********/
#include <QtCore>
#include <QDialog>
#include <iostream>
//#include <Qlabel>
#include <QSpinBox>


class MyTimerCoin : public QObject
{
    Q_OBJECT
public:
    MyTimerCoin()
    {
        timerCoin = new QTimer(this);
        connect(timerCoin,SIGNAL(timeout()),this,SLOT(MySlot()));
        timerCoin->start(6000);
    }

    QTimer *timerCoin;
public slots:
    bool MyCoin()
    {
        return true;
    }

};
class MyTimer : public QObject
{
    Q_OBJECT
public:
    MyTimer()
    {
        timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));
        timer->start(2000);
    }

    QTimer *timer;
public slots:
    bool MySlot()
    {
        return true;
    }

};

class Nodo
{
public:
    Nodo *sig;
    Nodo *ant;
    int valor;
    string ID;
    Nodo(int valor,string ID)
    {
        this->valor=valor;
        sig=NULL;
        ant=NULL;
        this->ID=ID;
    }

};
/////////////////////////////////


class Personaje
{

public:
    Personaje(string name, string typeOFChar);
    string name,typeOfChar;
    int life;
    MyTimerCoin *CoinTimer;
    MyTimer *myTimer;
    Nodo *vida,*TopHungry,*TopSnap,*TopSick,*TopBath,*TopReceivedCoins,*TopGiftCoins;
    int SizeHungry,SizeSnap,SizeSick,SizeBath,SizeReceived,SizeGift;

    int NumAchiev;

    void Stats();

    void FunctionTimerSixSec();
    void FunctionTimerTwoSec();

    int getHungrySize(){return SizeHungry;}

    string SendCoin(string regalador);
    void WinCoin();
    void OpenReceiveCoin();
    void ReceiveCoin(string typeCoin, string regalador);


    bool Output(Nodo *tipoNodo);
    void Input(Nodo* nodo,string tipoNodo);
    void Damage();
private slots:

private:

};
#endif // PERSONAJE_H

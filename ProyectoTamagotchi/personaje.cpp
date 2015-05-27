#include "personaje.h"

Personaje::Personaje(string name,string typeOfChar)
{


    vida=NULL;
    life=100;
    NumAchiev=0;
    this->name=name;
    this->typeOfChar=typeOfChar;


    TopHungry=NULL;
    TopSnap=NULL;
    TopSick=NULL;
    TopBath=NULL;
    TopReceivedCoins=NULL;
    TopGiftCoins=NULL;

    SizeHungry=0;
    SizeSnap=0;
    SizeSick=0;
    SizeBath=0;
    SizeReceived=0;
    SizeGift=0;
}


void Personaje::Stats()
{
    //GULA,INSOMNIO,INPARASITABLE,SEPULCRO

        if(this->typeOfChar=="GULA")
        {
            Input(new Nodo(SizeBath+1,""),"BATH");
            Input(new Nodo(SizeSick+1,""),"SICK");
            Input(new Nodo(SizeSnap+1,""),"SNAP");
            Input(new Nodo(SizeBath+1,""),"BATH");
            Input(new Nodo(SizeSick+1,""),"SICK");
            Input(new Nodo(SizeSnap+1,""),"SNAP");
            Input(new Nodo(SizeHungry+1,""),"HUNGRY");
        }
        else if(this->typeOfChar == "INSOMNIO")
        {
            Input(new Nodo(SizeSick+1,""),"SICK");
            Input(new Nodo(SizeSick+1,""),"SICK");
            Input(new Nodo(SizeSnap+1,""),"SNAP");
;
            Input(new Nodo(SizeBath+1,""),"BATH");
            Input(new Nodo(SizeBath+1,""),"BATH");
            Input(new Nodo(SizeHungry+1,""),"HUNGRY");
            Input(new Nodo(SizeHungry+1,""),"HUNGRY");
        }
        else if(this->typeOfChar == "INPARASITABLE")
        {
            Input(new Nodo(SizeSick+1,""),"SICK");

            Input(new Nodo(SizeSnap+1,""),"SNAP");
            Input(new Nodo(SizeSnap+1,""),"SNAP");
            Input(new Nodo(SizeBath+1,""),"BATH");
            Input(new Nodo(SizeBath+1,""),"BATH");
            Input(new Nodo(SizeHungry+1,""),"HUNGRY");
            Input(new Nodo(SizeHungry+1,""),"HUNGRY");
        }
        else if(this->typeOfChar == "SEPULCRO")
        {
            Input(new Nodo(SizeSick+1,""),"SICK");
            Input(new Nodo(SizeSick+1,""),"SICK");
            Input(new Nodo(SizeSnap+1,""),"SNAP");
            Input(new Nodo(SizeSnap+1,""),"SNAP");

            Input(new Nodo(SizeBath+1,""),"BATH");
            Input(new Nodo(SizeHungry+1,""),"HUNGRY");
            Input(new Nodo(SizeHungry+1,""),"HUNGRY");
        }


}


bool Personaje::Output(Nodo *Type)
{
    if(Type==TopHungry)
        {
            if(TopHungry && SizeHungry>0)
            {
                Nodo *top= TopHungry;
                TopHungry=TopHungry->ant;
                delete top;
                SizeHungry--;
                return true;

            }
        }
        else if(Type==TopBath)
        {
            if(TopBath && SizeBath>0)
            {
                Nodo *top= TopBath;
                TopBath=TopBath->ant;
                delete top;
                SizeBath--;
                return true;

            }
        }
        else if(Type==TopSick)
        {
            if(TopSick && SizeSick>0)
            {
                Nodo *top= TopSick;
                TopSick=TopSick->ant;
                delete top;
                SizeSick--;
                return true;
            }
        }
        else if(Type==TopSnap)
        {
            if(TopSnap && SizeSnap>0)
            {
                Nodo *top= TopSnap;
                TopSnap=TopSnap->ant;
                delete top;
                SizeSnap--;
                return true;
            }
        }
        else if(Type==TopReceivedCoins)
        {
            if(TopReceivedCoins && SizeReceived>0)
            {
                Nodo *top= TopReceivedCoins;
                TopReceivedCoins=TopReceivedCoins->ant;
                delete top;
                SizeReceived--;
                return true;
            }
        }
        else if(Type==TopGiftCoins)
        {
            if(TopGiftCoins && SizeGift>0)
            {
                Nodo *top= TopGiftCoins;
                TopGiftCoins=TopGiftCoins->ant;
                delete top;
                SizeGift--;
                return true;
            }
        }
        return false;
}


void Personaje::Input(Nodo* nodo,string Type)
{
    if(Type=="HUNGRY")
        {
            if(TopHungry)
            {
                nodo->ant = TopHungry;
            }
            TopHungry = nodo;
            SizeHungry++;
        }
        else if(Type=="SICK")
        {
            if(TopSick)
            {
                nodo->ant = TopSick;\
            }
            TopSick = nodo;
            SizeSick++;
        }
        else if(Type=="BATH")
        {
            if(TopBath)
            {
                nodo->ant = TopBath;
            }
            TopBath = nodo;
            SizeBath++;
        }
        else if(Type=="SNAP")
        {
            if(TopSnap)
            {
                nodo->ant = TopSnap;
            }
            TopSnap = nodo;
            SizeSnap++;
        }
        else if(Type=="GIFTCOINS")
        {
            if(TopGiftCoins)
            {
                nodo->ant = TopGiftCoins;
            }
            TopGiftCoins= nodo;
            SizeGift++;
        }
        else if(Type=="RECEIVEDCOINS")
        {
            if(TopReceivedCoins)
            {
                nodo->ant = TopReceivedCoins;
            }
            TopReceivedCoins=nodo;
            SizeReceived++;
        }
}


void Personaje::Damage()
{
    int TotalDamage=0;

        if(SizeBath>0)
        {
            Nodo* print= TopBath;
            for(int x=0; x< SizeBath; x++)
            {
                TotalDamage=+print->valor;
                print = print->ant;
            }
        }
        if(SizeHungry>0)
        {
            Nodo* print= TopHungry;
            for(int x=0; x< SizeHungry; x++)
            {
                TotalDamage=+print->valor;
                print = print->ant;
            }
        }
        if(SizeSick>0)
        {
            Nodo* print= TopSick;
            for(int x=0; x< SizeSick; x++)
            {
                TotalDamage=+print->valor;
                print = print->ant;
            }
        }if(SizeSnap>0)
        {
            Nodo* print= TopSnap;
            for(int x=0; x< SizeSnap; x++)
            {
                TotalDamage=+print->valor;
                print = print->ant;
            }
        }

       life=-TotalDamage;

}


void Personaje::FunctionTimerSixSec()
{
    if(CoinTimer)
    {
        WinCoin();
        Damage();
    }

}


void Personaje::FunctionTimerTwoSec()
{

    Stats();
}



///LOGICA DE LAS MONEDAS
string Personaje::SendCoin(string friendName)
{
    if(friendName!=this->name)
    {
        int numRand = rand() % 4 + 1;
        switch(numRand)
        {
            case 1:
                Output(TopGiftCoins);
                return "BATH";
            case 2:
                Output(TopGiftCoins);
                return "HUNGRY";
            case 3:
                Output(TopGiftCoins);
                return "SICK";
            case 4:
                Output(TopGiftCoins);
                return "SNAP";
        }
    }
    return "";
}

void Personaje::WinCoin()
{

        if(NumAchiev=0 && SizeBath>1 || SizeHungry>0 || SizeSick>0 || SizeSnap>0)
        {
            NumAchiev=+1;
            Input(new Nodo(SizeGift+1,""),"GIFTCOINS");
        }
        else if(NumAchiev=1 && SizeBath>1 || SizeHungry>1 || SizeSick>1 || SizeSnap>1)
        {
            NumAchiev=+1;
            Input(new Nodo(SizeGift+1,""),"GIFTCOINS");
        }
        else if(NumAchiev=2 && SizeBath>2 || SizeHungry>2 || SizeSick>2 || SizeSnap>2)
        {
            NumAchiev=+1;
            Input(new Nodo(SizeGift+1,""),"GIFTCOINS");
        }
        else if(NumAchiev=3 && SizeBath>3 || SizeHungry>4 || SizeSick>3 || SizeSnap>4)
        {
            NumAchiev=+1;
            Input(new Nodo(SizeGift+1,""),"GIFTCOINS");
        }
        else if(NumAchiev=4 && SizeBath==5 || SizeHungry==5 || SizeSick==5 || SizeSnap==5)
        {
            NumAchiev=+1;
            Input(new Nodo(SizeGift+1,""),"GIFTCOINS");
        }


}


void Personaje::OpenReceiveCoin()
{
    if(TopReceivedCoins)
        {
            if(TopReceivedCoins->ID=="BATH")
            {
                Output(TopReceivedCoins);
                Output(TopBath);

            }

            else if(TopReceivedCoins->ID=="SICK")
            {
                Output(TopReceivedCoins);
                Output(TopSick);

            }

            else if(TopReceivedCoins->ID=="SNAP")
            {
                Output(TopReceivedCoins);
                Output(TopSnap);

            }

            else if(TopReceivedCoins->ID=="HUNGRY")
            {
                Output(TopReceivedCoins);
                Output(TopHungry);

            }

        }
}

void Personaje::ReceiveCoin(string typeCoin, string regalador)
{
    Input(new Nodo(SizeGift+1,typeCoin),"RECEIVEDCOINS");
}



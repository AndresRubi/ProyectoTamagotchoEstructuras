#include "tamagotchi.h"
#include "ui_tamagotchi.h"

Tamagotchi::Tamagotchi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tamagotchi)
{
    ui->setupUi(this);
    personajes.push_back(new Personaje("pancho","GULA"));
}

Tamagotchi::~Tamagotchi()
{
    delete ui;
}

void Tamagotchi::on_pushHungry_clicked()
{
    for(list<Personaje*>::iterator p=personajes.begin();
                    p!=personajes.end();
                    p++)
    {
        (*p)->Input(new Nodo((*p)->getHungrySize()+1,""),"HUNGRY");
        ui->spinBox->setValue((*p)->getHungrySize());
    }
}

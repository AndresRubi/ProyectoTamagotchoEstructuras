#ifndef TAMAGOTCHI_H
#define TAMAGOTCHI_H

#include <QWidget>

#include <list>
#include <QDialog>
#include <iostream>
//#include <Qlabel>
#include <QSpinBox>
#include <personaje.h>


namespace Ui {
class Tamagotchi;
}

class Tamagotchi : public QWidget
{
    Q_OBJECT

public:
    explicit Tamagotchi(QWidget *parent = 0);
    ~Tamagotchi();
    list<Personaje* > personajes;

private:
    Ui::Tamagotchi *ui;

private slots:
    void on_pushHungry_clicked();
};

#endif // TAMAGOTCHI_H

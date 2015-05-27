/********************************************************************************
** Form generated from reading UI file 'tamagotchi.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAMAGOTCHI_H
#define UI_TAMAGOTCHI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tamagotchi
{
public:
    QPushButton *pushHungry;
    QSpinBox *spinBox;

    void setupUi(QWidget *Tamagotchi)
    {
        if (Tamagotchi->objectName().isEmpty())
            Tamagotchi->setObjectName(QStringLiteral("Tamagotchi"));
        Tamagotchi->resize(640, 480);
        pushHungry = new QPushButton(Tamagotchi);
        pushHungry->setObjectName(QStringLiteral("pushHungry"));
        pushHungry->setGeometry(QRect(20, 270, 85, 27));
        spinBox = new QSpinBox(Tamagotchi);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(110, 270, 44, 27));

        retranslateUi(Tamagotchi);

        QMetaObject::connectSlotsByName(Tamagotchi);
    } // setupUi

    void retranslateUi(QWidget *Tamagotchi)
    {
        Tamagotchi->setWindowTitle(QApplication::translate("Tamagotchi", "Form", 0));
        pushHungry->setText(QApplication::translate("Tamagotchi", "Hungry", 0));
    } // retranslateUi

};

namespace Ui {
    class Tamagotchi: public Ui_Tamagotchi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAMAGOTCHI_H

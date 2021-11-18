#ifndef PLAYER_H
#define PLAYER_H
#include <QImage>
#include <QPixmap>
#include <QString>
#include <string>
#include <QPixmap>
#include <iostream>
#include "inventarliste.h"


class Player
{
private:
    int m_y_Koordinate;
    int m_x_Koordinate;
    unsigned int m_rowStart;
    unsigned int m_colStart;
    int m_goldvorrat;
    int m_leben;
    QString m_spielerBild;
    InventarListe m_waffen;
    InventarListe m_lebensmittel;
    InventarListe m_gesamt;


public:
    Player(int x = 0, int y = 0);
    ~Player();
    void setPosition(int x, int y);
    void setSpielerBild(QString bild);
    int getPositionX();
    int getPositionY();
    void setStatus(int gold, int gesundheit);
    void setGold(int gold);
    void setGoldAbsolut(int gold);
    void setLebenAbsolut(int leben);
    void setLeben(int leben);
    int getGoldvorrat();
    int getGesundheit();
    int getStartRow();
    int getStartCol();
    void spielerBewegen(QString eingabe, int nrRows, int nrCols);
    QString getSpielerBild();
    void clearInventar();
    void pushFrontInventar(Inventar *element);
    const Inventar *getElement(unsigned int index);
    void remove(unsigned int index);
};

#endif // PLAYER_H

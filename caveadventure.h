#ifndef CAVEADVENTURE_H
#define CAVEADVENTURE_H
#include "player.h"
#include "world.h"
#include <string>
#include <QString>

class CaveAdventure
{
public:
    CaveAdventure(int rows, int cols, QString bild, QString path);
    ~CaveAdventure();
    bool getGameResult();
    int getGameStatus();
    void getAndProcessUserInput(QString button);
    int getPlayerRow();
    int getPlayerCol();
    int getPlayerPos();
    int getNrRows();
    int getNrCols();
    int getGold();
    void setGold(int gold);
    void setLeben(int leben);
    void setGoldAbsolut(int gold);
    void setLebenAbsolut(int leben);
    int getLeben();
    void setStartPosWorld(int row, int col);
    QString getRoomText(int pos);
    QString getPlayerImage();
    QString getRoomImage();
    bool getHaendler();
    enum Status {laufend, gewonnen, verloren};
    void clearInventar();
    void pushFrontInventar(Inventar *element);
    const Inventar *getElement(unsigned int index);
    void removeInventar(unsigned int index);
    QString getSound();
    int setStartRowFromWorld();
    int setStartColFromWorld();

private:
    Player m_player;
    World m_world;
    void doOneStep(char action);
};

#endif // CAVEADVENTURE_H

#ifndef WORLD_H
#define WORLD_H

#include <room.h>
#include <QString>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <QStringList>

class World
{
public:
    World(int nrRows, int nrCols, QString path);
    ~World();
    int getNrRows();
    int getNrCols();

    QString getAusgabe(int pos);
    Room *getRoomAt(int row, int col);
    bool getUndefinedRoom(int pos);

    void setRoomsRandomly(int startRow, int startCol);
    void setRoomsByFile(QString path);
    int getPosAusgang();
    int getGold(int pos);
    int getLeben(int pos);
    QString getBildText(int pos);
    bool getHaendler(int pos);
    QString getSoundText(int pos);
    void setStartPos(int row, int col);
    void generateRoomsFromFile(QString line);
    int setStartRow();
    int setStartCol();

private:
    int m_nrRows;
    int m_nrCols;
    int m_rowStart;
    int m_colStart;
    QString m_ausgabe;
    Room **m_rooms;
    int m_posAusgang;
    const QString m_path;
    std::fstream m_stream;

};

#endif // WORLD_H

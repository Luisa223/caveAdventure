#ifndef ROOM_H
#define ROOM_H
#include <QString>
#include <ctime>
#include "creature.h"

class Room
{
public:
    Room();
    virtual ~Room();
    virtual QString getEntryText() = 0;
    virtual int getInteraction() = 0;
    virtual QString getBildText() = 0;
    virtual void setBetreten(bool betreten) = 0;
    QString getSoundText();
    bool getbereitsBelegt();
    void setBelegt(bool belegt);
protected:
    QString m_entryText;
    QString m_textBetreten;
    bool m_betreten;
    QString m_bildText;
    QString m_soundText;
    bool m_schonBelegt;
};

class RoomEmpty : public Room
{
public:
    RoomEmpty();
    QString getEntryText();
    int getInteraction();
    QString getBildText();
    void setBetreten(bool betreten);
};

class RoomEntry : public Room
{
public:
    RoomEntry();
    QString getEntryText();
    int getInteraction();
    QString getBildText();
    void setBetreten(bool betreten);
};

class RoomExit : public Room
{
public:
    RoomExit();
    QString getEntryText();
    int getInteraction();
    QString getBildText();
    void setBetreten(bool betreten);
};

class RoomGold : public Room
{
private:
    int m_goldAnzahl;
public:
    RoomGold();
    int getInteraction() ;
    QString getEntryText() ;
    QString getBildText();
    void setBetreten(bool betreten);
};

class RoomTrader : public Room
{
public:
    RoomTrader();
    int getInteraction();
    QString getEntryText();
    QString getBildText();
    void setBetreten(bool betreten);
};

class RoomCreature : public Room
{
public:
    RoomCreature();
    ~RoomCreature();
    int getInteraction();
    QString getEntryText();
    QString getBildText();
    void setBetreten(bool betreten);
private:
    Creature *m_kreatur;
};

#endif // ROOM_H

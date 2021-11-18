#include "room.h"
#include <ctime>

using namespace std;

Room::Room()
{
    m_betreten = false;
    m_bildText = "";
    m_soundText = "";
    m_schonBelegt = false;
}

Room::~Room()
{

}

QString Room::getSoundText()
{
    return m_soundText;
}

bool Room::getbereitsBelegt()
{
    return m_schonBelegt;
}

void Room::setBelegt(bool belegt)
{
    m_schonBelegt = belegt;
}

RoomEmpty::RoomEmpty()
{
    m_entryText = "Hier ist nichts!";
    m_schonBelegt = true;
}

QString RoomEmpty::getEntryText()
{
    return m_entryText;
}

int RoomEmpty::getInteraction()
{
    return 0;
}

QString RoomEmpty::getBildText()
{
    return m_bildText;
}

void RoomEmpty::setBetreten(bool betreten)
{
    m_betreten = betreten;
}

RoomEntry::RoomEntry()
{
    m_entryText = "Du bist am Eingang";
    m_schonBelegt = true;
}

QString RoomEntry::getEntryText()
{
    return m_entryText;
}

int RoomEntry::getInteraction()
{
    return 0;
}

QString RoomEntry::getBildText()
{
    return m_bildText;
}

void RoomEntry::setBetreten(bool betreten)
{
    m_betreten = betreten;
}

RoomExit::RoomExit()
{
    m_entryText = "Du hast den Ausgang gefunden!";
    m_schonBelegt = true;
}

QString RoomExit::getEntryText()
{
    return m_entryText;
}

int RoomExit::getInteraction()
{
    return 0;
}

QString RoomExit::getBildText()
{
    return m_bildText;
}

void RoomExit::setBetreten(bool betreten)
{
    m_betreten = betreten;
}

RoomGold::RoomGold()
{
    m_textBetreten = "Du warst schon einmal hier - leider kein Gold mehr da!";
    m_goldAnzahl = rand()%10 + 1;
    m_entryText = "Du hast " + QString::number(m_goldAnzahl) + " Gold gefunden!";
    m_bildText = "gold";
    m_soundText = "coinSound";
    m_schonBelegt = true;
}

int RoomGold::getInteraction()
{
    if(!m_betreten)
    {

        return m_goldAnzahl;
    }
    else {
        m_bildText = "goldWeg";
        return 0;
    }

}

QString RoomGold::getEntryText()
{
    if(!m_betreten)
    {
        m_betreten = true;    
        return m_entryText;
    }
    else
    {
        m_bildText = "goldWeg";
        return m_textBetreten;
    }
}

QString RoomGold::getBildText()
{
    return m_bildText;
}

void RoomGold::setBetreten(bool betreten)
{
    m_betreten = betreten;
}

RoomTrader::RoomTrader()
{
    m_entryText = "Hier ist ein Händler!";
    m_bildText = "haendler";
    m_schonBelegt = true;
}

QString RoomTrader::getEntryText()
{
    return m_entryText;
}

int RoomTrader::getInteraction()
{
    return 0;
}

QString RoomTrader::getBildText()
{
    return m_bildText;
}

void RoomTrader::setBetreten(bool betreten)
{
    m_betreten = betreten;
}

RoomCreature::RoomCreature()
{
    switch(rand()%4)
    {
    case 0: m_kreatur = new Vampir();
        break;
    case 1: m_kreatur = new Alien();
        break;
    case 2: m_kreatur = new Zombie();
        break;
    case 3: m_kreatur = new Monster();
        break;
    }
     m_entryText = m_kreatur->gettext();
     m_bildText = m_kreatur->getBild();
     m_schonBelegt = true;
}

RoomCreature::~RoomCreature()
{
    delete m_kreatur;
}

QString RoomCreature::getEntryText()
{
    return m_entryText;
}

int RoomCreature::getInteraction()
{
    if(!m_betreten)
    {
        m_betreten = true;    
    }

    return m_kreatur->lebenAbziehen();
}

QString RoomCreature::getBildText()
{
    return m_bildText;
}

void RoomCreature::setBetreten(bool betreten)
{
    m_betreten = betreten;
}


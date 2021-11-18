#include "creature.h"

Creature::Creature()
{
    if(rand()%2)
        m_hungrig = true;
    else {
        m_hungrig = false;
    }
    m_minus = (rand()%5+1)*-1;
}

Creature::~Creature()
{

}

QString Creature::getBild()
{
    return m_bild;
}

QString Creature::gettext()
{
    return m_text;
}

int Creature::lebenAbziehen()
{
    return m_minus;
}

Monster::Monster()
{
    m_text = "Ein Monster greift dich an!" + QString::number(m_minus) + " Leben!";
    m_bild = "monster";
}

Vampir::Vampir()
{
    m_text = "Ein Vampir greift dich an!" + QString::number(m_minus) + " Leben!";
    m_bild = "vampir";
}

Zombie::Zombie()
{
    m_text = "Ein Zombie greift dich an!" + QString::number(m_minus) + " Leben!";
    m_bild = "zombie";
}

Alien::Alien()
{
    m_text = "Ein Alien greift dich an!" + QString::number(m_minus) + " Leben!";
    m_bild = "alien";
}


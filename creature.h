#ifndef CREATURE_H
#define CREATURE_H
#include <QString>

class Creature
{
public:
    Creature();
    virtual ~Creature();
    int lebenAbziehen();
    QString gettext();
    QString getBild();
protected:
    int m_minus;
    QString m_text;
    QString m_bild;
    bool m_hungrig;
};

class Monster: public Creature
{
public:
    Monster();
};

class Vampir: public Creature
{
public:
    Vampir();
};

class Alien: public Creature
{
public:
    Alien();
};

class Zombie: public Creature
{
public:
    Zombie();
};

#endif // CREATURE_H

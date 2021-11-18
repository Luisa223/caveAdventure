#ifndef INVENTAR_H
#define INVENTAR_H
#include <QString>

class Inventar
{
public:
    Inventar();
    void setNext(Inventar *element);
    Inventar *getNext();
    int getStaerke();
    int getPreis();
    QString getPixmapText();
private:

protected:
    int m_preis;
    int m_wert;
    QString m_name;
    Inventar *m_pNext;
    QString m_pixmapText;

};

class Waffen : public Inventar
{
protected:
    QString m_beschreibung;
public:
    Waffen();

};

class Schwert : public Waffen
{
public:
    Schwert();

};

class Futter : public Waffen
{
public:
    Futter();
};

class Stein : public Waffen
{
public:
    Stein();
};

class Lebensmittel : public Inventar
{
public:
    Lebensmittel();
 // wie viele Leben man dadurch kriegt
};

class Zaubertrank : public Lebensmittel
{
public:
    Zaubertrank();

};

class Donut : public Lebensmittel
{
public:
    Donut();

};

class Bonbon : public Lebensmittel
{
 public:
    Bonbon();
};

#endif // INVENTAR_H

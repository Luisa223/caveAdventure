#include "inventar.h"

#define LEBENDONUT 3
#define PREISDONUT 1
#define LEBENBONBON 2
#define PREISBONBON 1
#define LEBENZAUBER 5
#define PREISZAUBER 1

#define STAERKESCHWERT 10
#define PREISSCHWERT 1
#define STAERKEFUTTER 5
#define PREISFUTTER 1
#define STAERKESTEIN 3
#define PREISSTEIN 1

Inventar::Inventar()
{
    m_pNext = nullptr;
}

void Inventar::setNext(Inventar *element)
{
    m_pNext = element;
}

Inventar* Inventar::getNext()
{
   return m_pNext;
}

QString Inventar::getPixmapText()
{
    return m_pixmapText;
}

Waffen::Waffen()
{

}

int Inventar::getStaerke()
{
    return m_wert;
}

int Inventar::getPreis()
{
    return m_preis;
}

Schwert::Schwert()
{
    m_wert = STAERKESCHWERT;
    m_preis = PREISSCHWERT;
    m_pixmapText = "schwert";
}

Futter::Futter()
{
    m_wert = STAERKEFUTTER;
    m_preis = PREISFUTTER;
    m_pixmapText = "futter";
}

Stein::Stein()
{
    m_wert = STAERKESTEIN;
    m_preis = PREISSTEIN;
    m_pixmapText = "stein";
}

Lebensmittel::Lebensmittel()
{

}


Zaubertrank::Zaubertrank()
{
    m_wert = LEBENZAUBER;
    m_preis = PREISZAUBER;
    m_pixmapText = "zaubertrank";
}

Donut::Donut()
{
    m_wert = LEBENDONUT;
    m_preis = PREISDONUT;
    m_pixmapText = "donut";
}

Bonbon::Bonbon()
{
    m_wert = LEBENBONBON;
    m_preis = PREISBONBON;
    m_pixmapText = "bonbon";
}

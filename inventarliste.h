#ifndef INVENTARLISTE_H
#define INVENTARLISTE_H
#include "inventar.h"
#include <QString>

class InventarListe
{
public:
    InventarListe();
    void clear();
    void pushFront(Inventar *element);
    Inventar *getElement(unsigned int index);
    unsigned int size();


    void remove(unsigned int index);
    Inventar* getAnker();

private:
    Inventar *m_anker = nullptr;

};

#endif // INVENTARLISTE_H

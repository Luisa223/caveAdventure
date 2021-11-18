#include "inventarliste.h"

InventarListe::InventarListe()
{

}

void InventarListe::clear()
{
    Inventar* inventar = nullptr;

    while(m_anker != nullptr)
    {
        inventar = m_anker;
        m_anker = inventar->getNext();
        delete inventar;
    }

}

void InventarListe::pushFront(Inventar *element)
{
    if(element == nullptr)
    {
        return;
    }
    element->setNext(m_anker);
    m_anker = element;
}

Inventar* InventarListe::getElement(unsigned int index)
{
    Inventar* inventar = m_anker;
    for(int i = 0; i < index; i++)
    {
        inventar = inventar->getNext();
    }
    return inventar;
}

unsigned int InventarListe::size()
{
    unsigned int zaehler = 0;
    for(Inventar* it = m_anker; it != nullptr; it = it->getNext())
    {
        zaehler++;
    }
    return zaehler;
}

void InventarListe::remove(unsigned int index)
{

    if(index == 0)
    {
        Inventar* inventar = m_anker;
        m_anker = inventar->getNext();
        delete inventar;
    }
    else {
        int tempIndex = 0;
        Inventar* inventar = m_anker;
        while(inventar->getNext() != nullptr && tempIndex < index-1)
        {
            inventar = inventar->getNext();
            tempIndex++;
        }
        Inventar *temp = inventar->getNext();
        inventar->setNext(temp->getNext());
        delete temp;
    }
}


Inventar* InventarListe::getAnker()
{
    return m_anker;
}

#include "world.h"
#include <room.h>

using namespace std;

World::World(int nrRows, int nrCols, QString path) : m_nrRows(nrRows), m_nrCols(nrCols), m_path(path)
{
    if(path == nullptr)
    {
        m_nrRows = (rand()%15)+1;
        m_nrCols = (rand()%15)+1;
        setRoomsRandomly(m_nrRows, m_nrCols);
    }

    else {
        setRoomsByFile(path);
    }
}

World::~World()
{
    for(int i = 0; i < m_nrCols*m_nrRows; i++)
    {
        delete m_rooms[i];
    }
    delete [] m_rooms;
}
int World::getNrRows()
{
    return m_nrRows;
}

int World::getNrCols()
{
    return m_nrCols;
}

Room* World::getRoomAt(int row, int col)
{
    return m_rooms[col + m_nrCols*row];
}

bool World::getUndefinedRoom(int pos)
{
    if(m_rooms[pos] == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }

}

void World::setRoomsByFile(QString path)
{
    m_rooms = new Room *[m_nrRows*m_nrCols];

    for(int i = 0; i < m_nrRows*m_nrCols; i++)
    {
        m_rooms[i] = nullptr;
    }

    m_stream.open(m_path.toStdString().c_str());
    char line[20];
    int counter = 0;
    int j = 0;
    QString temp;
    if(m_stream.is_open())
    {
        while(m_stream.getline(line, 20))
        {
            temp = line;
            if(counter >= 3 && j < m_nrRows*m_nrCols)
            {
                    for (int i = 0;i < temp.size(); i++)
                    {
                        if(temp[i] == "X")
                        {
                            m_rooms[j] = new RoomEmpty();
                            j++;
                        }
                        if(temp[i] == "H")
                        {
                            m_rooms[j] = new RoomTrader();
                            j++;
                        }
                        if(temp[i] == "G")
                        {
                            m_rooms[j] = new RoomGold();
                            j++;
                        }
                        if(temp[i] == "M")
                        {
                            m_rooms[j] = new RoomCreature();
                            j++;
                        }
                        if(temp[i] == "A")
                        {
                            m_rooms[j] = new RoomExit();
                            m_posAusgang = j;
                            j++;
                        }
                        if(temp[i] == "E")
                        {
                            m_rooms[j] = new RoomEntry();
                            m_colStart = j % m_nrCols;
                            m_rowStart = (j - m_colStart) / m_nrCols;
                            j++;
                        }


                // generateRoomsFromFile(line);

                    }

            }
            counter++;


        }
        m_stream.close();
    }
}

void World::generateRoomsFromFile(QString line)
{
    for(int j = 0; j < m_nrCols*m_nrRows; j++)
    {
        for (int i = 0;i < line.size(); i++)
        {
            if(line[i] == "X")
            {
                m_rooms[j] = new RoomEmpty();
            }
            if(line[i] == "H")
            {
                m_rooms[j] = new RoomTrader();
            }
            if(line[i] == "G")
            {
                m_rooms[j] = new RoomGold();
            }
            if(line[i] == "M")
            {
                m_rooms[j] = new RoomCreature();
            }
            if(line[i] == "A")
            {
                m_rooms[j] = new RoomExit();
            }
            if(line[i] == "E")
            {
                m_rooms[j] = new RoomEntry();
            }

        }
    }
}

void World::setRoomsRandomly(int startRow, int startCol)
{
    //srand(time(nullptr));
    m_rooms = new Room *[m_nrRows*m_nrCols];

    for(int i = 0; i < m_nrRows*m_nrCols; i++)
    {
        m_rooms[i] = nullptr;
    }
    m_rooms[m_colStart + m_nrCols*m_rowStart] = new RoomEntry();

    do
    {
        m_posAusgang = rand()%m_nrRows*m_nrCols;
    }
    while(!getUndefinedRoom(m_posAusgang));
    //while(m_rooms[m_posAusgang]->getbereitsBelegt());
    m_rooms[m_posAusgang] = new RoomExit();

    for(int i = 0; i < m_nrRows*m_nrCols; i++)
    {
        if(getUndefinedRoom(i))
        //if(!m_rooms[i]->getbereitsBelegt())
        {
            switch(rand()%10)
            {
            case 0:
                m_rooms[i] = new RoomGold();
                //m_rooms[i]->setBelegt(true);
                break;
            case 1:
                m_rooms[i] = new RoomEmpty();
                //m_rooms[i]->setBelegt(true);
                break;
            case 2:
                m_rooms[i] = new RoomCreature();
                //m_rooms[i]->setBelegt(true);
                break;
            case 3:
                m_rooms[i] = new RoomTrader();
                break;
            case 4:
                m_rooms[i] = new RoomEmpty();
                break;
            case 5:
                m_rooms[i] = new RoomEmpty();
                break;
            case 6:
                m_rooms[i] = new RoomCreature();
                break;
            case 7:
                m_rooms[i] = new RoomCreature();
                break;
            case 8:
                m_rooms[i] = new RoomEmpty();
                break;
            case 9:
                m_rooms[i] = new RoomGold();
                break;
            }
        }
    }
}

QString World::getAusgabe(int pos)
{
    return m_rooms[pos]->getEntryText();
}

int World::getPosAusgang()
{
    return m_posAusgang;
}

int World::getGold(int pos)
{
    if(dynamic_cast<RoomGold*>(m_rooms[pos]))
    {
        return m_rooms[pos]->getInteraction();
    }
    else
        return 0;
}

int World::getLeben(int pos)
{
    if(dynamic_cast<RoomCreature*>(m_rooms[pos]))
    {
        return m_rooms[pos]->getInteraction();
    }
    else {
        return 0;
    }
}

QString World::getBildText(int pos)
{
    return m_rooms[pos]->getBildText();
}

bool World::getHaendler(int pos)
{
    if(dynamic_cast<RoomTrader*>(m_rooms[pos]))
        return true;
    else {
        return false;
    }
}

QString World::getSoundText(int pos)
{
    return m_rooms[pos]->getSoundText();
}

void World::setStartPos(int row, int col)
{
    m_rowStart = row;
    m_colStart = col;
}

int World::setStartRow()
{
    return m_rowStart;
}
int World::setStartCol()
{
    return m_colStart;
}

#include "caveadventure.h"

CaveAdventure::CaveAdventure(int rows, int cols, QString bild, QString path) : m_world(rows, cols, path)
{
    m_player.setSpielerBild(bild);
}

CaveAdventure::~CaveAdventure()
{

}

bool CaveAdventure::getGameResult()
{
   if(getGameStatus() == gewonnen)
   {
       return true;
   }
   else
   {
       return false;
   }
}

void CaveAdventure::getAndProcessUserInput(QString button)
{
    m_player.spielerBewegen(button, m_world.getNrRows(), m_world.getNrCols());
}

int CaveAdventure::getPlayerRow()
{
    return m_player.getPositionX();
}

int CaveAdventure::getPlayerCol()
{
    return m_player.getPositionY();
}

int CaveAdventure::getNrRows()
{
    return m_world.getNrRows();
}

int CaveAdventure::getNrCols()
{
    return m_world.getNrCols();
}

int CaveAdventure::getGold()
{
    return m_player.getGoldvorrat();
}

int CaveAdventure::getLeben()
{
    return m_player.getGesundheit();
}

void CaveAdventure::setStartPosWorld(int row, int col)
{
    //m_world.setStartPos(row, col);
    m_player.setPosition(row, col);
}

QString CaveAdventure::getRoomText(int pos)
{
    m_player.setGold(m_world.getGold(pos));
    m_player.setLeben(m_world.getLeben(pos));
    return m_world.getAusgabe(pos);
}

QString CaveAdventure::getPlayerImage()
{
    return m_player.getSpielerBild();
}

int CaveAdventure::getGameStatus()
{
    if(m_world.getPosAusgang() == getPlayerPos())
    {
        return gewonnen;
    }
    else if(m_player.getGesundheit() <= 0)
    {
        return verloren;
    }
    else
    {
        return laufend;
    }
}

int CaveAdventure::getPlayerPos()
{
    return m_player.getPositionY()+m_world.getNrCols()*m_player.getPositionX();
}

void CaveAdventure::setGold(int pos)
{
    m_player.setGold(m_world.getGold(pos));
}

void CaveAdventure::setLeben(int pos)
{
    m_player.setLeben(m_world.getLeben(pos));
}

void CaveAdventure::setGoldAbsolut(int gold)
{
    m_player.setGoldAbsolut(gold);
}

void CaveAdventure::setLebenAbsolut(int leben)
{
    m_player.setLebenAbsolut(leben);
}

QString CaveAdventure::getRoomImage()
{
//    if(m_world.getBildText(getPlayerPos()) == "")
//    {
//        return m_player.getSpielerBild();
//    }
//    else {
        return m_world.getBildText(getPlayerPos());

}

bool CaveAdventure::getHaendler()
{
    return m_world.getHaendler(getPlayerPos());
}

void CaveAdventure::clearInventar()
{
    m_player.clearInventar();
}

void CaveAdventure::pushFrontInventar(Inventar *element)
{
    m_player.pushFrontInventar(element);
}

const Inventar *CaveAdventure::getElement(unsigned int index)
{
    return m_player.getElement(index);
}

void CaveAdventure::removeInventar(unsigned int index)
{
    m_player.remove(index);
}

QString CaveAdventure::getSound()
{
    return m_world.getSoundText(getPlayerPos());
}

int CaveAdventure::setStartRowFromWorld()
{
    return m_world.setStartRow();
}

int CaveAdventure::setStartColFromWorld()
{
    return m_world.setStartCol();
}

#include "player.h"

#define STARTLEBEN 100
#define STARTGOLD 5


using namespace std;

Player::Player(int x, int y)
{
    setPosition(x,y);
    m_goldvorrat = STARTGOLD;
    m_leben = STARTLEBEN;
}

Player::~Player()
{

}

void Player::setPosition(int x, int y)
{
    m_y_Koordinate = x;
    m_x_Koordinate = y;
}

int Player::getPositionX()
{
    return m_y_Koordinate;
}

int Player::getPositionY()
{
    return m_x_Koordinate;
}

int Player::getStartRow()
{
    return m_rowStart;
}

int Player::getStartCol()
{
    return m_colStart;
}

void Player::setStatus(int gold, int gesundheit)
{
    m_goldvorrat = gold;
    m_leben = gesundheit;
}

int Player::getGoldvorrat()
{
    return m_goldvorrat;
}

int Player::getGesundheit()
{
    return m_leben;
}

void Player::setSpielerBild(QString bild)
{
    m_spielerBild = bild;
}

QString Player::getSpielerBild()
{
    return m_spielerBild;
}

//noch machen: bool -> überprüfen, ob position überhaupt geandert wurde
void Player::spielerBewegen(QString eingabe, int nrRows, int nrCols)
{
    //int yTemp = m_y_Koordinate;
    //int xTemp = m_x_Koordinate;
    if(eingabe == "N" && m_y_Koordinate > 0)
    {
        m_y_Koordinate -= 1;
    }
    if(eingabe == "S" && m_y_Koordinate < (nrRows - 1))
    {
        m_y_Koordinate += 1;
    }
    if(eingabe == "W" && m_x_Koordinate > 0)
    {
        m_x_Koordinate -= 1;
    }
    if(eingabe == "O" && m_x_Koordinate < (nrCols - 1))
    {
        m_x_Koordinate += 1;
    }
}

void Player::setGold(int gold)
{
    m_goldvorrat += gold;
}

void Player::setGoldAbsolut(int gold)
{
    m_goldvorrat = gold;
}

void Player::setLebenAbsolut(int leben)
{
    m_leben = leben;
}

void Player::setLeben(int leben)
{
    m_leben += leben;
}



void Player::clearInventar()
{
    m_gesamt.clear();
}

void Player::pushFrontInventar(Inventar *element)
{
    m_gesamt.pushFront(element);
}

const Inventar *Player::getElement(unsigned int index)
{
    return m_gesamt.getElement(index);
}

void Player::remove(unsigned int index)
{
    m_gesamt.remove(index);
}

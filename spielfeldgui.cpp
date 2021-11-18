#include "spielfeldgui.h"
#include "ui_spielfeldgui.h"
#include "anfangsgui.h"
#include "endegui.h"
#include <QTimer>
#include "haendlergui.h"

#define BILDZEIT 1500

SpielfeldGui::SpielfeldGui(int rows, int cols, QString bild, QString path, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SpielfeldGui)
{
    ui->setupUi(this);
    m_haendlerGUI = new HaendlerGUI();

    m_mediaPlayer = new QMediaPlayer();

     connect(m_haendlerGUI, SIGNAL(haendler_beendet()), this, SLOT(haendler_beendet_pielGUI()));
     connect(this, SIGNAL(setGoldLebenInventar(int, int, InventarListe)), m_haendlerGUI, SLOT(getGoldLebenInventar(int, int, InventarListe)));
     connect(m_haendlerGUI, SIGNAL(setGoldLebenInventar(int, int, InventarListe)), this, SLOT(getGoldLebenInventar(int, int, InventarListe)));
     connect(this, SIGNAL(setPreiseStaerke(InventarListe)), m_haendlerGUI, SLOT(getPreiseStaerke(InventarListe)));


    m_buttonItmes.append(ui->pushButton_item0);
    m_buttonItmes.append(ui->pushButton_item1);
    m_buttonItmes.append(ui->pushButton_item2);
    m_buttonItmes.append(ui->pushButton_item3);
    m_buttonItmes.append(ui->pushButton_item4);
    m_buttonItmes.append(ui->pushButton_item5);

    gridLayout_spielfeld = new QGridLayout();
    gridLayout_gesamt = new QGridLayout();

    widget_hintergrund = new QWidget();

    setCentralWidget(widget_hintergrund);

    widget_hintergrund->setLayout(gridLayout_gesamt);

    gridLayout_gesamt->addLayout(gridLayout_spielfeld, 0, 3, rows, 3);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
           m_spielfelder.append( new QLabel);
           m_spielfelder[j + i*cols]->setFixedSize(50,50);
           m_spielfelder[j + i*cols]->setStyleSheet("background-color: gray; font-size: 18px;");
           gridLayout_spielfeld->addWidget(m_spielfelder[j + i*cols], i, j);
        }
    }

    ui->widget_bedienWidgets->setMinimumSize(760, 165);
    gridLayout_gesamt->addWidget(ui->widget_bedienWidgets, rows +1, 0, 4, 10);

    srand(time(nullptr));

    m_spiel = new CaveAdventure(rows, cols, bild, path);

    int db1 = m_spiel->setStartRowFromWorld();
    int db2 = m_spiel->setStartColFromWorld();

    m_spiel->setStartPosWorld(m_spiel->setStartRowFromWorld(), m_spiel->setStartColFromWorld());


    // wird grad nicht aufgerufen
    m_timerBilder = new QTimer(this);
    connect(m_timerBilder, SIGNAL(timeout()),this, SLOT(changePixmap()));
    m_timerBilder->setSingleShot(true);

    movePlayer("");

}

SpielfeldGui::~SpielfeldGui()
{
    delete ui;
    delete m_haendlerGUI;
    for(int i = 0; i < m_buttonItmes.size(); i++)
    {
        delete m_buttonItmes[i];
    }
    for(int i = 0; i < m_spielfelder.size(); i++)
    {
        delete m_spielfelder[i];
    }
    delete gridLayout_spielfeld;
    delete gridLayout_gesamt;
    delete widget_hintergrund;
    delete m_spiel;
    delete m_timerBilder;
    delete m_inventar;
    delete m_mediaPlayer;
}


void SpielfeldGui::on_pushButton_Westen_clicked()
{
    movePlayer(ui->pushButton_Westen->text());
}

void SpielfeldGui::on_pushButton_Norden_clicked()
{
    movePlayer(ui->pushButton_Norden->text());
}

void SpielfeldGui::on_pushButton_Osten_clicked()
{
    movePlayer(ui->pushButton_Osten->text());
}

void SpielfeldGui::on_pushButton_Sueden_clicked()
{
    movePlayer(ui->pushButton_Sueden->text());
}

void SpielfeldGui::movePlayer(QString button)
{
    m_spielfelder[m_spiel->getPlayerPos()]->setPixmap(QPixmap());
    m_spiel->getAndProcessUserInput(button);
    m_mediaPlayer->setMedia(QUrl("qrc:/" + m_spiel->getSound() +".mp3"));
    m_mediaPlayer->setVolume(50);
    m_mediaPlayer->play();
    //ui->textBrowser->append(m_spiel->getRoomText(m_spiel->getPlayerPos()));
    ui->label_raumText->setText(m_spiel->getRoomText(m_spiel->getPlayerPos()));
    ui->label_bildRaum->setPixmap(QPixmap(":/new/prefix2/"+ m_spiel->getRoomImage()+ ".PNG").scaled(80,80));
    //m_spielfelder[m_spiel->getPlayerPos()]->setPixmap(QPixmap(":/new/prefix2/"+ m_spiel->getRoomImage()+ ".PNG").scaled(50,50));
    m_spielfelder[m_spiel->getPlayerPos()]->setPixmap(QPixmap(":/new/prefix2/"+ m_spiel->getPlayerImage()+ ".PNG").scaled(50,50));
    m_timerBilder->start(BILDZEIT);

    ui->label_posX->setText("Spalte: " + QString::number(m_spiel->getPlayerCol() +1));
    ui->label_posY->setText("Reihe: " + QString::number(m_spiel->getPlayerRow() +1));
    ui->label_gold->setText("Gold: " + QString::number(m_spiel->getGold()));
    ui->label_leben->setText("Leben: " + QString::number(m_spiel->getLeben()));

    if(m_spiel->getGameStatus() != 0)
    {
        EndeGui *ende = new EndeGui(m_spiel->getGameResult());
        ende->show();
        this->close();
    }
    if(m_spiel->getHaendler())
    {
        emit setGoldLebenInventar(m_spiel->getGold(), m_spiel->getLeben(), m_liste);
        m_haendlerGUI->show();
        ui->widget_bedienWidgets->setDisabled(true);
    }
}

void SpielfeldGui::changePixmap()
{
     m_spielfelder[m_spiel->getPlayerPos()]->setPixmap(QPixmap(":/new/prefix2/"+ m_spiel->getPlayerImage()+ ".PNG").scaled(50,50));
}

void SpielfeldGui::on_pushButton_fertig_clicked()
{
    ui->widget_bedienWidgets->setDisabled(false);
}

void SpielfeldGui::haendler_beendet_pielGUI()
{
    ui->widget_bedienWidgets->setDisabled(false);
}



void SpielfeldGui::getGoldLebenInventar(int gold, int leben, InventarListe inventar)
{
    m_spiel->setGoldAbsolut(gold);
    ui->label_gold->setText("Gold: " + QString::number(m_spiel->getGold()));
    m_spiel->setLebenAbsolut(leben);
    ui->label_leben->setText("Leben: " + QString::number(m_spiel->getLeben()));
    int tempGroesse = m_liste.size() ;
    int tempGroesse1 = inventar.size();

    if(inventar.size() > m_liste.size())
    {
        m_liste.clear();

            for(int i = inventar.size()-1; i >= 0; i--)
            {
                if(inventar.getElement(i)->getPixmapText() == "futter")
                {
                    Inventar* futter = new Futter();
                    m_liste.pushFront(futter);
                    m_buttonItmes[i]->setIcon(QIcon(":/new/prefix2/"+ inventar.getElement(i)->getPixmapText() + ".PNG"));
                    m_buttonItmes[i]->setIconSize(ui->pushButton_item0->size());
                }
                if(inventar.getElement(i)->getPixmapText() == "schwert")
                {
                    Inventar* futter = new Schwert();
                    m_liste.pushFront(futter);
                    m_buttonItmes[i]->setIcon(QIcon(":/new/prefix2/"+ inventar.getElement(i)->getPixmapText() + ".PNG"));
                    m_buttonItmes[i]->setIconSize(ui->pushButton_item0->size());
                }
                if(inventar.getElement(i)->getPixmapText() == "stein")
                {
                    Inventar* futter = new Stein();
                    m_liste.pushFront(futter);
                    m_buttonItmes[i]->setIcon(QIcon(":/new/prefix2/"+ inventar.getElement(i)->getPixmapText() + ".PNG"));
                    m_buttonItmes[i]->setIconSize(ui->pushButton_item0->size());
                }
                if(inventar.getElement(i)->getPixmapText() == "zaubertrank")
                {
                    Inventar* futter = new Zaubertrank();
                    m_liste.pushFront(futter);
                    m_buttonItmes[i]->setIcon(QIcon(":/new/prefix2/"+ inventar.getElement(i)->getPixmapText() + ".PNG"));
                    m_buttonItmes[i]->setIconSize(ui->pushButton_item0->size());
                }
                if(inventar.getElement(i)->getPixmapText() == "bonbon")
                {
                    Inventar* futter = new Bonbon();
                    m_liste.pushFront(futter);
                    m_buttonItmes[i]->setIcon(QIcon(":/new/prefix2/" + inventar.getElement(i)->getPixmapText() + ".PNG"));
                    m_buttonItmes[i]->setIconSize(ui->pushButton_item0->size());
                }
                if(inventar.getElement(i)->getPixmapText() == "donut")
                {
                    Inventar* futter = new Bonbon();
                    m_liste.pushFront(futter);
                    m_buttonItmes[i]->setIcon(QIcon(":/new/prefix2/" + inventar.getElement(i)->getPixmapText() + ".PNG"));
                    m_buttonItmes[i]->setIconSize(ui->pushButton_item0->size());
                }
            }

//----------------------------------------------------------
//            for(int i = inventar.size()-1; i >= 0; i--)
//            {

//                m_liste.pushFront(inventar.getElement(i));
//                Inventar* temp = inventar.getElement(i);
//            }



//        for(int i = 0; i < tempGroesse1; i++)
//        {
//            m_buttonItmes[i]->setIcon(QIcon(":/new/prefix2/"+ m_liste.getElement(i)->getPixmapText() + ".PNG"));
//            m_buttonItmes[i]->setIconSize(ui->pushButton_item0->size());
//        }



    }
}

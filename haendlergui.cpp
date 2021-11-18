#include "haendlergui.h"
#include "ui_haendlergui.h"

#define MAXITEMS 6

HaendlerGUI::HaendlerGUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HaendlerGUI)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowTitleHint);
    m_labelsItems.append(ui->label_item_1);
    m_labelsItems.append(ui->label_item_2);
    m_labelsItems.append(ui->label_item_3);
    m_labelsItems.append(ui->label_item_4);
    m_labelsItems.append(ui->label_item_5);
    m_labelsItems.append(ui->label_item_6);

}

HaendlerGUI::~HaendlerGUI()
{
    delete ui;
    for(int i = 0; i < m_labelsItems.size(); i++)
    {
        delete m_labelsItems[i];
    }
}

void HaendlerGUI::on_pushButton_fertig_clicked()
{
    emit haendler_beendet();
   emit setGoldLebenInventar(m_gold, m_leben, m_inventar);
//    for(int i = 0; i < m_inventar.size(); i++)
//    {
//        m_inventar.getElement(i);
//    }
    close();
}

void HaendlerGUI::on_pushButton_futter_clicked()
{
    if(m_inventar.size() <= MAXITEMS)
    {
        Inventar* futter = new Futter();
        passtPreis("futter", futter);
    }
    else
        ui->label_platzItems->setText("Kein Platz mehr!");


}

void HaendlerGUI::on_pushButton_schwert_clicked()
{
    if(m_inventar.size() < MAXITEMS)
    {
        Inventar* schwert = new Schwert();
        passtPreis("schwert", schwert);
    }
    else
        ui->label_platzItems->setText("Kein Platz mehr!");
}

void HaendlerGUI::on_pushButton_stein_clicked()
{
    if(m_inventar.size() < MAXITEMS)
    {
        Inventar* stein = new Stein();
        passtPreis("stein", stein);
    }
    else
        ui->label_platzItems->setText("Kein Platz mehr!");

}

void HaendlerGUI::on_pushButton_bonbon_clicked()
{
    Inventar* bonbon = new Bonbon();
    passtPreis("bonbon", bonbon);
}

void HaendlerGUI::on_pushButton_donut_clicked()
{
    Inventar *donut = new Donut();
    passtPreis("donut", donut);
}

void HaendlerGUI::on_pushButton_trank_clicked()
{
    Inventar* trank = new Zaubertrank();
    passtPreis("zaubertrank", trank);
}

void HaendlerGUI::setPixmaps(QString button)
{
    m_pixmaps.append(button);
    for(int i = 0; i < m_labelsItems.size(); i++)
    {
        if(m_labelsItems[i]->pixmap() == nullptr)
        {
            m_labelsItems[i]->setPixmap(QPixmap(":/new/prefix2/"+ button+ ".PNG").scaled(50,50));
            break;
        }
    }
}

bool HaendlerGUI::passtPreis(QString button, Inventar* inventar)
{
    if(m_gold >= inventar->getPreis())
    {
        m_inventar.pushFront(inventar);
        m_gold = m_gold - inventar->getPreis();
        ui->label_gold_haendler->setText("Gold: " + QString::number(m_gold));
        setPixmaps(button);
        return true;
    }
    else
    {
        delete inventar;
        ui->label_kontostandNiedrig->setText("Zu wenig Gold!");
        return false;
    }
}

//slot
void HaendlerGUI::getGoldLebenInventar(int gold, int leben, InventarListe inventar)
{
    m_gold = gold;
    ui->label_gold_haendler->setText("Gold: " + QString::number(m_gold));
    m_leben = leben;
    ui->label_leben_haendler->setText("Leben: " + QString::number(m_leben));
    int tempGroesse = m_inventar.size();
    int tempGroesse1 = inventar.size();

//    if(inventar.size() > m_inventar.size())
//    {
//        for(int i = tempGroesse; i < tempGroesse1; i++)
//        {
//            m_inventar.pushFront(inventar.getElement(i));
//        }
//        m_inventar.clear();
//        for(int i = tempGroesse1-1; i >= 0; i--)
//        {
//            m_inventar.pushFront(inventar.getElement(i));
//        }

//    }
}

void HaendlerGUI::getPreiseStaerke(InventarListe inventarGesamt)
{
    for(int i = 0; i < inventarGesamt.size(); i++)
    {
        m_moeglichesInventar.pushFront(inventarGesamt.getElement(i));
    }
}


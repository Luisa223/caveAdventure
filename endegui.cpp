#include "endegui.h"
#include "anfangsgui.h"


EndeGui::EndeGui(bool gewonnen,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EndeGui), m_gewonnen(gewonnen)
{
    ui->setupUi(this);
    m_mediaPlayer = new QMediaPlayer();
    setErgebnisText();
    if(gewonnen)
        m_mediaPlayer->setMedia(QUrl("qrc:/yaySound.mp3"));
    else {
        m_mediaPlayer->setMedia(QUrl("qrc:/failSound.mp3"));
    }
    m_mediaPlayer->setVolume(50);
    m_mediaPlayer->play();
}

EndeGui::~EndeGui()
{
    delete ui;
}

void EndeGui::setErgebnisText()
{
    if(m_gewonnen)
    {
        ui->label_ergebnis->setText("Glückwunsch! \n Du hast den Ausgang gefunden!");
    }
    else
    {
        ui->label_ergebnis->setText("Du hast leider verloren...\n Versuche es nochmal!");
    }
}

void EndeGui::on_pushButton_spielEnde_clicked()
{
    close();
}

void EndeGui::on_pushButton_neuesSpiel_clicked()
{
    close();
    AnfangsGui *neuesSpiel = new AnfangsGui();
    neuesSpiel->show();
}

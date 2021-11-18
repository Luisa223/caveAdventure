#ifndef SPIELFELDGUI_H
#define SPIELFELDGUI_H

#include <QMainWindow>
#include <QString>
#include <QLabel>
#include <QGridLayout>
#include "caveadventure.h"
#include "haendlergui.h"
#include <QTimer>
#include <QPushButton>
#include "inventar.h"
#include <QMediaPlayer>

namespace Ui {
class SpielfeldGui;
}

class SpielfeldGui : public QMainWindow
{
    Q_OBJECT

public:
    explicit SpielfeldGui( int rows, int cols, QString bild, QString path, QWidget *parent = nullptr);
    ~SpielfeldGui();
    void movePlayer(QString button);

public slots: //spielfeld
    void haendler_beendet_pielGUI();

    void getGoldLebenInventar(int, int, InventarListe);

private slots:
    void on_pushButton_Westen_clicked();

    void on_pushButton_Norden_clicked();

    void on_pushButton_Osten_clicked();

    void on_pushButton_Sueden_clicked();

    void changePixmap();

    void on_pushButton_fertig_clicked();



private:
    Ui::SpielfeldGui *ui;
    HaendlerGUI *m_haendlerGUI;
    QVector<QLabel*> m_spielfelder;
    QVector <QPushButton*> m_buttonItmes;
    QGridLayout *gridLayout_spielfeld;
    QGridLayout *gridLayout_gesamt;
    QWidget *widget_hintergrund;
    CaveAdventure *m_spiel;
    QTimer *m_timerBilder;
    QVector <QString> m_pixmapsInventar;
    QVector <int> m_preise;
    Inventar *m_inventar;
    InventarListe m_liste;
    QMediaPlayer *m_mediaPlayer;

signals: //spielfeld
    void setGoldLebenInventar(int, int, InventarListe);
    void setPreiseStaerke(InventarListe);
};

#endif // SPIELFELDGUI_H

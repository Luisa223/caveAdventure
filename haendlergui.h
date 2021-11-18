#ifndef HAENDLERGUI_H
#define HAENDLERGUI_H

#include <QWidget>
#include <QLabel>
#include "inventarliste.h"


namespace Ui {
class HaendlerGUI;
}

class HaendlerGUI : public QWidget
{
    Q_OBJECT

public:
    explicit HaendlerGUI(QWidget *parent = nullptr);
    ~HaendlerGUI();
    void setPixmaps(QString button);
    bool passtPreis(QString button, Inventar* inventar);

private slots:
    void on_pushButton_fertig_clicked();

    void on_pushButton_futter_clicked();

    void on_pushButton_schwert_clicked();

    void on_pushButton_stein_clicked();

    void on_pushButton_bonbon_clicked();

    void on_pushButton_donut_clicked();

    void on_pushButton_trank_clicked();

private:
    Ui::HaendlerGUI *ui;
    QVector <QString> m_pixmaps;
    QVector <QLabel*> m_labelsItems;
    QVector <int> m_preise;
    int m_gold;
    int m_leben;
    InventarListe m_inventar;
    InventarListe m_moeglichesInventar;

signals:
    void haendler_beendet();
    void setGoldLebenInventar(int, int, InventarListe);

public slots: //spielfeld
    void getGoldLebenInventar(int, int, InventarListe);
    void getPreiseStaerke(InventarListe);

};
Q_DECLARE_METATYPE(QVector<QString>);
Q_DECLARE_METATYPE(QVector<int>);
Q_DECLARE_METATYPE(int);
Q_DECLARE_METATYPE(InventarListe);



#endif // HAENDLERGUI_H

#ifndef ENDEGUI_H
#define ENDEGUI_H

#include <QWidget>
#include "ui_endegui.h"
#include <QMediaPlayer>

namespace Ui {
class EndeGui;
}

class EndeGui : public QWidget
{
    Q_OBJECT

public:
    explicit EndeGui(bool gewonnen, QWidget *parent = nullptr);
    ~EndeGui();
    void setErgebnisText();

private slots:
    void on_pushButton_spielEnde_clicked();

    void on_pushButton_neuesSpiel_clicked();

private:
    Ui::EndeGui *ui;
    bool m_gewonnen;
    QMediaPlayer *m_mediaPlayer;
};

#endif // ENDEGUI_H

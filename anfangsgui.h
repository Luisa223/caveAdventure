#ifndef ANFANGSGUI_H
#define ANFANGSGUI_H

#include <QWidget>
#include "spielfeldgui.h"
#include <QDir>
#include <QDirIterator>
#include <QLayout>
#include <QVector>
#include <fstream>
#include <iostream>
#include "widgetcave.h"

namespace Ui {
class AnfangsGui;
}

class AnfangsGui : public QWidget
{
    Q_OBJECT

public:
    explicit AnfangsGui(QWidget *parent = nullptr);
    ~AnfangsGui();
    void getHoehlenAusVerzeichnis();

private slots:
    void on_radioButton_garfield_clicked();

    void on_radioButton_idefix_clicked();

    void on_radioButton_wickie_clicked();

    void on_radioButton_schlumpf_clicked();

    void on_pushButton_los_clicked();


private:
    Ui::AnfangsGui *ui;
    SpielfeldGui *m_gameWindow;
    QString m_bildName;
    QDir m_directories;
    QDir m_files;
    QString m_verzeichnis;
    QString m_ordner;
    bool m_nochOrdnerDa;
    QGridLayout *m_layout;
    int m_counter;
    QWidget *widgi;
    QButtonGroup*  m_group;
    std::ifstream m_stream;
    QVector <WidgetCave*> m_caveWidgets;

};

#endif // ANFANGSGUI_H

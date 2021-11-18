#include "anfangsgui.h"
#include "ui_anfangsgui.h"
#include "spielfeldgui.h"
#include <QButtonGroup>
#include "widgetcave.cpp"

#define PATHCAVES "G:/Verzeichnis"

AnfangsGui::AnfangsGui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnfangsGui)
{
    ui->setupUi(this);

    ui->comboBox_Cols->setCurrentIndex(5);
    ui->comboBox_Rows->setCurrentIndex(5);
    ui->radioButton_garfield->setChecked(true);
    m_bildName = "garfield";
    m_verzeichnis = PATHCAVES;
    m_directories = QDir(m_verzeichnis);
    m_files = QDir(m_verzeichnis);
    m_nochOrdnerDa = false;
    m_layout = new QGridLayout();
    m_layout->setSizeConstraint(QLayout::SetMinAndMaxSize);
    m_counter = 0;
    widgi = new QWidget();
    widgi->setLayout(m_layout);
    m_group = new QButtonGroup();

    ui->scrollArea_welten->setWidget(widgi);
    widgi->setMinimumSize(0,30);
    ui->scrollArea_welten->setWidgetResizable(false);
    ui->scrollArea_welten->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);



    getHoehlenAusVerzeichnis();


}

AnfangsGui::~AnfangsGui()
{
    delete ui;
    delete widgi;
    //delete m_layout; // wenn nicht auskommentiert: pure virtual method called - terminate called without an active exception -19:16:21: G:/CaveAdventure_1/debug/CaveAdventure_1.exe wurde mit dem Rückgabewert 3 beendet

    delete m_group;
    //delete m_gameWindow;
}

void AnfangsGui::on_radioButton_garfield_clicked()
{
    m_bildName = "garfield";
}

void AnfangsGui::on_radioButton_idefix_clicked()
{
    m_bildName = "idefix";
}

void AnfangsGui::on_radioButton_wickie_clicked()
{
    m_bildName = "wickie";
}

void AnfangsGui::on_radioButton_schlumpf_clicked()
{
    m_bildName = "schlumpf";
}

void AnfangsGui::on_pushButton_los_clicked()
{
    QString tempPathString;
    for(int i = 0; i < m_caveWidgets.size(); i++)
    {
        if(m_caveWidgets[i]->getRadioSelected() && m_caveWidgets[i]->fileReadable())
        {
            m_gameWindow = new SpielfeldGui(m_caveWidgets[i]->getRows(), m_caveWidgets[i]->getCols(), m_bildName, m_caveWidgets[i]->getPath());
        }
        if(m_caveWidgets[i]->getRadioSelected() && !m_caveWidgets[i]->fileReadable())
        {
            m_gameWindow = new SpielfeldGui(m_caveWidgets[i]->getRows(), m_caveWidgets[i]->getCols(), m_bildName, nullptr);
        }

    }

    m_gameWindow->show();
    this->close();
}

void AnfangsGui::getHoehlenAusVerzeichnis()
{
    m_directories.setFilter(QDir::Dirs | QDir::Files);
    QFileInfoList list = m_directories.entryInfoList();
    m_nochOrdnerDa = false;

    for(int i = 0; i < list.size(); i++)
    {
        QFileInfo fileInfo = list.at(i);
        if(fileInfo.fileName() == "." || fileInfo.fileName() == "..")
            continue;
        if(fileInfo.isFile())
        {

            WidgetCave *widget = new WidgetCave(m_directories.path() + "/" + fileInfo.fileName());
            m_group->addButton(widget->getRadioButton());
            m_caveWidgets.append(widget);
            m_layout->addWidget(widget, m_counter,0,1,ui->scrollArea_welten->width());
            m_counter++;
            m_caveWidgets.append(widget);
        }

        if(fileInfo.isDir())
        {
            m_ordner = "/" +fileInfo.fileName();
            m_nochOrdnerDa = true;
            m_directories.setPath(m_directories.path()+ m_ordner);
            getHoehlenAusVerzeichnis();
        }


    }
    if(!m_nochOrdnerDa)
    {
        m_directories.cdUp();
        m_ordner = "";
    }

}


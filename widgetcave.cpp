#include "widgetcave.h"

WidgetCave::WidgetCave(QString path, QWidget *parent) : QWidget(parent), m_path(path)
{
    m_layout = new QGridLayout();
    m_label = new QLabel();
    m_radioButton = new QRadioButton();
    m_radioButton->setLayoutDirection(Qt::RightToLeft);
    this->setLayout(m_layout);
    m_layout->addWidget(m_label, 0,0);
    m_layout->addWidget(m_radioButton, 0,1);

    this->setFixedSize(300,50);
    this->setStyleSheet("background-color: gray; font-size: 14px;");
    m_fileReadable = false;
    readFile();
}

bool WidgetCave::getRadioSelected()
{
    if(m_radioButton->isChecked())
        return true;
    else {
        return false;
    }
}

void WidgetCave::readFile()
{
    m_stream.open(m_path.toStdString().c_str());
    char line[30];
    int counter = 0;
    if(m_stream.is_open())
    {
        while(m_stream.getline(line, 30))
        {
            QString temp = line;
            if(counter == 1)
            {
                m_label->setText(temp);
            }
            if(counter == 2)
            {

                QStringList tempList = temp.split(" ");
                m_radioButton->setText("Reihen: " + tempList[0] + ", Spalten: " + tempList[1]);
                m_rows = tempList[0].toInt();
                m_cols = tempList[1].toInt();
                m_fileReadable = true;
            }
            counter++;
        }
        m_stream.close();
    }



}

QRadioButton* WidgetCave::getRadioButton()
{
    return m_radioButton;
}

QString WidgetCave::getPath()
{
    return m_path;
}

void WidgetCave::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

int WidgetCave::getRows()
{
    return m_rows;
}

int WidgetCave::getCols()
{
    return m_cols;
}

bool WidgetCave::fileReadable()
{
    return m_fileReadable;
}

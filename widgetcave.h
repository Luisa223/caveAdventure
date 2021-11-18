#ifndef WIDGETCAVE_H
#define WIDGETCAVE_H

#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QRadioButton>
#include <QString>
#include <fstream>
#include <QStyleOption>
#include <QPainter>

class WidgetCave : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetCave(QString path, QWidget *parent = nullptr);
    bool getRadioSelected();
    QString getPath();
    void readFile();
    void paintEvent(QPaintEvent *);
    QRadioButton* getRadioButton();
    int getRows();
    int getCols();
    bool fileReadable();

signals:

public slots:

private:
    QGridLayout *m_layout;
    QLabel *m_label;
    QRadioButton *m_radioButton;
    const QString m_path;
    std::ifstream m_stream;
    int m_rows;
    int m_cols;
    bool m_fileReadable;

};

#endif // WIDGETCAVE_H

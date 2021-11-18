/********************************************************************************
** Form generated from reading UI file 'spielfeldgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPIELFELDGUI_H
#define UI_SPIELFELDGUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpielfeldGui
{
public:
    QWidget *centralwidget;
    QWidget *widget_bedienWidgets;
    QTextEdit *textBrowser;
    QPushButton *pushButton_Sueden;
    QPushButton *pushButton_Norden;
    QPushButton *pushButton_Osten;
    QPushButton *pushButton_Westen;
    QLabel *label_gold;
    QLabel *label_leben;
    QLabel *label_posX;
    QLabel *label_posY;
    QLabel *label_16;
    QLabel *label_gold_2;
    QPushButton *pushButton_item3;
    QPushButton *pushButton_item4;
    QPushButton *pushButton_item5;
    QPushButton *pushButton_item0;
    QPushButton *pushButton_item1;
    QPushButton *pushButton_item2;
    QWidget *widget_text;
    QLabel *label_bildRaum;
    QLabel *label_raumText;
    QLabel *label_raumUntertext;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SpielfeldGui)
    {
        if (SpielfeldGui->objectName().isEmpty())
            SpielfeldGui->setObjectName(QString::fromUtf8("SpielfeldGui"));
        SpielfeldGui->resize(800, 508);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix2/cave.png"), QSize(), QIcon::Selected, QIcon::On);
        SpielfeldGui->setWindowIcon(icon);
        centralwidget = new QWidget(SpielfeldGui);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget_bedienWidgets = new QWidget(centralwidget);
        widget_bedienWidgets->setObjectName(QString::fromUtf8("widget_bedienWidgets"));
        widget_bedienWidgets->setGeometry(QRect(20, 300, 761, 161));
        textBrowser = new QTextEdit(widget_bedienWidgets);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(300, 10, 301, 151));
        pushButton_Sueden = new QPushButton(widget_bedienWidgets);
        pushButton_Sueden->setObjectName(QString::fromUtf8("pushButton_Sueden"));
        pushButton_Sueden->setGeometry(QRect(660, 110, 40, 40));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButton_Sueden->setFont(font);
        pushButton_Norden = new QPushButton(widget_bedienWidgets);
        pushButton_Norden->setObjectName(QString::fromUtf8("pushButton_Norden"));
        pushButton_Norden->setGeometry(QRect(660, 10, 40, 40));
        pushButton_Norden->setFont(font);
        pushButton_Osten = new QPushButton(widget_bedienWidgets);
        pushButton_Osten->setObjectName(QString::fromUtf8("pushButton_Osten"));
        pushButton_Osten->setGeometry(QRect(710, 60, 40, 40));
        pushButton_Osten->setFont(font);
        pushButton_Westen = new QPushButton(widget_bedienWidgets);
        pushButton_Westen->setObjectName(QString::fromUtf8("pushButton_Westen"));
        pushButton_Westen->setGeometry(QRect(610, 60, 40, 40));
        pushButton_Westen->setFont(font);
        label_gold = new QLabel(widget_bedienWidgets);
        label_gold->setObjectName(QString::fromUtf8("label_gold"));
        label_gold->setGeometry(QRect(20, 10, 111, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_gold->setFont(font1);
        label_leben = new QLabel(widget_bedienWidgets);
        label_leben->setObjectName(QString::fromUtf8("label_leben"));
        label_leben->setGeometry(QRect(20, 40, 101, 16));
        label_leben->setFont(font1);
        label_posX = new QLabel(widget_bedienWidgets);
        label_posX->setObjectName(QString::fromUtf8("label_posX"));
        label_posX->setGeometry(QRect(20, 70, 121, 21));
        label_posX->setFont(font1);
        label_posY = new QLabel(widget_bedienWidgets);
        label_posY->setObjectName(QString::fromUtf8("label_posY"));
        label_posY->setGeometry(QRect(20, 100, 111, 31));
        label_posY->setFont(font1);
        label_16 = new QLabel(widget_bedienWidgets);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(144, 34, 131, 111));
        label_16->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 0, 0);\n"
"image: url(:/new/prefix2/rahmen.png);"));
        label_gold_2 = new QLabel(widget_bedienWidgets);
        label_gold_2->setObjectName(QString::fromUtf8("label_gold_2"));
        label_gold_2->setGeometry(QRect(150, 10, 111, 21));
        label_gold_2->setFont(font1);
        pushButton_item3 = new QPushButton(widget_bedienWidgets);
        pushButton_item3->setObjectName(QString::fromUtf8("pushButton_item3"));
        pushButton_item3->setGeometry(QRect(150, 90, 41, 41));
        pushButton_item4 = new QPushButton(widget_bedienWidgets);
        pushButton_item4->setObjectName(QString::fromUtf8("pushButton_item4"));
        pushButton_item4->setGeometry(QRect(190, 90, 41, 41));
        pushButton_item5 = new QPushButton(widget_bedienWidgets);
        pushButton_item5->setObjectName(QString::fromUtf8("pushButton_item5"));
        pushButton_item5->setGeometry(QRect(230, 90, 41, 41));
        pushButton_item0 = new QPushButton(widget_bedienWidgets);
        pushButton_item0->setObjectName(QString::fromUtf8("pushButton_item0"));
        pushButton_item0->setGeometry(QRect(150, 45, 41, 41));
        pushButton_item0->setStyleSheet(QString::fromUtf8(""));
        pushButton_item1 = new QPushButton(widget_bedienWidgets);
        pushButton_item1->setObjectName(QString::fromUtf8("pushButton_item1"));
        pushButton_item1->setGeometry(QRect(190, 45, 41, 41));
        pushButton_item2 = new QPushButton(widget_bedienWidgets);
        pushButton_item2->setObjectName(QString::fromUtf8("pushButton_item2"));
        pushButton_item2->setGeometry(QRect(230, 45, 41, 41));
        widget_text = new QWidget(widget_bedienWidgets);
        widget_text->setObjectName(QString::fromUtf8("widget_text"));
        widget_text->setGeometry(QRect(300, 10, 301, 151));
        widget_text->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);"));
        label_bildRaum = new QLabel(widget_text);
        label_bildRaum->setObjectName(QString::fromUtf8("label_bildRaum"));
        label_bildRaum->setGeometry(QRect(20, 30, 80, 80));
        label_bildRaum->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 157, 157);"));
        label_raumText = new QLabel(widget_text);
        label_raumText->setObjectName(QString::fromUtf8("label_raumText"));
        label_raumText->setGeometry(QRect(120, 30, 171, 21));
        label_raumText->setFont(font1);
        label_raumUntertext = new QLabel(widget_text);
        label_raumUntertext->setObjectName(QString::fromUtf8("label_raumUntertext"));
        label_raumUntertext->setGeometry(QRect(120, 70, 161, 41));
        SpielfeldGui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SpielfeldGui);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        SpielfeldGui->setMenuBar(menubar);
        statusbar = new QStatusBar(SpielfeldGui);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SpielfeldGui->setStatusBar(statusbar);

        retranslateUi(SpielfeldGui);

        QMetaObject::connectSlotsByName(SpielfeldGui);
    } // setupUi

    void retranslateUi(QMainWindow *SpielfeldGui)
    {
        SpielfeldGui->setWindowTitle(QApplication::translate("SpielfeldGui", "MainWindow", nullptr));
        pushButton_Sueden->setText(QApplication::translate("SpielfeldGui", "S", nullptr));
        pushButton_Norden->setText(QApplication::translate("SpielfeldGui", "N", nullptr));
        pushButton_Osten->setText(QApplication::translate("SpielfeldGui", "O", nullptr));
        pushButton_Westen->setText(QApplication::translate("SpielfeldGui", "W", nullptr));
        label_gold->setText(QApplication::translate("SpielfeldGui", "Goldvorrat:", nullptr));
        label_leben->setText(QApplication::translate("SpielfeldGui", "Leben:", nullptr));
        label_posX->setText(QApplication::translate("SpielfeldGui", "Position X:", nullptr));
        label_posY->setText(QApplication::translate("SpielfeldGui", "Position Y:", nullptr));
        label_16->setText(QString());
        label_gold_2->setText(QApplication::translate("SpielfeldGui", "Inventar:", nullptr));
        pushButton_item3->setText(QString());
        pushButton_item4->setText(QString());
        pushButton_item5->setText(QString());
        pushButton_item0->setText(QString());
        pushButton_item1->setText(QString());
        pushButton_item2->setText(QString());
        label_bildRaum->setText(QString());
        label_raumText->setText(QString());
        label_raumUntertext->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SpielfeldGui: public Ui_SpielfeldGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPIELFELDGUI_H

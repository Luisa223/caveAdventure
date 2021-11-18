/********************************************************************************
** Form generated from reading UI file 'haendlergui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAENDLERGUI_H
#define UI_HAENDLERGUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HaendlerGUI
{
public:
    QWidget *widget_haendler;
    QLabel *label_4;
    QPushButton *pushButton_schwert;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_9;
    QPushButton *pushButton_bonbon;
    QPushButton *pushButton_donut;
    QPushButton *pushButton_futter;
    QLabel *label_leben_haendler;
    QLabel *label_gold_haendler;
    QLabel *label_6;
    QLabel *label_13;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_12;
    QPushButton *pushButton_trank;
    QLabel *label_platzItems;
    QLabel *label_item_4;
    QLabel *label_item_5;
    QLabel *label_item_6;
    QPushButton *pushButton_fertig;
    QLabel *label_item_3;
    QLabel *label_item_2;
    QLabel *label_item_1;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *pushButton_stein;
    QLabel *label_kontostandNiedrig;

    void setupUi(QWidget *HaendlerGUI)
    {
        if (HaendlerGUI->objectName().isEmpty())
            HaendlerGUI->setObjectName(QString::fromUtf8("HaendlerGUI"));
        HaendlerGUI->resize(611, 381);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix2/cave.png"), QSize(), QIcon::Selected, QIcon::On);
        HaendlerGUI->setWindowIcon(icon);
        HaendlerGUI->setStyleSheet(QString::fromUtf8("background-color: rgb(189, 189, 189);"));
        widget_haendler = new QWidget(HaendlerGUI);
        widget_haendler->setObjectName(QString::fromUtf8("widget_haendler"));
        widget_haendler->setEnabled(true);
        widget_haendler->setGeometry(QRect(0, 0, 611, 381));
        widget_haendler->setStyleSheet(QString::fromUtf8("background-color: rgb(189, 189, 189);"));
        label_4 = new QLabel(widget_haendler);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 200, 241, 31));
        QFont font;
        font.setPointSize(11);
        label_4->setFont(font);
        pushButton_schwert = new QPushButton(widget_haendler);
        pushButton_schwert->setObjectName(QString::fromUtf8("pushButton_schwert"));
        pushButton_schwert->setGeometry(QRect(200, 150, 75, 51));
        label_2 = new QLabel(widget_haendler);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 30, 121, 161));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/haendler.PNG);"));
        label_7 = new QLabel(widget_haendler);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(200, 230, 71, 51));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/donut.PNG);"));
        label_5 = new QLabel(widget_haendler);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 230, 71, 51));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/bonbon.PNG);"));
        label_9 = new QLabel(widget_haendler);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(400, 50, 121, 31));
        QFont font1;
        font1.setPointSize(10);
        label_9->setFont(font1);
        pushButton_bonbon = new QPushButton(widget_haendler);
        pushButton_bonbon->setObjectName(QString::fromUtf8("pushButton_bonbon"));
        pushButton_bonbon->setGeometry(QRect(110, 290, 81, 51));
        pushButton_donut = new QPushButton(widget_haendler);
        pushButton_donut->setObjectName(QString::fromUtf8("pushButton_donut"));
        pushButton_donut->setGeometry(QRect(200, 290, 75, 51));
        pushButton_futter = new QPushButton(widget_haendler);
        pushButton_futter->setObjectName(QString::fromUtf8("pushButton_futter"));
        pushButton_futter->setGeometry(QRect(120, 150, 75, 51));
        label_leben_haendler = new QLabel(widget_haendler);
        label_leben_haendler->setObjectName(QString::fromUtf8("label_leben_haendler"));
        label_leben_haendler->setGeometry(QRect(400, 110, 47, 13));
        label_gold_haendler = new QLabel(widget_haendler);
        label_gold_haendler->setObjectName(QString::fromUtf8("label_gold_haendler"));
        label_gold_haendler->setGeometry(QRect(400, 90, 47, 13));
        label_6 = new QLabel(widget_haendler);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(280, 230, 61, 51));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/zaubertrank.PNG);"));
        label_13 = new QLabel(widget_haendler);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(200, 90, 81, 51));
        label_13->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/schwert.PNG);"));
        label = new QLabel(widget_haendler);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 281, 31));
        QFont font2;
        font2.setPointSize(14);
        label->setFont(font2);
        label_8 = new QLabel(widget_haendler);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(400, 140, 91, 21));
        label_8->setFont(font1);
        label_3 = new QLabel(widget_haendler);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 50, 211, 31));
        label_3->setFont(font);
        label_12 = new QLabel(widget_haendler);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(120, 90, 81, 51));
        label_12->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/futter.PNG);"));
        pushButton_trank = new QPushButton(widget_haendler);
        pushButton_trank->setObjectName(QString::fromUtf8("pushButton_trank"));
        pushButton_trank->setGeometry(QRect(280, 290, 75, 51));
        label_platzItems = new QLabel(widget_haendler);
        label_platzItems->setObjectName(QString::fromUtf8("label_platzItems"));
        label_platzItems->setGeometry(QRect(400, 300, 241, 21));
        label_item_4 = new QLabel(widget_haendler);
        label_item_4->setObjectName(QString::fromUtf8("label_item_4"));
        label_item_4->setGeometry(QRect(390, 235, 47, 51));
        label_item_4->setStyleSheet(QString::fromUtf8("background-color: rgb(93, 93, 93);"));
        label_item_5 = new QLabel(widget_haendler);
        label_item_5->setObjectName(QString::fromUtf8("label_item_5"));
        label_item_5->setGeometry(QRect(440, 235, 47, 51));
        label_item_5->setStyleSheet(QString::fromUtf8("background-color: rgb(93, 93, 93);"));
        label_item_6 = new QLabel(widget_haendler);
        label_item_6->setObjectName(QString::fromUtf8("label_item_6"));
        label_item_6->setGeometry(QRect(490, 235, 47, 51));
        label_item_6->setStyleSheet(QString::fromUtf8("background-color: rgb(93, 93, 93);"));
        pushButton_fertig = new QPushButton(widget_haendler);
        pushButton_fertig->setObjectName(QString::fromUtf8("pushButton_fertig"));
        pushButton_fertig->setGeometry(QRect(530, 330, 75, 41));
        label_item_3 = new QLabel(widget_haendler);
        label_item_3->setObjectName(QString::fromUtf8("label_item_3"));
        label_item_3->setGeometry(QRect(490, 180, 47, 51));
        label_item_3->setStyleSheet(QString::fromUtf8("background-color: rgb(93, 93, 93);"));
        label_item_2 = new QLabel(widget_haendler);
        label_item_2->setObjectName(QString::fromUtf8("label_item_2"));
        label_item_2->setGeometry(QRect(440, 180, 47, 51));
        label_item_2->setStyleSheet(QString::fromUtf8("background-color: rgb(93, 93, 93);"));
        label_item_1 = new QLabel(widget_haendler);
        label_item_1->setObjectName(QString::fromUtf8("label_item_1"));
        label_item_1->setGeometry(QRect(390, 180, 47, 51));
        label_item_1->setStyleSheet(QString::fromUtf8("background-color: rgb(93, 93, 93);"));
        label_14 = new QLabel(widget_haendler);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(365, 172, 201, 121));
        label_14->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 0, 0);\n"
"image: url(:/new/prefix2/rahmen.png);"));
        label_15 = new QLabel(widget_haendler);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(290, 80, 61, 71));
        label_15->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/stein.PNG);"));
        pushButton_stein = new QPushButton(widget_haendler);
        pushButton_stein->setObjectName(QString::fromUtf8("pushButton_stein"));
        pushButton_stein->setGeometry(QRect(280, 150, 75, 51));
        label_kontostandNiedrig = new QLabel(widget_haendler);
        label_kontostandNiedrig->setObjectName(QString::fromUtf8("label_kontostandNiedrig"));
        label_kontostandNiedrig->setGeometry(QRect(30, 230, 47, 13));
        label_14->raise();
        label_4->raise();
        pushButton_schwert->raise();
        label_2->raise();
        label_7->raise();
        label_5->raise();
        label_9->raise();
        pushButton_bonbon->raise();
        pushButton_donut->raise();
        pushButton_futter->raise();
        label_leben_haendler->raise();
        label_gold_haendler->raise();
        label_6->raise();
        label_13->raise();
        label->raise();
        label_8->raise();
        label_3->raise();
        label_12->raise();
        pushButton_trank->raise();
        label_platzItems->raise();
        label_item_4->raise();
        label_item_5->raise();
        label_item_6->raise();
        pushButton_fertig->raise();
        label_item_3->raise();
        label_item_2->raise();
        label_item_1->raise();
        label_15->raise();
        pushButton_stein->raise();
        label_kontostandNiedrig->raise();

        retranslateUi(HaendlerGUI);

        QMetaObject::connectSlotsByName(HaendlerGUI);
    } // setupUi

    void retranslateUi(QWidget *HaendlerGUI)
    {
        HaendlerGUI->setWindowTitle(QApplication::translate("HaendlerGUI", "Form", nullptr));
        label_4->setText(QApplication::translate("HaendlerGUI", "Lade deinen Lebens-Vorrat auf:", nullptr));
        pushButton_schwert->setText(QApplication::translate("HaendlerGUI", "Schwert\n"
"St\303\244rke: 7\n"
"Preis: 10 Gold", nullptr));
        label_2->setText(QString());
        label_7->setText(QString());
        label_5->setText(QString());
        label_9->setText(QApplication::translate("HaendlerGUI", "Dein Kontostand:", nullptr));
        pushButton_bonbon->setText(QApplication::translate("HaendlerGUI", "Bonbon\n"
"Leben: +2\n"
"Preis: 3 Gold", nullptr));
        pushButton_donut->setText(QApplication::translate("HaendlerGUI", "Donut\n"
"Leben: +3\n"
"Preis: 5 Gold", nullptr));
        pushButton_futter->setText(QApplication::translate("HaendlerGUI", "Futter\n"
"St\303\244rke: 3\n"
"Preis: 5 Gold", nullptr));
        label_leben_haendler->setText(QApplication::translate("HaendlerGUI", "Leben:", nullptr));
        label_gold_haendler->setText(QApplication::translate("HaendlerGUI", "Gold:", nullptr));
        label_6->setText(QString());
        label_13->setText(QString());
        label->setText(QApplication::translate("HaendlerGUI", "Du hast einen H\303\244ndler gefunden!", nullptr));
        label_8->setText(QApplication::translate("HaendlerGUI", "Dein Inventar:", nullptr));
        label_3->setText(QApplication::translate("HaendlerGUI", "Wehre dich gegen die Monster:", nullptr));
        label_12->setText(QString());
        pushButton_trank->setText(QApplication::translate("HaendlerGUI", "Zaubertrank\n"
"Leben: +5\n"
"Preis: 7 Gold", nullptr));
        label_platzItems->setText(QApplication::translate("HaendlerGUI", "Du hast noch Platz f\303\274r x Items!", nullptr));
        label_item_4->setText(QString());
        label_item_5->setText(QString());
        label_item_6->setText(QString());
        pushButton_fertig->setText(QApplication::translate("HaendlerGUI", "Fertig!", nullptr));
        label_item_3->setText(QString());
        label_item_2->setText(QString());
        label_item_1->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        pushButton_stein->setText(QApplication::translate("HaendlerGUI", "Stein\n"
"St\303\244rke: 5\n"
"Preis: 7 Gold", nullptr));
        label_kontostandNiedrig->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HaendlerGUI: public Ui_HaendlerGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAENDLERGUI_H

/********************************************************************************
** Form generated from reading UI file 'anfangsgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANFANGSGUI_H
#define UI_ANFANGSGUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnfangsGui
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_Rows;
    QRadioButton *radioButton_wickie;
    QRadioButton *radioButton_schlumpf;
    QRadioButton *radioButton_garfield;
    QLabel *label_idefix;
    QComboBox *comboBox_Cols;
    QLabel *label_garfield;
    QLabel *label_wickie;
    QLabel *label;
    QLabel *label_4;
    QRadioButton *radioButton_idefix;
    QLabel *label_5;
    QLabel *label_schlumpf;
    QPushButton *pushButton_los;
    QScrollArea *scrollArea_welten;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *AnfangsGui)
    {
        if (AnfangsGui->objectName().isEmpty())
            AnfangsGui->setObjectName(QString::fromUtf8("AnfangsGui"));
        AnfangsGui->resize(418, 639);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix2/cave.png"), QSize(), QIcon::Selected, QIcon::On);
        AnfangsGui->setWindowIcon(icon);
        label_2 = new QLabel(AnfangsGui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 560, 171, 21));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_3 = new QLabel(AnfangsGui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 590, 47, 13));
        comboBox_Rows = new QComboBox(AnfangsGui);
        comboBox_Rows->addItem(QString());
        comboBox_Rows->addItem(QString());
        comboBox_Rows->addItem(QString());
        comboBox_Rows->addItem(QString());
        comboBox_Rows->addItem(QString());
        comboBox_Rows->addItem(QString());
        comboBox_Rows->addItem(QString());
        comboBox_Rows->addItem(QString());
        comboBox_Rows->addItem(QString());
        comboBox_Rows->addItem(QString());
        comboBox_Rows->addItem(QString());
        comboBox_Rows->setObjectName(QString::fromUtf8("comboBox_Rows"));
        comboBox_Rows->setGeometry(QRect(50, 610, 69, 22));
        radioButton_wickie = new QRadioButton(AnfangsGui);
        radioButton_wickie->setObjectName(QString::fromUtf8("radioButton_wickie"));
        radioButton_wickie->setGeometry(QRect(200, 80, 71, 41));
        radioButton_schlumpf = new QRadioButton(AnfangsGui);
        radioButton_schlumpf->setObjectName(QString::fromUtf8("radioButton_schlumpf"));
        radioButton_schlumpf->setGeometry(QRect(290, 80, 63, 41));
        radioButton_garfield = new QRadioButton(AnfangsGui);
        radioButton_garfield->setObjectName(QString::fromUtf8("radioButton_garfield"));
        radioButton_garfield->setGeometry(QRect(40, 80, 63, 41));
        label_idefix = new QLabel(AnfangsGui);
        label_idefix->setObjectName(QString::fromUtf8("label_idefix"));
        label_idefix->setGeometry(QRect(140, 80, 51, 41));
        label_idefix->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/idefix.PNG);"));
        comboBox_Cols = new QComboBox(AnfangsGui);
        comboBox_Cols->addItem(QString());
        comboBox_Cols->addItem(QString());
        comboBox_Cols->addItem(QString());
        comboBox_Cols->addItem(QString());
        comboBox_Cols->addItem(QString());
        comboBox_Cols->addItem(QString());
        comboBox_Cols->addItem(QString());
        comboBox_Cols->addItem(QString());
        comboBox_Cols->addItem(QString());
        comboBox_Cols->addItem(QString());
        comboBox_Cols->addItem(QString());
        comboBox_Cols->setObjectName(QString::fromUtf8("comboBox_Cols"));
        comboBox_Cols->setGeometry(QRect(300, 610, 69, 22));
        label_garfield = new QLabel(AnfangsGui);
        label_garfield->setObjectName(QString::fromUtf8("label_garfield"));
        label_garfield->setGeometry(QRect(70, 80, 41, 41));
        label_garfield->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/garfield.PNG);"));
        label_garfield->setPixmap(QPixmap(QString::fromUtf8("garfield.PNG")));
        label_garfield->setScaledContents(true);
        label_wickie = new QLabel(AnfangsGui);
        label_wickie->setObjectName(QString::fromUtf8("label_wickie"));
        label_wickie->setGeometry(QRect(230, 80, 51, 41));
        label_wickie->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/wickie.PNG);"));
        label = new QLabel(AnfangsGui);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 311, 41));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        label_4 = new QLabel(AnfangsGui);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 590, 47, 13));
        radioButton_idefix = new QRadioButton(AnfangsGui);
        radioButton_idefix->setObjectName(QString::fromUtf8("radioButton_idefix"));
        radioButton_idefix->setGeometry(QRect(120, 80, 63, 41));
        label_5 = new QLabel(AnfangsGui);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 50, 201, 21));
        label_5->setFont(font);
        label_schlumpf = new QLabel(AnfangsGui);
        label_schlumpf->setObjectName(QString::fromUtf8("label_schlumpf"));
        label_schlumpf->setGeometry(QRect(310, 80, 51, 41));
        label_schlumpf->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/schlumpf.PNG);"));
        pushButton_los = new QPushButton(AnfangsGui);
        pushButton_los->setObjectName(QString::fromUtf8("pushButton_los"));
        pushButton_los->setGeometry(QRect(170, 610, 75, 23));
        scrollArea_welten = new QScrollArea(AnfangsGui);
        scrollArea_welten->setObjectName(QString::fromUtf8("scrollArea_welten"));
        scrollArea_welten->setGeometry(QRect(30, 190, 351, 361));
        scrollArea_welten->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 349, 159));
        scrollArea_welten->setWidget(scrollAreaWidgetContents);

        retranslateUi(AnfangsGui);

        QMetaObject::connectSlotsByName(AnfangsGui);
    } // setupUi

    void retranslateUi(QWidget *AnfangsGui)
    {
        AnfangsGui->setWindowTitle(QApplication::translate("AnfangsGui", "Cave Adventure", nullptr));
        label_2->setText(QApplication::translate("AnfangsGui", "W\303\244hle Deine Spielfeldgr\303\266\303\237e:", nullptr));
        label_3->setText(QApplication::translate("AnfangsGui", "Reihen:", nullptr));
        comboBox_Rows->setItemText(0, QApplication::translate("AnfangsGui", "5", nullptr));
        comboBox_Rows->setItemText(1, QApplication::translate("AnfangsGui", "6", nullptr));
        comboBox_Rows->setItemText(2, QApplication::translate("AnfangsGui", "7", nullptr));
        comboBox_Rows->setItemText(3, QApplication::translate("AnfangsGui", "8", nullptr));
        comboBox_Rows->setItemText(4, QApplication::translate("AnfangsGui", "9", nullptr));
        comboBox_Rows->setItemText(5, QApplication::translate("AnfangsGui", "10", nullptr));
        comboBox_Rows->setItemText(6, QApplication::translate("AnfangsGui", "11", nullptr));
        comboBox_Rows->setItemText(7, QApplication::translate("AnfangsGui", "12", nullptr));
        comboBox_Rows->setItemText(8, QApplication::translate("AnfangsGui", "13", nullptr));
        comboBox_Rows->setItemText(9, QApplication::translate("AnfangsGui", "14", nullptr));
        comboBox_Rows->setItemText(10, QApplication::translate("AnfangsGui", "15", nullptr));

        radioButton_wickie->setText(QString());
        radioButton_schlumpf->setText(QString());
        radioButton_garfield->setText(QString());
        label_idefix->setText(QString());
        comboBox_Cols->setItemText(0, QApplication::translate("AnfangsGui", "5", nullptr));
        comboBox_Cols->setItemText(1, QApplication::translate("AnfangsGui", "6", nullptr));
        comboBox_Cols->setItemText(2, QApplication::translate("AnfangsGui", "7", nullptr));
        comboBox_Cols->setItemText(3, QApplication::translate("AnfangsGui", "8", nullptr));
        comboBox_Cols->setItemText(4, QApplication::translate("AnfangsGui", "9", nullptr));
        comboBox_Cols->setItemText(5, QApplication::translate("AnfangsGui", "10", nullptr));
        comboBox_Cols->setItemText(6, QApplication::translate("AnfangsGui", "11", nullptr));
        comboBox_Cols->setItemText(7, QApplication::translate("AnfangsGui", "12", nullptr));
        comboBox_Cols->setItemText(8, QApplication::translate("AnfangsGui", "13", nullptr));
        comboBox_Cols->setItemText(9, QApplication::translate("AnfangsGui", "14", nullptr));
        comboBox_Cols->setItemText(10, QApplication::translate("AnfangsGui", "15", nullptr));

        label_garfield->setText(QString());
        label_wickie->setText(QString());
        label->setText(QApplication::translate("AnfangsGui", "Willkommen zum Cave Adventure!", nullptr));
        label_4->setText(QApplication::translate("AnfangsGui", "Spalten:", nullptr));
        radioButton_idefix->setText(QString());
        label_5->setText(QApplication::translate("AnfangsGui", "Welcher Spieler willst Du sein?", nullptr));
        label_schlumpf->setText(QString());
        pushButton_los->setText(QApplication::translate("AnfangsGui", "Los geht's!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnfangsGui: public Ui_AnfangsGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANFANGSGUI_H

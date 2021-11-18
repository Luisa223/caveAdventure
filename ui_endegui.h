/********************************************************************************
** Form generated from reading UI file 'endegui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDEGUI_H
#define UI_ENDEGUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EndeGui
{
public:
    QPushButton *pushButton_neuesSpiel;
    QPushButton *pushButton_spielEnde;
    QLabel *label_ergebnis;

    void setupUi(QWidget *EndeGui)
    {
        if (EndeGui->objectName().isEmpty())
            EndeGui->setObjectName(QString::fromUtf8("EndeGui"));
        EndeGui->resize(373, 249);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix2/cave.png"), QSize(), QIcon::Selected, QIcon::On);
        EndeGui->setWindowIcon(icon);
        pushButton_neuesSpiel = new QPushButton(EndeGui);
        pushButton_neuesSpiel->setObjectName(QString::fromUtf8("pushButton_neuesSpiel"));
        pushButton_neuesSpiel->setGeometry(QRect(40, 180, 101, 31));
        pushButton_spielEnde = new QPushButton(EndeGui);
        pushButton_spielEnde->setObjectName(QString::fromUtf8("pushButton_spielEnde"));
        pushButton_spielEnde->setGeometry(QRect(250, 180, 91, 31));
        label_ergebnis = new QLabel(EndeGui);
        label_ergebnis->setObjectName(QString::fromUtf8("label_ergebnis"));
        label_ergebnis->setGeometry(QRect(50, 40, 281, 81));
        QFont font;
        font.setPointSize(14);
        label_ergebnis->setFont(font);

        retranslateUi(EndeGui);

        QMetaObject::connectSlotsByName(EndeGui);
    } // setupUi

    void retranslateUi(QWidget *EndeGui)
    {
        EndeGui->setWindowTitle(QApplication::translate("EndeGui", "Form", nullptr));
        pushButton_neuesSpiel->setText(QApplication::translate("EndeGui", "Neues Spiel", nullptr));
        pushButton_spielEnde->setText(QApplication::translate("EndeGui", "Spiel beenden", nullptr));
        label_ergebnis->setText(QApplication::translate("EndeGui", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EndeGui: public Ui_EndeGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDEGUI_H

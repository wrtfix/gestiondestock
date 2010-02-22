/********************************************************************************
** Form generated from reading ui file 'acerca.ui'
**
** Created: Wed Feb 17 19:37:53 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ACERCA_H
#define UI_ACERCA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Acerca
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_5;

    void setupUi(QWidget *Acerca)
    {
        if (Acerca->objectName().isEmpty())
            Acerca->setObjectName(QString::fromUtf8("Acerca"));
        Acerca->resize(471, 183);
        pushButton = new QPushButton(Acerca);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 150, 92, 28));
        label = new QLabel(Acerca);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 151, 18));
        label_3 = new QLabel(Acerca);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 40, 241, 18));
        label_4 = new QLabel(Acerca);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 60, 181, 18));
        label_2 = new QLabel(Acerca);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 80, 101, 18));
        line = new QFrame(Acerca);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 130, 441, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(Acerca);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 100, 351, 18));

        retranslateUi(Acerca);
        QObject::connect(pushButton, SIGNAL(clicked()), Acerca, SLOT(clickAceptar()));

        QMetaObject::connectSlotsByName(Acerca);
    } // setupUi

    void retranslateUi(QWidget *Acerca)
    {
        Acerca->setWindowTitle(QApplication::translate("Acerca", "Acerca de..", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Acerca", "&Aceptar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Acerca", "Gestion de Demo v1.0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Acerca", "Producido por: Jorge Carlos Mendiola", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Acerca", "Email: wrtfix@gmail.com", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Acerca", "Licencia: GPL 3", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Acerca", "Fecha de entrega: lunes 1 de Marzo 2010", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Acerca);
    } // retranslateUi

};

namespace Ui {
    class Acerca: public Ui_Acerca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACERCA_H

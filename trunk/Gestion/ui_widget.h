/********************************************************************************
** Form generated from reading ui file 'widget.ui'
**
** Created: Tue Feb 16 17:58:56 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLineEdit *textActual;
    QWebView *webView;
    QLabel *label_12;
    QLineEdit *textInicial;
    QCheckBox *checkCuenta;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *textCodigo;
    QComboBox *comboModelo;
    QComboBox *comboProductos;
    QLineEdit *textPrecio;
    QLineEdit *textCantidad;
    QLineEdit *textHard;
    QLineEdit *textServicioTecnico;
    QLineEdit *textEfectivo;
    QLineEdit *textTarjeta;
    QLineEdit *textCuentaCorriente;
    QLineEdit *textGasto;
    QLineEdit *textMotivo;
    QTableView *tableView;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *botonAgregar;
    QPushButton *botonGuardar;
    QPushButton *botonCerrarCaja;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setWindowModality(Qt::NonModal);
        Widget->resize(1243, 347);
        Widget->setFocusPolicy(Qt::ClickFocus);
        Widget->setContextMenuPolicy(Qt::DefaultContextMenu);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        textActual = new QLineEdit(Widget);
        textActual->setObjectName(QString::fromUtf8("textActual"));
        textActual->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textActual, 0, 1, 1, 2);

        webView = new QWebView(Widget);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 236, 235);"));
        webView->setUrl(QUrl("http://www.dolaronline.com/"));

        gridLayout->addWidget(webView, 0, 8, 3, 5);

        label_12 = new QLabel(Widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        textInicial = new QLineEdit(Widget);
        textInicial->setObjectName(QString::fromUtf8("textInicial"));
        textInicial->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textInicial, 1, 1, 1, 2);

        checkCuenta = new QCheckBox(Widget);
        checkCuenta->setObjectName(QString::fromUtf8("checkCuenta"));

        gridLayout->addWidget(checkCuenta, 2, 0, 1, 3);

        label_13 = new QLabel(Widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 3, 0, 1, 2);

        label_14 = new QLabel(Widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 3, 2, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 3, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 4, 1, 1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 5, 1, 1);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 6, 1, 1);

        label_8 = new QLabel(Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 7, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 8, 1, 1);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 9, 1, 1);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 10, 1, 1);

        label_9 = new QLabel(Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 11, 1, 1);

        label_10 = new QLabel(Widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setContextMenuPolicy(Qt::DefaultContextMenu);

        gridLayout->addWidget(label_10, 3, 12, 1, 1);

        textCodigo = new QLineEdit(Widget);
        textCodigo->setObjectName(QString::fromUtf8("textCodigo"));

        gridLayout->addWidget(textCodigo, 4, 0, 1, 2);

        comboModelo = new QComboBox(Widget);
        comboModelo->setObjectName(QString::fromUtf8("comboModelo"));
        comboModelo->setEditable(true);

        gridLayout->addWidget(comboModelo, 4, 2, 1, 1);

        comboProductos = new QComboBox(Widget);
        comboProductos->setObjectName(QString::fromUtf8("comboProductos"));
        comboProductos->setEditable(true);

        gridLayout->addWidget(comboProductos, 4, 3, 1, 1);

        textPrecio = new QLineEdit(Widget);
        textPrecio->setObjectName(QString::fromUtf8("textPrecio"));
        textPrecio->setEnabled(true);
        textPrecio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textPrecio, 4, 4, 1, 1);

        textCantidad = new QLineEdit(Widget);
        textCantidad->setObjectName(QString::fromUtf8("textCantidad"));
        textCantidad->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textCantidad, 4, 5, 1, 1);

        textHard = new QLineEdit(Widget);
        textHard->setObjectName(QString::fromUtf8("textHard"));
        textHard->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textHard, 4, 6, 1, 1);

        textServicioTecnico = new QLineEdit(Widget);
        textServicioTecnico->setObjectName(QString::fromUtf8("textServicioTecnico"));
        textServicioTecnico->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textServicioTecnico, 4, 7, 1, 1);

        textEfectivo = new QLineEdit(Widget);
        textEfectivo->setObjectName(QString::fromUtf8("textEfectivo"));
        textEfectivo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textEfectivo, 4, 8, 1, 1);

        textTarjeta = new QLineEdit(Widget);
        textTarjeta->setObjectName(QString::fromUtf8("textTarjeta"));
        textTarjeta->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textTarjeta, 4, 9, 1, 1);

        textCuentaCorriente = new QLineEdit(Widget);
        textCuentaCorriente->setObjectName(QString::fromUtf8("textCuentaCorriente"));
        textCuentaCorriente->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textCuentaCorriente, 4, 10, 1, 1);

        textGasto = new QLineEdit(Widget);
        textGasto->setObjectName(QString::fromUtf8("textGasto"));
        textGasto->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textGasto, 4, 11, 1, 1);

        textMotivo = new QLineEdit(Widget);
        textMotivo->setObjectName(QString::fromUtf8("textMotivo"));
        textMotivo->setMaxLength(350);

        gridLayout->addWidget(textMotivo, 4, 12, 1, 1);

        tableView = new QTableView(Widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setDragEnabled(true);
        tableView->setSortingEnabled(true);

        gridLayout->addWidget(tableView, 5, 0, 1, 13);

        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 6, 0, 1, 13);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        botonAgregar = new QPushButton(Widget);
        botonAgregar->setObjectName(QString::fromUtf8("botonAgregar"));

        horizontalLayout->addWidget(botonAgregar);

        botonGuardar = new QPushButton(Widget);
        botonGuardar->setObjectName(QString::fromUtf8("botonGuardar"));
        botonGuardar->setEnabled(true);

        horizontalLayout->addWidget(botonGuardar);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 3);

        botonCerrarCaja = new QPushButton(Widget);
        botonCerrarCaja->setObjectName(QString::fromUtf8("botonCerrarCaja"));

        gridLayout->addWidget(botonCerrarCaja, 7, 12, 1, 1);

        QWidget::setTabOrder(checkCuenta, textCodigo);
        QWidget::setTabOrder(textCodigo, comboModelo);
        QWidget::setTabOrder(comboModelo, comboProductos);
        QWidget::setTabOrder(comboProductos, textPrecio);
        QWidget::setTabOrder(textPrecio, textCantidad);
        QWidget::setTabOrder(textCantidad, textHard);
        QWidget::setTabOrder(textHard, textServicioTecnico);
        QWidget::setTabOrder(textServicioTecnico, textEfectivo);
        QWidget::setTabOrder(textEfectivo, textTarjeta);
        QWidget::setTabOrder(textTarjeta, textCuentaCorriente);
        QWidget::setTabOrder(textCuentaCorriente, textGasto);
        QWidget::setTabOrder(textGasto, textMotivo);
        QWidget::setTabOrder(textMotivo, botonAgregar);
        QWidget::setTabOrder(botonAgregar, tableView);
        QWidget::setTabOrder(tableView, botonGuardar);
        QWidget::setTabOrder(botonGuardar, botonCerrarCaja);
        QWidget::setTabOrder(botonCerrarCaja, textActual);
        QWidget::setTabOrder(textActual, textInicial);
        QWidget::setTabOrder(textInicial, webView);

        retranslateUi(Widget);
        QObject::connect(comboProductos, SIGNAL(activated(QString)), Widget, SLOT(buscarPrecio(QString)));
        QObject::connect(botonAgregar, SIGNAL(clicked()), Widget, SLOT(agregarProducto()));
        QObject::connect(botonCerrarCaja, SIGNAL(clicked()), Widget, SLOT(cerrarCaja()));
        QObject::connect(comboProductos, SIGNAL(editTextChanged(QString)), Widget, SLOT(buscarPrecio(QString)));
        QObject::connect(botonGuardar, SIGNAL(clicked()), Widget, SLOT(guardarCambios()));
        QObject::connect(textCodigo, SIGNAL(textEdited(QString)), Widget, SLOT(textPrecio(QString)));
        QObject::connect(textPrecio, SIGNAL(textChanged(QString)), Widget, SLOT(textHard(QString)));
        QObject::connect(textCantidad, SIGNAL(textChanged(QString)), Widget, SLOT(textCantidad(QString)));
        QObject::connect(comboModelo, SIGNAL(activated(QString)), Widget, SLOT(textModelo(QString)));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Ventas", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Widget", "Caja Actual", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Widget", "Caja Inicial", 0, QApplication::UnicodeUTF8));
        checkCuenta->setText(QApplication::translate("Widget", "Cuenta Corriente", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Widget", "Codigo de Barra", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Widget", "Modelo", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Seleccione Producto", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "Precio", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Widget", "Cant", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Widget", "Hard", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Widget", "Serv. T", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "Efectivo", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "Tarjeta", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget", "Cta. Cte.", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Widget", "Gasto", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Widget", "Motivo", 0, QApplication::UnicodeUTF8));
        textPrecio->setInputMask(QString());
        textCantidad->setText(QApplication::translate("Widget", "1", 0, QApplication::UnicodeUTF8));
        textHard->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        textServicioTecnico->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        textEfectivo->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        textTarjeta->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        textCuentaCorriente->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        textGasto->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        botonAgregar->setText(QApplication::translate("Widget", "Agregar", 0, QApplication::UnicodeUTF8));
        botonGuardar->setText(QApplication::translate("Widget", "Guardar Tabla", 0, QApplication::UnicodeUTF8));
        botonCerrarCaja->setText(QApplication::translate("Widget", "Cerrar Caja", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Widget);
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

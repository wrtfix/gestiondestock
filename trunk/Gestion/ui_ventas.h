/********************************************************************************
** Form generated from reading ui file 'ventas.ui'
**
** Created: Mon Feb 22 19:32:50 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_VENTAS_H
#define UI_VENTAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_Ventas
{
public:
    QAction *actionSalir;
    QAction *actionAlta;
    QAction *actionModificacion;
    QAction *actionVentas;
    QAction *actionNuevo;
    QAction *actionEstado_de_Cuenta;
    QAction *action_Acerca_de;
    QAction *action_Modificar;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuAlta_Stock;
    QMenu *menu_Cliente;
    QMenu *menuAcerca_de;
    QStatusBar *statusBar;
    QDockWidget *Venta;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QLineEdit *textActual;
    QWebView *webView;
    QLabel *label_12;
    QLineEdit *textInicial;
    QCheckBox *checkCuenta;
    QLabel *label_13;
    QLabel *label_14;
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
    QComboBox *comboProductos;
    QLabel *label;
    QDockWidget *AltadeStock;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_5;
    QCheckBox *checkServicio;
    QLabel *label_17;
    QLineEdit *textCodigoBarra;
    QLabel *label_20;
    QComboBox *comboBox;
    QLabel *label_16;
    QLineEdit *textProducto;
    QLabel *label_19;
    QLineEdit *textPrecioUnitario;
    QLabel *label_22;
    QLineEdit *textDolar;
    QLabel *label_21;
    QLineEdit *textMinimo;
    QLabel *label_15;
    QLineEdit *textMaximo;
    QLabel *label_18;
    QLineEdit *textProveedor;
    QFormLayout *formLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QDockWidget *ModificarStock;
    QWidget *widget_5;
    QGridLayout *gridLayout_6;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label_23;
    QLineEdit *textProducto_2;
    QTableView *tableView_2;
    QPushButton *pushButton_3;
    QDockWidget *Cliente;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_8;
    QLabel *label_28;
    QComboBox *comboCliente;
    QPushButton *agregarCtaCte;
    QLabel *label_29;
    QLineEdit *direccionCliente;
    QLabel *label_27;
    QLineEdit *localidadCliente;
    QLabel *label_24;
    QLineEdit *provinciaCliente;
    QLabel *label_25;
    QLineEdit *telefonoCliente;
    QLabel *label_31;
    QLineEdit *ivaCliente;
    QLabel *label_30;
    QLineEdit *cuitCliente;
    QLabel *label_26;
    QLineEdit *mailCliente;
    QPushButton *agregarCliente;
    QDockWidget *modificarCliente;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_9;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QGridLayout *gridLayout_10;
    QLineEdit *lineEdit;
    QTableView *tableView_3;
    QLabel *label_32;
    QPushButton *pushButton_4;
    QDockWidget *estadoCtecta;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_11;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QGridLayout *gridLayout_12;
    QLabel *label_33;
    QComboBox *comboEstado;
    QLabel *label_34;
    QLineEdit *estadoDebe;
    QLabel *label_35;
    QLineEdit *estadoHaber;
    QLabel *label_36;
    QLineEdit *estadoTotal;

    void setupUi(QMainWindow *Ventas)
    {
        if (Ventas->objectName().isEmpty())
            Ventas->setObjectName(QString::fromUtf8("Ventas"));
        Ventas->setWindowModality(Qt::NonModal);
        Ventas->resize(1307, 935);
        actionSalir = new QAction(Ventas);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionAlta = new QAction(Ventas);
        actionAlta->setObjectName(QString::fromUtf8("actionAlta"));
        actionModificacion = new QAction(Ventas);
        actionModificacion->setObjectName(QString::fromUtf8("actionModificacion"));
        actionVentas = new QAction(Ventas);
        actionVentas->setObjectName(QString::fromUtf8("actionVentas"));
        actionNuevo = new QAction(Ventas);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionEstado_de_Cuenta = new QAction(Ventas);
        actionEstado_de_Cuenta->setObjectName(QString::fromUtf8("actionEstado_de_Cuenta"));
        action_Acerca_de = new QAction(Ventas);
        action_Acerca_de->setObjectName(QString::fromUtf8("action_Acerca_de"));
        action_Modificar = new QAction(Ventas);
        action_Modificar->setObjectName(QString::fromUtf8("action_Modificar"));
        centralWidget = new QWidget(Ventas);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Ventas->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Ventas);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1307, 25));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuAlta_Stock = new QMenu(menuMenu);
        menuAlta_Stock->setObjectName(QString::fromUtf8("menuAlta_Stock"));
        menu_Cliente = new QMenu(menuMenu);
        menu_Cliente->setObjectName(QString::fromUtf8("menu_Cliente"));
        menuAcerca_de = new QMenu(menuBar);
        menuAcerca_de->setObjectName(QString::fromUtf8("menuAcerca_de"));
        Ventas->setMenuBar(menuBar);
        statusBar = new QStatusBar(Ventas);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Ventas->setStatusBar(statusBar);
        Venta = new QDockWidget(Ventas);
        Venta->setObjectName(QString::fromUtf8("Venta"));
        Venta->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Venta->sizePolicy().hasHeightForWidth());
        Venta->setSizePolicy(sizePolicy);
        Venta->setMinimumSize(QSize(124, 124));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 952, 343));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 1, 1, 1, 1);

        textActual = new QLineEdit(scrollAreaWidgetContents);
        textActual->setObjectName(QString::fromUtf8("textActual"));
        textActual->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textActual, 1, 2, 1, 3);

        webView = new QWebView(scrollAreaWidgetContents);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 236, 235);"));
        webView->setUrl(QUrl("http://www.dolaronline.com/"));

        gridLayout_3->addWidget(webView, 1, 10, 3, 5);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 2, 1, 1, 1);

        textInicial = new QLineEdit(scrollAreaWidgetContents);
        textInicial->setObjectName(QString::fromUtf8("textInicial"));
        textInicial->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textInicial, 2, 2, 1, 3);

        checkCuenta = new QCheckBox(scrollAreaWidgetContents);
        checkCuenta->setObjectName(QString::fromUtf8("checkCuenta"));

        gridLayout_3->addWidget(checkCuenta, 3, 1, 1, 4);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 4, 1, 1, 2);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 4, 4, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 4, 6, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 4, 7, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 4, 8, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 4, 9, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 4, 10, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 4, 11, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 4, 12, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 4, 13, 1, 1);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setContextMenuPolicy(Qt::DefaultContextMenu);

        gridLayout_3->addWidget(label_10, 4, 14, 1, 1);

        textCodigo = new QLineEdit(scrollAreaWidgetContents);
        textCodigo->setObjectName(QString::fromUtf8("textCodigo"));

        gridLayout_3->addWidget(textCodigo, 5, 1, 1, 2);

        comboModelo = new QComboBox(scrollAreaWidgetContents);
        comboModelo->setObjectName(QString::fromUtf8("comboModelo"));
        comboModelo->setEditable(true);

        gridLayout_3->addWidget(comboModelo, 5, 4, 1, 1);

        textPrecio = new QLineEdit(scrollAreaWidgetContents);
        textPrecio->setObjectName(QString::fromUtf8("textPrecio"));
        textPrecio->setEnabled(true);
        textPrecio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textPrecio, 5, 6, 1, 1);

        textCantidad = new QLineEdit(scrollAreaWidgetContents);
        textCantidad->setObjectName(QString::fromUtf8("textCantidad"));
        textCantidad->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textCantidad, 5, 7, 1, 1);

        textHard = new QLineEdit(scrollAreaWidgetContents);
        textHard->setObjectName(QString::fromUtf8("textHard"));
        textHard->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textHard, 5, 8, 1, 1);

        textServicioTecnico = new QLineEdit(scrollAreaWidgetContents);
        textServicioTecnico->setObjectName(QString::fromUtf8("textServicioTecnico"));
        textServicioTecnico->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textServicioTecnico, 5, 9, 1, 1);

        textEfectivo = new QLineEdit(scrollAreaWidgetContents);
        textEfectivo->setObjectName(QString::fromUtf8("textEfectivo"));
        textEfectivo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textEfectivo, 5, 10, 1, 1);

        textTarjeta = new QLineEdit(scrollAreaWidgetContents);
        textTarjeta->setObjectName(QString::fromUtf8("textTarjeta"));
        textTarjeta->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textTarjeta, 5, 11, 1, 1);

        textCuentaCorriente = new QLineEdit(scrollAreaWidgetContents);
        textCuentaCorriente->setObjectName(QString::fromUtf8("textCuentaCorriente"));
        textCuentaCorriente->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textCuentaCorriente, 5, 12, 1, 1);

        textGasto = new QLineEdit(scrollAreaWidgetContents);
        textGasto->setObjectName(QString::fromUtf8("textGasto"));
        textGasto->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textGasto, 5, 13, 1, 1);

        textMotivo = new QLineEdit(scrollAreaWidgetContents);
        textMotivo->setObjectName(QString::fromUtf8("textMotivo"));
        textMotivo->setMaxLength(350);

        gridLayout_3->addWidget(textMotivo, 5, 14, 1, 1);

        tableView = new QTableView(scrollAreaWidgetContents);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setDragEnabled(true);
        tableView->setSortingEnabled(true);

        gridLayout_3->addWidget(tableView, 6, 1, 1, 14);

        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 7, 1, 1, 14);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        botonAgregar = new QPushButton(scrollAreaWidgetContents);
        botonAgregar->setObjectName(QString::fromUtf8("botonAgregar"));

        horizontalLayout->addWidget(botonAgregar);

        botonGuardar = new QPushButton(scrollAreaWidgetContents);
        botonGuardar->setObjectName(QString::fromUtf8("botonGuardar"));
        botonGuardar->setEnabled(true);

        horizontalLayout->addWidget(botonGuardar);


        gridLayout_3->addLayout(horizontalLayout, 8, 1, 1, 1);

        botonCerrarCaja = new QPushButton(scrollAreaWidgetContents);
        botonCerrarCaja->setObjectName(QString::fromUtf8("botonCerrarCaja"));

        gridLayout_3->addWidget(botonCerrarCaja, 8, 14, 1, 1);

        comboProductos = new QComboBox(scrollAreaWidgetContents);
        comboProductos->setObjectName(QString::fromUtf8("comboProductos"));
        comboProductos->setEditable(true);

        gridLayout_3->addWidget(comboProductos, 5, 3, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 4, 3, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        Venta->setWidget(widget);
        Ventas->addDockWidget(static_cast<Qt::DockWidgetArea>(1), Venta);
        AltadeStock = new QDockWidget(Ventas);
        AltadeStock->setObjectName(QString::fromUtf8("AltadeStock"));
        widget_3 = new QWidget();
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea_2 = new QScrollArea(widget_3);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 256, 526));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkServicio = new QCheckBox(scrollAreaWidgetContents_2);
        checkServicio->setObjectName(QString::fromUtf8("checkServicio"));

        gridLayout_5->addWidget(checkServicio, 1, 1, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_5->addWidget(label_17, 2, 1, 1, 1);

        textCodigoBarra = new QLineEdit(scrollAreaWidgetContents_2);
        textCodigoBarra->setObjectName(QString::fromUtf8("textCodigoBarra"));

        gridLayout_5->addWidget(textCodigoBarra, 3, 1, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_5->addWidget(label_20, 4, 1, 1, 1);

        comboBox = new QComboBox(scrollAreaWidgetContents_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(true);

        gridLayout_5->addWidget(comboBox, 5, 1, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_5->addWidget(label_16, 6, 1, 1, 1);

        textProducto = new QLineEdit(scrollAreaWidgetContents_2);
        textProducto->setObjectName(QString::fromUtf8("textProducto"));

        gridLayout_5->addWidget(textProducto, 7, 1, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_5->addWidget(label_19, 8, 1, 1, 1);

        textPrecioUnitario = new QLineEdit(scrollAreaWidgetContents_2);
        textPrecioUnitario->setObjectName(QString::fromUtf8("textPrecioUnitario"));
        textPrecioUnitario->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(textPrecioUnitario, 10, 1, 1, 1);

        label_22 = new QLabel(scrollAreaWidgetContents_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_5->addWidget(label_22, 11, 1, 1, 1);

        textDolar = new QLineEdit(scrollAreaWidgetContents_2);
        textDolar->setObjectName(QString::fromUtf8("textDolar"));
        textDolar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(textDolar, 12, 1, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_5->addWidget(label_21, 13, 1, 1, 1);

        textMinimo = new QLineEdit(scrollAreaWidgetContents_2);
        textMinimo->setObjectName(QString::fromUtf8("textMinimo"));
        textMinimo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(textMinimo, 14, 1, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_5->addWidget(label_15, 15, 1, 1, 1);

        textMaximo = new QLineEdit(scrollAreaWidgetContents_2);
        textMaximo->setObjectName(QString::fromUtf8("textMaximo"));
        textMaximo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(textMaximo, 16, 1, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_5->addWidget(label_18, 17, 1, 1, 1);

        textProveedor = new QLineEdit(scrollAreaWidgetContents_2);
        textProveedor->setObjectName(QString::fromUtf8("textProveedor"));

        gridLayout_5->addWidget(textProveedor, 19, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        pushButton_2 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton_2);

        pushButton = new QPushButton(scrollAreaWidgetContents_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton);


        gridLayout_5->addLayout(formLayout, 20, 1, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_4->addWidget(scrollArea_2, 0, 0, 1, 1);

        AltadeStock->setWidget(widget_3);
        Ventas->addDockWidget(static_cast<Qt::DockWidgetArea>(2), AltadeStock);
        ModificarStock = new QDockWidget(Ventas);
        ModificarStock->setObjectName(QString::fromUtf8("ModificarStock"));
        widget_5 = new QWidget();
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_6 = new QGridLayout(widget_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setMargin(11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        scrollArea_3 = new QScrollArea(widget_5);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 256, 191));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setMargin(11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_23 = new QLabel(scrollAreaWidgetContents_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout->addWidget(label_23);

        textProducto_2 = new QLineEdit(scrollAreaWidgetContents_3);
        textProducto_2->setObjectName(QString::fromUtf8("textProducto_2"));

        verticalLayout->addWidget(textProducto_2);


        gridLayout_7->addLayout(verticalLayout, 0, 0, 1, 1);

        tableView_2 = new QTableView(scrollAreaWidgetContents_3);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        gridLayout_7->addWidget(tableView_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_7->addWidget(pushButton_3, 2, 0, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        gridLayout_6->addWidget(scrollArea_3, 0, 0, 1, 1);

        ModificarStock->setWidget(widget_5);
        Ventas->addDockWidget(static_cast<Qt::DockWidgetArea>(2), ModificarStock);
        Cliente = new QDockWidget(Ventas);
        Cliente->setObjectName(QString::fromUtf8("Cliente"));
        sizePolicy.setHeightForWidth(Cliente->sizePolicy().hasHeightForWidth());
        Cliente->setSizePolicy(sizePolicy);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea_4 = new QScrollArea(dockWidgetContents);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 386, 529));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setMargin(11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_28 = new QLabel(scrollAreaWidgetContents_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_8->addWidget(label_28, 0, 0, 1, 1);

        comboCliente = new QComboBox(scrollAreaWidgetContents_4);
        comboCliente->setObjectName(QString::fromUtf8("comboCliente"));
        comboCliente->setEditable(true);

        gridLayout_8->addWidget(comboCliente, 1, 0, 1, 1);

        agregarCtaCte = new QPushButton(scrollAreaWidgetContents_4);
        agregarCtaCte->setObjectName(QString::fromUtf8("agregarCtaCte"));
        agregarCtaCte->setEnabled(false);

        gridLayout_8->addWidget(agregarCtaCte, 2, 0, 1, 1);

        label_29 = new QLabel(scrollAreaWidgetContents_4);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_8->addWidget(label_29, 3, 0, 1, 1);

        direccionCliente = new QLineEdit(scrollAreaWidgetContents_4);
        direccionCliente->setObjectName(QString::fromUtf8("direccionCliente"));

        gridLayout_8->addWidget(direccionCliente, 4, 0, 1, 1);

        label_27 = new QLabel(scrollAreaWidgetContents_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_8->addWidget(label_27, 5, 0, 1, 1);

        localidadCliente = new QLineEdit(scrollAreaWidgetContents_4);
        localidadCliente->setObjectName(QString::fromUtf8("localidadCliente"));

        gridLayout_8->addWidget(localidadCliente, 6, 0, 1, 1);

        label_24 = new QLabel(scrollAreaWidgetContents_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_8->addWidget(label_24, 7, 0, 1, 1);

        provinciaCliente = new QLineEdit(scrollAreaWidgetContents_4);
        provinciaCliente->setObjectName(QString::fromUtf8("provinciaCliente"));

        gridLayout_8->addWidget(provinciaCliente, 8, 0, 1, 1);

        label_25 = new QLabel(scrollAreaWidgetContents_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_8->addWidget(label_25, 9, 0, 1, 1);

        telefonoCliente = new QLineEdit(scrollAreaWidgetContents_4);
        telefonoCliente->setObjectName(QString::fromUtf8("telefonoCliente"));

        gridLayout_8->addWidget(telefonoCliente, 10, 0, 1, 1);

        label_31 = new QLabel(scrollAreaWidgetContents_4);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_8->addWidget(label_31, 11, 0, 1, 1);

        ivaCliente = new QLineEdit(scrollAreaWidgetContents_4);
        ivaCliente->setObjectName(QString::fromUtf8("ivaCliente"));

        gridLayout_8->addWidget(ivaCliente, 12, 0, 1, 1);

        label_30 = new QLabel(scrollAreaWidgetContents_4);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_8->addWidget(label_30, 13, 0, 1, 1);

        cuitCliente = new QLineEdit(scrollAreaWidgetContents_4);
        cuitCliente->setObjectName(QString::fromUtf8("cuitCliente"));

        gridLayout_8->addWidget(cuitCliente, 14, 0, 1, 1);

        label_26 = new QLabel(scrollAreaWidgetContents_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_8->addWidget(label_26, 15, 0, 1, 1);

        mailCliente = new QLineEdit(scrollAreaWidgetContents_4);
        mailCliente->setObjectName(QString::fromUtf8("mailCliente"));

        gridLayout_8->addWidget(mailCliente, 16, 0, 1, 1);

        agregarCliente = new QPushButton(scrollAreaWidgetContents_4);
        agregarCliente->setObjectName(QString::fromUtf8("agregarCliente"));

        gridLayout_8->addWidget(agregarCliente, 17, 0, 1, 1);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        gridLayout->addWidget(scrollArea_4, 0, 0, 1, 1);

        Cliente->setWidget(dockWidgetContents);
        Ventas->addDockWidget(static_cast<Qt::DockWidgetArea>(4), Cliente);
        modificarCliente = new QDockWidget(Ventas);
        modificarCliente->setObjectName(QString::fromUtf8("modificarCliente"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        gridLayout_9 = new QGridLayout(dockWidgetContents_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setMargin(11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        scrollArea_5 = new QScrollArea(dockWidgetContents_2);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 516, 430));
        gridLayout_10 = new QGridLayout(scrollAreaWidgetContents_5);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setMargin(11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        lineEdit = new QLineEdit(scrollAreaWidgetContents_5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_10->addWidget(lineEdit, 1, 0, 1, 1);

        tableView_3 = new QTableView(scrollAreaWidgetContents_5);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));

        gridLayout_10->addWidget(tableView_3, 3, 0, 1, 1);

        label_32 = new QLabel(scrollAreaWidgetContents_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_10->addWidget(label_32, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents_5);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_10->addWidget(pushButton_4, 4, 0, 1, 1);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        gridLayout_9->addWidget(scrollArea_5, 0, 0, 1, 1);

        modificarCliente->setWidget(dockWidgetContents_2);
        Ventas->addDockWidget(static_cast<Qt::DockWidgetArea>(4), modificarCliente);
        estadoCtecta = new QDockWidget(Ventas);
        estadoCtecta->setObjectName(QString::fromUtf8("estadoCtecta"));
        estadoCtecta->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout_11 = new QGridLayout(dockWidgetContents_3);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setMargin(11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        scrollArea_6 = new QScrollArea(dockWidgetContents_3);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 315, 430));
        gridLayout_12 = new QGridLayout(scrollAreaWidgetContents_6);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setMargin(11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_33 = new QLabel(scrollAreaWidgetContents_6);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_12->addWidget(label_33, 0, 0, 1, 1);

        comboEstado = new QComboBox(scrollAreaWidgetContents_6);
        comboEstado->setObjectName(QString::fromUtf8("comboEstado"));
        comboEstado->setEditable(true);

        gridLayout_12->addWidget(comboEstado, 1, 0, 1, 1);

        label_34 = new QLabel(scrollAreaWidgetContents_6);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_12->addWidget(label_34, 2, 0, 1, 1);

        estadoDebe = new QLineEdit(scrollAreaWidgetContents_6);
        estadoDebe->setObjectName(QString::fromUtf8("estadoDebe"));
        estadoDebe->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_12->addWidget(estadoDebe, 3, 0, 1, 1);

        label_35 = new QLabel(scrollAreaWidgetContents_6);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_12->addWidget(label_35, 4, 0, 1, 1);

        estadoHaber = new QLineEdit(scrollAreaWidgetContents_6);
        estadoHaber->setObjectName(QString::fromUtf8("estadoHaber"));
        estadoHaber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_12->addWidget(estadoHaber, 5, 0, 1, 1);

        label_36 = new QLabel(scrollAreaWidgetContents_6);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_12->addWidget(label_36, 6, 0, 1, 1);

        estadoTotal = new QLineEdit(scrollAreaWidgetContents_6);
        estadoTotal->setObjectName(QString::fromUtf8("estadoTotal"));

        gridLayout_12->addWidget(estadoTotal, 7, 0, 1, 1);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        gridLayout_11->addWidget(scrollArea_6, 0, 0, 1, 1);

        estadoCtecta->setWidget(dockWidgetContents_3);
        Ventas->addDockWidget(static_cast<Qt::DockWidgetArea>(4), estadoCtecta);
        QWidget::setTabOrder(textCodigo, comboModelo);
        QWidget::setTabOrder(comboModelo, textPrecio);
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
        QWidget::setTabOrder(botonCerrarCaja, textCodigoBarra);
        QWidget::setTabOrder(textCodigoBarra, comboBox);
        QWidget::setTabOrder(comboBox, textProducto);
        QWidget::setTabOrder(textProducto, textPrecioUnitario);
        QWidget::setTabOrder(textPrecioUnitario, textDolar);
        QWidget::setTabOrder(textDolar, textMinimo);
        QWidget::setTabOrder(textMinimo, textMaximo);
        QWidget::setTabOrder(textMaximo, textProveedor);
        QWidget::setTabOrder(textProveedor, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, textProducto_2);
        QWidget::setTabOrder(textProducto_2, tableView_2);
        QWidget::setTabOrder(tableView_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, comboCliente);
        QWidget::setTabOrder(comboCliente, agregarCtaCte);
        QWidget::setTabOrder(agregarCtaCte, direccionCliente);
        QWidget::setTabOrder(direccionCliente, localidadCliente);
        QWidget::setTabOrder(localidadCliente, provinciaCliente);
        QWidget::setTabOrder(provinciaCliente, telefonoCliente);
        QWidget::setTabOrder(telefonoCliente, ivaCliente);
        QWidget::setTabOrder(ivaCliente, cuitCliente);
        QWidget::setTabOrder(cuitCliente, mailCliente);
        QWidget::setTabOrder(mailCliente, agregarCliente);
        QWidget::setTabOrder(agregarCliente, scrollArea);
        QWidget::setTabOrder(scrollArea, checkServicio);
        QWidget::setTabOrder(checkServicio, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, webView);
        QWidget::setTabOrder(webView, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, textActual);
        QWidget::setTabOrder(textActual, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, checkCuenta);
        QWidget::setTabOrder(checkCuenta, textInicial);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAcerca_de->menuAction());
        menuMenu->addAction(actionVentas);
        menuMenu->addAction(menuAlta_Stock->menuAction());
        menuMenu->addAction(menu_Cliente->menuAction());
        menuMenu->addSeparator();
        menuMenu->addAction(actionSalir);
        menuAlta_Stock->addAction(actionAlta);
        menuAlta_Stock->addAction(actionModificacion);
        menu_Cliente->addAction(actionNuevo);
        menu_Cliente->addAction(actionEstado_de_Cuenta);
        menu_Cliente->addAction(action_Modificar);
        menuAcerca_de->addAction(action_Acerca_de);

        retranslateUi(Ventas);
        QObject::connect(actionSalir, SIGNAL(triggered()), Ventas, SLOT(close()));
        QObject::connect(actionVentas, SIGNAL(triggered()), Venta, SLOT(show()));
        QObject::connect(actionAlta, SIGNAL(triggered()), AltadeStock, SLOT(show()));
        QObject::connect(botonGuardar, SIGNAL(clicked()), Ventas, SLOT(guardarVentas()));
        QObject::connect(botonAgregar, SIGNAL(clicked()), Ventas, SLOT(agregarVenta()));
        QObject::connect(botonCerrarCaja, SIGNAL(clicked()), Ventas, SLOT(cerrarVenta()));
        QObject::connect(actionModificacion, SIGNAL(triggered()), ModificarStock, SLOT(show()));
        QObject::connect(comboModelo, SIGNAL(activated(QString)), Ventas, SLOT(textModelo(QString)));
        QObject::connect(textCodigo, SIGNAL(textChanged(QString)), Ventas, SLOT(textCodigo(QString)));
        QObject::connect(comboProductos, SIGNAL(activated(QString)), Ventas, SLOT(textProducto(QString)));
        QObject::connect(textPrecio, SIGNAL(textChanged(QString)), Ventas, SLOT(textPrecio(QString)));
        QObject::connect(pushButton, SIGNAL(clicked()), Ventas, SLOT(agregarProducto()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Ventas, SLOT(guardarProducto()));
        QObject::connect(textProducto_2, SIGNAL(textChanged(QString)), Ventas, SLOT(buscarProducto(QString)));
        QObject::connect(actionNuevo, SIGNAL(triggered()), Cliente, SLOT(show()));
        QObject::connect(agregarCtaCte, SIGNAL(clicked()), Ventas, SLOT(agregarCuenta()));
        QObject::connect(agregarCliente, SIGNAL(clicked()), Ventas, SLOT(agregarCliente()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), Ventas, SLOT(guardarCliente()));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), Ventas, SLOT(textCliente(QString)));
        QObject::connect(action_Modificar, SIGNAL(triggered()), modificarCliente, SLOT(show()));
        QObject::connect(actionEstado_de_Cuenta, SIGNAL(triggered()), estadoCtecta, SLOT(show()));
        QObject::connect(comboEstado, SIGNAL(activated(QString)), Ventas, SLOT(textEstado(QString)));

        QMetaObject::connectSlotsByName(Ventas);
    } // setupUi

    void retranslateUi(QMainWindow *Ventas)
    {
        Ventas->setWindowTitle(QApplication::translate("Ventas", "Gestion de Demo Computacion", 0, QApplication::UnicodeUTF8));
        actionSalir->setText(QApplication::translate("Ventas", "&Salir", 0, QApplication::UnicodeUTF8));
        actionSalir->setShortcut(QApplication::translate("Ventas", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionAlta->setText(QApplication::translate("Ventas", "&Alta de Stock", 0, QApplication::UnicodeUTF8));
        actionAlta->setShortcut(QApplication::translate("Ventas", "Alt+S", 0, QApplication::UnicodeUTF8));
        actionModificacion->setText(QApplication::translate("Ventas", "M&odificacion de Stock", 0, QApplication::UnicodeUTF8));
        actionModificacion->setShortcut(QApplication::translate("Ventas", "Alt+O", 0, QApplication::UnicodeUTF8));
        actionVentas->setText(QApplication::translate("Ventas", "&Ventas", 0, QApplication::UnicodeUTF8));
        actionVentas->setShortcut(QApplication::translate("Ventas", "Alt+V", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("Ventas", "&Nuevo Cliente", 0, QApplication::UnicodeUTF8));
        actionNuevo->setShortcut(QApplication::translate("Ventas", "Alt+N", 0, QApplication::UnicodeUTF8));
        actionEstado_de_Cuenta->setText(QApplication::translate("Ventas", "&Estado de Cuenta", 0, QApplication::UnicodeUTF8));
        actionEstado_de_Cuenta->setShortcut(QApplication::translate("Ventas", "Alt+T", 0, QApplication::UnicodeUTF8));
        action_Acerca_de->setText(QApplication::translate("Ventas", "&Acerca de..", 0, QApplication::UnicodeUTF8));
        action_Acerca_de->setShortcut(QApplication::translate("Ventas", "Alt+Y", 0, QApplication::UnicodeUTF8));
        action_Modificar->setText(QApplication::translate("Ventas", "&Modificar Cliente", 0, QApplication::UnicodeUTF8));
        action_Modificar->setShortcut(QApplication::translate("Ventas", "Alt+Z", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("Ventas", "&Menu", 0, QApplication::UnicodeUTF8));
        menuAlta_Stock->setTitle(QApplication::translate("Ventas", "Stock", 0, QApplication::UnicodeUTF8));
        menu_Cliente->setTitle(QApplication::translate("Ventas", "&Cliente", 0, QApplication::UnicodeUTF8));
        menuAcerca_de->setTitle(QApplication::translate("Ventas", "&Ayuda", 0, QApplication::UnicodeUTF8));
        Venta->setWindowTitle(QApplication::translate("Ventas", "Venta", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Ventas", "Caja Actual", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Ventas", "Caja Inicial", 0, QApplication::UnicodeUTF8));
        checkCuenta->setText(QApplication::translate("Ventas", "Cuenta Corriente", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Ventas", "Codigo de Barra", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Ventas", "Modelo", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Ventas", "Precio", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Ventas", "Cant", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Ventas", "Hard", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Ventas", "Serv. T", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Ventas", "Efectivo", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Ventas", "Tarjeta", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Ventas", "Cta. Cte.", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Ventas", "Gasto", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Ventas", "Motivo", 0, QApplication::UnicodeUTF8));
        textPrecio->setInputMask(QString());
        textCantidad->setText(QApplication::translate("Ventas", "1", 0, QApplication::UnicodeUTF8));
        textHard->setText(QApplication::translate("Ventas", "0", 0, QApplication::UnicodeUTF8));
        textServicioTecnico->setText(QApplication::translate("Ventas", "0", 0, QApplication::UnicodeUTF8));
        textEfectivo->setText(QApplication::translate("Ventas", "0", 0, QApplication::UnicodeUTF8));
        textTarjeta->setText(QApplication::translate("Ventas", "0", 0, QApplication::UnicodeUTF8));
        textCuentaCorriente->setText(QApplication::translate("Ventas", "0", 0, QApplication::UnicodeUTF8));
        textGasto->setText(QApplication::translate("Ventas", "0", 0, QApplication::UnicodeUTF8));
        botonAgregar->setText(QApplication::translate("Ventas", "Agregar", 0, QApplication::UnicodeUTF8));
        botonGuardar->setText(QApplication::translate("Ventas", "Guardar Tabla", 0, QApplication::UnicodeUTF8));
        botonCerrarCaja->setText(QApplication::translate("Ventas", "Cerrar Caja", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Ventas", "Seleccione Producto", 0, QApplication::UnicodeUTF8));
        AltadeStock->setWindowTitle(QApplication::translate("Ventas", "Alta de Stock", 0, QApplication::UnicodeUTF8));
        checkServicio->setText(QApplication::translate("Ventas", "Sertvicio Tecnico", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Ventas", "Codigo de Barra", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Ventas", "Modelos:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Ventas", "Producto", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Ventas", "Precio Pesos", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Ventas", "Precion en Dolar", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Ventas", "Stock Minimo", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Ventas", "Stock Maximo", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Ventas", "Id Proveedor", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Ventas", "Buscar Proveedor", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Ventas", "Agregar", 0, QApplication::UnicodeUTF8));
        ModificarStock->setWindowTitle(QApplication::translate("Ventas", "Modificacion de Stock", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Ventas", "Producto:", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Ventas", "Guardar", 0, QApplication::UnicodeUTF8));
        Cliente->setWindowTitle(QApplication::translate("Ventas", "Alta de Clientes", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("Ventas", "Nombre:", 0, QApplication::UnicodeUTF8));
        agregarCtaCte->setText(QApplication::translate("Ventas", "Agregar a Cuenta Corriente", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("Ventas", "Direccion:", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("Ventas", "Localidad:", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Ventas", "Provincia:", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Ventas", "Telefono:", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("Ventas", "I.V.A.:", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("Ventas", "C.U.I.T:", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("Ventas", "Email:", 0, QApplication::UnicodeUTF8));
        agregarCliente->setText(QApplication::translate("Ventas", "Agregar Cliente", 0, QApplication::UnicodeUTF8));
        modificarCliente->setWindowTitle(QApplication::translate("Ventas", "Modificar Clientes", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("Ventas", "Nombre:", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Ventas", "&Guardar", 0, QApplication::UnicodeUTF8));
        estadoCtecta->setWindowTitle(QApplication::translate("Ventas", "Estado de Cuenta", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("Ventas", "Nombre:", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("Ventas", "Debe:", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("Ventas", "Haber:", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("Ventas", "Estado:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ventas: public Ui_Ventas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTAS_H

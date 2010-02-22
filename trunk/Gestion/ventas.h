#ifndef VENTAS_H
#define VENTAS_H

#include <QtGui/QMainWindow>
#include <QtSql>
#include <QMessageBox>
#include <QPrinter>
#include <QPainter>
#include <QDateTime>
#include <QSqlTableModel>
#include <QWebView>
#include "acerca.h"
namespace Ui
{
    class Ventas;
}

class Ventas : public QMainWindow
{
    Q_OBJECT

public:
    Ventas(QWidget *parent = 0);
    void Conectar();
    void actualizarDatos();
    ~Ventas();
public slots:
    void guardarVentas();
    void agregarVenta();
    void cerrarVenta();
    void textModelo(QString);
    void textCodigo(QString);
    void textProducto(QString);
    void textPrecio(QString);
    void agregarProducto();
    void guardarProducto();
    void buscarProducto(QString nombre);
    void agregarCuenta();
    void agregarCliente();
    void guardarCliente();
    void textCliente(QString);
    void textEstado(QString);
private:
    Ui::Ventas *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    QSqlTableModel *model2;
    QSqlTableModel *model3;
    Acerca a;
    bool tipo;
    int max;
    int obtenerMaximo();
    bool verificarValores();
    void imprimirPagina();
    void agregarCombo(QSqlQuery);

private slots:
    void on_action_Acerca_de_triggered();
};

#endif // VENTAS_H

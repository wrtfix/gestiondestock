#include "ventas.h"
#include "ui_ventas.h"


Ventas::Ventas(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Ventas)
{
    ui->setupUi(this);
    this->tipo = 0;
    this->centralWidget()->close();
    this->Conectar();
    this->actualizarDatos();
    this->ui->Venta->close();
    this->ui->AltadeStock->close();
    this->ui->Cliente->close();
    this->ui->ModificarStock->close();
    this->ui->Venta->close();
    this->ui->modificarCliente->close();
    this->ui->estadoCtecta->close();
}


void Ventas::Conectar(){
    this->db = QSqlDatabase::addDatabase("QMYSQL");
    this->db.setHostName("localhost");
    this->db.setDatabaseName("demo");
    this->db.setUserName("root");
    this->db.setPassword("123456");
    if (!this->db.open())
        QMessageBox::critical(this,"Error",db.lastError().text());
}

void Ventas::guardarVentas(){
     model->database().transaction();
     if (model->submitAll()) {
         model->database().commit();
     } else {
         model->database().rollback();
         QMessageBox::warning(this, tr("Cached Table"),
                              tr("The database reported an error: %1")
                              .arg(model->lastError().text()));
     }

}

int Ventas::obtenerMaximo(){
    QSqlQuery q3("select max(nrocaja) from venta");
    int nro;
    while(q3.next())
        nro = q3.value(0).toInt();
    return nro;
}

bool Ventas::verificarValores(){
   if (!this->ui->checkCuenta->checkState()){
        float hard,serv,efectivo,tarjeta,ctecta,gastos;
        hard = this->ui->textHard->text().toFloat();
        serv = this->ui->textServicioTecnico->text().toFloat();
        efectivo = this->ui->textEfectivo->text().toFloat();
        tarjeta = this->ui->textTarjeta->text().toFloat();
        ctecta = this->ui->textCuentaCorriente->text().toFloat();
        gastos = this->ui->textGasto->text().toFloat();


        float resultado = (hard+serv) - (efectivo+tarjeta+ctecta);

        if (this->ui->comboProductos->currentText().length()>0){

            if (resultado != 0)
                return false;
            else{
                if (ctecta>0){
                    this->ui->Cliente->show();
                    QMessageBox::critical(this,"Error","Ingrese el cliente con Cuenta Corriente");
                    this->ui->Venta->setEnabled(false);
                    this->ui->agregarCtaCte->setEnabled(true);
                }
                return true;
            }
        }else
            return false;
    }
   else{
       this->ui->Cliente->show();
       QMessageBox::warning(this,"Precaucion","Ingrese el cliente con Cuenta Corriente");
       this->ui->Venta->setEnabled(false);
       this->ui->agregarCtaCte->setEnabled(true);
       return true;
    }

}

void Ventas::agregarVenta(){
   QString a;
    a.append("INSERT INTO venta (producto, cantidad, hard, serv, efectivo, tarjeta, ctecta, gastos, fecha, motivo, nrocaja) VALUES ('");
    a.append(this->ui->comboProductos->currentText());
    a.append("',");
    a.append(this->ui->textCantidad->text());
    a.append(",");
    a.append(this->ui->textHard->text());
    a.append(",");
    a.append(this->ui->textServicioTecnico->text());
    a.append(",");
    a.append(this->ui->textEfectivo->text());
    a.append(",");
    a.append(this->ui->textTarjeta->text());
    a.append(",");
    a.append(this->ui->textCuentaCorriente->text());
    a.append(",");
    a.append(this->ui->textGasto->text());
    a.append(",");
    a.append("NOW()");
    a.append(",'");
    a.append(this->ui->textMotivo->text());
    a.append("',");
    a.append(QString::number( this->max ));
    a.append(")");

    if (this->verificarValores()){
        QSqlQuery query(a);
        this->ui->textCantidad->setText("1");
        this->ui->textCuentaCorriente->setText("0");
        this->ui->textEfectivo->setText("0");
        this->ui->textGasto->setText("0");
        this->ui->textHard->setText("0");
        this->ui->textMotivo->clear();
        this->ui->textPrecio->setText("0");
        this->ui->textServicioTecnico->setText("0");
        this->ui->textTarjeta->setText("0");
        this->ui->comboProductos->clearEditText();
        this->ui->comboModelo->clearEditText();
        this->ui->textCodigo->clear();
        this->ui->checkCuenta->setChecked(false);
        this->ui->tableView->show();
        this->actualizarDatos();
    }else
        QMessageBox::critical(this,"Error","Verifique los valores ingresados");

}

void Ventas::actualizarDatos(){

    this->ui->comboProductos->clear();
    this->ui->comboModelo->clear();

    QSqlQuery query("select distinct(producto) from stock");
    while(query.next()){
        this->ui->comboProductos->addItem(query.value(0).toString());
    }

    QSqlQuery q3("select distinct(modelo) from stock");

    while(q3.next()){
        this->ui->comboModelo->addItem(q3.value(0).toString());
        this->ui->comboBox->addItem(q3.value(0).toString());

    }
    this->max = this->obtenerMaximo();
    int nro = this->max;

    QString cons;
    cons.append("select sum(efectivo),sum(gastos) from venta where nrocaja <=");
    cons.append(QString::number( nro-1 ));

    QSqlQuery q1(cons);

    float efectivo;
    float gasto;

    while(q1.next()){
        efectivo = q1.value(0).toString().toFloat();
        gasto = q1.value(1).toString().toFloat();
    }

    float resultado = efectivo - gasto;
    this->ui->textInicial->setText(QString::number( resultado ));


    QString consulta;
    consulta.append("select sum(efectivo),sum(gastos) from venta where nrocaja = ");
    consulta.append(QString::number( nro ));


    QSqlQuery q2(consulta);


    while(q2.next()){
        efectivo = q2.value(0).toString().toFloat();
        gasto = q2.value(1).toString().toFloat();
    }

    resultado = efectivo - gasto;
    this->ui->textActual->setText(QString::number( resultado ));

    //this->ui->comboProductos->clearEditText();
    //this->ui->comboModelo->clearEditText();
    //this->ui->textCodigo->clear();

    QString consu;
    consu.append("SELECT producto, cantidad, hard, serv, efectivo, tarjeta, ctecta, gastos, motivo FROM venta where nrocaja=");
    consu.append(QString::number( nro ));

    model = new QSqlTableModel(this);
    model->setTable("venta");
    model->setFilter("nrocaja = "+QString::number( nro ));
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    this->ui->tableView->setModel(model);
    this->ui->tableView->show();

    model2 = new QSqlTableModel(this);
    model2->setTable("stock");
    model2->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model2->select();
    this->ui->tableView_2->setModel(model2);
    this->ui->tableView_2->show();

    this->ui->comboCliente->clear();
    QSqlQuery q("select nombre from cliente",db);
    while(q.next()){
        this->ui->comboCliente->addItem(q.value(0).toString());
        this->ui->comboEstado->addItem(q.value(0).toString());
    }

    model3 = new QSqlTableModel(this);
    model3->setTable("cliente");
    model3->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model3->select();
    this->ui->tableView_3->setModel(model3);
    this->ui->tableView_3->show();

}

void Ventas::imprimirPagina(){

     int nro = this->max;

     QString b;
     b.append("SELECT producto, cantidad, hard, serv, efectivo, tarjeta, ctecta, gastos, motivo FROM venta WHERE nrocaja =");
     b.append(QString::number( nro ));

     QSqlQuery consulta(b);


     QDateTime now = QDateTime::currentDateTime();

     QPrinter printer;

     printer.setOrientation(QPrinter::Landscape);

     printer.setOutputFormat(QPrinter::PdfFormat);

     QString a;
     a.append("dd.MM.yyyy");
     QString nombre;
     nombre.append("./Informes/"+QString::number( nro )+now.date().toString(a)+".pdf");
     printer.setOutputFileName(nombre);
     QPainter painter;

     if (! painter.begin(&printer)) { // failed to open file
         qWarning("failed to open file, is it writable?");
         //return 1;
     }

     painter.drawText(0, 60, "Fecha: "+now.date().toString(a));
     painter.drawText(900,60,"Caja del Dia:  $"+this->ui->textActual->text());
     painter.drawText(900,45,"Caja inicial:  $"+this->ui->textInicial->text());
     float r = this->ui->textActual->text().toFloat();
     float t = this->ui->textInicial->text().toFloat();
     float y = r+t;
     painter.drawText(900,30,"Total:  $"+QString::number( y ));
     painter.drawLine(0,70,1050,70);
     painter.drawText(0, 90, "Producto Vendido                                   Cant.       Hard       Serv. T      Efectivo       Tarjeta       Cta. Cte       Gastos      Motivo");
     painter.drawLine(0,110,1050,110);

     int cont = 120;
     while (consulta.next()){
        painter.drawText(QRect(0,cont,330,15), Qt::AlignLeft, consulta.value(0).toString());
        painter.drawText(QRect(245,cont,45,15), Qt::AlignRight, consulta.value(1).toString());
        painter.drawText(QRect(310,cont,45,15), Qt::AlignRight, consulta.value(2).toString());
        painter.drawText(QRect(380,cont,45,15), Qt::AlignRight, consulta.value(3).toString());
        painter.drawText(QRect(455,cont,45,15), Qt::AlignRight, consulta.value(4).toString());
        painter.drawText(QRect(530,cont,45,15), Qt::AlignRight, consulta.value(5).toString());
        painter.drawText(QRect(610,cont,45,15), Qt::AlignRight, consulta.value(6).toString());
        painter.drawText(QRect(680,cont,45,15), Qt::AlignRight, consulta.value(7).toString());
        painter.drawText(QRect(745,cont,340,15), Qt::AlignLeft, consulta.value(8).toString());
        cont+=25;
     }
     cont+=10;
     painter.drawLine(0,cont,1050,cont);
     QString p;
     p.append("select sum(hard),sum(serv),sum(efectivo),sum(tarjeta),sum(ctecta),sum(gastos) from venta where nrocaja =");
     p.append(QString::number( nro ));
     QSqlQuery consulta2(p);
     cont += 25;
     while (consulta2.next()){
        painter.drawText(QRect(0,cont,170,15), Qt::AlignLeft, tr("Totales"));
        painter.drawText(QRect(310,cont,50,15), Qt::AlignRight, consulta2.value(0).toString());
        painter.drawText(QRect(380,cont,50,15), Qt::AlignRight, consulta2.value(1).toString());
        painter.drawText(QRect(455,cont,50,15), Qt::AlignRight, consulta2.value(2).toString());
        painter.drawText(QRect(530,cont,50,15), Qt::AlignRight, consulta2.value(3).toString());
        painter.drawText(QRect(610,cont,50,15), Qt::AlignRight, consulta2.value(4).toString());
        painter.drawText(QRect(680,cont,50,15), Qt::AlignRight, consulta2.value(5).toString());

     }
     painter.setFont(QFont("Arial", 20));
     painter.drawText(450, 10, "Cierre de Caja");

    painter.end();

    system("evince ./Informes/"+QString::number( nro ).toAscii()+now.date().toString(a).toAscii()+".pdf &");
    this->ui->textActual->setText("0");

}

void Ventas::cerrarVenta(){

    this->imprimirPagina();

    int nro = this->max;

    int b;

    b = nro + 1;


    QString a;
    a.append("INSERT INTO venta (producto, cantidad, hard, serv, efectivo, tarjeta, ctecta, gastos, fecha, motivo, nrocaja) VALUES ('Cierre de Caja',0,0,0,0,0,0,0, NOW() ,'Nueva Caja',");
    a.append(QString::number( b ));
    a.append(");");

    QSqlQuery q2;

    q2.exec(a);

    this->actualizarDatos();
}

void Ventas::agregarCombo(QSqlQuery query){
    this->ui->comboModelo->clear();
    while(query.next()){
        this->ui->comboModelo->addItem(query.value(0).toString());
    }

}

void Ventas::textModelo(QString modelo){
    QString a;
    a.append("select precio,producto,tipo,modelo,codigobarra from stock where modelo like '");
    a.append(modelo);
    a.append("'");
    QSqlQuery query(a);
    while(query.next()){
        this->ui->textPrecio->setText(query.value(0).toString());
        this->ui->comboProductos->setEditText(query.value(1).toString());
        this->tipo = query.value(2).toBool();
        this->ui->comboModelo->setEditText(query.value(3).toString());
        qDebug() << query.value(4).toString();
        this->ui->textCodigo->setText(query.value(4).toString());
    }

}
void Ventas::textCodigo(QString codigo){
    QString a;
    a.append("select precio,producto,tipo,modelo from stock where codigobarra like '");
    a.append(codigo);
    a.append("%'");

    QSqlQuery query(a);
    while(query.next()){
        this->ui->textPrecio->setText(query.value(0).toString());
        this->ui->comboProductos->setEditText(query.value(1).toString());
        this->tipo = query.value(2).toBool();
        this->ui->comboModelo->setEditText(query.value(3).toString());
    }
}
void Ventas::textProducto(QString producto){
    QString a;
    a.append("select modelo from stock where producto like '");
    a.append(producto);
    a.append("'");
    QSqlQuery query(a);

    this->agregarCombo(query);
}
void Ventas::textPrecio(QString precio){
    // Si es uno es servicio tecnico si es 0 hard
    float a = precio.toFloat();
    float b = this->ui->textCantidad->text().toFloat();
    float resultado = a*b;
    if(tipo>0){
        this->ui->textServicioTecnico->setText(QString::number( resultado ));
        this->ui->textHard->setText("0");
        this->ui->textEfectivo->setText(this->ui->textServicioTecnico->text());
    }else{
        this->ui->textHard->setText(QString::number( resultado ));
        this->ui->textServicioTecnico->setText("0");
        this->ui->textEfectivo->setText(this->ui->textHard->text());
    }
}
void Ventas::agregarProducto(){

    QString a;
    a.append("INSERT INTO `demo`.`stock` (`codigobarra` ,`producto`,tipo,`precio`,dolar ,`stockmin` ,`stockmax` ,`idproveedor`)VALUES('");
    a.append(this->ui->textCodigoBarra->text());
    a.append("','");
    a.append(this->ui->textProducto->text());
    a.append("',");
    if (this->ui->checkServicio->checkState() > 0)
        a.append("1");
    else
        a.append("0");
    a.append(",");
    a.append(this->ui->textPrecioUnitario->text());
    a.append(",");
    a.append(this->ui->textDolar->text());
    a.append(",");
    a.append(this->ui->textMinimo->text());
    a.append(",");
    a.append(this->ui->textMaximo->text());
    a.append(",");
    a.append(this->ui->textProveedor->text());
    a.append(")");
    QSqlQuery q;
    q.exec(a);
    this->ui->textCodigoBarra->clear();
    this->ui->textProducto->clear();
    this->ui->textPrecioUnitario->clear();
    this->ui->textMinimo->clear();
    this->ui->textMaximo->clear();
    this->ui->textProveedor->clear();
    this->ui->textDolar->clear();
    this->actualizarDatos();
}

void Ventas::guardarProducto(){
    model2->database().transaction();
     if (model2->submitAll()) {
         model2->database().commit();
     } else {
         model2->database().rollback();
     }
     this->actualizarDatos();
}
void Ventas::buscarProducto(QString nombre){
    QString consulta;
    consulta.append("producto like '"+nombre+"%'");
    model2->setTable("stock");
    model2->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model2->select();
    model2->setFilter(consulta);
    this->ui->tableView_2->setModel(model2);
    this->ui->tableView_2->show();
}
void Ventas::agregarCuenta(){
    this->ui->Venta->setEnabled(true);
    QString a;
    a.append("INSERT INTO `ctacte` (nombre,debe,haber) values ('");

    QSqlQuery q("INSERT INTO `ctacte` (nombre,debe,haber) values ('"+this->ui->comboCliente->currentText()+"',"+this->ui->textCuentaCorriente->text().toFloat()+","+this->ui->textEfectivo->text().toFloat()+")");
    qDebug() << q.lastError().text() << " " << "INSERT INTO `ctacte` (nombre,debe,haber) values ('"+this->ui->comboCliente->currentText()+"',"+this->ui->textCuentaCorriente->text()+","+this->ui->textEfectivo->text()+")";
    this->ui->agregarCtaCte->setEnabled(false);
}
void Ventas::agregarCliente(){
    QString a;
    a.append("INSERT INTO `cliente` (`nombre` ,`direccion` ,`localidad` ,`provincia` ,`iva` ,`cuit` ,`email` ,`telefono`) values ('");
    a.append(this->ui->comboCliente->currentText());
    a.append("','");
    a.append(this->ui->direccionCliente->text());
    a.append("','");
    a.append(this->ui->localidadCliente->text());
    a.append("','");
    a.append(this->ui->provinciaCliente->text());
    a.append("',");
    a.append(this->ui->ivaCliente->text());
    a.append(",'");
    a.append(this->ui->cuitCliente->text());
    a.append("','");
    a.append(this->ui->mailCliente->text());
    a.append("','");
    a.append(this->ui->telefonoCliente->text());
    a.append("')");
    QSqlQuery q(a);
    this->ui->direccionCliente->clear();
    this->ui->localidadCliente->clear();
    this->ui->provinciaCliente->clear();
    this->ui->provinciaCliente->clear();
    this->ui->ivaCliente->clear();
    this->ui->cuitCliente->clear();
    this->ui->mailCliente->clear();
    this->ui->telefonoCliente->clear();
    this->actualizarDatos();

}
void Ventas::guardarCliente(){
model3->database().transaction();
     if (model3->submitAll()) {
         model3->database().commit();
     } else {
         model3->database().rollback();
     }
     this->actualizarDatos();
}
void Ventas::textCliente(QString nombre){
    QString consulta;
    consulta.append("nombre like '"+nombre+"%'");
    model3->setTable("cliente");
    model3->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model3->select();
    model3->setFilter(consulta);
    this->ui->tableView_3->setModel(model3);
    this->ui->tableView_3->show();

}
void Ventas::textEstado(QString cliente){
    QSqlQuery q("select sum(debe),sum(haber) from ctacte where nombre like '"+cliente+"%'");
    float debe,haber,res;
    while(q.next()){
        debe = q.value(0).toString().toFloat();
        haber = q.value(1).toString().toFloat();
    }
    res = haber - debe;
    this->ui->estadoDebe->setText(QString::number( debe ));
    this->ui->estadoHaber->setText(QString::number( haber ));
    this->ui->estadoTotal->setText(QString::number( res ));

}
Ventas::~Ventas()
{
    delete ui;
}

void Ventas::on_action_Acerca_de_triggered()
{
    a.show();
}

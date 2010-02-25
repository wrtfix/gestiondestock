/****************************************************************************
** Meta object code from reading C++ file 'ventas.h'
**
** Created: Thu Feb 25 19:42:30 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ventas.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ventas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ventas[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      24,    7,    7,    7, 0x0a,
      39,    7,    7,    7, 0x0a,
      53,    7,    7,    7, 0x0a,
      73,    7,    7,    7, 0x0a,
      93,    7,    7,    7, 0x0a,
     115,    7,    7,    7, 0x0a,
     135,    7,    7,    7, 0x0a,
     153,    7,    7,    7, 0x0a,
     178,  171,    7,    7, 0x0a,
     202,    7,    7,    7, 0x0a,
     218,    7,    7,    7, 0x0a,
     235,    7,    7,    7, 0x0a,
     252,    7,    7,    7, 0x0a,
     273,    7,    7,    7, 0x0a,
     293,    7,    7,    7, 0x0a,
     307,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Ventas[] = {
    "Ventas\0\0guardarVentas()\0agregarVenta()\0"
    "cerrarVenta()\0textModelo(QString)\0"
    "textCodigo(QString)\0textProducto(QString)\0"
    "textPrecio(QString)\0agregarProducto()\0"
    "guardarProducto()\0nombre\0"
    "buscarProducto(QString)\0agregarCuenta()\0"
    "agregarCliente()\0guardarCliente()\0"
    "textCliente(QString)\0textEstado(QString)\0"
    "borrarTexto()\0on_action_Acerca_de_triggered()\0"
};

const QMetaObject Ventas::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Ventas,
      qt_meta_data_Ventas, 0 }
};

const QMetaObject *Ventas::metaObject() const
{
    return &staticMetaObject;
}

void *Ventas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ventas))
        return static_cast<void*>(const_cast< Ventas*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Ventas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: guardarVentas(); break;
        case 1: agregarVenta(); break;
        case 2: cerrarVenta(); break;
        case 3: textModelo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: textCodigo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: textProducto((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: textPrecio((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: agregarProducto(); break;
        case 8: guardarProducto(); break;
        case 9: buscarProducto((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: agregarCuenta(); break;
        case 11: agregarCliente(); break;
        case 12: guardarCliente(); break;
        case 13: textCliente((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: textEstado((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: borrarTexto(); break;
        case 16: on_action_Acerca_de_triggered(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Tue Feb 16 17:59:04 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Demo/widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      30,    7,    7,    7, 0x0a,
      48,    7,    7,    7, 0x0a,
      61,    7,    7,    7, 0x0a,
      75,    7,    7,    7, 0x0a,
      92,    7,    7,    7, 0x0a,
     108,  106,    7,    7, 0x0a,
     130,    7,    7,    7, 0x0a,
     145,    7,    7,    7, 0x0a,
     165,    7,    7,    7, 0x0a,
     183,    7,    7,    7, 0x0a,
     203,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0buscarPrecio(QString)\0"
    "agregarProducto()\0cerrarCaja()\0"
    "enableBoton()\0guardarCambios()\0"
    "clickBorrar()\0p\0eliminar(QModelIndex)\0"
    "clickPreview()\0textPrecio(QString)\0"
    "textHard(QString)\0textModelo(QString)\0"
    "textCantidad(QString)\0"
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, 0 }
};

const QMetaObject *Widget::metaObject() const
{
    return &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: buscarPrecio((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: agregarProducto(); break;
        case 2: cerrarCaja(); break;
        case 3: enableBoton(); break;
        case 4: guardarCambios(); break;
        case 5: clickBorrar(); break;
        case 6: eliminar((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 7: clickPreview(); break;
        case 8: textPrecio((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: textHard((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: textModelo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: textCantidad((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

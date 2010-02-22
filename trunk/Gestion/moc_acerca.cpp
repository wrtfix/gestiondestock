/****************************************************************************
** Meta object code from reading C++ file 'acerca.h'
**
** Created: Wed Feb 17 19:36:02 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "acerca.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'acerca.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Acerca[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Acerca[] = {
    "Acerca\0\0clickAceptar()\0"
};

const QMetaObject Acerca::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Acerca,
      qt_meta_data_Acerca, 0 }
};

const QMetaObject *Acerca::metaObject() const
{
    return &staticMetaObject;
}

void *Acerca::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Acerca))
        return static_cast<void*>(const_cast< Acerca*>(this));
    return QWidget::qt_metacast(_clname);
}

int Acerca::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clickAceptar(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

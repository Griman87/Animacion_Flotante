/****************************************************************************
** Meta object code from reading C++ file 'animacion.h'
**
** Created: Mon 24. Feb 13:54:19 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "StdAfx.h"
#include "../../animacion.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animacion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_animacion[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      35,   10,   10,   10, 0x0a,
      59,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_animacion[] = {
    "animacion\0\0on_Boton_fijo_clicked()\0"
    "Borrar_texto_guardado()\0Fin_Tiempo()\0"
};

void animacion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        animacion *_t = static_cast<animacion *>(_o);
        switch (_id) {
        case 0: _t->on_Boton_fijo_clicked(); break;
        case 1: _t->Borrar_texto_guardado(); break;
        case 2: _t->Fin_Tiempo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData animacion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject animacion::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_animacion,
      qt_meta_data_animacion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &animacion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *animacion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *animacion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_animacion))
        return static_cast<void*>(const_cast< animacion*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int animacion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

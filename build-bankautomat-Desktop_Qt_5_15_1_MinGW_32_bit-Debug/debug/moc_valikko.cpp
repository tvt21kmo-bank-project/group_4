/****************************************************************************
** Meta object code from reading C++ file 'valikko.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bankautomat/valikko.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valikko.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Valikko_t {
    QByteArrayData data[14];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Valikko_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Valikko_t qt_meta_stringdata_Valikko = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Valikko"
QT_MOC_LITERAL(1, 8, 8), // "stopSLOT"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 19), // "on_btnNosto_clicked"
QT_MOC_LITERAL(4, 38, 19), // "on_btnSaldo_clicked"
QT_MOC_LITERAL(5, 58, 14), // "naytaSaldoSlot"
QT_MOC_LITERAL(6, 73, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 88, 5), // "reply"
QT_MOC_LITERAL(8, 94, 20), // "on_btnSiirto_clicked"
QT_MOC_LITERAL(9, 115, 24), // "on_btnTapahtumat_clicked"
QT_MOC_LITERAL(10, 140, 26), // "on_btnKirjauduUlos_clicked"
QT_MOC_LITERAL(11, 167, 32), // "on_btnNaytaAsiakasTiedot_clicked"
QT_MOC_LITERAL(12, 200, 22), // "naytaAsiakasTiedotSlot"
QT_MOC_LITERAL(13, 223, 23) // "naytaTilitapahtumatSlot"

    },
    "Valikko\0stopSLOT\0\0on_btnNosto_clicked\0"
    "on_btnSaldo_clicked\0naytaSaldoSlot\0"
    "QNetworkReply*\0reply\0on_btnSiirto_clicked\0"
    "on_btnTapahtumat_clicked\0"
    "on_btnKirjauduUlos_clicked\0"
    "on_btnNaytaAsiakasTiedot_clicked\0"
    "naytaAsiakasTiedotSlot\0naytaTilitapahtumatSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Valikko[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,
      12,    1,   74,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void Valikko::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Valikko *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopSLOT(); break;
        case 1: _t->on_btnNosto_clicked(); break;
        case 2: _t->on_btnSaldo_clicked(); break;
        case 3: _t->naytaSaldoSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->on_btnSiirto_clicked(); break;
        case 5: _t->on_btnTapahtumat_clicked(); break;
        case 6: _t->on_btnKirjauduUlos_clicked(); break;
        case 7: _t->on_btnNaytaAsiakasTiedot_clicked(); break;
        case 8: _t->naytaAsiakasTiedotSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->naytaTilitapahtumatSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Valikko::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Valikko.data,
    qt_meta_data_Valikko,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Valikko::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Valikko::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Valikko.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Valikko::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

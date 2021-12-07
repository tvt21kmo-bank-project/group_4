/****************************************************************************
** Meta object code from reading C++ file 'valikko.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../bankautomat/valikko.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valikko.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Valikko_t {
    const uint offsetsAndSize[24];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Valikko_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Valikko_t qt_meta_stringdata_Valikko = {
    {
QT_MOC_LITERAL(0, 7), // "Valikko"
QT_MOC_LITERAL(8, 10), // "myfunction"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 19), // "on_btnNosto_clicked"
QT_MOC_LITERAL(40, 19), // "on_btnSaldo_clicked"
QT_MOC_LITERAL(60, 20), // "on_btnSiirto_clicked"
QT_MOC_LITERAL(81, 24), // "on_btnTapahtumat_clicked"
QT_MOC_LITERAL(106, 26), // "on_btnKirjauduUlos_clicked"
QT_MOC_LITERAL(133, 32), // "on_btnNaytaAsiakasTiedot_clicked"
QT_MOC_LITERAL(166, 22), // "naytaAsiakasTiedotSlot"
QT_MOC_LITERAL(189, 14), // "QNetworkReply*"
QT_MOC_LITERAL(204, 5) // "reply"

    },
    "Valikko\0myfunction\0\0on_btnNosto_clicked\0"
    "on_btnSaldo_clicked\0on_btnSiirto_clicked\0"
    "on_btnTapahtumat_clicked\0"
    "on_btnKirjauduUlos_clicked\0"
    "on_btnNaytaAsiakasTiedot_clicked\0"
    "naytaAsiakasTiedotSlot\0QNetworkReply*\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Valikko[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    0 /* Public */,
       3,    0,   63,    2, 0x08,    1 /* Private */,
       4,    0,   64,    2, 0x08,    2 /* Private */,
       5,    0,   65,    2, 0x08,    3 /* Private */,
       6,    0,   66,    2, 0x08,    4 /* Private */,
       7,    0,   67,    2, 0x08,    5 /* Private */,
       8,    0,   68,    2, 0x08,    6 /* Private */,
       9,    1,   69,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void Valikko::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Valikko *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->myfunction(); break;
        case 1: _t->on_btnNosto_clicked(); break;
        case 2: _t->on_btnSaldo_clicked(); break;
        case 3: _t->on_btnSiirto_clicked(); break;
        case 4: _t->on_btnTapahtumat_clicked(); break;
        case 5: _t->on_btnKirjauduUlos_clicked(); break;
        case 6: _t->on_btnNaytaAsiakasTiedot_clicked(); break;
        case 7: _t->naytaAsiakasTiedotSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Valikko::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Valikko.offsetsAndSize,
    qt_meta_data_Valikko,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Valikko_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>


>,
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'occQt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "occQt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'occQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_occQt_t {
    QByteArrayData data[17];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_occQt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_occQt_t qt_meta_stringdata_occQt = {
    {
QT_MOC_LITERAL(0, 0, 5), // "occQt"
QT_MOC_LITERAL(1, 6, 5), // "about"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 7), // "makeBox"
QT_MOC_LITERAL(4, 21, 8), // "makeCone"
QT_MOC_LITERAL(5, 30, 10), // "makeSphere"
QT_MOC_LITERAL(6, 41, 12), // "makeCylinder"
QT_MOC_LITERAL(7, 54, 9), // "makeTorus"
QT_MOC_LITERAL(8, 64, 10), // "makeFillet"
QT_MOC_LITERAL(9, 75, 11), // "makeChamfer"
QT_MOC_LITERAL(10, 87, 11), // "makeExtrude"
QT_MOC_LITERAL(11, 99, 9), // "makeRevol"
QT_MOC_LITERAL(12, 109, 8), // "makeLoft"
QT_MOC_LITERAL(13, 118, 7), // "testCut"
QT_MOC_LITERAL(14, 126, 8), // "testFuse"
QT_MOC_LITERAL(15, 135, 10), // "testCommon"
QT_MOC_LITERAL(16, 146, 9) // "testHelix"

    },
    "occQt\0about\0\0makeBox\0makeCone\0makeSphere\0"
    "makeCylinder\0makeTorus\0makeFillet\0"
    "makeChamfer\0makeExtrude\0makeRevol\0"
    "makeLoft\0testCut\0testFuse\0testCommon\0"
    "testHelix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_occQt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void occQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        occQt *_t = static_cast<occQt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->about(); break;
        case 1: _t->makeBox(); break;
        case 2: _t->makeCone(); break;
        case 3: _t->makeSphere(); break;
        case 4: _t->makeCylinder(); break;
        case 5: _t->makeTorus(); break;
        case 6: _t->makeFillet(); break;
        case 7: _t->makeChamfer(); break;
        case 8: _t->makeExtrude(); break;
        case 9: _t->makeRevol(); break;
        case 10: _t->makeLoft(); break;
        case 11: _t->testCut(); break;
        case 12: _t->testFuse(); break;
        case 13: _t->testCommon(); break;
        case 14: _t->testHelix(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject occQt::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_occQt.data,
      qt_meta_data_occQt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *occQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *occQt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_occQt.stringdata0))
        return static_cast<void*>(const_cast< occQt*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int occQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

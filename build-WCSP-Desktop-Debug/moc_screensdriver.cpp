/****************************************************************************
** Meta object code from reading C++ file 'screensdriver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../WCSP/screensdriver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screensdriver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScreensDriver_t {
    QByteArrayData data[19];
    char stringdata[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ScreensDriver_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ScreensDriver_t qt_meta_stringdata_ScreensDriver = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 17),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 18),
QT_MOC_LITERAL(4, 52, 18),
QT_MOC_LITERAL(5, 71, 18),
QT_MOC_LITERAL(6, 90, 20),
QT_MOC_LITERAL(7, 111, 21),
QT_MOC_LITERAL(8, 133, 25),
QT_MOC_LITERAL(9, 159, 17),
QT_MOC_LITERAL(10, 177, 17),
QT_MOC_LITERAL(11, 195, 17),
QT_MOC_LITERAL(12, 213, 17),
QT_MOC_LITERAL(13, 231, 17),
QT_MOC_LITERAL(14, 249, 17),
QT_MOC_LITERAL(15, 267, 17),
QT_MOC_LITERAL(16, 285, 17),
QT_MOC_LITERAL(17, 303, 17),
QT_MOC_LITERAL(18, 321, 17)
    },
    "ScreensDriver\0chipSizeSelected5\0\0"
    "chipSizeSelected10\0chipSizeSelected15\0"
    "chipSizeSelected20\0numToTestBackPressed\0"
    "numToTestClearPressed\0numToTestBackspacePressed\0"
    "numToTestPressed0\0numToTestPressed1\0"
    "numToTestPressed2\0numToTestPressed3\0"
    "numToTestPressed4\0numToTestPressed5\0"
    "numToTestPressed6\0numToTestPressed7\0"
    "numToTestPressed8\0numToTestPressed9\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreensDriver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a,
       3,    0,  100,    2, 0x0a,
       4,    0,  101,    2, 0x0a,
       5,    0,  102,    2, 0x0a,
       6,    0,  103,    2, 0x0a,
       7,    0,  104,    2, 0x0a,
       8,    0,  105,    2, 0x0a,
       9,    0,  106,    2, 0x0a,
      10,    0,  107,    2, 0x0a,
      11,    0,  108,    2, 0x0a,
      12,    0,  109,    2, 0x0a,
      13,    0,  110,    2, 0x0a,
      14,    0,  111,    2, 0x0a,
      15,    0,  112,    2, 0x0a,
      16,    0,  113,    2, 0x0a,
      17,    0,  114,    2, 0x0a,
      18,    0,  115,    2, 0x0a,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScreensDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreensDriver *_t = static_cast<ScreensDriver *>(_o);
        switch (_id) {
        case 0: _t->chipSizeSelected5(); break;
        case 1: _t->chipSizeSelected10(); break;
        case 2: _t->chipSizeSelected15(); break;
        case 3: _t->chipSizeSelected20(); break;
        case 4: _t->numToTestBackPressed(); break;
        case 5: _t->numToTestClearPressed(); break;
        case 6: _t->numToTestBackspacePressed(); break;
        case 7: _t->numToTestPressed0(); break;
        case 8: _t->numToTestPressed1(); break;
        case 9: _t->numToTestPressed2(); break;
        case 10: _t->numToTestPressed3(); break;
        case 11: _t->numToTestPressed4(); break;
        case 12: _t->numToTestPressed5(); break;
        case 13: _t->numToTestPressed6(); break;
        case 14: _t->numToTestPressed7(); break;
        case 15: _t->numToTestPressed8(); break;
        case 16: _t->numToTestPressed9(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ScreensDriver::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ScreensDriver.data,
      qt_meta_data_ScreensDriver,  qt_static_metacall, 0, 0}
};


const QMetaObject *ScreensDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreensDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScreensDriver.stringdata))
        return static_cast<void*>(const_cast< ScreensDriver*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ScreensDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

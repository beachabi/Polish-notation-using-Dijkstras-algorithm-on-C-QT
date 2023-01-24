/****************************************************************************
** Meta object code from reading C++ file 'smart_calc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../smart_calc/smart_calc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smart_calc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_smart_calc_t {
    QByteArrayData data[16];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smart_calc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smart_calc_t qt_meta_stringdata_smart_calc = {
    {
QT_MOC_LITERAL(0, 0, 10), // "smart_calc"
QT_MOC_LITERAL(1, 11, 14), // "digits_numbers"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "print_point"
QT_MOC_LITERAL(4, 39, 9), // "easy_math"
QT_MOC_LITERAL(5, 49, 11), // "equal_count"
QT_MOC_LITERAL(6, 61, 12), // "trigonometry"
QT_MOC_LITERAL(7, 74, 9), // "open_open"
QT_MOC_LITERAL(8, 84, 11), // "close_close"
QT_MOC_LITERAL(9, 96, 11), // "clear_clear"
QT_MOC_LITERAL(10, 108, 7), // "print_X"
QT_MOC_LITERAL(11, 116, 12), // "error_window"
QT_MOC_LITERAL(12, 129, 12), // "differen_pay"
QT_MOC_LITERAL(13, 142, 10), // "annuit_pay"
QT_MOC_LITERAL(14, 153, 25), // "on_b_count_credit_clicked"
QT_MOC_LITERAL(15, 179, 26) // "on_b_count_deposit_clicked"

    },
    "smart_calc\0digits_numbers\0\0print_point\0"
    "easy_math\0equal_count\0trigonometry\0"
    "open_open\0close_close\0clear_clear\0"
    "print_X\0error_window\0differen_pay\0"
    "annuit_pay\0on_b_count_credit_clicked\0"
    "on_b_count_deposit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smart_calc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

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

       0        // eod
};

void smart_calc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<smart_calc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->digits_numbers(); break;
        case 1: _t->print_point(); break;
        case 2: _t->easy_math(); break;
        case 3: _t->equal_count(); break;
        case 4: _t->trigonometry(); break;
        case 5: _t->open_open(); break;
        case 6: _t->close_close(); break;
        case 7: _t->clear_clear(); break;
        case 8: _t->print_X(); break;
        case 9: _t->error_window(); break;
        case 10: _t->differen_pay(); break;
        case 11: _t->annuit_pay(); break;
        case 12: _t->on_b_count_credit_clicked(); break;
        case 13: _t->on_b_count_deposit_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject smart_calc::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_smart_calc.data,
    qt_meta_data_smart_calc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *smart_calc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smart_calc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_smart_calc.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int smart_calc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

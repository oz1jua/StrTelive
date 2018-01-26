/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../StrTelive/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 24), // "on_spinBox1_valueChanged"
QT_MOC_LITERAL(4, 59, 4), // "arg1"
QT_MOC_LITERAL(5, 64, 24), // "on_spinBox2_valueChanged"
QT_MOC_LITERAL(6, 89, 24), // "on_spinBox3_valueChanged"
QT_MOC_LITERAL(7, 114, 24), // "on_spinBox4_valueChanged"
QT_MOC_LITERAL(8, 139, 32), // "on_actionSave_Settings_triggered"
QT_MOC_LITERAL(9, 172, 12), // "LoadSettings"
QT_MOC_LITERAL(10, 185, 7), // "CalcLCD"
QT_MOC_LITERAL(11, 193, 10), // "CreateFIFO"
QT_MOC_LITERAL(12, 204, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(13, 228, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(14, 253, 27), // "on_radioButton_FIFO_toggled"
QT_MOC_LITERAL(15, 281, 7), // "checked"
QT_MOC_LITERAL(16, 289, 26) // "on_radioButton_UDP_toggled"

    },
    "MainWindow\0on_pushButton_clicked\0\0"
    "on_spinBox1_valueChanged\0arg1\0"
    "on_spinBox2_valueChanged\0"
    "on_spinBox3_valueChanged\0"
    "on_spinBox4_valueChanged\0"
    "on_actionSave_Settings_triggered\0"
    "LoadSettings\0CalcLCD\0CreateFIFO\0"
    "on_actionExit_triggered\0"
    "on_actionAbout_triggered\0"
    "on_radioButton_FIFO_toggled\0checked\0"
    "on_radioButton_UDP_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    1,   80,    2, 0x08 /* Private */,
       5,    1,   83,    2, 0x08 /* Private */,
       6,    1,   86,    2, 0x08 /* Private */,
       7,    1,   89,    2, 0x08 /* Private */,
       8,    0,   92,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    1,   98,    2, 0x08 /* Private */,
      16,    1,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_spinBox1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_spinBox2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_spinBox3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_spinBox4_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_actionSave_Settings_triggered(); break;
        case 6: _t->LoadSettings(); break;
        case 7: _t->CalcLCD(); break;
        case 8: _t->CreateFIFO(); break;
        case 9: _t->on_actionExit_triggered(); break;
        case 10: _t->on_actionAbout_triggered(); break;
        case 11: _t->on_radioButton_FIFO_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_radioButton_UDP_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

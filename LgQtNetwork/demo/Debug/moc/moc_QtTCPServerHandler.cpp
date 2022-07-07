/****************************************************************************
** Meta object code from reading C++ file 'QtTCPServerHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../LgQtNetwork/tcp/server/QtTCPServerHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtTCPServerHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtTCPServerHandler_t {
    QByteArrayData data[9];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtTCPServerHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtTCPServerHandler_t qt_meta_stringdata_QtTCPServerHandler = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QtTCPServerHandler"
QT_MOC_LITERAL(1, 19, 7), // "NewConn"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "clnAddr"
QT_MOC_LITERAL(4, 36, 7), // "clnPort"
QT_MOC_LITERAL(5, 44, 4), // "port"
QT_MOC_LITERAL(6, 49, 10), // "NewDisConn"
QT_MOC_LITERAL(7, 60, 10), // "RecvClnMsg"
QT_MOC_LITERAL(8, 71, 5) // "bytes"

    },
    "QtTCPServerHandler\0NewConn\0\0clnAddr\0"
    "clnPort\0port\0NewDisConn\0RecvClnMsg\0"
    "bytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtTCPServerHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       6,    2,   51,    2, 0x06 /* Public */,
       7,    3,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       1,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::QByteArray,    3,    4,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtTCPServerHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtTCPServerHandler *_t = static_cast<QtTCPServerHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewConn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2])),(*reinterpret_cast< const quint16(*)>(_a[3]))); break;
        case 1: _t->NewDisConn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 2: _t->RecvClnMsg((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 3: _t->NewConn(); break;
        case 4: _t->NewDisConn(); break;
        case 5: _t->RecvClnMsg(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtTCPServerHandler::*_t)(const QString & , const quint16 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtTCPServerHandler::NewConn)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtTCPServerHandler::*_t)(const QString & , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtTCPServerHandler::NewDisConn)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QtTCPServerHandler::*_t)(const QString & , const quint16 , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtTCPServerHandler::RecvClnMsg)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtTCPServerHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtTCPServerHandler.data,
      qt_meta_data_QtTCPServerHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtTCPServerHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTCPServerHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtTCPServerHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtTCPServerHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QtTCPServerHandler::NewConn(const QString & _t1, const quint16 _t2, const quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtTCPServerHandler::NewDisConn(const QString & _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtTCPServerHandler::RecvClnMsg(const QString & _t1, const quint16 _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

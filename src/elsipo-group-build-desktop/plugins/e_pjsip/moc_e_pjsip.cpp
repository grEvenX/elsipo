/****************************************************************************
** Meta object code from reading C++ file 'e_pjsip.h'
**
** Created: Tue Jul 5 22:38:03 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../elsipo/plugins/e_pjsip/e_pjsip.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'e_pjsip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Pjsip[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   15,    7,    6, 0x0a,
      40,    6,    7,    6, 0x0a,
      47,    6,    7,    6, 0x0a,
      61,    6,   57,    6, 0x0a,
      81,    6,   57,    6, 0x0a,
     112,  108,   57,    6, 0x0a,
     128,    6,   57,    6, 0x0a,
     143,    6,   57,    6, 0x0a,
     158,    6,   57,    6, 0x0a,
     181,  173,   57,    6, 0x0a,
     215,  205,   57,    6, 0x0a,
     262,  251,    6,    6, 0x0a,
     301,  285,    6,    6, 0x0a,
     365,  350,    6,    6, 0x0a,
     441,  417,    6,    6, 0x0a,
     494,  480,    6,    6, 0x0a,
     534,  526,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Pjsip[] = {
    "Pjsip\0\0QString\0message\0echoStr(QString)\0"
    "name()\0version()\0int\0doSIPRegistration()\0"
    "getSIPRegistrationStatus()\0uri\0"
    "doCall(QString)\0doCallAnswer()\0"
    "doCallReject()\0doCallHangup()\0uri,msg\0"
    "sendIM(QString,QString)\0event,jsf\0"
    "registerJSCallback(QString,QString)\0"
    "rcv_acc_id\0slot_on_reg_state(int)\0"
    "from,ctype,body\0"
    "slot_on_message_request(QString,QString,QString)\0"
    "to,code,reason\0"
    "slot_on_message_request_status(QString,int,QString)\0"
    "rcv_acc_id,call_id,from\0"
    "slot_on_incoming_call(int,int,QString)\0"
    "call_id,state\0slot_on_call_state(int,QString)\0"
    "call_id\0slot_on_call_media_state(int)\0"
};

const QMetaObject Pjsip::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Pjsip,
      qt_meta_data_Pjsip, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Pjsip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Pjsip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Pjsip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pjsip))
        return static_cast<void*>(const_cast< Pjsip*>(this));
    if (!strcmp(_clname, "ElsipoInterface"))
        return static_cast< ElsipoInterface*>(const_cast< Pjsip*>(this));
    if (!strcmp(_clname, "com.elsipo.Plugin.ElsipoInterface/1.0"))
        return static_cast< ElsipoInterface*>(const_cast< Pjsip*>(this));
    return QObject::qt_metacast(_clname);
}

int Pjsip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QString _r = echoStr((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QString _r = version();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { int _r = doSIPRegistration();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = getSIPRegistrationStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = doCall((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = doCallAnswer();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = doCallReject();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = doCallHangup();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = sendIM((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = registerJSCallback((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: slot_on_reg_state((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: slot_on_message_request((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 13: slot_on_message_request_status((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 14: slot_on_incoming_call((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 15: slot_on_call_state((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: slot_on_call_media_state((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

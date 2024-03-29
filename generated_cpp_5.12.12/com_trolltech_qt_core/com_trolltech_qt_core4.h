#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcborcommon.h>
#include <qcoreevent.h>
#include <qdeadlinetimer.h>
#include <qeasingcurve.h>
#include <qlist.h>
#include <qlogging.h>
#include <qmetaobject.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qreadwritelock.h>
#include <qthread.h>
#include <qvariantanimation.h>
#include <qvector.h>
#include <qwaitcondition.h>
#include <qxmlstream.h>



class PythonQtShell_QVariantAnimation : public QVariantAnimation
{
public:
    PythonQtShell_QVariantAnimation(QObject*  parent = nullptr):QVariantAnimation(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVariantAnimation() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateCurrentValue(const QVariant&  value) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QVariantAnimation : public QVariantAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline QVariant  promoted_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return this->interpolated(from, to, progress); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline void promoted_updateCurrentValue(const QVariant&  value) { this->updateCurrentValue(value); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QVariantAnimation::duration(); }
inline bool  py_q_event(QEvent*  event) { return QVariantAnimation::event(event); }
inline QVariant  py_q_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return QVariantAnimation::interpolated(from, to, progress); }
inline void py_q_updateCurrentTime(int  arg__1) { QVariantAnimation::updateCurrentTime(arg__1); }
inline void py_q_updateCurrentValue(const QVariant&  value) { QVariantAnimation::updateCurrentValue(value); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QVariantAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QVariantAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QVariantAnimation* new_QVariantAnimation(QObject*  parent = nullptr);
void delete_QVariantAnimation(QVariantAnimation* obj) { delete obj; }
   QVariant  currentValue(QVariantAnimation* theWrappedObject) const;
   int  py_q_duration(QVariantAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_duration());}
   QEasingCurve  easingCurve(QVariantAnimation* theWrappedObject) const;
   QVariant  endValue(QVariantAnimation* theWrappedObject) const;
   bool  py_q_event(QVariantAnimation* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_event(event));}
   QVariant  interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const;
   QVariant  py_q_interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const{  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_interpolated(from, to, progress));}
   QVariant  keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const;
   QVector<QPair<qreal , QVariant >  >  keyValues(QVariantAnimation* theWrappedObject) const;
   void setDuration(QVariantAnimation* theWrappedObject, int  msecs);
   void setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing);
   void setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value);
   void setKeyValues(QVariantAnimation* theWrappedObject, const QVector<QPair<qreal , QVariant >  >&  values);
   void setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   QVariant  startValue(QVariantAnimation* theWrappedObject) const;
   void py_q_updateCurrentTime(QVariantAnimation* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
   void updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void py_q_updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateCurrentValue(value));}
   void py_q_updateState(QVariantAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtWrapper_QWaitCondition : public QObject
{ Q_OBJECT
public:
public slots:
QWaitCondition* new_QWaitCondition();
void delete_QWaitCondition(QWaitCondition* obj) { delete obj; }
   void notify_all(QWaitCondition* theWrappedObject);
   void notify_one(QWaitCondition* theWrappedObject);
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, QDeadlineTimer  deadline);
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, unsigned long  time = ULONG_MAX);
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, QDeadlineTimer  deadline);
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, unsigned long  time = ULONG_MAX);
   void wakeAll(QWaitCondition* theWrappedObject);
   void wakeOne(QWaitCondition* theWrappedObject);
};





class PythonQtWrapper_QWriteLocker : public QObject
{ Q_OBJECT
public:
public slots:
QWriteLocker* new_QWriteLocker(QReadWriteLock*  readWriteLock);
void delete_QWriteLocker(QWriteLocker* obj) { delete obj; }
   QReadWriteLock*  readWriteLock(QWriteLocker* theWrappedObject) const;
   void relock(QWriteLocker* theWrappedObject);
   void unlock(QWriteLocker* theWrappedObject);

    void __enter__(QWriteLocker* /*self*/) {}
    void __exit__(QWriteLocker* self, PyObject* /*type*/, PyObject* /*value*/, PyObject* /*traceback*/) { self->unlock(); }
    
};





class PythonQtShell_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{
public:
    PythonQtShell_QXmlStreamEntityResolver():QXmlStreamEntityResolver(),_wrapper(nullptr) {};

   ~PythonQtShell_QXmlStreamEntityResolver() override;

QString  resolveEntity(const QString&  publicId, const QString&  systemId) override;
QString  resolveUndeclaredEntity(const QString&  name) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{ public:
inline QString  py_q_resolveEntity(const QString&  publicId, const QString&  systemId) { return QXmlStreamEntityResolver::resolveEntity(publicId, systemId); }
inline QString  py_q_resolveUndeclaredEntity(const QString&  name) { return QXmlStreamEntityResolver::resolveUndeclaredEntity(name); }
};

class PythonQtWrapper_QXmlStreamEntityResolver : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamEntityResolver* new_QXmlStreamEntityResolver();
void delete_QXmlStreamEntityResolver(QXmlStreamEntityResolver* obj) { delete obj; }
   QString  resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId);
   QString  py_q_resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId){  return (((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->py_q_resolveEntity(publicId, systemId));}
   QString  resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name);
   QString  py_q_resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->py_q_resolveUndeclaredEntity(name));}
};





class PythonQtWrapper_QtCore : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QCborKnownTags QCborSimpleType QCborTag QtMsgType )
enum class QCborKnownTags{
  DateTimeString = static_cast<int>(::QCborKnownTags::DateTimeString),   UnixTime_t = static_cast<int>(::QCborKnownTags::UnixTime_t),   PositiveBignum = static_cast<int>(::QCborKnownTags::PositiveBignum),   NegativeBignum = static_cast<int>(::QCborKnownTags::NegativeBignum),   Decimal = static_cast<int>(::QCborKnownTags::Decimal),   Bigfloat = static_cast<int>(::QCborKnownTags::Bigfloat),   COSE_Encrypt0 = static_cast<int>(::QCborKnownTags::COSE_Encrypt0),   COSE_Mac0 = static_cast<int>(::QCborKnownTags::COSE_Mac0),   COSE_Sign1 = static_cast<int>(::QCborKnownTags::COSE_Sign1),   ExpectedBase64url = static_cast<int>(::QCborKnownTags::ExpectedBase64url),   ExpectedBase64 = static_cast<int>(::QCborKnownTags::ExpectedBase64),   ExpectedBase16 = static_cast<int>(::QCborKnownTags::ExpectedBase16),   EncodedCbor = static_cast<int>(::QCborKnownTags::EncodedCbor),   Url = static_cast<int>(::QCborKnownTags::Url),   Base64url = static_cast<int>(::QCborKnownTags::Base64url),   Base64 = static_cast<int>(::QCborKnownTags::Base64),   RegularExpression = static_cast<int>(::QCborKnownTags::RegularExpression),   MimeMessage = static_cast<int>(::QCborKnownTags::MimeMessage),   Uuid = static_cast<int>(::QCborKnownTags::Uuid),   COSE_Encrypt = static_cast<int>(::QCborKnownTags::COSE_Encrypt),   COSE_Mac = static_cast<int>(::QCborKnownTags::COSE_Mac),   COSE_Sign = static_cast<int>(::QCborKnownTags::COSE_Sign),   Signature = static_cast<int>(::QCborKnownTags::Signature)};
enum class QCborSimpleType{
  False = static_cast<int>(::QCborSimpleType::False),   True = static_cast<int>(::QCborSimpleType::True),   Null = static_cast<int>(::QCborSimpleType::Null),   Undefined = static_cast<int>(::QCborSimpleType::Undefined)};
enum class QCborTag{
};
enum QtMsgType{
  QtDebugMsg = ::QtDebugMsg,   QtWarningMsg = ::QtWarningMsg,   QtCriticalMsg = ::QtCriticalMsg,   QtFatalMsg = ::QtFatalMsg,   QtInfoMsg = ::QtInfoMsg,   QtSystemMsg = ::QtSystemMsg};
public slots:
};



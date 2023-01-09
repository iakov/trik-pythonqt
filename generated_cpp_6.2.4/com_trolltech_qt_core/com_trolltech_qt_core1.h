#include <PythonQt.h>
#include <QDeadlineTimer>
#include <QObject>
#include <QVariant>
#include <qcoreevent.h>
#include <qreadwritelock.h>
#include <qurl.h>
#include <qurlquery.h>
#include <qwaitcondition.h>
#include <qxmlstream.h>

class PythonQtShell_QTimerEvent : public QTimerEvent
{
public:
    PythonQtShell_QTimerEvent(QTimerEvent&  arg__1):QTimerEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QTimerEvent();

virtual QTimerEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTimerEvent : public QTimerEvent
{ public:
inline QTimerEvent&  promoted_operator_assign(QTimerEvent&  arg__1) { return ((QTimerEvent*)this)->operator=(arg__1); }
inline QTimerEvent*  py_q_clone() const { return QTimerEvent::clone(); }
};

class PythonQtWrapper_QTimerEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QTimerEvent(QTimerEvent* obj) { delete obj; }
   QTimerEvent*  clone(QTimerEvent* theWrappedObject) const;
   QTimerEvent*  py_q_clone(QTimerEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTimerEvent*)theWrappedObject)->py_q_clone());}
   QTimerEvent*  operator_assign(QTimerEvent* theWrappedObject, QTimerEvent&  arg__1);
};



class PythonQtWrapper_QUrlQuery : public QObject
{ Q_OBJECT
public:
public slots:
QUrlQuery* new_QUrlQuery();
QUrlQuery* new_QUrlQuery(const QString&  queryString);
QUrlQuery* new_QUrlQuery(const QUrl&  url);
QUrlQuery* new_QUrlQuery(const QUrlQuery&  other);
void delete_QUrlQuery(QUrlQuery* obj) { delete obj; }
   QUrlQuery*  operator_assign(QUrlQuery* theWrappedObject, const QUrlQuery&  other);
};



class PythonQtWrapper_QWaitCondition : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWaitCondition(QWaitCondition* obj) { delete obj; }
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
};



class PythonQtShell_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{
public:
    PythonQtShell_QXmlStreamEntityResolver():QXmlStreamEntityResolver(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlStreamEntityResolver();

virtual QString  resolveEntity(const QString&  publicId, const QString&  systemId);
virtual QString  resolveUndeclaredEntity(const QString&  name);

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



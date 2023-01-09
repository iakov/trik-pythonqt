#include "com_trolltech_qt_core0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearraymatcher.h>
#include <qcommandlineparser.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdiriterator.h>
#include <qevent.h>
#include <qlogging.h>
#include <qloggingcategory.h>
#include <qmessageauthenticationcode.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimedatabase.h>
#include <qoperatingsystemversion.h>
#include <qrandom.h>
#include <qreadwritelock.h>
#include <qsemaphore.h>
#include <qstringmatcher.h>
#include <qsystemsemaphore.h>
#include <qtemporarydir.h>
#include <qtextboundaryfinder.h>
#include <qurl.h>

PythonQtShell_QAbstractListModel::~PythonQtShell_QAbstractListModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
Qt::ItemFlags  PythonQtShell_QAbstractListModel::flags(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("flags");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue{};
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("flags", methodInfo, result);
          } else {
            returnValue = *((Qt::ItemFlags*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractListModel::flags(index0);
}
const QMetaObject*  PythonQtShell_QAbstractListModel::metaObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"const QMetaObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      const QMetaObject* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaObject", methodInfo, result);
          } else {
            returnValue = *((const QMetaObject**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractListModel::metaObject();
}
QAbstractListModel* PythonQtWrapper_QAbstractListModel::new_QAbstractListModel(QObject*  parent)
{ 
return new PythonQtShell_QAbstractListModel(parent); }

Qt::ItemFlags  PythonQtWrapper_QAbstractListModel::flags(QAbstractListModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->flags(index));
}

const QMetaObject*  PythonQtWrapper_QAbstractListModel::metaObject(QAbstractListModel* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}



PythonQtShell_QApplicationStateChangeEvent::~PythonQtShell_QApplicationStateChangeEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QApplicationStateChangeEvent*  PythonQtShell_QApplicationStateChangeEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QApplicationStateChangeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QApplicationStateChangeEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QApplicationStateChangeEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QApplicationStateChangeEvent::clone();
}
QApplicationStateChangeEvent* PythonQtWrapper_QApplicationStateChangeEvent::new_QApplicationStateChangeEvent(Qt::ApplicationState  state)
{ 
return new PythonQtShell_QApplicationStateChangeEvent(state); }

Qt::ApplicationState  PythonQtWrapper_QApplicationStateChangeEvent::applicationState(QApplicationStateChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->applicationState());
}

QApplicationStateChangeEvent*  PythonQtWrapper_QApplicationStateChangeEvent::clone(QApplicationStateChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QApplicationStateChangeEvent*  PythonQtWrapper_QApplicationStateChangeEvent::operator_assign(QApplicationStateChangeEvent* theWrappedObject, QApplicationStateChangeEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher()
{ 
return new QByteArrayMatcher(); }

QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher(const QByteArray&  pattern)
{ 
return new QByteArrayMatcher(pattern); }

QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher(const QByteArrayMatcher&  other)
{ 
return new QByteArrayMatcher(other); }

QByteArray  PythonQtWrapper_QByteArrayMatcher::pattern(QByteArrayMatcher* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}



PythonQtShell_QChildEvent::~PythonQtShell_QChildEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QChildEvent*  PythonQtShell_QChildEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QChildEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QChildEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QChildEvent::clone();
}
QChildEvent* PythonQtWrapper_QChildEvent::new_QChildEvent(QEvent::Type  type, QObject*  child)
{ 
return new PythonQtShell_QChildEvent(type, child); }

bool  PythonQtWrapper_QChildEvent::added(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->added());
}

QObject*  PythonQtWrapper_QChildEvent::child(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->child());
}

QChildEvent*  PythonQtWrapper_QChildEvent::clone(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QChildEvent*  PythonQtWrapper_QChildEvent::operator_assign(QChildEvent* theWrappedObject, QChildEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QChildEvent::polished(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->polished());
}

bool  PythonQtWrapper_QChildEvent::removed(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->removed());
}



QCommandLineOption  PythonQtWrapper_QCommandLineParser::addHelpOption(QCommandLineParser* theWrappedObject)
{
  return ( theWrappedObject->addHelpOption());
}

bool  PythonQtWrapper_QCommandLineParser::addOption(QCommandLineParser* theWrappedObject, const QCommandLineOption&  commandLineOption)
{
  return ( theWrappedObject->addOption(commandLineOption));
}

bool  PythonQtWrapper_QCommandLineParser::addOptions(QCommandLineParser* theWrappedObject, const QList<QCommandLineOption >&  options)
{
  return ( theWrappedObject->addOptions(options));
}

QCommandLineOption  PythonQtWrapper_QCommandLineParser::addVersionOption(QCommandLineParser* theWrappedObject)
{
  return ( theWrappedObject->addVersionOption());
}

QString  PythonQtWrapper_QCommandLineParser::applicationDescription(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->applicationDescription());
}

QString  PythonQtWrapper_QCommandLineParser::errorText(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->errorText());
}

QString  PythonQtWrapper_QCommandLineParser::helpText(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->helpText());
}

bool  PythonQtWrapper_QCommandLineParser::isSet(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const
{
  return ( theWrappedObject->isSet(option));
}

bool  PythonQtWrapper_QCommandLineParser::isSet(QCommandLineParser* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->isSet(name));
}

QStringList  PythonQtWrapper_QCommandLineParser::optionNames(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->optionNames());
}

bool  PythonQtWrapper_QCommandLineParser::parse(QCommandLineParser* theWrappedObject, const QStringList&  arguments)
{
  return ( theWrappedObject->parse(arguments));
}

QStringList  PythonQtWrapper_QCommandLineParser::positionalArguments(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->positionalArguments());
}

QStringList  PythonQtWrapper_QCommandLineParser::unknownOptionNames(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->unknownOptionNames());
}

QString  PythonQtWrapper_QCommandLineParser::value(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const
{
  return ( theWrappedObject->value(option));
}

QString  PythonQtWrapper_QCommandLineParser::value(QCommandLineParser* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->value(name));
}

QStringList  PythonQtWrapper_QCommandLineParser::values(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const
{
  return ( theWrappedObject->values(option));
}

QStringList  PythonQtWrapper_QCommandLineParser::values(QCommandLineParser* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->values(name));
}



bool  PythonQtWrapper_QDataStream::atEnd(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

QDataStream::ByteOrder  PythonQtWrapper_QDataStream::byteOrder(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->byteOrder());
}

bool  PythonQtWrapper_QDataStream::commitTransaction(QDataStream* theWrappedObject)
{
  return ( theWrappedObject->commitTransaction());
}

QIODevice*  PythonQtWrapper_QDataStream::device(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QDataStream::FloatingPointPrecision  PythonQtWrapper_QDataStream::floatingPointPrecision(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->floatingPointPrecision());
}

bool  PythonQtWrapper_QDataStream::isDeviceTransactionStarted(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->isDeviceTransactionStarted());
}

QDataStream*  PythonQtWrapper_QDataStream::__lshift__(QDataStream* theWrappedObject, char  i)
{
  return &( (*theWrappedObject) <<i);
}

QDataStream*  PythonQtWrapper_QDataStream::__rshift__(QDataStream* theWrappedObject, char&  i)
{
  return &( (*theWrappedObject) >>i);
}

QDataStream::Status  PythonQtWrapper_QDataStream::status(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->status());
}



PythonQtShell_QDeferredDeleteEvent::~PythonQtShell_QDeferredDeleteEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDeferredDeleteEvent*  PythonQtShell_QDeferredDeleteEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QDeferredDeleteEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QDeferredDeleteEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QDeferredDeleteEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDeferredDeleteEvent::clone();
}
QDeferredDeleteEvent* PythonQtWrapper_QDeferredDeleteEvent::new_QDeferredDeleteEvent()
{ 
return new PythonQtShell_QDeferredDeleteEvent(); }

QDeferredDeleteEvent*  PythonQtWrapper_QDeferredDeleteEvent::clone(QDeferredDeleteEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QDeferredDeleteEvent*  PythonQtWrapper_QDeferredDeleteEvent::operator_assign(QDeferredDeleteEvent* theWrappedObject, QDeferredDeleteEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



QFileInfo  PythonQtWrapper_QDirIterator::fileInfo(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->fileInfo());
}

QString  PythonQtWrapper_QDirIterator::fileName(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QString  PythonQtWrapper_QDirIterator::filePath(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}

bool  PythonQtWrapper_QDirIterator::hasNext(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->hasNext());
}

QString  PythonQtWrapper_QDirIterator::next(QDirIterator* theWrappedObject)
{
  return ( theWrappedObject->next());
}

QString  PythonQtWrapper_QDirIterator::path(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->path());
}



PythonQtShell_QDynamicPropertyChangeEvent::~PythonQtShell_QDynamicPropertyChangeEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDynamicPropertyChangeEvent*  PythonQtShell_QDynamicPropertyChangeEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QDynamicPropertyChangeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QDynamicPropertyChangeEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QDynamicPropertyChangeEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDynamicPropertyChangeEvent::clone();
}
QDynamicPropertyChangeEvent* PythonQtWrapper_QDynamicPropertyChangeEvent::new_QDynamicPropertyChangeEvent(const QByteArray&  name)
{ 
return new PythonQtShell_QDynamicPropertyChangeEvent(name); }

QDynamicPropertyChangeEvent*  PythonQtWrapper_QDynamicPropertyChangeEvent::clone(QDynamicPropertyChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QDynamicPropertyChangeEvent*  PythonQtWrapper_QDynamicPropertyChangeEvent::operator_assign(QDynamicPropertyChangeEvent* theWrappedObject, QDynamicPropertyChangeEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QByteArray  PythonQtWrapper_QDynamicPropertyChangeEvent::propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->propertyName());
}



PythonQtShell_QFactoryInterface::~PythonQtShell_QFactoryInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStringList  PythonQtShell_QFactoryInterface::keys() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("keys");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("keys", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QStringList();
}
QFactoryInterface* PythonQtWrapper_QFactoryInterface::new_QFactoryInterface()
{ 
return new PythonQtShell_QFactoryInterface(); }

QStringList  PythonQtWrapper_QFactoryInterface::keys(QFactoryInterface* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}



PythonQtShell_QJsonParseError::~PythonQtShell_QJsonParseError() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QJsonParseError* PythonQtWrapper_QJsonParseError::new_QJsonParseError()
{ 
return new PythonQtShell_QJsonParseError(); }

QString  PythonQtWrapper_QJsonParseError::errorString(QJsonParseError* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}



bool  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_isDebugBuild()
{
  return (QLibraryInfo::isDebugBuild());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  location)
{
  return (QLibraryInfo::location(location));
}

QStringList  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_platformPluginArguments(const QString&  platformName)
{
  return (QLibraryInfo::platformPluginArguments(platformName));
}



const char*  PythonQtWrapper_QLoggingCategory::categoryName(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->categoryName());
}

QLoggingCategory*  PythonQtWrapper_QLoggingCategory::static_QLoggingCategory_defaultCategory()
{
  return (QLoggingCategory::defaultCategory());
}

bool  PythonQtWrapper_QLoggingCategory::isCriticalEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isCriticalEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isDebugEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isDebugEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type) const
{
  return ( theWrappedObject->isEnabled(type));
}

bool  PythonQtWrapper_QLoggingCategory::isInfoEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isInfoEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isWarningEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isWarningEnabled());
}



bool  PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, QIODevice*  device)
{
  return ( theWrappedObject->addData(device));
}

QByteArray  PythonQtWrapper_QMessageAuthenticationCode::static_QMessageAuthenticationCode_hash(const QByteArray&  message, const QByteArray&  key, QCryptographicHash::Algorithm  method)
{
  return (QMessageAuthenticationCode::hash(message, key, method));
}

QByteArray  PythonQtWrapper_QMessageAuthenticationCode::result(QMessageAuthenticationCode* theWrappedObject) const
{
  return ( theWrappedObject->result());
}



PythonQtShell_QMessageLogContext::~PythonQtShell_QMessageLogContext() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMessageLogContext* PythonQtWrapper_QMessageLogContext::new_QMessageLogContext()
{ 
return new PythonQtShell_QMessageLogContext(); }





QMetaClassInfo* PythonQtWrapper_QMetaClassInfo::new_QMetaClassInfo()
{ 
return new QMetaClassInfo(); }

const QMetaObject*  PythonQtWrapper_QMetaClassInfo::enclosingMetaObject(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

const char*  PythonQtWrapper_QMetaClassInfo::name(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaClassInfo::value(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QMetaEnum* PythonQtWrapper_QMetaEnum::new_QMetaEnum()
{ 
return new QMetaEnum(); }

const QMetaObject*  PythonQtWrapper_QMetaEnum::enclosingMetaObject(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

const char*  PythonQtWrapper_QMetaEnum::enumName(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->enumName());
}

bool  PythonQtWrapper_QMetaEnum::isFlag(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isFlag());
}

bool  PythonQtWrapper_QMetaEnum::isScoped(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isScoped());
}

bool  PythonQtWrapper_QMetaEnum::isValid(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const char*  PythonQtWrapper_QMetaEnum::name(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaEnum::scope(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->scope());
}



QMetaProperty* PythonQtWrapper_QMetaProperty::new_QMetaProperty()
{ 
return new QMetaProperty(); }

const QMetaObject*  PythonQtWrapper_QMetaProperty::enclosingMetaObject(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

QMetaEnum  PythonQtWrapper_QMetaProperty::enumerator(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enumerator());
}

bool  PythonQtWrapper_QMetaProperty::hasNotifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasNotifySignal());
}

bool  PythonQtWrapper_QMetaProperty::hasStdCppSet(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasStdCppSet());
}

bool  PythonQtWrapper_QMetaProperty::isAlias(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isAlias());
}

bool  PythonQtWrapper_QMetaProperty::isBindable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isBindable());
}

bool  PythonQtWrapper_QMetaProperty::isConstant(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isConstant());
}

bool  PythonQtWrapper_QMetaProperty::isDesignable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isDesignable());
}

bool  PythonQtWrapper_QMetaProperty::isEnumType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isEnumType());
}

bool  PythonQtWrapper_QMetaProperty::isFinal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFinal());
}

bool  PythonQtWrapper_QMetaProperty::isFlagType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFlagType());
}

bool  PythonQtWrapper_QMetaProperty::isReadable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QMetaProperty::isRequired(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isRequired());
}

bool  PythonQtWrapper_QMetaProperty::isResettable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isResettable());
}

bool  PythonQtWrapper_QMetaProperty::isScriptable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isScriptable());
}

bool  PythonQtWrapper_QMetaProperty::isStored(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isStored());
}

bool  PythonQtWrapper_QMetaProperty::isUser(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isUser());
}

bool  PythonQtWrapper_QMetaProperty::isValid(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QMetaProperty::isWritable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

QMetaType  PythonQtWrapper_QMetaProperty::metaType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->metaType());
}

const char*  PythonQtWrapper_QMetaProperty::name(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QMetaMethod  PythonQtWrapper_QMetaProperty::notifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->notifySignal());
}

QVariant  PythonQtWrapper_QMetaProperty::read(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->read(obj));
}

bool  PythonQtWrapper_QMetaProperty::reset(QMetaProperty* theWrappedObject, QObject*  obj) const
{
  return ( theWrappedObject->reset(obj));
}

QVariant::Type  PythonQtWrapper_QMetaProperty::type(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

const char*  PythonQtWrapper_QMetaProperty::typeName(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->typeName());
}

bool  PythonQtWrapper_QMetaProperty::write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const
{
  return ( theWrappedObject->write(obj, value));
}



bool  PythonQtWrapper_QMetaType::static_QMetaType_canConvert(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::canConvert(fromType, toType));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_canView(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::canView(fromType, toType));
}

QMetaType::TypeFlags  PythonQtWrapper_QMetaType::flags(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QMetaType  PythonQtWrapper_QMetaType::static_QMetaType_fromType()
{
  return (QMetaType::fromType());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredConverterFunction(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::hasRegisteredConverterFunction(fromType, toType));
}

bool  PythonQtWrapper_QMetaType::hasRegisteredDataStreamOperators(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->hasRegisteredDataStreamOperators());
}

bool  PythonQtWrapper_QMetaType::hasRegisteredDebugStreamOperator(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->hasRegisteredDebugStreamOperator());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredMutableViewFunction()
{
  return (QMetaType::hasRegisteredMutableViewFunction());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredMutableViewFunction(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::hasRegisteredMutableViewFunction(fromType, toType));
}

bool  PythonQtWrapper_QMetaType::isEqualityComparable(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isEqualityComparable());
}

bool  PythonQtWrapper_QMetaType::isOrdered(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isOrdered());
}

bool  PythonQtWrapper_QMetaType::isRegistered(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isRegistered());
}

bool  PythonQtWrapper_QMetaType::isValid(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const QMetaObject*  PythonQtWrapper_QMetaType::metaObject(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

const char*  PythonQtWrapper_QMetaType::name(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->name());
}



QList<QMimeType >  PythonQtWrapper_QMimeDatabase::allMimeTypes(QMimeDatabase* theWrappedObject) const
{
  return ( theWrappedObject->allMimeTypes());
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForData(device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForData(data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QFileInfo&  fileInfo, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileInfo, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QString&  fileName, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileName, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForName(QMimeDatabase* theWrappedObject, const QString&  nameOrAlias) const
{
  return ( theWrappedObject->mimeTypeForName(nameOrAlias));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForUrl(QMimeDatabase* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->mimeTypeForUrl(url));
}

QList<QMimeType >  PythonQtWrapper_QMimeDatabase::mimeTypesForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->mimeTypesForFileName(fileName));
}

QString  PythonQtWrapper_QMimeDatabase::suffixForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->suffixForFileName(fileName));
}



QOperatingSystemVersion  PythonQtWrapper_QOperatingSystemVersion::static_QOperatingSystemVersion_current()
{
  return (QOperatingSystemVersion::current());
}

QOperatingSystemVersion::OSType  PythonQtWrapper_QOperatingSystemVersion::static_QOperatingSystemVersion_currentType()
{
  return (QOperatingSystemVersion::currentType());
}

QString  PythonQtWrapper_QOperatingSystemVersion::name(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QOperatingSystemVersion::OSType  PythonQtWrapper_QOperatingSystemVersion::type(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QOperatingSystemVersion::py_toString(QOperatingSystemVersion* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(const QRandomGenerator&  other)
{ 
return new QRandomGenerator64(other); }

quint64  PythonQtWrapper_QRandomGenerator64::generate(QRandomGenerator64* theWrappedObject)
{
  return ( theWrappedObject->generate());
}

QRandomGenerator64*  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_global()
{
  return (QRandomGenerator64::global());
}

QRandomGenerator64  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_securelySeeded()
{
  return (QRandomGenerator64::securelySeeded());
}

QRandomGenerator64*  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_system()
{
  return (QRandomGenerator64::system());
}



bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForRead());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForWrite());
}



PythonQtShell_QSemaphore::~PythonQtShell_QSemaphore() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSemaphore* PythonQtWrapper_QSemaphore::new_QSemaphore()
{ 
return new PythonQtShell_QSemaphore(); }



QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs)
{ 
return new QStringMatcher(pattern, cs); }

QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QStringMatcher&  other)
{ 
return new QStringMatcher(other); }

Qt::CaseSensitivity  PythonQtWrapper_QStringMatcher::caseSensitivity(QStringMatcher* theWrappedObject) const
{
  return ( theWrappedObject->caseSensitivity());
}

QString  PythonQtWrapper_QStringMatcher::pattern(QStringMatcher* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}



PythonQtShell_QSysInfo::~PythonQtShell_QSysInfo() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSysInfo* PythonQtWrapper_QSysInfo::new_QSysInfo()
{ 
return new PythonQtShell_QSysInfo(); }

QByteArray  PythonQtWrapper_QSysInfo::static_QSysInfo_bootUniqueId()
{
  return (QSysInfo::bootUniqueId());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_buildAbi()
{
  return (QSysInfo::buildAbi());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_buildCpuArchitecture()
{
  return (QSysInfo::buildCpuArchitecture());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_currentCpuArchitecture()
{
  return (QSysInfo::currentCpuArchitecture());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_kernelType()
{
  return (QSysInfo::kernelType());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_kernelVersion()
{
  return (QSysInfo::kernelVersion());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_machineHostName()
{
  return (QSysInfo::machineHostName());
}

QByteArray  PythonQtWrapper_QSysInfo::static_QSysInfo_machineUniqueId()
{
  return (QSysInfo::machineUniqueId());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_prettyProductName()
{
  return (QSysInfo::prettyProductName());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_productType()
{
  return (QSysInfo::productType());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_productVersion()
{
  return (QSysInfo::productVersion());
}



PythonQtShell_QSystemSemaphore::~PythonQtShell_QSystemSemaphore() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSystemSemaphore* PythonQtWrapper_QSystemSemaphore::new_QSystemSemaphore()
{ 
return new PythonQtShell_QSystemSemaphore(); }

bool  PythonQtWrapper_QSystemSemaphore::acquire(QSystemSemaphore* theWrappedObject)
{
  return ( theWrappedObject->acquire());
}

QSystemSemaphore::SystemSemaphoreError  PythonQtWrapper_QSystemSemaphore::error(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QSystemSemaphore::errorString(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QSystemSemaphore::key(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->key());
}



bool  PythonQtWrapper_QTemporaryDir::autoRemove(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->autoRemove());
}

QString  PythonQtWrapper_QTemporaryDir::errorString(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QTemporaryDir::filePath(QTemporaryDir* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->filePath(fileName));
}

bool  PythonQtWrapper_QTemporaryDir::isValid(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QTemporaryDir::path(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

bool  PythonQtWrapper_QTemporaryDir::remove(QTemporaryDir* theWrappedObject)
{
  return ( theWrappedObject->remove());
}



QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder()
{ 
return new QTextBoundaryFinder(); }

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string)
{ 
return new QTextBoundaryFinder(type, string); }

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder(const QTextBoundaryFinder&  other)
{ 
return new QTextBoundaryFinder(other); }

QTextBoundaryFinder::BoundaryReasons  PythonQtWrapper_QTextBoundaryFinder::boundaryReasons(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->boundaryReasons());
}

bool  PythonQtWrapper_QTextBoundaryFinder::isAtBoundary(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->isAtBoundary());
}

bool  PythonQtWrapper_QTextBoundaryFinder::isValid(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QTextBoundaryFinder::string(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->string());
}

QTextBoundaryFinder::BoundaryType  PythonQtWrapper_QTextBoundaryFinder::type(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



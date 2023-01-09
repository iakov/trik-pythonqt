#include "com_trolltech_qt_sql0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QSize>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlField>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qmetatype.h>
#include <qsqldatabase.h>
#include <qsqlfield.h>
#include <qsqlindex.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>



PythonQtShell_QSqlDatabase::~PythonQtShell_QSqlDatabase() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase()
{ 
return new PythonQtShell_QSqlDatabase(); }

QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase(QSqlDriver*  driver)
{ 
return new PythonQtShell_QSqlDatabase(driver); }

QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase(const QSqlDatabase&  other)
{ 
return new PythonQtShell_QSqlDatabase(other); }

QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase(const QString&  type)
{ 
return new PythonQtShell_QSqlDatabase(type); }

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_addDatabase(QSqlDriver*  driver, const QString&  connectionName)
{
  return (QSqlDatabase::addDatabase(driver, connectionName));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_addDatabase(const QString&  type, const QString&  connectionName)
{
  return (QSqlDatabase::addDatabase(type, connectionName));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_cloneDatabase(const QSqlDatabase&  other, const QString&  connectionName)
{
  return (QSqlDatabase::cloneDatabase(other, connectionName));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_cloneDatabase(const QString&  other, const QString&  connectionName)
{
  return (QSqlDatabase::cloneDatabase(other, connectionName));
}

bool  PythonQtWrapper_QSqlDatabase::commit(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->commit());
}

QString  PythonQtWrapper_QSqlDatabase::connectOptions(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->connectOptions());
}

QString  PythonQtWrapper_QSqlDatabase::connectionName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->connectionName());
}

QStringList  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_connectionNames()
{
  return (QSqlDatabase::connectionNames());
}

bool  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_contains(const QString&  connectionName)
{
  return (QSqlDatabase::contains(connectionName));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_database(const QString&  connectionName, bool  open)
{
  return (QSqlDatabase::database(connectionName, open));
}

QString  PythonQtWrapper_QSqlDatabase::databaseName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->databaseName());
}

QSqlDriver*  PythonQtWrapper_QSqlDatabase::driver(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->driver());
}

QString  PythonQtWrapper_QSqlDatabase::driverName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->driverName());
}

QStringList  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_drivers()
{
  return (QSqlDatabase::drivers());
}

QSqlQuery  PythonQtWrapper_QSqlDatabase::exec(QSqlDatabase* theWrappedObject, const QString&  query) const
{
  return ( theWrappedObject->exec(query));
}

QString  PythonQtWrapper_QSqlDatabase::hostName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->hostName());
}

bool  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_isDriverAvailable(const QString&  name)
{
  return (QSqlDatabase::isDriverAvailable(name));
}

bool  PythonQtWrapper_QSqlDatabase::isOpen(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isOpen());
}

bool  PythonQtWrapper_QSqlDatabase::isOpenError(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isOpenError());
}

bool  PythonQtWrapper_QSqlDatabase::isValid(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QSqlError  PythonQtWrapper_QSqlDatabase::lastError(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

QSql::NumericalPrecisionPolicy  PythonQtWrapper_QSqlDatabase::numericalPrecisionPolicy(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->numericalPrecisionPolicy());
}

bool  PythonQtWrapper_QSqlDatabase::open(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->open());
}

bool  PythonQtWrapper_QSqlDatabase::open(QSqlDatabase* theWrappedObject, const QString&  user, const QString&  password)
{
  return ( theWrappedObject->open(user, password));
}

QString  PythonQtWrapper_QSqlDatabase::password(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

QSqlIndex  PythonQtWrapper_QSqlDatabase::primaryIndex(QSqlDatabase* theWrappedObject, const QString&  tablename) const
{
  return ( theWrappedObject->primaryIndex(tablename));
}

QSqlRecord  PythonQtWrapper_QSqlDatabase::record(QSqlDatabase* theWrappedObject, const QString&  tablename) const
{
  return ( theWrappedObject->record(tablename));
}

bool  PythonQtWrapper_QSqlDatabase::rollback(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->rollback());
}

QStringList  PythonQtWrapper_QSqlDatabase::tables(QSqlDatabase* theWrappedObject, QSql::TableType  type) const
{
  return ( theWrappedObject->tables(type));
}

bool  PythonQtWrapper_QSqlDatabase::transaction(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->transaction());
}

QString  PythonQtWrapper_QSqlDatabase::userName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->userName());
}

QString PythonQtWrapper_QSqlDatabase::py_toString(QSqlDatabase* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QSqlDriverCreatorBase::~PythonQtShell_QSqlDriverCreatorBase() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSqlDriver*  PythonQtShell_QSqlDriverCreatorBase::createObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSqlDriver*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSqlDriver* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createObject", methodInfo, result);
          } else {
            returnValue = *((QSqlDriver**)args[0]);
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
  return 0;
}
QSqlDriverCreatorBase* PythonQtWrapper_QSqlDriverCreatorBase::new_QSqlDriverCreatorBase()
{ 
return new PythonQtShell_QSqlDriverCreatorBase(); }

QSqlDriver*  PythonQtWrapper_QSqlDriverCreatorBase::createObject(QSqlDriverCreatorBase* theWrappedObject) const
{
  return ( theWrappedObject->createObject());
}



QSqlField* PythonQtWrapper_QSqlField::new_QSqlField(const QSqlField&  other)
{ 
return new QSqlField(other); }

QSqlField* PythonQtWrapper_QSqlField::new_QSqlField(const QString&  fieldName, QMetaType  type, const QString&  tableName)
{ 
return new QSqlField(fieldName, type, tableName); }

QSqlField* PythonQtWrapper_QSqlField::new_QSqlField(const QString&  fieldName, QVariant::Type  type, const QString&  tableName)
{ 
return new QSqlField(fieldName, type, tableName); }

QVariant  PythonQtWrapper_QSqlField::defaultValue(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->defaultValue());
}

bool  PythonQtWrapper_QSqlField::isAutoValue(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isAutoValue());
}

bool  PythonQtWrapper_QSqlField::isGenerated(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isGenerated());
}

bool  PythonQtWrapper_QSqlField::isNull(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QSqlField::isReadOnly(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isReadOnly());
}

bool  PythonQtWrapper_QSqlField::isValid(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QMetaType  PythonQtWrapper_QSqlField::metaType(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->metaType());
}

QString  PythonQtWrapper_QSqlField::name(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QSqlField::__ne__(QSqlField* theWrappedObject, const QSqlField&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QSqlField::__eq__(QSqlField* theWrappedObject, const QSqlField&  other) const
{
  return ( (*theWrappedObject)== other);
}

QSqlField::RequiredStatus  PythonQtWrapper_QSqlField::requiredStatus(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->requiredStatus());
}

QString  PythonQtWrapper_QSqlField::tableName(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->tableName());
}

QVariant::Type  PythonQtWrapper_QSqlField::type(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QVariant  PythonQtWrapper_QSqlField::value(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

QString PythonQtWrapper_QSqlField::py_toString(QSqlField* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QSqlIndex* PythonQtWrapper_QSqlIndex::new_QSqlIndex(const QSqlIndex&  other)
{ 
return new QSqlIndex(other); }

QSqlIndex* PythonQtWrapper_QSqlIndex::new_QSqlIndex(const QString&  cursorName, const QString&  name)
{ 
return new QSqlIndex(cursorName, name); }

QString  PythonQtWrapper_QSqlIndex::cursorName(QSqlIndex* theWrappedObject) const
{
  return ( theWrappedObject->cursorName());
}

QString  PythonQtWrapper_QSqlIndex::name(QSqlIndex* theWrappedObject) const
{
  return ( theWrappedObject->name());
}



QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(QSqlResult*  r)
{ 
return new QSqlQuery(r); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(const QSqlDatabase&  db)
{ 
return new QSqlQuery(db); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(const QSqlQuery&  other)
{ 
return new QSqlQuery(other); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(const QString&  query, const QSqlDatabase&  db)
{ 
return new QSqlQuery(query, db); }



QSqlRecord* PythonQtWrapper_QSqlRecord::new_QSqlRecord()
{ 
return new QSqlRecord(); }

QSqlRecord* PythonQtWrapper_QSqlRecord::new_QSqlRecord(const QSqlRecord&  other)
{ 
return new QSqlRecord(other); }

bool  PythonQtWrapper_QSqlRecord::contains(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->contains(name));
}

QSqlField  PythonQtWrapper_QSqlRecord::field(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->field(name));
}

bool  PythonQtWrapper_QSqlRecord::isEmpty(QSqlRecord* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QSqlRecord::isGenerated(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->isGenerated(name));
}

bool  PythonQtWrapper_QSqlRecord::isNull(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->isNull(name));
}

QSqlRecord  PythonQtWrapper_QSqlRecord::keyValues(QSqlRecord* theWrappedObject, const QSqlRecord&  keyFields) const
{
  return ( theWrappedObject->keyValues(keyFields));
}

bool  PythonQtWrapper_QSqlRecord::__ne__(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QSqlRecord::__eq__(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const
{
  return ( (*theWrappedObject)== other);
}

QVariant  PythonQtWrapper_QSqlRecord::value(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->value(name));
}

QString PythonQtWrapper_QSqlRecord::py_toString(QSqlRecord* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



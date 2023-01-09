#include <PythonQt.h>
#include <QObject>
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
#include <qsql.h>
#include <qsqldatabase.h>
#include <qsqlfield.h>
#include <qsqlindex.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>

class PythonQtWrapper_QSql : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Location NumericalPrecisionPolicy ParamTypeFlag TableType )
Q_FLAGS(ParamType )
enum Location{
  BeforeFirstRow = QSql::BeforeFirstRow,   AfterLastRow = QSql::AfterLastRow};
enum NumericalPrecisionPolicy{
  LowPrecisionInt32 = QSql::LowPrecisionInt32,   LowPrecisionInt64 = QSql::LowPrecisionInt64,   LowPrecisionDouble = QSql::LowPrecisionDouble,   HighPrecision = QSql::HighPrecision};
enum ParamTypeFlag{
  In = QSql::In,   Out = QSql::Out,   InOut = QSql::InOut,   Binary = QSql::Binary};
enum TableType{
  Tables = QSql::Tables,   SystemTables = QSql::SystemTables,   Views = QSql::Views,   AllTables = QSql::AllTables};
Q_DECLARE_FLAGS(ParamType, ParamTypeFlag)
public slots:
};



class PythonQtShell_QSqlDatabase : public QSqlDatabase
{
public:
    PythonQtShell_QSqlDatabase():QSqlDatabase(),_wrapper(NULL) {};
    PythonQtShell_QSqlDatabase(QSqlDriver*  driver):QSqlDatabase(driver),_wrapper(NULL) {};
    PythonQtShell_QSqlDatabase(const QSqlDatabase&  other):QSqlDatabase(other),_wrapper(NULL) {};
    PythonQtShell_QSqlDatabase(const QString&  type):QSqlDatabase(type),_wrapper(NULL) {};

   ~PythonQtShell_QSqlDatabase();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSqlDatabase : public QObject
{ Q_OBJECT
public:
public slots:
QSqlDatabase* new_QSqlDatabase();
QSqlDatabase* new_QSqlDatabase(QSqlDriver*  driver);
QSqlDatabase* new_QSqlDatabase(const QSqlDatabase&  other);
QSqlDatabase* new_QSqlDatabase(const QString&  type);
void delete_QSqlDatabase(QSqlDatabase* obj) { delete obj; }
   QSqlDatabase  static_QSqlDatabase_addDatabase(QSqlDriver*  driver, const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   QSqlDatabase  static_QSqlDatabase_addDatabase(const QString&  type, const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   QSqlDatabase  static_QSqlDatabase_cloneDatabase(const QSqlDatabase&  other, const QString&  connectionName);
   QSqlDatabase  static_QSqlDatabase_cloneDatabase(const QString&  other, const QString&  connectionName);
   bool  commit(QSqlDatabase* theWrappedObject);
   QString  connectOptions(QSqlDatabase* theWrappedObject) const;
   QString  connectionName(QSqlDatabase* theWrappedObject) const;
   QStringList  static_QSqlDatabase_connectionNames();
   bool  static_QSqlDatabase_contains(const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   QSqlDatabase  static_QSqlDatabase_database(const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection), bool  open = true);
   QString  databaseName(QSqlDatabase* theWrappedObject) const;
   QSqlDriver*  driver(QSqlDatabase* theWrappedObject) const;
   QString  driverName(QSqlDatabase* theWrappedObject) const;
   QStringList  static_QSqlDatabase_drivers();
   QSqlQuery  exec(QSqlDatabase* theWrappedObject, const QString&  query = QString()) const;
   QString  hostName(QSqlDatabase* theWrappedObject) const;
   bool  static_QSqlDatabase_isDriverAvailable(const QString&  name);
   bool  isOpen(QSqlDatabase* theWrappedObject) const;
   bool  isOpenError(QSqlDatabase* theWrappedObject) const;
   bool  isValid(QSqlDatabase* theWrappedObject) const;
   QSqlError  lastError(QSqlDatabase* theWrappedObject) const;
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlDatabase* theWrappedObject) const;
   bool  open(QSqlDatabase* theWrappedObject);
   bool  open(QSqlDatabase* theWrappedObject, const QString&  user, const QString&  password);
   QString  password(QSqlDatabase* theWrappedObject) const;
   QSqlIndex  primaryIndex(QSqlDatabase* theWrappedObject, const QString&  tablename) const;
   QSqlRecord  record(QSqlDatabase* theWrappedObject, const QString&  tablename) const;
   bool  rollback(QSqlDatabase* theWrappedObject);
   QStringList  tables(QSqlDatabase* theWrappedObject, QSql::TableType  type = QSql::Tables) const;
   bool  transaction(QSqlDatabase* theWrappedObject);
   QString  userName(QSqlDatabase* theWrappedObject) const;
    QString py_toString(QSqlDatabase*);
    bool __nonzero__(QSqlDatabase* obj) { return obj->isValid(); }
};



class PythonQtShell_QSqlDriverCreatorBase : public QSqlDriverCreatorBase
{
public:
    PythonQtShell_QSqlDriverCreatorBase():QSqlDriverCreatorBase(),_wrapper(NULL) {};

   ~PythonQtShell_QSqlDriverCreatorBase();

virtual QSqlDriver*  createObject() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSqlDriverCreatorBase : public QSqlDriverCreatorBase
{ public:
inline QSqlDriver*  py_q_createObject() const { return this->createObject(); }
};

class PythonQtWrapper_QSqlDriverCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
QSqlDriverCreatorBase* new_QSqlDriverCreatorBase();
void delete_QSqlDriverCreatorBase(QSqlDriverCreatorBase* obj) { delete obj; }
   QSqlDriver*  createObject(QSqlDriverCreatorBase* theWrappedObject) const;
   QSqlDriver*  py_q_createObject(QSqlDriverCreatorBase* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlDriverCreatorBase*)theWrappedObject)->py_q_createObject());}
};



class PythonQtWrapper_QSqlField : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RequiredStatus )
enum RequiredStatus{
  Unknown = QSqlField::Unknown,   Optional = QSqlField::Optional,   Required = QSqlField::Required};
public slots:
QSqlField* new_QSqlField(const QSqlField&  other);
QSqlField* new_QSqlField(const QString&  fieldName = QString(), QMetaType  type = QMetaType(), const QString&  tableName = QString());
QSqlField* new_QSqlField(const QString&  fieldName, QVariant::Type  type, const QString&  tableName = QString());
void delete_QSqlField(QSqlField* obj) { delete obj; }
   QVariant  defaultValue(QSqlField* theWrappedObject) const;
   bool  isAutoValue(QSqlField* theWrappedObject) const;
   bool  isGenerated(QSqlField* theWrappedObject) const;
   bool  isNull(QSqlField* theWrappedObject) const;
   bool  isReadOnly(QSqlField* theWrappedObject) const;
   bool  isValid(QSqlField* theWrappedObject) const;
   QMetaType  metaType(QSqlField* theWrappedObject) const;
   QString  name(QSqlField* theWrappedObject) const;
   bool  __ne__(QSqlField* theWrappedObject, const QSqlField&  other) const;
   bool  __eq__(QSqlField* theWrappedObject, const QSqlField&  other) const;
   QSqlField::RequiredStatus  requiredStatus(QSqlField* theWrappedObject) const;
   QString  tableName(QSqlField* theWrappedObject) const;
   QVariant::Type  type(QSqlField* theWrappedObject) const;
   QVariant  value(QSqlField* theWrappedObject) const;
    QString py_toString(QSqlField*);
    bool __nonzero__(QSqlField* obj) { return obj->isValid(); }
};



class PythonQtWrapper_QSqlIndex : public QObject
{ Q_OBJECT
public:
public slots:
QSqlIndex* new_QSqlIndex(const QSqlIndex&  other);
QSqlIndex* new_QSqlIndex(const QString&  cursorName = QString(), const QString&  name = QString());
void delete_QSqlIndex(QSqlIndex* obj) { delete obj; }
   QString  cursorName(QSqlIndex* theWrappedObject) const;
   QString  name(QSqlIndex* theWrappedObject) const;
    bool __nonzero__(QSqlIndex* obj) { return !obj->isEmpty(); }
};



class PythonQtWrapper_QSqlQuery : public QObject
{ Q_OBJECT
public:
public slots:
QSqlQuery* new_QSqlQuery(QSqlResult*  r);
QSqlQuery* new_QSqlQuery(const QSqlDatabase&  db);
QSqlQuery* new_QSqlQuery(const QSqlQuery&  other);
QSqlQuery* new_QSqlQuery(const QString&  query = QString(), const QSqlDatabase&  db = QSqlDatabase());
void delete_QSqlQuery(QSqlQuery* obj) { delete obj; }
};



class PythonQtWrapper_QSqlRecord : public QObject
{ Q_OBJECT
public:
public slots:
QSqlRecord* new_QSqlRecord();
QSqlRecord* new_QSqlRecord(const QSqlRecord&  other);
void delete_QSqlRecord(QSqlRecord* obj) { delete obj; }
   bool  contains(QSqlRecord* theWrappedObject, const QString&  name) const;
   QSqlField  field(QSqlRecord* theWrappedObject, const QString&  name) const;
   bool  isEmpty(QSqlRecord* theWrappedObject) const;
   bool  isGenerated(QSqlRecord* theWrappedObject, const QString&  name) const;
   bool  isNull(QSqlRecord* theWrappedObject, const QString&  name) const;
   QSqlRecord  keyValues(QSqlRecord* theWrappedObject, const QSqlRecord&  keyFields) const;
   bool  __ne__(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const;
   bool  __eq__(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const;
   QVariant  value(QSqlRecord* theWrappedObject, const QString&  name) const;
    QString py_toString(QSqlRecord*);
    bool __nonzero__(QSqlRecord* obj) { return !obj->isEmpty(); }
};



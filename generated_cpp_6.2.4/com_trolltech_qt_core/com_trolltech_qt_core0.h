#include <PythonQt.h>
#include <PythonQtConversion.h>
#include <QObject>
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
#include <qfactoryinterface.h>
#include <qjsondocument.h>
#include <qlibraryinfo.h>
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
#include <qsysinfo.h>
#include <qsystemsemaphore.h>
#include <qtemporarydir.h>
#include <qtextboundaryfinder.h>
#include <qurl.h>

class PythonQtShell_QAbstractListModel : public QAbstractListModel
{
public:
    PythonQtShell_QAbstractListModel(QObject*  parent = nullptr):QAbstractListModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractListModel();

virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual const QMetaObject*  metaObject() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractListModel : public QAbstractListModel
{ public:
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractListModel::flags(index); }
inline const QMetaObject*  py_q_metaObject() const { return QAbstractListModel::metaObject(); }
};

class PythonQtWrapper_QAbstractListModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractListModel* new_QAbstractListModel(QObject*  parent = nullptr);
void delete_QAbstractListModel(QAbstractListModel* obj) { delete obj; }
   Qt::ItemFlags  flags(QAbstractListModel* theWrappedObject, const QModelIndex&  index) const;
   Qt::ItemFlags  py_q_flags(QAbstractListModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_flags(index));}
   const QMetaObject*  metaObject(QAbstractListModel* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QAbstractListModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_metaObject());}
};



class PythonQtShell_QApplicationStateChangeEvent : public QApplicationStateChangeEvent
{
public:
    PythonQtShell_QApplicationStateChangeEvent(QApplicationStateChangeEvent&  arg__1):QApplicationStateChangeEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QApplicationStateChangeEvent(Qt::ApplicationState  state):QApplicationStateChangeEvent(state),_wrapper(NULL) {};

   ~PythonQtShell_QApplicationStateChangeEvent();

virtual QApplicationStateChangeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QApplicationStateChangeEvent : public QApplicationStateChangeEvent
{ public:
inline QApplicationStateChangeEvent&  promoted_operator_assign(QApplicationStateChangeEvent&  arg__1) { return ((QApplicationStateChangeEvent*)this)->operator=(arg__1); }
inline QApplicationStateChangeEvent*  py_q_clone() const { return QApplicationStateChangeEvent::clone(); }
};

class PythonQtWrapper_QApplicationStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QApplicationStateChangeEvent* new_QApplicationStateChangeEvent(Qt::ApplicationState  state);
void delete_QApplicationStateChangeEvent(QApplicationStateChangeEvent* obj) { delete obj; }
   Qt::ApplicationState  applicationState(QApplicationStateChangeEvent* theWrappedObject) const;
   QApplicationStateChangeEvent*  clone(QApplicationStateChangeEvent* theWrappedObject) const;
   QApplicationStateChangeEvent*  py_q_clone(QApplicationStateChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QApplicationStateChangeEvent*)theWrappedObject)->py_q_clone());}
   QApplicationStateChangeEvent*  operator_assign(QApplicationStateChangeEvent* theWrappedObject, QApplicationStateChangeEvent&  arg__1);
};



class PythonQtWrapper_QByteArrayMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QByteArrayMatcher* new_QByteArrayMatcher();
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArray&  pattern);
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArrayMatcher&  other);
void delete_QByteArrayMatcher(QByteArrayMatcher* obj) { delete obj; }
   QByteArray  pattern(QByteArrayMatcher* theWrappedObject) const;
};



class PythonQtShell_QChildEvent : public QChildEvent
{
public:
    PythonQtShell_QChildEvent(QChildEvent&  arg__1):QChildEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QChildEvent(QEvent::Type  type, QObject*  child):QChildEvent(type, child),_wrapper(NULL) {};

   ~PythonQtShell_QChildEvent();

virtual QChildEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QChildEvent : public QChildEvent
{ public:
inline QChildEvent&  promoted_operator_assign(QChildEvent&  arg__1) { return ((QChildEvent*)this)->operator=(arg__1); }
inline QChildEvent*  py_q_clone() const { return QChildEvent::clone(); }
};

class PythonQtWrapper_QChildEvent : public QObject
{ Q_OBJECT
public:
public slots:
QChildEvent* new_QChildEvent(QEvent::Type  type, QObject*  child);
void delete_QChildEvent(QChildEvent* obj) { delete obj; }
   bool  added(QChildEvent* theWrappedObject) const;
   QObject*  child(QChildEvent* theWrappedObject) const;
   QChildEvent*  clone(QChildEvent* theWrappedObject) const;
   QChildEvent*  py_q_clone(QChildEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QChildEvent*)theWrappedObject)->py_q_clone());}
   QChildEvent*  operator_assign(QChildEvent* theWrappedObject, QChildEvent&  arg__1);
   bool  polished(QChildEvent* theWrappedObject) const;
   bool  removed(QChildEvent* theWrappedObject) const;
};



class PythonQtWrapper_QCommandLineParser : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptionsAfterPositionalArgumentsMode SingleDashWordOptionMode )
enum OptionsAfterPositionalArgumentsMode{
  ParseAsOptions = QCommandLineParser::ParseAsOptions,   ParseAsPositionalArguments = QCommandLineParser::ParseAsPositionalArguments};
enum SingleDashWordOptionMode{
  ParseAsCompactedShortOptions = QCommandLineParser::ParseAsCompactedShortOptions,   ParseAsLongOptions = QCommandLineParser::ParseAsLongOptions};
public slots:
void delete_QCommandLineParser(QCommandLineParser* obj) { delete obj; }
   QCommandLineOption  addHelpOption(QCommandLineParser* theWrappedObject);
   bool  addOption(QCommandLineParser* theWrappedObject, const QCommandLineOption&  commandLineOption);
   bool  addOptions(QCommandLineParser* theWrappedObject, const QList<QCommandLineOption >&  options);
   QCommandLineOption  addVersionOption(QCommandLineParser* theWrappedObject);
   QString  applicationDescription(QCommandLineParser* theWrappedObject) const;
   QString  errorText(QCommandLineParser* theWrappedObject) const;
   QString  helpText(QCommandLineParser* theWrappedObject) const;
   bool  isSet(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   bool  isSet(QCommandLineParser* theWrappedObject, const QString&  name) const;
   QStringList  optionNames(QCommandLineParser* theWrappedObject) const;
   bool  parse(QCommandLineParser* theWrappedObject, const QStringList&  arguments);
   QStringList  positionalArguments(QCommandLineParser* theWrappedObject) const;
   QStringList  unknownOptionNames(QCommandLineParser* theWrappedObject) const;
   QString  value(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   QString  value(QCommandLineParser* theWrappedObject, const QString&  name) const;
   QStringList  values(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   QStringList  values(QCommandLineParser* theWrappedObject, const QString&  name) const;
};



class PythonQtWrapper_QDataStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ByteOrder FloatingPointPrecision Status Version )
enum ByteOrder{
  BigEndian = QDataStream::BigEndian,   LittleEndian = QDataStream::LittleEndian};
enum FloatingPointPrecision{
  SinglePrecision = QDataStream::SinglePrecision,   DoublePrecision = QDataStream::DoublePrecision};
enum Status{
  Ok = QDataStream::Ok,   ReadPastEnd = QDataStream::ReadPastEnd,   ReadCorruptData = QDataStream::ReadCorruptData,   WriteFailed = QDataStream::WriteFailed};
enum Version{
  Qt_1_0 = QDataStream::Qt_1_0,   Qt_2_0 = QDataStream::Qt_2_0,   Qt_2_1 = QDataStream::Qt_2_1,   Qt_3_0 = QDataStream::Qt_3_0,   Qt_3_1 = QDataStream::Qt_3_1,   Qt_3_3 = QDataStream::Qt_3_3,   Qt_4_0 = QDataStream::Qt_4_0,   Qt_4_1 = QDataStream::Qt_4_1,   Qt_4_2 = QDataStream::Qt_4_2,   Qt_4_3 = QDataStream::Qt_4_3,   Qt_4_4 = QDataStream::Qt_4_4,   Qt_4_5 = QDataStream::Qt_4_5,   Qt_4_6 = QDataStream::Qt_4_6,   Qt_4_7 = QDataStream::Qt_4_7,   Qt_4_8 = QDataStream::Qt_4_8,   Qt_4_9 = QDataStream::Qt_4_9,   Qt_5_0 = QDataStream::Qt_5_0,   Qt_5_1 = QDataStream::Qt_5_1,   Qt_5_2 = QDataStream::Qt_5_2,   Qt_5_3 = QDataStream::Qt_5_3,   Qt_5_4 = QDataStream::Qt_5_4,   Qt_5_5 = QDataStream::Qt_5_5,   Qt_5_6 = QDataStream::Qt_5_6,   Qt_5_7 = QDataStream::Qt_5_7,   Qt_5_8 = QDataStream::Qt_5_8,   Qt_5_9 = QDataStream::Qt_5_9,   Qt_5_10 = QDataStream::Qt_5_10,   Qt_5_11 = QDataStream::Qt_5_11,   Qt_5_12 = QDataStream::Qt_5_12,   Qt_5_13 = QDataStream::Qt_5_13,   Qt_5_14 = QDataStream::Qt_5_14,   Qt_5_15 = QDataStream::Qt_5_15,   Qt_6_0 = QDataStream::Qt_6_0,   Qt_6_1 = QDataStream::Qt_6_1,   Qt_6_2 = QDataStream::Qt_6_2,   Qt_DefaultCompiledVersion = QDataStream::Qt_DefaultCompiledVersion};
public slots:
void delete_QDataStream(QDataStream* obj) { delete obj; }
   bool  atEnd(QDataStream* theWrappedObject) const;
   QDataStream::ByteOrder  byteOrder(QDataStream* theWrappedObject) const;
   bool  commitTransaction(QDataStream* theWrappedObject);
   QIODevice*  device(QDataStream* theWrappedObject) const;
   QDataStream::FloatingPointPrecision  floatingPointPrecision(QDataStream* theWrappedObject) const;
   bool  isDeviceTransactionStarted(QDataStream* theWrappedObject) const;
   QDataStream*  __lshift__(QDataStream* theWrappedObject, char  i);
   QDataStream*  __rshift__(QDataStream* theWrappedObject, char&  i);
   QDataStream::Status  status(QDataStream* theWrappedObject) const;

   QString readQString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QString readString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QChar readQChar(QDataStream* d) { QChar r; (*d) >> r; return r; }
   QStringList readQStringList(QDataStream* d) { QStringList r; (*d) >> r; return r; }
   QVariant readQVariant(QDataStream* d) { QVariant r; (*d) >> r; return r; }
   bool readBool(QDataStream* d) { bool r; (*d) >> r; return r; }
   qint8 readInt8(QDataStream* d) { qint8 r; (*d) >> r; return r; }
   quint8 readUInt8(QDataStream* d) { quint8 r; (*d) >> r; return r; }
   qint16 readInt16(QDataStream* d) { qint16 r; (*d) >> r; return r; }
   quint16 readUInt16(QDataStream* d) { quint16 r; (*d) >> r; return r; }
   qint32 readInt32(QDataStream* d) { qint32 r; (*d) >> r; return r; }
   quint32 readUInt32(QDataStream* d) { quint32 r; (*d) >> r; return r; }
   qint64 readInt64(QDataStream* d) { qint64 r; (*d) >> r; return r; }
   quint64 readUInt64(QDataStream* d) { quint64 r; (*d) >> r; return r; }
   float readFloat(QDataStream* d) { float r; (*d) >> r; return r; }
   double readDouble(QDataStream* d) { double r; (*d) >> r; return r; }

   void writeQString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeQChar(QDataStream* d, const QChar& v) { (*d) << v; }
   void writeQStringList(QDataStream* d, const QStringList& v) { (*d) << v; }
   void writeQVariant(QDataStream* d, const QVariant& v) { (*d) << v; }
   void writeBool(QDataStream* d, bool v) { (*d) << v; }
   void writeInt8(QDataStream* d, qint8 v) { (*d) << v; }
   void writeUInt8(QDataStream* d, quint8 v) { (*d) << v; }
   void writeInt16(QDataStream* d, qint16 v) { (*d) << v; }
   void writeUInt16(QDataStream* d, quint16 v) { (*d) << v; }
   void writeInt32(QDataStream* d, qint32 v) { (*d) << v; }
   void writeUInt32(QDataStream* d, quint32 v) { (*d) << v; }
   void writeInt64(QDataStream* d, qint64 v) { (*d) << v; }
   void writeUInt64(QDataStream* d, quint64 v) { (*d) << v; }
   void writeFloat(QDataStream* d, float v) { (*d) << v; }
   void writeDouble(QDataStream* d, double v) { (*d) << v; }

   int writeRawData(QDataStream* d, PyObject* o) {
     bool ok;
     QByteArray r = PythonQtConv::PyObjGetBytes(o, false, ok);
     return (*d).writeRawData(r.constData(), r.size());
   }

   PyObject* readRawData(QDataStream* d, int len) {
     QByteArray r;
     r.resize(len);
     int result = d->readRawData(r.data(), r.size());
     if (result>=0) {
       return PyBytes_FromStringAndSize(r.data(), result);
     } else {
       Py_INCREF(Py_None);
       return Py_None;
     }
   }
    
};



class PythonQtShell_QDeferredDeleteEvent : public QDeferredDeleteEvent
{
public:
    PythonQtShell_QDeferredDeleteEvent():QDeferredDeleteEvent(),_wrapper(NULL) {};
    PythonQtShell_QDeferredDeleteEvent(QDeferredDeleteEvent&  arg__1):QDeferredDeleteEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QDeferredDeleteEvent();

virtual QDeferredDeleteEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDeferredDeleteEvent : public QDeferredDeleteEvent
{ public:
inline QDeferredDeleteEvent&  promoted_operator_assign(QDeferredDeleteEvent&  arg__1) { return ((QDeferredDeleteEvent*)this)->operator=(arg__1); }
inline QDeferredDeleteEvent*  py_q_clone() const { return QDeferredDeleteEvent::clone(); }
};

class PythonQtWrapper_QDeferredDeleteEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDeferredDeleteEvent* new_QDeferredDeleteEvent();
void delete_QDeferredDeleteEvent(QDeferredDeleteEvent* obj) { delete obj; }
   QDeferredDeleteEvent*  clone(QDeferredDeleteEvent* theWrappedObject) const;
   QDeferredDeleteEvent*  py_q_clone(QDeferredDeleteEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDeferredDeleteEvent*)theWrappedObject)->py_q_clone());}
   QDeferredDeleteEvent*  operator_assign(QDeferredDeleteEvent* theWrappedObject, QDeferredDeleteEvent&  arg__1);
};



class PythonQtWrapper_QDirIterator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IteratorFlag )
Q_FLAGS(IteratorFlags )
enum IteratorFlag{
  NoIteratorFlags = QDirIterator::NoIteratorFlags,   FollowSymlinks = QDirIterator::FollowSymlinks,   Subdirectories = QDirIterator::Subdirectories};
Q_DECLARE_FLAGS(IteratorFlags, IteratorFlag)
public slots:
void delete_QDirIterator(QDirIterator* obj) { delete obj; }
   QFileInfo  fileInfo(QDirIterator* theWrappedObject) const;
   QString  fileName(QDirIterator* theWrappedObject) const;
   QString  filePath(QDirIterator* theWrappedObject) const;
   bool  hasNext(QDirIterator* theWrappedObject) const;
   QString  next(QDirIterator* theWrappedObject);
   QString  path(QDirIterator* theWrappedObject) const;
};



class PythonQtShell_QDynamicPropertyChangeEvent : public QDynamicPropertyChangeEvent
{
public:
    PythonQtShell_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent&  arg__1):QDynamicPropertyChangeEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QDynamicPropertyChangeEvent(const QByteArray&  name):QDynamicPropertyChangeEvent(name),_wrapper(NULL) {};

   ~PythonQtShell_QDynamicPropertyChangeEvent();

virtual QDynamicPropertyChangeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDynamicPropertyChangeEvent : public QDynamicPropertyChangeEvent
{ public:
inline QDynamicPropertyChangeEvent&  promoted_operator_assign(QDynamicPropertyChangeEvent&  arg__1) { return ((QDynamicPropertyChangeEvent*)this)->operator=(arg__1); }
inline QDynamicPropertyChangeEvent*  py_q_clone() const { return QDynamicPropertyChangeEvent::clone(); }
};

class PythonQtWrapper_QDynamicPropertyChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDynamicPropertyChangeEvent* new_QDynamicPropertyChangeEvent(const QByteArray&  name);
void delete_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent* obj) { delete obj; }
   QDynamicPropertyChangeEvent*  clone(QDynamicPropertyChangeEvent* theWrappedObject) const;
   QDynamicPropertyChangeEvent*  py_q_clone(QDynamicPropertyChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDynamicPropertyChangeEvent*)theWrappedObject)->py_q_clone());}
   QDynamicPropertyChangeEvent*  operator_assign(QDynamicPropertyChangeEvent* theWrappedObject, QDynamicPropertyChangeEvent&  arg__1);
   QByteArray  propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const;
};



class PythonQtShell_QFactoryInterface : public QFactoryInterface
{
public:
    PythonQtShell_QFactoryInterface():QFactoryInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QFactoryInterface();

virtual QStringList  keys() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFactoryInterface : public QFactoryInterface
{ public:
inline QStringList  py_q_keys() const { return this->keys(); }
};

class PythonQtWrapper_QFactoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
QFactoryInterface* new_QFactoryInterface();
void delete_QFactoryInterface(QFactoryInterface* obj) { delete obj; }
   QStringList  keys(QFactoryInterface* theWrappedObject) const;
   QStringList  py_q_keys(QFactoryInterface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFactoryInterface*)theWrappedObject)->py_q_keys());}
};



class PythonQtShell_QJsonParseError : public QJsonParseError
{
public:
    PythonQtShell_QJsonParseError():QJsonParseError(),_wrapper(NULL) {};

   ~PythonQtShell_QJsonParseError();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QJsonParseError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ParseError )
enum ParseError{
  NoError = QJsonParseError::NoError,   UnterminatedObject = QJsonParseError::UnterminatedObject,   MissingNameSeparator = QJsonParseError::MissingNameSeparator,   UnterminatedArray = QJsonParseError::UnterminatedArray,   MissingValueSeparator = QJsonParseError::MissingValueSeparator,   IllegalValue = QJsonParseError::IllegalValue,   TerminationByNumber = QJsonParseError::TerminationByNumber,   IllegalNumber = QJsonParseError::IllegalNumber,   IllegalEscapeSequence = QJsonParseError::IllegalEscapeSequence,   IllegalUTF8String = QJsonParseError::IllegalUTF8String,   UnterminatedString = QJsonParseError::UnterminatedString,   MissingObject = QJsonParseError::MissingObject,   DeepNesting = QJsonParseError::DeepNesting,   DocumentTooLarge = QJsonParseError::DocumentTooLarge,   GarbageAtEnd = QJsonParseError::GarbageAtEnd};
public slots:
QJsonParseError* new_QJsonParseError();
void delete_QJsonParseError(QJsonParseError* obj) { delete obj; }
   QString  errorString(QJsonParseError* theWrappedObject) const;
void py_set_error(QJsonParseError* theWrappedObject, QJsonParseError::ParseError  error){ theWrappedObject->error = error; }
QJsonParseError::ParseError  py_get_error(QJsonParseError* theWrappedObject){ return theWrappedObject->error; }
};



class PythonQtWrapper_QLibraryInfo : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QLibraryInfo(QLibraryInfo* obj) { delete obj; }
   bool  static_QLibraryInfo_isDebugBuild();
   QString  static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  location);
   QStringList  static_QLibraryInfo_platformPluginArguments(const QString&  platformName);
};



class PythonQtWrapper_QLoggingCategory : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QLoggingCategory(QLoggingCategory* obj) { delete obj; }
   const char*  categoryName(QLoggingCategory* theWrappedObject) const;
   QLoggingCategory*  static_QLoggingCategory_defaultCategory();
   bool  isCriticalEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isDebugEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type) const;
   bool  isInfoEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isWarningEnabled(QLoggingCategory* theWrappedObject) const;
};



class PythonQtWrapper_QMessageAuthenticationCode : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QMessageAuthenticationCode(QMessageAuthenticationCode* obj) { delete obj; }
   bool  addData(QMessageAuthenticationCode* theWrappedObject, QIODevice*  device);
   QByteArray  static_QMessageAuthenticationCode_hash(const QByteArray&  message, const QByteArray&  key, QCryptographicHash::Algorithm  method);
   QByteArray  result(QMessageAuthenticationCode* theWrappedObject) const;
};



class PythonQtShell_QMessageLogContext : public QMessageLogContext
{
public:
    PythonQtShell_QMessageLogContext():QMessageLogContext(),_wrapper(NULL) {};

   ~PythonQtShell_QMessageLogContext();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMessageLogContext : public QObject
{ Q_OBJECT
public:
public slots:
QMessageLogContext* new_QMessageLogContext();
void delete_QMessageLogContext(QMessageLogContext* obj) { delete obj; }
const char*  py_get_category(QMessageLogContext* theWrappedObject){ return theWrappedObject->category; }
const char*  py_get_file(QMessageLogContext* theWrappedObject){ return theWrappedObject->file; }
const char*  py_get_function(QMessageLogContext* theWrappedObject){ return theWrappedObject->function; }
};



class PythonQtWrapper_QMessageLogger : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QMessageLogger(QMessageLogger* obj) { delete obj; }
};



class PythonQtWrapper_QMetaClassInfo : public QObject
{ Q_OBJECT
public:
public slots:
QMetaClassInfo* new_QMetaClassInfo();
void delete_QMetaClassInfo(QMetaClassInfo* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaClassInfo* theWrappedObject) const;
   const char*  name(QMetaClassInfo* theWrappedObject) const;
   const char*  value(QMetaClassInfo* theWrappedObject) const;
};



class PythonQtWrapper_QMetaEnum : public QObject
{ Q_OBJECT
public:
public slots:
QMetaEnum* new_QMetaEnum();
void delete_QMetaEnum(QMetaEnum* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaEnum* theWrappedObject) const;
   const char*  enumName(QMetaEnum* theWrappedObject) const;
   bool  isFlag(QMetaEnum* theWrappedObject) const;
   bool  isScoped(QMetaEnum* theWrappedObject) const;
   bool  isValid(QMetaEnum* theWrappedObject) const;
   const char*  name(QMetaEnum* theWrappedObject) const;
   const char*  scope(QMetaEnum* theWrappedObject) const;
    bool __nonzero__(QMetaEnum* obj) { return obj->isValid(); }
};



class PythonQtWrapper_QMetaProperty : public QObject
{ Q_OBJECT
public:
public slots:
QMetaProperty* new_QMetaProperty();
void delete_QMetaProperty(QMetaProperty* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaProperty* theWrappedObject) const;
   QMetaEnum  enumerator(QMetaProperty* theWrappedObject) const;
   bool  hasNotifySignal(QMetaProperty* theWrappedObject) const;
   bool  hasStdCppSet(QMetaProperty* theWrappedObject) const;
   bool  isAlias(QMetaProperty* theWrappedObject) const;
   bool  isBindable(QMetaProperty* theWrappedObject) const;
   bool  isConstant(QMetaProperty* theWrappedObject) const;
   bool  isDesignable(QMetaProperty* theWrappedObject) const;
   bool  isEnumType(QMetaProperty* theWrappedObject) const;
   bool  isFinal(QMetaProperty* theWrappedObject) const;
   bool  isFlagType(QMetaProperty* theWrappedObject) const;
   bool  isReadable(QMetaProperty* theWrappedObject) const;
   bool  isRequired(QMetaProperty* theWrappedObject) const;
   bool  isResettable(QMetaProperty* theWrappedObject) const;
   bool  isScriptable(QMetaProperty* theWrappedObject) const;
   bool  isStored(QMetaProperty* theWrappedObject) const;
   bool  isUser(QMetaProperty* theWrappedObject) const;
   bool  isValid(QMetaProperty* theWrappedObject) const;
   bool  isWritable(QMetaProperty* theWrappedObject) const;
   QMetaType  metaType(QMetaProperty* theWrappedObject) const;
   const char*  name(QMetaProperty* theWrappedObject) const;
   QMetaMethod  notifySignal(QMetaProperty* theWrappedObject) const;
   QVariant  read(QMetaProperty* theWrappedObject, const QObject*  obj) const;
   bool  reset(QMetaProperty* theWrappedObject, QObject*  obj) const;
   QVariant::Type  type(QMetaProperty* theWrappedObject) const;
   const char*  typeName(QMetaProperty* theWrappedObject) const;
   bool  write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const;
    bool __nonzero__(QMetaProperty* obj) { return obj->isValid(); }
};



class PythonQtWrapper_QMetaType : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TypeFlag )
Q_FLAGS(TypeFlags )
enum TypeFlag{
  NeedsConstruction = QMetaType::NeedsConstruction,   NeedsDestruction = QMetaType::NeedsDestruction,   RelocatableType = QMetaType::RelocatableType,   MovableType = QMetaType::MovableType,   PointerToQObject = QMetaType::PointerToQObject,   IsEnumeration = QMetaType::IsEnumeration,   SharedPointerToQObject = QMetaType::SharedPointerToQObject,   WeakPointerToQObject = QMetaType::WeakPointerToQObject,   TrackingPointerToQObject = QMetaType::TrackingPointerToQObject,   IsUnsignedEnumeration = QMetaType::IsUnsignedEnumeration,   IsGadget = QMetaType::IsGadget,   PointerToGadget = QMetaType::PointerToGadget,   IsPointer = QMetaType::IsPointer,   IsQmlList = QMetaType::IsQmlList,   IsConst = QMetaType::IsConst};
Q_DECLARE_FLAGS(TypeFlags, TypeFlag)
public slots:
void delete_QMetaType(QMetaType* obj) { delete obj; }
   bool  static_QMetaType_canConvert(QMetaType  fromType, QMetaType  toType);
   bool  static_QMetaType_canView(QMetaType  fromType, QMetaType  toType);
   QMetaType::TypeFlags  flags(QMetaType* theWrappedObject) const;
   QMetaType  static_QMetaType_fromType();
   bool  static_QMetaType_hasRegisteredConverterFunction(QMetaType  fromType, QMetaType  toType);
   bool  hasRegisteredDataStreamOperators(QMetaType* theWrappedObject) const;
   bool  hasRegisteredDebugStreamOperator(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_hasRegisteredMutableViewFunction();
   bool  static_QMetaType_hasRegisteredMutableViewFunction(QMetaType  fromType, QMetaType  toType);
   bool  isEqualityComparable(QMetaType* theWrappedObject) const;
   bool  isOrdered(QMetaType* theWrappedObject) const;
   bool  isRegistered(QMetaType* theWrappedObject) const;
   bool  isValid(QMetaType* theWrappedObject) const;
   const QMetaObject*  metaObject(QMetaType* theWrappedObject) const;
   const char*  name(QMetaType* theWrappedObject) const;
    bool __nonzero__(QMetaType* obj) { return obj->isValid(); }
};



class PythonQtWrapper_QMimeDatabase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MatchMode )
enum MatchMode{
  MatchDefault = QMimeDatabase::MatchDefault,   MatchExtension = QMimeDatabase::MatchExtension,   MatchContent = QMimeDatabase::MatchContent};
public slots:
void delete_QMimeDatabase(QMimeDatabase* obj) { delete obj; }
   QList<QMimeType >  allMimeTypes(QMimeDatabase* theWrappedObject) const;
   QMimeType  mimeTypeForData(QMimeDatabase* theWrappedObject, QIODevice*  device) const;
   QMimeType  mimeTypeForData(QMimeDatabase* theWrappedObject, const QByteArray&  data) const;
   QMimeType  mimeTypeForFile(QMimeDatabase* theWrappedObject, const QFileInfo&  fileInfo, QMimeDatabase::MatchMode  mode = QMimeDatabase::MatchDefault) const;
   QMimeType  mimeTypeForFile(QMimeDatabase* theWrappedObject, const QString&  fileName, QMimeDatabase::MatchMode  mode = QMimeDatabase::MatchDefault) const;
   QMimeType  mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, QIODevice*  device) const;
   QMimeType  mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, const QByteArray&  data) const;
   QMimeType  mimeTypeForName(QMimeDatabase* theWrappedObject, const QString&  nameOrAlias) const;
   QMimeType  mimeTypeForUrl(QMimeDatabase* theWrappedObject, const QUrl&  url) const;
   QList<QMimeType >  mimeTypesForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const;
   QString  suffixForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const;
};



class PythonQtWrapper_QOperatingSystemVersion : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OSType )
enum OSType{
  Unknown = QOperatingSystemVersion::Unknown,   Windows = QOperatingSystemVersion::Windows,   MacOS = QOperatingSystemVersion::MacOS,   IOS = QOperatingSystemVersion::IOS,   TvOS = QOperatingSystemVersion::TvOS,   WatchOS = QOperatingSystemVersion::WatchOS,   Android = QOperatingSystemVersion::Android};
public slots:
void delete_QOperatingSystemVersion(QOperatingSystemVersion* obj) { delete obj; }
   QOperatingSystemVersion  static_QOperatingSystemVersion_current();
   QOperatingSystemVersion::OSType  static_QOperatingSystemVersion_currentType();
   QString  name(QOperatingSystemVersion* theWrappedObject) const;
   QOperatingSystemVersion::OSType  type(QOperatingSystemVersion* theWrappedObject) const;
    QString py_toString(QOperatingSystemVersion*);
};



class PythonQtWrapper_QRandomGenerator64 : public QObject
{ Q_OBJECT
public:
public slots:
QRandomGenerator64* new_QRandomGenerator64(const QRandomGenerator&  other);
void delete_QRandomGenerator64(QRandomGenerator64* obj) { delete obj; }
   quint64  generate(QRandomGenerator64* theWrappedObject);
   QRandomGenerator64*  static_QRandomGenerator64_global();
   QRandomGenerator64  static_QRandomGenerator64_securelySeeded();
   QRandomGenerator64*  static_QRandomGenerator64_system();
};



class PythonQtWrapper_QReadWriteLock : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QReadWriteLock::NonRecursive,   Recursive = QReadWriteLock::Recursive};
public slots:
void delete_QReadWriteLock(QReadWriteLock* obj) { delete obj; }
   bool  tryLockForRead(QReadWriteLock* theWrappedObject);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject);
};



class PythonQtShell_QSemaphore : public QSemaphore
{
public:
    PythonQtShell_QSemaphore():QSemaphore(),_wrapper(NULL) {};

   ~PythonQtShell_QSemaphore();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSemaphore : public QObject
{ Q_OBJECT
public:
public slots:
QSemaphore* new_QSemaphore();
void delete_QSemaphore(QSemaphore* obj) { delete obj; }
};



class PythonQtWrapper_QStringMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QStringMatcher* new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QStringMatcher&  other);
void delete_QStringMatcher(QStringMatcher* obj) { delete obj; }
   Qt::CaseSensitivity  caseSensitivity(QStringMatcher* theWrappedObject) const;
   QString  pattern(QStringMatcher* theWrappedObject) const;
};



class PythonQtShell_QSysInfo : public QSysInfo
{
public:
    PythonQtShell_QSysInfo():QSysInfo(),_wrapper(NULL) {};

   ~PythonQtShell_QSysInfo();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSysInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Endian Sizes )
enum Endian{
  BigEndian = QSysInfo::BigEndian,   LittleEndian = QSysInfo::LittleEndian,   ByteOrder = QSysInfo::ByteOrder};
enum Sizes{
  WordSize = QSysInfo::WordSize};
public slots:
QSysInfo* new_QSysInfo();
void delete_QSysInfo(QSysInfo* obj) { delete obj; }
   QByteArray  static_QSysInfo_bootUniqueId();
   QString  static_QSysInfo_buildAbi();
   QString  static_QSysInfo_buildCpuArchitecture();
   QString  static_QSysInfo_currentCpuArchitecture();
   QString  static_QSysInfo_kernelType();
   QString  static_QSysInfo_kernelVersion();
   QString  static_QSysInfo_machineHostName();
   QByteArray  static_QSysInfo_machineUniqueId();
   QString  static_QSysInfo_prettyProductName();
   QString  static_QSysInfo_productType();
   QString  static_QSysInfo_productVersion();
};



class PythonQtShell_QSystemSemaphore : public QSystemSemaphore
{
public:
    PythonQtShell_QSystemSemaphore():QSystemSemaphore(),_wrapper(NULL) {};

   ~PythonQtShell_QSystemSemaphore();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSystemSemaphore : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AccessMode SystemSemaphoreError )
enum AccessMode{
  Open = QSystemSemaphore::Open,   Create = QSystemSemaphore::Create};
enum SystemSemaphoreError{
  NoError = QSystemSemaphore::NoError,   PermissionDenied = QSystemSemaphore::PermissionDenied,   KeyError = QSystemSemaphore::KeyError,   AlreadyExists = QSystemSemaphore::AlreadyExists,   NotFound = QSystemSemaphore::NotFound,   OutOfResources = QSystemSemaphore::OutOfResources,   UnknownError = QSystemSemaphore::UnknownError};
public slots:
QSystemSemaphore* new_QSystemSemaphore();
void delete_QSystemSemaphore(QSystemSemaphore* obj) { delete obj; }
   bool  acquire(QSystemSemaphore* theWrappedObject);
   QSystemSemaphore::SystemSemaphoreError  error(QSystemSemaphore* theWrappedObject) const;
   QString  errorString(QSystemSemaphore* theWrappedObject) const;
   QString  key(QSystemSemaphore* theWrappedObject) const;
};



class PythonQtWrapper_QTemporaryDir : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QTemporaryDir(QTemporaryDir* obj) { delete obj; }
   bool  autoRemove(QTemporaryDir* theWrappedObject) const;
   QString  errorString(QTemporaryDir* theWrappedObject) const;
   QString  filePath(QTemporaryDir* theWrappedObject, const QString&  fileName) const;
   bool  isValid(QTemporaryDir* theWrappedObject) const;
   QString  path(QTemporaryDir* theWrappedObject) const;
   bool  remove(QTemporaryDir* theWrappedObject);
    bool __nonzero__(QTemporaryDir* obj) { return obj->isValid(); }
};



class PythonQtWrapper_QTextBoundaryFinder : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BoundaryReason BoundaryType )
Q_FLAGS(BoundaryReasons )
enum BoundaryReason{
  NotAtBoundary = QTextBoundaryFinder::NotAtBoundary,   BreakOpportunity = QTextBoundaryFinder::BreakOpportunity,   StartOfItem = QTextBoundaryFinder::StartOfItem,   EndOfItem = QTextBoundaryFinder::EndOfItem,   MandatoryBreak = QTextBoundaryFinder::MandatoryBreak,   SoftHyphen = QTextBoundaryFinder::SoftHyphen};
enum BoundaryType{
  Grapheme = QTextBoundaryFinder::Grapheme,   Word = QTextBoundaryFinder::Word,   Sentence = QTextBoundaryFinder::Sentence,   Line = QTextBoundaryFinder::Line};
Q_DECLARE_FLAGS(BoundaryReasons, BoundaryReason)
public slots:
QTextBoundaryFinder* new_QTextBoundaryFinder();
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string);
QTextBoundaryFinder* new_QTextBoundaryFinder(const QTextBoundaryFinder&  other);
void delete_QTextBoundaryFinder(QTextBoundaryFinder* obj) { delete obj; }
   QTextBoundaryFinder::BoundaryReasons  boundaryReasons(QTextBoundaryFinder* theWrappedObject) const;
   bool  isAtBoundary(QTextBoundaryFinder* theWrappedObject) const;
   bool  isValid(QTextBoundaryFinder* theWrappedObject) const;
   QString  string(QTextBoundaryFinder* theWrappedObject) const;
   QTextBoundaryFinder::BoundaryType  type(QTextBoundaryFinder* theWrappedObject) const;
    bool __nonzero__(QTextBoundaryFinder* obj) { return obj->isValid(); }
};



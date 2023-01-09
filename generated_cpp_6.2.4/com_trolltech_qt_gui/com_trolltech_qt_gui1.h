#include <PythonQt.h>
#include <QInputMethodEvent>
#include <QObject>
#include <QPainterPath>
#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qimagewriter.h>
#include <qitemeditorfactory.h>
#include <qitemselectionmodel.h>
#include <qlayoutitem.h>
#include <qlistwidget.h>
#include <qmatrix4x4.h>
#include <qopenglframebufferobject.h>
#include <qpagedpaintdevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainterpath.h>
#include <qpolygon.h>
#include <qprintengine.h>
#include <qregion.h>
#include <qtransform.h>
#include <qvalidator.h>

class PythonQtWrapper_QImageWriter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageWriterError )
enum ImageWriterError{
  UnknownError = QImageWriter::UnknownError,   DeviceError = QImageWriter::DeviceError,   UnsupportedFormatError = QImageWriter::UnsupportedFormatError,   InvalidImageError = QImageWriter::InvalidImageError};
public slots:
void delete_QImageWriter(QImageWriter* obj) { delete obj; }
   bool  canWrite(QImageWriter* theWrappedObject) const;
   QIODevice*  device(QImageWriter* theWrappedObject) const;
   QImageWriter::ImageWriterError  error(QImageWriter* theWrappedObject) const;
   QString  errorString(QImageWriter* theWrappedObject) const;
   QString  fileName(QImageWriter* theWrappedObject) const;
   QByteArray  format(QImageWriter* theWrappedObject) const;
   QList<QByteArray >  static_QImageWriter_imageFormatsForMimeType(const QByteArray&  mimeType);
   bool  optimizedWrite(QImageWriter* theWrappedObject) const;
   bool  progressiveScanWrite(QImageWriter* theWrappedObject) const;
   QByteArray  subType(QImageWriter* theWrappedObject) const;
   QList<QByteArray >  static_QImageWriter_supportedImageFormats();
   QList<QByteArray >  static_QImageWriter_supportedMimeTypes();
   QList<QByteArray >  supportedSubTypes(QImageWriter* theWrappedObject) const;
   bool  supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   bool  write(QImageWriter* theWrappedObject, const QImage&  image);
};



class PythonQtShell_QInputEvent : public QInputEvent
{
public:
    PythonQtShell_QInputEvent(QInputEvent&  arg__1):QInputEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QInputEvent();

virtual QInputEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QInputEvent : public QInputEvent
{ public:
inline QInputEvent&  promoted_operator_assign(QInputEvent&  arg__1) { return ((QInputEvent*)this)->operator=(arg__1); }
inline QInputEvent*  py_q_clone() const { return QInputEvent::clone(); }
};

class PythonQtWrapper_QInputEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QInputEvent(QInputEvent* obj) { delete obj; }
   QInputEvent*  clone(QInputEvent* theWrappedObject) const;
   QInputEvent*  py_q_clone(QInputEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputEvent*)theWrappedObject)->py_q_clone());}
   Qt::KeyboardModifiers  modifiers(QInputEvent* theWrappedObject) const;
   QInputEvent*  operator_assign(QInputEvent* theWrappedObject, QInputEvent&  arg__1);
   quint64  timestamp(QInputEvent* theWrappedObject) const;
};



class PythonQtShell_QInputMethodEvent : public QInputMethodEvent
{
public:
    PythonQtShell_QInputMethodEvent():QInputMethodEvent(),_wrapper(NULL) {};
    PythonQtShell_QInputMethodEvent(QInputMethodEvent&  arg__1):QInputMethodEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QInputMethodEvent(const QString&  preeditText, const QList<QInputMethodEvent::Attribute >&  attributes):QInputMethodEvent(preeditText, attributes),_wrapper(NULL) {};

   ~PythonQtShell_QInputMethodEvent();

virtual QInputMethodEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QInputMethodEvent : public QInputMethodEvent
{ public:
inline QInputMethodEvent&  promoted_operator_assign(QInputMethodEvent&  arg__1) { return ((QInputMethodEvent*)this)->operator=(arg__1); }
inline QInputMethodEvent*  py_q_clone() const { return QInputMethodEvent::clone(); }
};

class PythonQtWrapper_QInputMethodEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AttributeType )
enum AttributeType{
  TextFormat = QInputMethodEvent::TextFormat,   Cursor = QInputMethodEvent::Cursor,   Language = QInputMethodEvent::Language,   Ruby = QInputMethodEvent::Ruby,   Selection = QInputMethodEvent::Selection};
public slots:
QInputMethodEvent* new_QInputMethodEvent();
QInputMethodEvent* new_QInputMethodEvent(const QString&  preeditText, const QList<QInputMethodEvent::Attribute >&  attributes);
void delete_QInputMethodEvent(QInputMethodEvent* obj) { delete obj; }
   const QList<QInputMethodEvent::Attribute >*  attributes(QInputMethodEvent* theWrappedObject) const;
   QInputMethodEvent*  clone(QInputMethodEvent* theWrappedObject) const;
   QInputMethodEvent*  py_q_clone(QInputMethodEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputMethodEvent*)theWrappedObject)->py_q_clone());}
   const QString*  commitString(QInputMethodEvent* theWrappedObject) const;
   QInputMethodEvent*  operator_assign(QInputMethodEvent* theWrappedObject, QInputMethodEvent&  arg__1);
   const QString*  preeditString(QInputMethodEvent* theWrappedObject) const;
};



class PythonQtWrapper_QInputMethodEvent__Attribute : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QInputMethodEvent__Attribute(QInputMethodEvent::Attribute* obj) { delete obj; }
void py_set_type(QInputMethodEvent::Attribute* theWrappedObject, QInputMethodEvent::AttributeType  type){ theWrappedObject->type = type; }
QInputMethodEvent::AttributeType  py_get_type(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->type; }
void py_set_value(QInputMethodEvent::Attribute* theWrappedObject, QVariant  value){ theWrappedObject->value = value; }
QVariant  py_get_value(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->value; }
};



class PythonQtShell_QInputMethodQueryEvent : public QInputMethodQueryEvent
{
public:
    PythonQtShell_QInputMethodQueryEvent(Qt::InputMethodQueries  queries):QInputMethodQueryEvent(queries),_wrapper(NULL) {};
    PythonQtShell_QInputMethodQueryEvent(QInputMethodQueryEvent&  arg__1):QInputMethodQueryEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QInputMethodQueryEvent();

virtual QInputMethodQueryEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QInputMethodQueryEvent : public QInputMethodQueryEvent
{ public:
inline QInputMethodQueryEvent&  promoted_operator_assign(QInputMethodQueryEvent&  arg__1) { return ((QInputMethodQueryEvent*)this)->operator=(arg__1); }
inline QInputMethodQueryEvent*  py_q_clone() const { return QInputMethodQueryEvent::clone(); }
};

class PythonQtWrapper_QInputMethodQueryEvent : public QObject
{ Q_OBJECT
public:
public slots:
QInputMethodQueryEvent* new_QInputMethodQueryEvent(Qt::InputMethodQueries  queries);
void delete_QInputMethodQueryEvent(QInputMethodQueryEvent* obj) { delete obj; }
   QInputMethodQueryEvent*  clone(QInputMethodQueryEvent* theWrappedObject) const;
   QInputMethodQueryEvent*  py_q_clone(QInputMethodQueryEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputMethodQueryEvent*)theWrappedObject)->py_q_clone());}
   QInputMethodQueryEvent*  operator_assign(QInputMethodQueryEvent* theWrappedObject, QInputMethodQueryEvent&  arg__1);
   Qt::InputMethodQueries  queries(QInputMethodQueryEvent* theWrappedObject) const;
   QVariant  value(QInputMethodQueryEvent* theWrappedObject, Qt::InputMethodQuery  query) const;
};



class PythonQtShell_QIntValidator : public QIntValidator
{
public:
    PythonQtShell_QIntValidator(QObject*  parent = nullptr):QIntValidator(parent),_wrapper(NULL) {};

   ~PythonQtShell_QIntValidator();

virtual const QMetaObject*  metaObject() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIntValidator : public QIntValidator
{ public:
inline const QMetaObject*  py_q_metaObject() const { return QIntValidator::metaObject(); }
};

class PythonQtWrapper_QIntValidator : public QObject
{ Q_OBJECT
public:
public slots:
QIntValidator* new_QIntValidator(QObject*  parent = nullptr);
void delete_QIntValidator(QIntValidator* obj) { delete obj; }
   const QMetaObject*  metaObject(QIntValidator* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QIntValidator* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIntValidator*)theWrappedObject)->py_q_metaObject());}
};



class PythonQtShell_QItemEditorCreatorBase : public QItemEditorCreatorBase
{
public:
    PythonQtShell_QItemEditorCreatorBase():QItemEditorCreatorBase(),_wrapper(NULL) {};

   ~PythonQtShell_QItemEditorCreatorBase();

virtual QWidget*  createWidget(QWidget*  parent) const;
virtual QByteArray  valuePropertyName() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QItemEditorCreatorBase : public QItemEditorCreatorBase
{ public:
inline QWidget*  py_q_createWidget(QWidget*  parent) const { return this->createWidget(parent); }
inline QByteArray  py_q_valuePropertyName() const { return this->valuePropertyName(); }
};

class PythonQtWrapper_QItemEditorCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorCreatorBase* new_QItemEditorCreatorBase();
void delete_QItemEditorCreatorBase(QItemEditorCreatorBase* obj) { delete obj; }
   QWidget*  createWidget(QItemEditorCreatorBase* theWrappedObject, QWidget*  parent) const;
   QWidget*  py_q_createWidget(QItemEditorCreatorBase* theWrappedObject, QWidget*  parent) const{  return (((PythonQtPublicPromoter_QItemEditorCreatorBase*)theWrappedObject)->py_q_createWidget(parent));}
   QByteArray  valuePropertyName(QItemEditorCreatorBase* theWrappedObject) const;
   QByteArray  py_q_valuePropertyName(QItemEditorCreatorBase* theWrappedObject) const{  return (((PythonQtPublicPromoter_QItemEditorCreatorBase*)theWrappedObject)->py_q_valuePropertyName());}
};



class PythonQtShell_QItemEditorFactory : public QItemEditorFactory
{
public:
    PythonQtShell_QItemEditorFactory():QItemEditorFactory(),_wrapper(NULL) {};

   ~PythonQtShell_QItemEditorFactory();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QItemEditorFactory : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorFactory* new_QItemEditorFactory();
void delete_QItemEditorFactory(QItemEditorFactory* obj) { delete obj; }
   const QItemEditorFactory*  static_QItemEditorFactory_defaultFactory();
};



class PythonQtWrapper_QItemSelection : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelection* new_QItemSelection(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
void delete_QItemSelection(QItemSelection* obj) { delete obj; }
   bool  contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const;
   QList<QModelIndex >  indexes(QItemSelection* theWrappedObject) const;
};



class PythonQtShell_QKeyEvent : public QKeyEvent
{
public:
    PythonQtShell_QKeyEvent(QKeyEvent&  arg__1):QKeyEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QKeyEvent();

virtual QKeyEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QKeyEvent : public QKeyEvent
{ public:
inline QKeyEvent&  promoted_operator_assign(QKeyEvent&  arg__1) { return ((QKeyEvent*)this)->operator=(arg__1); }
inline QKeyEvent*  py_q_clone() const { return QKeyEvent::clone(); }
};

class PythonQtWrapper_QKeyEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QKeyEvent(QKeyEvent* obj) { delete obj; }
   QKeyEvent*  py_q_clone(QKeyEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QKeyEvent*)theWrappedObject)->py_q_clone());}
   bool  isAutoRepeat(QKeyEvent* theWrappedObject) const;
   bool  matches(QKeyEvent* theWrappedObject, QKeySequence::StandardKey  key) const;
   Qt::KeyboardModifiers  modifiers(QKeyEvent* theWrappedObject) const;
   QKeyEvent*  operator_assign(QKeyEvent* theWrappedObject, QKeyEvent&  arg__1);
   QString  text(QKeyEvent* theWrappedObject) const;
};



class PythonQtShell_QLayoutItem : public QLayoutItem
{
public:
    PythonQtShell_QLayoutItem(Qt::Alignment  alignment = Qt::Alignment()):QLayoutItem(alignment),_wrapper(NULL) {};

   ~PythonQtShell_QLayoutItem();

virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual bool  isEmpty() const;
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QWidget*  widget() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QLayoutItem : public QLayoutItem
{ public:
inline QSizePolicy::ControlTypes  py_q_controlTypes() const { return QLayoutItem::controlTypes(); }
inline Qt::Orientations  py_q_expandingDirections() const { return this->expandingDirections(); }
inline QRect  py_q_geometry() const { return this->geometry(); }
inline bool  py_q_hasHeightForWidth() const { return QLayoutItem::hasHeightForWidth(); }
inline bool  py_q_isEmpty() const { return this->isEmpty(); }
inline QSize  py_q_maximumSize() const { return this->maximumSize(); }
inline QSize  py_q_minimumSize() const { return this->minimumSize(); }
inline QSize  py_q_sizeHint() const { return this->sizeHint(); }
inline QSpacerItem*  py_q_spacerItem() { return QLayoutItem::spacerItem(); }
inline QWidget*  py_q_widget() const { return QLayoutItem::widget(); }
};

class PythonQtWrapper_QLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QLayoutItem* new_QLayoutItem(Qt::Alignment  alignment = Qt::Alignment());
void delete_QLayoutItem(QLayoutItem* obj) { delete obj; }
   Qt::Alignment  alignment(QLayoutItem* theWrappedObject) const;
   QSizePolicy::ControlTypes  controlTypes(QLayoutItem* theWrappedObject) const;
   QSizePolicy::ControlTypes  py_q_controlTypes(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_controlTypes());}
   Qt::Orientations  expandingDirections(QLayoutItem* theWrappedObject) const;
   Qt::Orientations  py_q_expandingDirections(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_expandingDirections());}
   QRect  geometry(QLayoutItem* theWrappedObject) const;
   QRect  py_q_geometry(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_geometry());}
   bool  hasHeightForWidth(QLayoutItem* theWrappedObject) const;
   bool  py_q_hasHeightForWidth(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_hasHeightForWidth());}
   bool  isEmpty(QLayoutItem* theWrappedObject) const;
   bool  py_q_isEmpty(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_isEmpty());}
   QSize  maximumSize(QLayoutItem* theWrappedObject) const;
   QSize  py_q_maximumSize(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_maximumSize());}
   QSize  minimumSize(QLayoutItem* theWrappedObject) const;
   QSize  py_q_minimumSize(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_minimumSize());}
   QSize  sizeHint(QLayoutItem* theWrappedObject) const;
   QSize  py_q_sizeHint(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_sizeHint());}
   QSpacerItem*  spacerItem(QLayoutItem* theWrappedObject);
   QSpacerItem*  py_q_spacerItem(QLayoutItem* theWrappedObject){  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_spacerItem());}
   QWidget*  widget(QLayoutItem* theWrappedObject) const;
   QWidget*  py_q_widget(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_widget());}
    bool __nonzero__(QLayoutItem* obj) { return !obj->isEmpty(); }
};



class PythonQtWrapper_QLinearGradient : public QObject
{ Q_OBJECT
public:
public slots:
QLinearGradient* new_QLinearGradient();
QLinearGradient* new_QLinearGradient(const QPointF&  start, const QPointF&  finalStop);
QLinearGradient* new_QLinearGradient(qreal  xStart, qreal  yStart, qreal  xFinalStop, qreal  yFinalStop);
QLinearGradient* new_QLinearGradient(const QLinearGradient& other) {
QLinearGradient* a = new QLinearGradient();
*((QLinearGradient*)a) = other;
return a; }
void delete_QLinearGradient(QLinearGradient* obj) { delete obj; }
   QPointF  finalStop(QLinearGradient* theWrappedObject) const;
   QPointF  start(QLinearGradient* theWrappedObject) const;
};



class PythonQtPublicPromoter_QListWidgetItem : public QListWidgetItem
{ public:
inline QListWidgetItem*  py_q_clone() const { return QListWidgetItem::clone(); }
};

class PythonQtWrapper_QListWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QListWidgetItem::Type,   UserType = QListWidgetItem::UserType};
public slots:
void delete_QListWidgetItem(QListWidgetItem* obj) { delete obj; }
   QBrush  background(QListWidgetItem* theWrappedObject) const;
   Qt::CheckState  checkState(QListWidgetItem* theWrappedObject) const;
   QListWidgetItem*  clone(QListWidgetItem* theWrappedObject) const;
   QListWidgetItem*  py_q_clone(QListWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->py_q_clone());}
   Qt::ItemFlags  flags(QListWidgetItem* theWrappedObject) const;
   QFont  font(QListWidgetItem* theWrappedObject) const;
   QBrush  foreground(QListWidgetItem* theWrappedObject) const;
   QIcon  icon(QListWidgetItem* theWrappedObject) const;
   bool  isHidden(QListWidgetItem* theWrappedObject) const;
   bool  isSelected(QListWidgetItem* theWrappedObject) const;
   QListWidget*  listWidget(QListWidgetItem* theWrappedObject) const;
   void writeTo(QListWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QListWidgetItem* theWrappedObject, QDataStream&  in);
   QSize  sizeHint(QListWidgetItem* theWrappedObject) const;
   QString  statusTip(QListWidgetItem* theWrappedObject) const;
   QString  text(QListWidgetItem* theWrappedObject) const;
   QString  toolTip(QListWidgetItem* theWrappedObject) const;
   QString  whatsThis(QListWidgetItem* theWrappedObject) const;
};



class PythonQtWrapper_QMatrix4x4 : public QObject
{ Q_OBJECT
public:
public slots:
QMatrix4x4* new_QMatrix4x4();
QMatrix4x4* new_QMatrix4x4(const QTransform&  transform);
QMatrix4x4* new_QMatrix4x4(const QMatrix4x4& other) {
QMatrix4x4* a = new QMatrix4x4();
*((QMatrix4x4*)a) = other;
return a; }
void delete_QMatrix4x4(QMatrix4x4* obj) { delete obj; }
   QMatrix4x4  inverted(QMatrix4x4* theWrappedObject, bool*  invertible = nullptr) const;
   bool  isAffine(QMatrix4x4* theWrappedObject) const;
   bool  isIdentity(QMatrix4x4* theWrappedObject) const;
   QPoint  map(QMatrix4x4* theWrappedObject, const QPoint&  point) const;
   QPointF  map(QMatrix4x4* theWrappedObject, const QPointF&  point) const;
   QVector3D  map(QMatrix4x4* theWrappedObject, const QVector3D&  point) const;
   QVector4D  map(QMatrix4x4* theWrappedObject, const QVector4D&  point) const;
   QRect  mapRect(QMatrix4x4* theWrappedObject, const QRect&  rect) const;
   QRectF  mapRect(QMatrix4x4* theWrappedObject, const QRectF&  rect) const;
   QVector3D  mapVector(QMatrix4x4* theWrappedObject, const QVector3D&  vector) const;
   bool  __ne__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const;
   QMatrix4x4  __mul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QPoint  __mul__(QMatrix4x4* theWrappedObject, const QPoint&  point);
   QPointF  __mul__(QMatrix4x4* theWrappedObject, const QPointF&  point);
   QMatrix4x4*  __imul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4  __add__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QMatrix4x4*  __iadd__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4  __sub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QMatrix4x4*  __isub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   void writeTo(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const;
   void readFrom(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   QTransform  toTransform(QMatrix4x4* theWrappedObject) const;
   QMatrix4x4  transposed(QMatrix4x4* theWrappedObject) const;
    QString py_toString(QMatrix4x4*);
};



class PythonQtShell_QMouseEvent : public QMouseEvent
{
public:
    PythonQtShell_QMouseEvent(QMouseEvent&  arg__1):QMouseEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QMouseEvent();

virtual QMouseEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMouseEvent : public QMouseEvent
{ public:
inline QMouseEvent&  promoted_operator_assign(QMouseEvent&  arg__1) { return ((QMouseEvent*)this)->operator=(arg__1); }
inline QMouseEvent*  py_q_clone() const { return QMouseEvent::clone(); }
};

class PythonQtWrapper_QMouseEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QMouseEvent(QMouseEvent* obj) { delete obj; }
   QMouseEvent*  clone(QMouseEvent* theWrappedObject) const;
   QMouseEvent*  py_q_clone(QMouseEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMouseEvent*)theWrappedObject)->py_q_clone());}
   Qt::MouseEventFlags  flags(QMouseEvent* theWrappedObject) const;
   QPoint  globalPos(QMouseEvent* theWrappedObject) const;
   QPointF  localPos(QMouseEvent* theWrappedObject) const;
   QMouseEvent*  operator_assign(QMouseEvent* theWrappedObject, QMouseEvent&  arg__1);
   QPoint  pos(QMouseEvent* theWrappedObject) const;
   QPointF  screenPos(QMouseEvent* theWrappedObject) const;
   Qt::MouseEventSource  source(QMouseEvent* theWrappedObject) const;
   QPointF  windowPos(QMouseEvent* theWrappedObject) const;
};



class PythonQtShell_QMoveEvent : public QMoveEvent
{
public:
    PythonQtShell_QMoveEvent(QMoveEvent&  arg__1):QMoveEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos):QMoveEvent(pos, oldPos),_wrapper(NULL) {};

   ~PythonQtShell_QMoveEvent();

virtual QMoveEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMoveEvent : public QMoveEvent
{ public:
inline QMoveEvent&  promoted_operator_assign(QMoveEvent&  arg__1) { return ((QMoveEvent*)this)->operator=(arg__1); }
inline QMoveEvent*  py_q_clone() const { return QMoveEvent::clone(); }
};

class PythonQtWrapper_QMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QMoveEvent* new_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos);
void delete_QMoveEvent(QMoveEvent* obj) { delete obj; }
   QMoveEvent*  clone(QMoveEvent* theWrappedObject) const;
   QMoveEvent*  py_q_clone(QMoveEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMoveEvent*)theWrappedObject)->py_q_clone());}
   const QPoint*  oldPos(QMoveEvent* theWrappedObject) const;
   QMoveEvent*  operator_assign(QMoveEvent* theWrappedObject, QMoveEvent&  arg__1);
   const QPoint*  pos(QMoveEvent* theWrappedObject) const;
};



class PythonQtShell_QNativeGestureEvent : public QNativeGestureEvent
{
public:
    PythonQtShell_QNativeGestureEvent(QNativeGestureEvent&  arg__1):QNativeGestureEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QNativeGestureEvent();

virtual QNativeGestureEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QNativeGestureEvent : public QNativeGestureEvent
{ public:
inline QNativeGestureEvent&  promoted_operator_assign(QNativeGestureEvent&  arg__1) { return ((QNativeGestureEvent*)this)->operator=(arg__1); }
inline QNativeGestureEvent*  py_q_clone() const { return QNativeGestureEvent::clone(); }
};

class PythonQtWrapper_QNativeGestureEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QNativeGestureEvent(QNativeGestureEvent* obj) { delete obj; }
   QNativeGestureEvent*  clone(QNativeGestureEvent* theWrappedObject) const;
   QNativeGestureEvent*  py_q_clone(QNativeGestureEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QNativeGestureEvent*)theWrappedObject)->py_q_clone());}
   QPointF  delta(QNativeGestureEvent* theWrappedObject) const;
   Qt::NativeGestureType  gestureType(QNativeGestureEvent* theWrappedObject) const;
   const QPoint  globalPos(QNativeGestureEvent* theWrappedObject) const;
   QPointF  localPos(QNativeGestureEvent* theWrappedObject) const;
   QNativeGestureEvent*  operator_assign(QNativeGestureEvent* theWrappedObject, QNativeGestureEvent&  arg__1);
   const QPoint  pos(QNativeGestureEvent* theWrappedObject) const;
   QPointF  screenPos(QNativeGestureEvent* theWrappedObject) const;
   qreal  value(QNativeGestureEvent* theWrappedObject) const;
   QPointF  windowPos(QNativeGestureEvent* theWrappedObject) const;
};



class PythonQtWrapper_QOpenGLFramebufferObjectFormat : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLFramebufferObjectFormat* new_QOpenGLFramebufferObjectFormat();
QOpenGLFramebufferObjectFormat* new_QOpenGLFramebufferObjectFormat(const QOpenGLFramebufferObjectFormat&  other);
void delete_QOpenGLFramebufferObjectFormat(QOpenGLFramebufferObjectFormat* obj) { delete obj; }
   QOpenGLFramebufferObject::Attachment  attachment(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   GLenum  internalTextureFormat(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   bool  mipmap(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   bool  __ne__(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other) const;
   QOpenGLFramebufferObjectFormat*  operator_assign(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other);
   bool  __eq__(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other) const;
   GLenum  textureTarget(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
};



class PythonQtShell_QPagedPaintDevice : public QPagedPaintDevice
{
public:
    PythonQtShell_QPagedPaintDevice():QPagedPaintDevice(),_wrapper(NULL) {};

   ~PythonQtShell_QPagedPaintDevice();

virtual bool  newPage();
virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual bool  setPageLayout(const QPageLayout&  pageLayout);
virtual bool  setPageMargins(const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Millimeter);
virtual bool  setPageOrientation(QPageLayout::Orientation  orientation);
virtual bool  setPageSize(const QPageSize&  pageSize);
virtual QPainter*  sharedPainter() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPagedPaintDevice : public QPagedPaintDevice
{ public:
inline bool  py_q_newPage() { return this->newPage(); }
inline bool  py_q_setPageLayout(const QPageLayout&  pageLayout) { return QPagedPaintDevice::setPageLayout(pageLayout); }
inline bool  py_q_setPageMargins(const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Millimeter) { return QPagedPaintDevice::setPageMargins(margins, units); }
inline bool  py_q_setPageOrientation(QPageLayout::Orientation  orientation) { return QPagedPaintDevice::setPageOrientation(orientation); }
inline bool  py_q_setPageSize(const QPageSize&  pageSize) { return QPagedPaintDevice::setPageSize(pageSize); }
};

class PythonQtWrapper_QPagedPaintDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PdfVersion )
enum PdfVersion{
  PdfVersion_1_4 = QPagedPaintDevice::PdfVersion_1_4,   PdfVersion_A1b = QPagedPaintDevice::PdfVersion_A1b,   PdfVersion_1_6 = QPagedPaintDevice::PdfVersion_1_6};
public slots:
QPagedPaintDevice* new_QPagedPaintDevice();
void delete_QPagedPaintDevice(QPagedPaintDevice* obj) { delete obj; }
   bool  newPage(QPagedPaintDevice* theWrappedObject);
   bool  py_q_newPage(QPagedPaintDevice* theWrappedObject){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_newPage());}
   QPageLayout  pageLayout(QPagedPaintDevice* theWrappedObject) const;
   bool  setPageLayout(QPagedPaintDevice* theWrappedObject, const QPageLayout&  pageLayout);
   bool  py_q_setPageLayout(QPagedPaintDevice* theWrappedObject, const QPageLayout&  pageLayout){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageLayout(pageLayout));}
   bool  setPageMargins(QPagedPaintDevice* theWrappedObject, const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Millimeter);
   bool  py_q_setPageMargins(QPagedPaintDevice* theWrappedObject, const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Millimeter){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageMargins(margins, units));}
   bool  setPageOrientation(QPagedPaintDevice* theWrappedObject, QPageLayout::Orientation  orientation);
   bool  py_q_setPageOrientation(QPagedPaintDevice* theWrappedObject, QPageLayout::Orientation  orientation){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageOrientation(orientation));}
   bool  setPageSize(QPagedPaintDevice* theWrappedObject, const QPageSize&  pageSize);
   bool  py_q_setPageSize(QPagedPaintDevice* theWrappedObject, const QPageSize&  pageSize){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageSize(pageSize));}
};



class PythonQtShell_QPaintDevice : public QPaintDevice
{
public:
    PythonQtShell_QPaintDevice():QPaintDevice(),_wrapper(NULL) {};

   ~PythonQtShell_QPaintDevice();

virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual QPainter*  sharedPainter() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPaintDevice : public QPaintDevice
{ public:
inline QPaintDevice*  promoted_redirected(QPoint*  offset) const { return ((QPaintDevice*)this)->redirected(offset); }
inline QPainter*  promoted_sharedPainter() const { return ((QPaintDevice*)this)->sharedPainter(); }
inline QPaintEngine*  py_q_paintEngine() const { return this->paintEngine(); }
inline QPaintDevice*  py_q_redirected(QPoint*  offset) const { return QPaintDevice::redirected(offset); }
inline QPainter*  py_q_sharedPainter() const { return QPaintDevice::sharedPainter(); }
};

class PythonQtWrapper_QPaintDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PaintDeviceMetric )
enum PaintDeviceMetric{
  PdmWidth = QPaintDevice::PdmWidth,   PdmHeight = QPaintDevice::PdmHeight,   PdmWidthMM = QPaintDevice::PdmWidthMM,   PdmHeightMM = QPaintDevice::PdmHeightMM,   PdmNumColors = QPaintDevice::PdmNumColors,   PdmDepth = QPaintDevice::PdmDepth,   PdmDpiX = QPaintDevice::PdmDpiX,   PdmDpiY = QPaintDevice::PdmDpiY,   PdmPhysicalDpiX = QPaintDevice::PdmPhysicalDpiX,   PdmPhysicalDpiY = QPaintDevice::PdmPhysicalDpiY,   PdmDevicePixelRatio = QPaintDevice::PdmDevicePixelRatio,   PdmDevicePixelRatioScaled = QPaintDevice::PdmDevicePixelRatioScaled};
public slots:
QPaintDevice* new_QPaintDevice();
void delete_QPaintDevice(QPaintDevice* obj) { delete obj; }
   qreal  devicePixelRatio(QPaintDevice* theWrappedObject) const;
   qreal  devicePixelRatioF(QPaintDevice* theWrappedObject) const;
   qreal  static_QPaintDevice_devicePixelRatioFScale();
   QPaintEngine*  paintEngine(QPaintDevice* theWrappedObject) const;
   QPaintEngine*  py_q_paintEngine(QPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_paintEngine());}
   bool  paintingActive(QPaintDevice* theWrappedObject) const;
   QPaintDevice*  redirected(QPaintDevice* theWrappedObject, QPoint*  offset) const;
   QPaintDevice*  py_q_redirected(QPaintDevice* theWrappedObject, QPoint*  offset) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_redirected(offset));}
   QPainter*  sharedPainter(QPaintDevice* theWrappedObject) const;
   QPainter*  py_q_sharedPainter(QPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_sharedPainter());}
};



class PythonQtShell_QPaintEngineState : public QPaintEngineState
{
public:
    PythonQtShell_QPaintEngineState():QPaintEngineState(),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEngineState();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPaintEngineState : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEngineState* new_QPaintEngineState();
void delete_QPaintEngineState(QPaintEngineState* obj) { delete obj; }
   QBrush  backgroundBrush(QPaintEngineState* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPaintEngineState* theWrappedObject) const;
   QBrush  brush(QPaintEngineState* theWrappedObject) const;
   bool  brushNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPointF  brushOrigin(QPaintEngineState* theWrappedObject) const;
   Qt::ClipOperation  clipOperation(QPaintEngineState* theWrappedObject) const;
   QPainterPath  clipPath(QPaintEngineState* theWrappedObject) const;
   QRegion  clipRegion(QPaintEngineState* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPaintEngineState* theWrappedObject) const;
   QFont  font(QPaintEngineState* theWrappedObject) const;
   bool  isClipEnabled(QPaintEngineState* theWrappedObject) const;
   qreal  opacity(QPaintEngineState* theWrappedObject) const;
   QPainter*  painter(QPaintEngineState* theWrappedObject) const;
   QPen  pen(QPaintEngineState* theWrappedObject) const;
   bool  penNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPainter::RenderHints  renderHints(QPaintEngineState* theWrappedObject) const;
   QPaintEngine::DirtyFlags  state(QPaintEngineState* theWrappedObject) const;
   QTransform  transform(QPaintEngineState* theWrappedObject) const;
};



class PythonQtShell_QPaintEvent : public QPaintEvent
{
public:
    PythonQtShell_QPaintEvent(QPaintEvent&  arg__1):QPaintEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPaintEvent(const QRect&  paintRect):QPaintEvent(paintRect),_wrapper(NULL) {};
    PythonQtShell_QPaintEvent(const QRegion&  paintRegion):QPaintEvent(paintRegion),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEvent();

virtual QPaintEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPaintEvent : public QPaintEvent
{ public:
inline QPaintEvent&  promoted_operator_assign(QPaintEvent&  arg__1) { return ((QPaintEvent*)this)->operator=(arg__1); }
inline QPaintEvent*  py_q_clone() const { return QPaintEvent::clone(); }
};

class PythonQtWrapper_QPaintEvent : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEvent* new_QPaintEvent(const QRect&  paintRect);
QPaintEvent* new_QPaintEvent(const QRegion&  paintRegion);
void delete_QPaintEvent(QPaintEvent* obj) { delete obj; }
   QPaintEvent*  clone(QPaintEvent* theWrappedObject) const;
   QPaintEvent*  py_q_clone(QPaintEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintEvent*)theWrappedObject)->py_q_clone());}
   QPaintEvent*  operator_assign(QPaintEvent* theWrappedObject, QPaintEvent&  arg__1);
   const QRect*  rect(QPaintEvent* theWrappedObject) const;
   const QRegion*  region(QPaintEvent* theWrappedObject) const;
};



class PythonQtWrapper_QPainterPath : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ElementType )
enum ElementType{
  MoveToElement = QPainterPath::MoveToElement,   LineToElement = QPainterPath::LineToElement,   CurveToElement = QPainterPath::CurveToElement,   CurveToDataElement = QPainterPath::CurveToDataElement};
public slots:
QPainterPath* new_QPainterPath(const QPainterPath&  other);
QPainterPath* new_QPainterPath(const QPointF&  startPoint);
void delete_QPainterPath(QPainterPath* obj) { delete obj; }
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QTransform&  m);
   void writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   QPainterPath  translated(QPainterPath* theWrappedObject, const QPointF&  offset) const;
    QString py_toString(QPainterPath*);
};



class PythonQtShell_QPainterPath__Element : public QPainterPath::Element
{
public:
    PythonQtShell_QPainterPath__Element():QPainterPath::Element(),_wrapper(NULL) {};

   ~PythonQtShell_QPainterPath__Element();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPainterPath__Element : public QObject
{ Q_OBJECT
public:
public slots:
QPainterPath::Element* new_QPainterPath__Element();
QPainterPath::Element* new_QPainterPath__Element(const QPainterPath::Element& other) {
PythonQtShell_QPainterPath__Element* a = new PythonQtShell_QPainterPath__Element();
*((QPainterPath::Element*)a) = other;
return a; }
void delete_QPainterPath__Element(QPainterPath::Element* obj) { delete obj; }
   bool  isCurveTo(QPainterPath::Element* theWrappedObject) const;
   bool  isLineTo(QPainterPath::Element* theWrappedObject) const;
   bool  isMoveTo(QPainterPath::Element* theWrappedObject) const;
   QPointF  operator_cast_QPointF(QPainterPath::Element* theWrappedObject) const;
   bool  __ne__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const;
   bool  __eq__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const;
void py_set_type(QPainterPath::Element* theWrappedObject, QPainterPath::ElementType  type){ theWrappedObject->type = type; }
QPainterPath::ElementType  py_get_type(QPainterPath::Element* theWrappedObject){ return theWrappedObject->type; }
void py_set_x(QPainterPath::Element* theWrappedObject, qreal  x){ theWrappedObject->x = x; }
qreal  py_get_x(QPainterPath::Element* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QPainterPath::Element* theWrappedObject, qreal  y){ theWrappedObject->y = y; }
qreal  py_get_y(QPainterPath::Element* theWrappedObject){ return theWrappedObject->y; }
};



class PythonQtShell_QPlatformSurfaceEvent : public QPlatformSurfaceEvent
{
public:
    PythonQtShell_QPlatformSurfaceEvent(QPlatformSurfaceEvent&  arg__1):QPlatformSurfaceEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType  surfaceEventType):QPlatformSurfaceEvent(surfaceEventType),_wrapper(NULL) {};

   ~PythonQtShell_QPlatformSurfaceEvent();

virtual QPlatformSurfaceEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPlatformSurfaceEvent : public QPlatformSurfaceEvent
{ public:
inline QPlatformSurfaceEvent&  promoted_operator_assign(QPlatformSurfaceEvent&  arg__1) { return ((QPlatformSurfaceEvent*)this)->operator=(arg__1); }
inline QPlatformSurfaceEvent*  py_q_clone() const { return QPlatformSurfaceEvent::clone(); }
};

class PythonQtWrapper_QPlatformSurfaceEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SurfaceEventType )
enum SurfaceEventType{
  SurfaceCreated = QPlatformSurfaceEvent::SurfaceCreated,   SurfaceAboutToBeDestroyed = QPlatformSurfaceEvent::SurfaceAboutToBeDestroyed};
public slots:
QPlatformSurfaceEvent* new_QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType  surfaceEventType);
void delete_QPlatformSurfaceEvent(QPlatformSurfaceEvent* obj) { delete obj; }
   QPlatformSurfaceEvent*  clone(QPlatformSurfaceEvent* theWrappedObject) const;
   QPlatformSurfaceEvent*  py_q_clone(QPlatformSurfaceEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPlatformSurfaceEvent*)theWrappedObject)->py_q_clone());}
   QPlatformSurfaceEvent*  operator_assign(QPlatformSurfaceEvent* theWrappedObject, QPlatformSurfaceEvent&  arg__1);
   QPlatformSurfaceEvent::SurfaceEventType  surfaceEventType(QPlatformSurfaceEvent* theWrappedObject) const;
};



class PythonQtWrapper_QPolygonF : public QObject
{ Q_OBJECT
public:
public slots:
QPolygonF* new_QPolygonF(const QList<QPointF >&  v);
QPolygonF* new_QPolygonF(const QPolygon&  a);
QPolygonF* new_QPolygonF(const QRectF&  r);
void delete_QPolygonF(QPolygonF* obj) { delete obj; }
   QRectF  boundingRect(QPolygonF* theWrappedObject) const;
   bool  containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const;
   QPolygonF  intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   bool  intersects(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   bool  isClosed(QPolygonF* theWrappedObject) const;
   QPolygonF  __mul__(QPolygonF* theWrappedObject, const QTransform&  m);
   void writeTo(QPolygonF* theWrappedObject, QDataStream&  stream);
   void readFrom(QPolygonF* theWrappedObject, QDataStream&  stream);
   QPolygonF  subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   QPolygon  toPolygon(QPolygonF* theWrappedObject) const;
   QPolygonF  translated(QPolygonF* theWrappedObject, const QPointF&  offset) const;
   QPolygonF  translated(QPolygonF* theWrappedObject, qreal  dx, qreal  dy) const;
   QPolygonF  united(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
    QString py_toString(QPolygonF*);
};



class PythonQtShell_QPrintEngine : public QPrintEngine
{
public:
    PythonQtShell_QPrintEngine():QPrintEngine(),_wrapper(NULL) {};

   ~PythonQtShell_QPrintEngine();

virtual bool  abort();
virtual bool  newPage();
virtual QPrinter::PrinterState  printerState() const;
virtual QVariant  property(QPrintEngine::PrintEnginePropertyKey  key) const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPrintEngine : public QPrintEngine
{ public:
inline bool  py_q_abort() { return this->abort(); }
inline bool  py_q_newPage() { return this->newPage(); }
inline QPrinter::PrinterState  py_q_printerState() const { return this->printerState(); }
inline QVariant  py_q_property(QPrintEngine::PrintEnginePropertyKey  key) const { return this->property(key); }
};

class PythonQtWrapper_QPrintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PrintEnginePropertyKey )
enum PrintEnginePropertyKey{
  PPK_CollateCopies = QPrintEngine::PPK_CollateCopies,   PPK_ColorMode = QPrintEngine::PPK_ColorMode,   PPK_Creator = QPrintEngine::PPK_Creator,   PPK_DocumentName = QPrintEngine::PPK_DocumentName,   PPK_FullPage = QPrintEngine::PPK_FullPage,   PPK_NumberOfCopies = QPrintEngine::PPK_NumberOfCopies,   PPK_Orientation = QPrintEngine::PPK_Orientation,   PPK_OutputFileName = QPrintEngine::PPK_OutputFileName,   PPK_PageOrder = QPrintEngine::PPK_PageOrder,   PPK_PageRect = QPrintEngine::PPK_PageRect,   PPK_PageSize = QPrintEngine::PPK_PageSize,   PPK_PaperRect = QPrintEngine::PPK_PaperRect,   PPK_PaperSource = QPrintEngine::PPK_PaperSource,   PPK_PrinterName = QPrintEngine::PPK_PrinterName,   PPK_PrinterProgram = QPrintEngine::PPK_PrinterProgram,   PPK_Resolution = QPrintEngine::PPK_Resolution,   PPK_SelectionOption = QPrintEngine::PPK_SelectionOption,   PPK_SupportedResolutions = QPrintEngine::PPK_SupportedResolutions,   PPK_WindowsPageSize = QPrintEngine::PPK_WindowsPageSize,   PPK_FontEmbedding = QPrintEngine::PPK_FontEmbedding,   PPK_Duplex = QPrintEngine::PPK_Duplex,   PPK_PaperSources = QPrintEngine::PPK_PaperSources,   PPK_CustomPaperSize = QPrintEngine::PPK_CustomPaperSize,   PPK_PageMargins = QPrintEngine::PPK_PageMargins,   PPK_CopyCount = QPrintEngine::PPK_CopyCount,   PPK_SupportsMultipleCopies = QPrintEngine::PPK_SupportsMultipleCopies,   PPK_PaperName = QPrintEngine::PPK_PaperName,   PPK_QPageSize = QPrintEngine::PPK_QPageSize,   PPK_QPageMargins = QPrintEngine::PPK_QPageMargins,   PPK_QPageLayout = QPrintEngine::PPK_QPageLayout,   PPK_PaperSize = QPrintEngine::PPK_PaperSize,   PPK_CustomBase = QPrintEngine::PPK_CustomBase};
public slots:
QPrintEngine* new_QPrintEngine();
void delete_QPrintEngine(QPrintEngine* obj) { delete obj; }
   bool  abort(QPrintEngine* theWrappedObject);
   bool  py_q_abort(QPrintEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->py_q_abort());}
   bool  newPage(QPrintEngine* theWrappedObject);
   bool  py_q_newPage(QPrintEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->py_q_newPage());}
   QPrinter::PrinterState  printerState(QPrintEngine* theWrappedObject) const;
   QPrinter::PrinterState  py_q_printerState(QPrintEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->py_q_printerState());}
   QVariant  property(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key) const;
   QVariant  py_q_property(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key) const{  return (((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->py_q_property(key));}
};



class PythonQtWrapper_QRadialGradient : public QObject
{ Q_OBJECT
public:
public slots:
QRadialGradient* new_QRadialGradient();
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  centerRadius, const QPointF&  focalPoint, qreal  focalRadius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius, const QPointF&  focalPoint);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  centerRadius, qreal  fx, qreal  fy, qreal  focalRadius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius, qreal  fx, qreal  fy);
QRadialGradient* new_QRadialGradient(const QRadialGradient& other) {
QRadialGradient* a = new QRadialGradient();
*((QRadialGradient*)a) = other;
return a; }
void delete_QRadialGradient(QRadialGradient* obj) { delete obj; }
   QPointF  center(QRadialGradient* theWrappedObject) const;
   qreal  centerRadius(QRadialGradient* theWrappedObject) const;
   QPointF  focalPoint(QRadialGradient* theWrappedObject) const;
   qreal  focalRadius(QRadialGradient* theWrappedObject) const;
   qreal  radius(QRadialGradient* theWrappedObject) const;
};



class PythonQtShell_QResizeEvent : public QResizeEvent
{
public:
    PythonQtShell_QResizeEvent(QResizeEvent&  arg__1):QResizeEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QResizeEvent(const QSize&  size, const QSize&  oldSize):QResizeEvent(size, oldSize),_wrapper(NULL) {};

   ~PythonQtShell_QResizeEvent();

virtual QResizeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QResizeEvent : public QResizeEvent
{ public:
inline QResizeEvent&  promoted_operator_assign(QResizeEvent&  arg__1) { return ((QResizeEvent*)this)->operator=(arg__1); }
inline QResizeEvent*  py_q_clone() const { return QResizeEvent::clone(); }
};

class PythonQtWrapper_QResizeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QResizeEvent* new_QResizeEvent(const QSize&  size, const QSize&  oldSize);
void delete_QResizeEvent(QResizeEvent* obj) { delete obj; }
   QResizeEvent*  clone(QResizeEvent* theWrappedObject) const;
   QResizeEvent*  py_q_clone(QResizeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QResizeEvent*)theWrappedObject)->py_q_clone());}
   const QSize*  oldSize(QResizeEvent* theWrappedObject) const;
   QResizeEvent*  operator_assign(QResizeEvent* theWrappedObject, QResizeEvent&  arg__1);
   const QSize*  size(QResizeEvent* theWrappedObject) const;
};



class PythonQtShell_QScreenOrientationChangeEvent : public QScreenOrientationChangeEvent
{
public:
    PythonQtShell_QScreenOrientationChangeEvent(QScreenOrientationChangeEvent&  arg__1):QScreenOrientationChangeEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QScreenOrientationChangeEvent();

virtual QScreenOrientationChangeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QScreenOrientationChangeEvent : public QScreenOrientationChangeEvent
{ public:
inline QScreenOrientationChangeEvent&  promoted_operator_assign(QScreenOrientationChangeEvent&  arg__1) { return ((QScreenOrientationChangeEvent*)this)->operator=(arg__1); }
inline QScreenOrientationChangeEvent*  py_q_clone() const { return QScreenOrientationChangeEvent::clone(); }
};

class PythonQtWrapper_QScreenOrientationChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QScreenOrientationChangeEvent(QScreenOrientationChangeEvent* obj) { delete obj; }
   QScreenOrientationChangeEvent*  clone(QScreenOrientationChangeEvent* theWrappedObject) const;
   QScreenOrientationChangeEvent*  py_q_clone(QScreenOrientationChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QScreenOrientationChangeEvent*)theWrappedObject)->py_q_clone());}
   QScreenOrientationChangeEvent*  operator_assign(QScreenOrientationChangeEvent* theWrappedObject, QScreenOrientationChangeEvent&  arg__1);
   Qt::ScreenOrientation  orientation(QScreenOrientationChangeEvent* theWrappedObject) const;
};



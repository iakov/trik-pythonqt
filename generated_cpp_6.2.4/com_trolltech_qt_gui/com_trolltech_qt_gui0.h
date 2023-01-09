#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QObject>
#include <QPair>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QTextCursor>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qaccessible.h>
#include <qbackingstore.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qdesktopservices.h>
#include <qevent.h>
#include <qfontinfo.h>
#include <qgesture.h>
#include <qgesturerecognizer.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qiconengine.h>
#include <qimageiohandler.h>
#include <qimagereader.h>
#include <qpaintdevice.h>
#include <qpainterpath.h>
#include <qregion.h>
#include <qtransform.h>
#include <qurl.h>

class PythonQtShell_QAbstractTableModel : public QAbstractTableModel
{
public:
    PythonQtShell_QAbstractTableModel(QObject*  parent = nullptr):QAbstractTableModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractTableModel();

virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual const QMetaObject*  metaObject() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractTableModel : public QAbstractTableModel
{ public:
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractTableModel::flags(index); }
inline const QMetaObject*  py_q_metaObject() const { return QAbstractTableModel::metaObject(); }
};

class PythonQtWrapper_QAbstractTableModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTableModel* new_QAbstractTableModel(QObject*  parent = nullptr);
void delete_QAbstractTableModel(QAbstractTableModel* obj) { delete obj; }
   Qt::ItemFlags  flags(QAbstractTableModel* theWrappedObject, const QModelIndex&  index) const;
   Qt::ItemFlags  py_q_flags(QAbstractTableModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_flags(index));}
   const QMetaObject*  metaObject(QAbstractTableModel* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QAbstractTableModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_metaObject());}
};



class PythonQtShell_QAccessibleEvent : public QAccessibleEvent
{
public:
    PythonQtShell_QAccessibleEvent(QObject*  obj, QAccessible::Event  typ):QAccessibleEvent(obj, typ),_wrapper(NULL) {};

   ~PythonQtShell_QAccessibleEvent();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAccessibleEvent : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleEvent* new_QAccessibleEvent(QObject*  obj, QAccessible::Event  typ);
void delete_QAccessibleEvent(QAccessibleEvent* obj) { delete obj; }
   QObject*  object(QAccessibleEvent* theWrappedObject) const;
   QAccessible::Event  type(QAccessibleEvent* theWrappedObject) const;
    QString py_toString(QAccessibleEvent*);
};



class PythonQtShell_QActionEvent : public QActionEvent
{
public:
    PythonQtShell_QActionEvent(QActionEvent&  arg__1):QActionEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QActionEvent();

virtual QActionEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QActionEvent : public QActionEvent
{ public:
inline QActionEvent&  promoted_operator_assign(QActionEvent&  arg__1) { return ((QActionEvent*)this)->operator=(arg__1); }
inline QActionEvent*  py_q_clone() const { return QActionEvent::clone(); }
};

class PythonQtWrapper_QActionEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QActionEvent(QActionEvent* obj) { delete obj; }
   QAction*  action(QActionEvent* theWrappedObject) const;
   QAction*  before(QActionEvent* theWrappedObject) const;
   QActionEvent*  clone(QActionEvent* theWrappedObject) const;
   QActionEvent*  py_q_clone(QActionEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QActionEvent*)theWrappedObject)->py_q_clone());}
   QActionEvent*  operator_assign(QActionEvent* theWrappedObject, QActionEvent&  arg__1);
};



class PythonQtWrapper_QBackingStore : public QObject
{ Q_OBJECT
public:
public slots:
QBackingStore* new_QBackingStore(QWindow*  window);
void delete_QBackingStore(QBackingStore* obj) { delete obj; }
   bool  hasStaticContents(QBackingStore* theWrappedObject) const;
   QPaintDevice*  paintDevice(QBackingStore* theWrappedObject);
   QSize  size(QBackingStore* theWrappedObject) const;
   QRegion  staticContents(QBackingStore* theWrappedObject) const;
   QWindow*  window(QBackingStore* theWrappedObject) const;
};



class PythonQtShell_QCloseEvent : public QCloseEvent
{
public:
    PythonQtShell_QCloseEvent():QCloseEvent(),_wrapper(NULL) {};
    PythonQtShell_QCloseEvent(QCloseEvent&  arg__1):QCloseEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QCloseEvent();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QCloseEvent : public QCloseEvent
{ public:
inline QCloseEvent&  promoted_operator_assign(QCloseEvent&  arg__1) { return ((QCloseEvent*)this)->operator=(arg__1); }
};

class PythonQtWrapper_QCloseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QCloseEvent* new_QCloseEvent();
void delete_QCloseEvent(QCloseEvent* obj) { delete obj; }
   QCloseEvent*  operator_assign(QCloseEvent* theWrappedObject, QCloseEvent&  arg__1);
};



class PythonQtWrapper_QConicalGradient : public QObject
{ Q_OBJECT
public:
public slots:
QConicalGradient* new_QConicalGradient();
QConicalGradient* new_QConicalGradient(const QPointF&  center, qreal  startAngle);
QConicalGradient* new_QConicalGradient(qreal  cx, qreal  cy, qreal  startAngle);
QConicalGradient* new_QConicalGradient(const QConicalGradient& other) {
QConicalGradient* a = new QConicalGradient();
*((QConicalGradient*)a) = other;
return a; }
void delete_QConicalGradient(QConicalGradient* obj) { delete obj; }
   qreal  angle(QConicalGradient* theWrappedObject) const;
   QPointF  center(QConicalGradient* theWrappedObject) const;
};



class PythonQtShell_QContextMenuEvent : public QContextMenuEvent
{
public:
    PythonQtShell_QContextMenuEvent(QContextMenuEvent&  arg__1):QContextMenuEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos):QContextMenuEvent(reason, pos),_wrapper(NULL) {};
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QContextMenuEvent(reason, pos, globalPos, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QContextMenuEvent();

virtual QContextMenuEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QContextMenuEvent : public QContextMenuEvent
{ public:
inline QContextMenuEvent&  promoted_operator_assign(QContextMenuEvent&  arg__1) { return ((QContextMenuEvent*)this)->operator=(arg__1); }
inline QContextMenuEvent*  py_q_clone() const { return QContextMenuEvent::clone(); }
};

class PythonQtWrapper_QContextMenuEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Reason )
enum Reason{
  Mouse = QContextMenuEvent::Mouse,   Keyboard = QContextMenuEvent::Keyboard,   Other = QContextMenuEvent::Other};
public slots:
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos);
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
void delete_QContextMenuEvent(QContextMenuEvent* obj) { delete obj; }
   QContextMenuEvent*  py_q_clone(QContextMenuEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QContextMenuEvent*)theWrappedObject)->py_q_clone());}
   const QPoint*  globalPos(QContextMenuEvent* theWrappedObject) const;
   QContextMenuEvent*  operator_assign(QContextMenuEvent* theWrappedObject, QContextMenuEvent&  arg__1);
   const QPoint*  pos(QContextMenuEvent* theWrappedObject) const;
   QContextMenuEvent::Reason  reason(QContextMenuEvent* theWrappedObject) const;
};



class PythonQtShell_QDateEdit : public QDateEdit
{
public:
    PythonQtShell_QDateEdit(QDate  date, QWidget*  parent = nullptr):QDateEdit(date, parent),_wrapper(NULL) {};
    PythonQtShell_QDateEdit(QWidget*  parent = nullptr):QDateEdit(parent),_wrapper(NULL) {};

   ~PythonQtShell_QDateEdit();

virtual const QMetaObject*  metaObject() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDateEdit : public QDateEdit
{ public:
inline const QMetaObject*  py_q_metaObject() const { return QDateEdit::metaObject(); }
};

class PythonQtWrapper_QDateEdit : public QObject
{ Q_OBJECT
public:
public slots:
QDateEdit* new_QDateEdit(QDate  date, QWidget*  parent = nullptr);
QDateEdit* new_QDateEdit(QWidget*  parent = nullptr);
void delete_QDateEdit(QDateEdit* obj) { delete obj; }
   const QMetaObject*  metaObject(QDateEdit* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QDateEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDateEdit*)theWrappedObject)->py_q_metaObject());}
};



class PythonQtShell_QDesktopServices : public QDesktopServices
{
public:
    PythonQtShell_QDesktopServices():QDesktopServices(),_wrapper(NULL) {};

   ~PythonQtShell_QDesktopServices();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QDesktopServices : public QObject
{ Q_OBJECT
public:
public slots:
QDesktopServices* new_QDesktopServices();
void delete_QDesktopServices(QDesktopServices* obj) { delete obj; }
   bool  static_QDesktopServices_openUrl(const QUrl&  url);
};



class PythonQtShell_QDragEnterEvent : public QDragEnterEvent
{
public:
    PythonQtShell_QDragEnterEvent(QDragEnterEvent&  arg__1):QDragEnterEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QDragEnterEvent(pos, actions, data, buttons, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QDragEnterEvent();

virtual QDragMoveEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDragEnterEvent : public QDragEnterEvent
{ public:
inline QDragEnterEvent&  promoted_operator_assign(QDragEnterEvent&  arg__1) { return ((QDragEnterEvent*)this)->operator=(arg__1); }
};

class PythonQtWrapper_QDragEnterEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragEnterEvent* new_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
void delete_QDragEnterEvent(QDragEnterEvent* obj) { delete obj; }
   QDragEnterEvent*  operator_assign(QDragEnterEvent* theWrappedObject, QDragEnterEvent&  arg__1);
};



class PythonQtShell_QDragLeaveEvent : public QDragLeaveEvent
{
public:
    PythonQtShell_QDragLeaveEvent():QDragLeaveEvent(),_wrapper(NULL) {};
    PythonQtShell_QDragLeaveEvent(QDragLeaveEvent&  arg__1):QDragLeaveEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QDragLeaveEvent();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDragLeaveEvent : public QDragLeaveEvent
{ public:
inline QDragLeaveEvent&  promoted_operator_assign(QDragLeaveEvent&  arg__1) { return ((QDragLeaveEvent*)this)->operator=(arg__1); }
};

class PythonQtWrapper_QDragLeaveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragLeaveEvent* new_QDragLeaveEvent();
void delete_QDragLeaveEvent(QDragLeaveEvent* obj) { delete obj; }
   QDragLeaveEvent*  operator_assign(QDragLeaveEvent* theWrappedObject, QDragLeaveEvent&  arg__1);
};



class PythonQtShell_QDragMoveEvent : public QDragMoveEvent
{
public:
    PythonQtShell_QDragMoveEvent(QDragMoveEvent&  arg__1):QDragMoveEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove):QDragMoveEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};

   ~PythonQtShell_QDragMoveEvent();

virtual QDragMoveEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDragMoveEvent : public QDragMoveEvent
{ public:
inline QDragMoveEvent&  promoted_operator_assign(QDragMoveEvent&  arg__1) { return ((QDragMoveEvent*)this)->operator=(arg__1); }
inline QDragMoveEvent*  py_q_clone() const { return QDragMoveEvent::clone(); }
};

class PythonQtWrapper_QDragMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragMoveEvent* new_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove);
void delete_QDragMoveEvent(QDragMoveEvent* obj) { delete obj; }
   QRect  answerRect(QDragMoveEvent* theWrappedObject) const;
   QDragMoveEvent*  py_q_clone(QDragMoveEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDragMoveEvent*)theWrappedObject)->py_q_clone());}
   QDragMoveEvent*  operator_assign(QDragMoveEvent* theWrappedObject, QDragMoveEvent&  arg__1);
};



class PythonQtShell_QDropEvent : public QDropEvent
{
public:
    PythonQtShell_QDropEvent(QDropEvent&  arg__1):QDropEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop):QDropEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};

   ~PythonQtShell_QDropEvent();

virtual QDropEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDropEvent : public QDropEvent
{ public:
inline QDropEvent&  promoted_operator_assign(QDropEvent&  arg__1) { return ((QDropEvent*)this)->operator=(arg__1); }
inline QDropEvent*  py_q_clone() const { return QDropEvent::clone(); }
};

class PythonQtWrapper_QDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDropEvent* new_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop);
void delete_QDropEvent(QDropEvent* obj) { delete obj; }
   Qt::MouseButtons  buttons(QDropEvent* theWrappedObject) const;
   QDropEvent*  clone(QDropEvent* theWrappedObject) const;
   QDropEvent*  py_q_clone(QDropEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDropEvent*)theWrappedObject)->py_q_clone());}
   Qt::DropAction  dropAction(QDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  keyboardModifiers(QDropEvent* theWrappedObject) const;
   const QMimeData*  mimeData(QDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QDropEvent* theWrappedObject) const;
   Qt::MouseButtons  mouseButtons(QDropEvent* theWrappedObject) const;
   QDropEvent*  operator_assign(QDropEvent* theWrappedObject, QDropEvent&  arg__1);
   QPoint  pos(QDropEvent* theWrappedObject) const;
   QPointF  posF(QDropEvent* theWrappedObject) const;
   QPointF  position(QDropEvent* theWrappedObject) const;
   Qt::DropActions  possibleActions(QDropEvent* theWrappedObject) const;
   Qt::DropAction  proposedAction(QDropEvent* theWrappedObject) const;
   QObject*  source(QDropEvent* theWrappedObject) const;
};



class PythonQtShell_QEnterEvent : public QEnterEvent
{
public:
    PythonQtShell_QEnterEvent(QEnterEvent&  arg__1):QEnterEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QEnterEvent();

virtual QEnterEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QEnterEvent : public QEnterEvent
{ public:
inline QEnterEvent&  promoted_operator_assign(QEnterEvent&  arg__1) { return ((QEnterEvent*)this)->operator=(arg__1); }
inline QEnterEvent*  py_q_clone() const { return QEnterEvent::clone(); }
};

class PythonQtWrapper_QEnterEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QEnterEvent(QEnterEvent* obj) { delete obj; }
   QEnterEvent*  clone(QEnterEvent* theWrappedObject) const;
   QEnterEvent*  py_q_clone(QEnterEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QEnterEvent*)theWrappedObject)->py_q_clone());}
   QPoint  globalPos(QEnterEvent* theWrappedObject) const;
   QPointF  localPos(QEnterEvent* theWrappedObject) const;
   QEnterEvent*  operator_assign(QEnterEvent* theWrappedObject, QEnterEvent&  arg__1);
   QPoint  pos(QEnterEvent* theWrappedObject) const;
   QPointF  screenPos(QEnterEvent* theWrappedObject) const;
   QPointF  windowPos(QEnterEvent* theWrappedObject) const;
};



class PythonQtShell_QExposeEvent : public QExposeEvent
{
public:
    PythonQtShell_QExposeEvent(QExposeEvent&  arg__1):QExposeEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QExposeEvent(const QRegion&  m_region):QExposeEvent(m_region),_wrapper(NULL) {};

   ~PythonQtShell_QExposeEvent();

virtual QExposeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QExposeEvent : public QExposeEvent
{ public:
inline QExposeEvent&  promoted_operator_assign(QExposeEvent&  arg__1) { return ((QExposeEvent*)this)->operator=(arg__1); }
inline QExposeEvent*  py_q_clone() const { return QExposeEvent::clone(); }
};

class PythonQtWrapper_QExposeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QExposeEvent* new_QExposeEvent(const QRegion&  m_region);
void delete_QExposeEvent(QExposeEvent* obj) { delete obj; }
   QExposeEvent*  clone(QExposeEvent* theWrappedObject) const;
   QExposeEvent*  py_q_clone(QExposeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QExposeEvent*)theWrappedObject)->py_q_clone());}
   QExposeEvent*  operator_assign(QExposeEvent* theWrappedObject, QExposeEvent&  arg__1);
   const QRegion*  region(QExposeEvent* theWrappedObject) const;
};



class PythonQtShell_QFileOpenEvent : public QFileOpenEvent
{
public:
    PythonQtShell_QFileOpenEvent(QFileOpenEvent&  arg__1):QFileOpenEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QFileOpenEvent(const QString&  file):QFileOpenEvent(file),_wrapper(NULL) {};
    PythonQtShell_QFileOpenEvent(const QUrl&  url):QFileOpenEvent(url),_wrapper(NULL) {};

   ~PythonQtShell_QFileOpenEvent();

virtual QFileOpenEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFileOpenEvent : public QFileOpenEvent
{ public:
inline QFileOpenEvent&  promoted_operator_assign(QFileOpenEvent&  arg__1) { return ((QFileOpenEvent*)this)->operator=(arg__1); }
inline QFileOpenEvent*  py_q_clone() const { return QFileOpenEvent::clone(); }
};

class PythonQtWrapper_QFileOpenEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFileOpenEvent* new_QFileOpenEvent(const QString&  file);
QFileOpenEvent* new_QFileOpenEvent(const QUrl&  url);
void delete_QFileOpenEvent(QFileOpenEvent* obj) { delete obj; }
   QFileOpenEvent*  clone(QFileOpenEvent* theWrappedObject) const;
   QFileOpenEvent*  py_q_clone(QFileOpenEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileOpenEvent*)theWrappedObject)->py_q_clone());}
   QString  file(QFileOpenEvent* theWrappedObject) const;
   bool  openFile(QFileOpenEvent* theWrappedObject, QFile&  file, QIODevice::OpenMode  flags) const;
   QFileOpenEvent*  operator_assign(QFileOpenEvent* theWrappedObject, QFileOpenEvent&  arg__1);
   QUrl  url(QFileOpenEvent* theWrappedObject) const;
};



class PythonQtShell_QFocusEvent : public QFocusEvent
{
public:
    PythonQtShell_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason = Qt::OtherFocusReason):QFocusEvent(type, reason),_wrapper(NULL) {};
    PythonQtShell_QFocusEvent(QFocusEvent&  arg__1):QFocusEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QFocusEvent();

virtual QFocusEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFocusEvent : public QFocusEvent
{ public:
inline QFocusEvent&  promoted_operator_assign(QFocusEvent&  arg__1) { return ((QFocusEvent*)this)->operator=(arg__1); }
inline QFocusEvent*  py_q_clone() const { return QFocusEvent::clone(); }
};

class PythonQtWrapper_QFocusEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFocusEvent* new_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason = Qt::OtherFocusReason);
void delete_QFocusEvent(QFocusEvent* obj) { delete obj; }
   QFocusEvent*  clone(QFocusEvent* theWrappedObject) const;
   QFocusEvent*  py_q_clone(QFocusEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFocusEvent*)theWrappedObject)->py_q_clone());}
   bool  gotFocus(QFocusEvent* theWrappedObject) const;
   bool  lostFocus(QFocusEvent* theWrappedObject) const;
   QFocusEvent*  operator_assign(QFocusEvent* theWrappedObject, QFocusEvent&  arg__1);
   Qt::FocusReason  reason(QFocusEvent* theWrappedObject) const;
};



class PythonQtWrapper_QFontInfo : public QObject
{ Q_OBJECT
public:
public slots:
QFontInfo* new_QFontInfo(const QFont&  arg__1);
QFontInfo* new_QFontInfo(const QFontInfo&  arg__1);
void delete_QFontInfo(QFontInfo* obj) { delete obj; }
   bool  bold(QFontInfo* theWrappedObject) const;
   bool  exactMatch(QFontInfo* theWrappedObject) const;
   QString  family(QFontInfo* theWrappedObject) const;
   bool  fixedPitch(QFontInfo* theWrappedObject) const;
   bool  italic(QFontInfo* theWrappedObject) const;
   bool  overline(QFontInfo* theWrappedObject) const;
   qreal  pointSizeF(QFontInfo* theWrappedObject) const;
   bool  strikeOut(QFontInfo* theWrappedObject) const;
   QFont::Style  style(QFontInfo* theWrappedObject) const;
   QFont::StyleHint  styleHint(QFontInfo* theWrappedObject) const;
   QString  styleName(QFontInfo* theWrappedObject) const;
   bool  underline(QFontInfo* theWrappedObject) const;
};



class PythonQtWrapper_QGestureEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGestureEvent* new_QGestureEvent(const QList<QGesture* >&  gestures);
void delete_QGestureEvent(QGestureEvent* obj) { delete obj; }
   QList<QGesture* >  activeGestures(QGestureEvent* theWrappedObject) const;
   QList<QGesture* >  canceledGestures(QGestureEvent* theWrappedObject) const;
   QGesture*  gesture(QGestureEvent* theWrappedObject, Qt::GestureType  type) const;
   QList<QGesture* >  gestures(QGestureEvent* theWrappedObject) const;
   bool  isAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1) const;
   bool  isAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1) const;
   QPointF  mapToGraphicsScene(QGestureEvent* theWrappedObject, const QPointF&  gesturePoint) const;
   QWidget*  widget(QGestureEvent* theWrappedObject) const;
    QString py_toString(QGestureEvent*);
};



class PythonQtShell_QGestureRecognizer : public QGestureRecognizer
{
public:
    PythonQtShell_QGestureRecognizer():QGestureRecognizer(),_wrapper(NULL) {};

   ~PythonQtShell_QGestureRecognizer();

virtual QGesture*  create(QObject*  target);
virtual QGestureRecognizer::Result  recognize(QGesture*  state, QObject*  watched, QEvent*  event);

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGestureRecognizer : public QGestureRecognizer
{ public:
inline QGesture*  py_q_create(QObject*  target) { return QGestureRecognizer::create(target); }
inline QGestureRecognizer::Result  py_q_recognize(QGesture*  state, QObject*  watched, QEvent*  event) { return this->recognize(state, watched, event); }
};

class PythonQtWrapper_QGestureRecognizer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ResultFlag )
Q_FLAGS(Result )
enum ResultFlag{
  Ignore = QGestureRecognizer::Ignore,   MayBeGesture = QGestureRecognizer::MayBeGesture,   TriggerGesture = QGestureRecognizer::TriggerGesture,   FinishGesture = QGestureRecognizer::FinishGesture,   CancelGesture = QGestureRecognizer::CancelGesture,   ResultState_Mask = QGestureRecognizer::ResultState_Mask,   ConsumeEventHint = QGestureRecognizer::ConsumeEventHint,   ResultHint_Mask = QGestureRecognizer::ResultHint_Mask};
Q_DECLARE_FLAGS(Result, ResultFlag)
public slots:
QGestureRecognizer* new_QGestureRecognizer();
void delete_QGestureRecognizer(QGestureRecognizer* obj) { delete obj; }
   QGesture*  create(QGestureRecognizer* theWrappedObject, QObject*  target);
   QGesture*  py_q_create(QGestureRecognizer* theWrappedObject, QObject*  target){  return (((PythonQtPublicPromoter_QGestureRecognizer*)theWrappedObject)->py_q_create(target));}
   QGestureRecognizer::Result  recognize(QGestureRecognizer* theWrappedObject, QGesture*  state, QObject*  watched, QEvent*  event);
   QGestureRecognizer::Result  py_q_recognize(QGestureRecognizer* theWrappedObject, QGesture*  state, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QGestureRecognizer*)theWrappedObject)->py_q_recognize(state, watched, event));}
   Qt::GestureType  static_QGestureRecognizer_registerRecognizer(QGestureRecognizer*  recognizer);
};



class PythonQtShell_QGraphicsItemAnimation : public QGraphicsItemAnimation
{
public:
    PythonQtShell_QGraphicsItemAnimation(QObject*  parent = nullptr):QGraphicsItemAnimation(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsItemAnimation();

virtual const QMetaObject*  metaObject() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsItemAnimation : public QGraphicsItemAnimation
{ public:
inline const QMetaObject*  py_q_metaObject() const { return QGraphicsItemAnimation::metaObject(); }
};

class PythonQtWrapper_QGraphicsItemAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsItemAnimation* new_QGraphicsItemAnimation(QObject*  parent = nullptr);
void delete_QGraphicsItemAnimation(QGraphicsItemAnimation* obj) { delete obj; }
   qreal  horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QGraphicsItem*  item(QGraphicsItemAnimation* theWrappedObject) const;
   const QMetaObject*  metaObject(QGraphicsItemAnimation* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QGraphicsItemAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->py_q_metaObject());}
   QPointF  posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QPointF >  >  posList(QGraphicsItemAnimation* theWrappedObject) const;
   qreal  rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , qreal >  >  rotationList(QGraphicsItemAnimation* theWrappedObject) const;
   QList<QPair<qreal , QPointF >  >  scaleList(QGraphicsItemAnimation* theWrappedObject) const;
   QList<QPair<qreal , QPointF >  >  shearList(QGraphicsItemAnimation* theWrappedObject) const;
   QTimeLine*  timeLine(QGraphicsItemAnimation* theWrappedObject) const;
   QTransform  transformAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QPointF >  >  translationList(QGraphicsItemAnimation* theWrappedObject) const;
   qreal  verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
};



class PythonQtShell_QGraphicsTextItem : public QGraphicsTextItem
{
public:
    PythonQtShell_QGraphicsTextItem(QGraphicsItem*  parent = nullptr):QGraphicsTextItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = nullptr):QGraphicsTextItem(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsTextItem();

virtual QRectF  boundingRect() const;
virtual bool  contains(const QPointF&  point) const;
virtual QVariant  extension(const QVariant&  variant) const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual const QMetaObject*  metaObject() const;
virtual QPainterPath  opaqueArea() const;
virtual bool  sceneEvent(QEvent*  event);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsTextItem : public QGraphicsTextItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return ((QGraphicsTextItem*)this)->extension(variant); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return ((QGraphicsTextItem*)this)->inputMethodQuery(query); }
inline bool  promoted_sceneEvent(QEvent*  event) { return ((QGraphicsTextItem*)this)->sceneEvent(event); }
inline bool  promoted_supportsExtension(QGraphicsItem::Extension  extension) const { return ((QGraphicsTextItem*)this)->supportsExtension(extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsTextItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsTextItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsTextItem::extension(variant); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsTextItem::inputMethodQuery(query); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsTextItem::isObscuredBy(item); }
inline const QMetaObject*  py_q_metaObject() const { return QGraphicsTextItem::metaObject(); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsTextItem::opaqueArea(); }
inline bool  py_q_sceneEvent(QEvent*  event) { return QGraphicsTextItem::sceneEvent(event); }
inline QPainterPath  py_q_shape() const { return QGraphicsTextItem::shape(); }
inline bool  py_q_supportsExtension(QGraphicsItem::Extension  extension) const { return QGraphicsTextItem::supportsExtension(extension); }
};

class PythonQtWrapper_QGraphicsTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsTextItem::Type};
public slots:
QGraphicsTextItem* new_QGraphicsTextItem(QGraphicsItem*  parent = nullptr);
QGraphicsTextItem* new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsTextItem(QGraphicsTextItem* obj) { delete obj; }
   QRectF  boundingRect(QGraphicsTextItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_boundingRect());}
   bool  contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_contains(point));}
   QColor  defaultTextColor(QGraphicsTextItem* theWrappedObject) const;
   QTextDocument*  document(QGraphicsTextItem* theWrappedObject) const;
   QVariant  extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const;
   QVariant  py_q_extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_extension(variant));}
   QFont  font(QGraphicsTextItem* theWrappedObject) const;
   QVariant  inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   QVariant  py_q_inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_inputMethodQuery(query));}
   bool  isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  py_q_isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   const QMetaObject*  metaObject(QGraphicsTextItem* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_metaObject());}
   QPainterPath  opaqueArea(QGraphicsTextItem* theWrappedObject) const;
   QPainterPath  py_q_opaqueArea(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_opaqueArea());}
   bool  openExternalLinks(QGraphicsTextItem* theWrappedObject) const;
   bool  sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event);
   bool  py_q_sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_sceneEvent(event));}
   QPainterPath  shape(QGraphicsTextItem* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_shape());}
   bool  supportsExtension(QGraphicsTextItem* theWrappedObject, QGraphicsItem::Extension  extension) const;
   bool  py_q_supportsExtension(QGraphicsTextItem* theWrappedObject, QGraphicsItem::Extension  extension) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   bool  tabChangesFocus(QGraphicsTextItem* theWrappedObject) const;
   QTextCursor  textCursor(QGraphicsTextItem* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QGraphicsTextItem* theWrappedObject) const;
   qreal  textWidth(QGraphicsTextItem* theWrappedObject) const;
   QString  toHtml(QGraphicsTextItem* theWrappedObject) const;
   QString  toPlainText(QGraphicsTextItem* theWrappedObject) const;
};



class PythonQtShell_QHBoxLayout : public QHBoxLayout
{
public:
    PythonQtShell_QHBoxLayout():QHBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QHBoxLayout(QWidget*  parent):QHBoxLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QHBoxLayout();

virtual const QMetaObject*  metaObject() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHBoxLayout : public QHBoxLayout
{ public:
inline const QMetaObject*  py_q_metaObject() const { return QHBoxLayout::metaObject(); }
};

class PythonQtWrapper_QHBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QHBoxLayout* new_QHBoxLayout();
QHBoxLayout* new_QHBoxLayout(QWidget*  parent);
void delete_QHBoxLayout(QHBoxLayout* obj) { delete obj; }
   const QMetaObject*  metaObject(QHBoxLayout* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QHBoxLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHBoxLayout*)theWrappedObject)->py_q_metaObject());}
};



class PythonQtShell_QHelpEvent : public QHelpEvent
{
public:
    PythonQtShell_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos):QHelpEvent(type, pos, globalPos),_wrapper(NULL) {};
    PythonQtShell_QHelpEvent(QHelpEvent&  arg__1):QHelpEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QHelpEvent();

virtual QHelpEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHelpEvent : public QHelpEvent
{ public:
inline QHelpEvent&  promoted_operator_assign(QHelpEvent&  arg__1) { return ((QHelpEvent*)this)->operator=(arg__1); }
inline QHelpEvent*  py_q_clone() const { return QHelpEvent::clone(); }
};

class PythonQtWrapper_QHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHelpEvent* new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos);
void delete_QHelpEvent(QHelpEvent* obj) { delete obj; }
   QHelpEvent*  clone(QHelpEvent* theWrappedObject) const;
   QHelpEvent*  py_q_clone(QHelpEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHelpEvent*)theWrappedObject)->py_q_clone());}
   const QPoint*  globalPos(QHelpEvent* theWrappedObject) const;
   QHelpEvent*  operator_assign(QHelpEvent* theWrappedObject, QHelpEvent&  arg__1);
   const QPoint*  pos(QHelpEvent* theWrappedObject) const;
};



class PythonQtShell_QHideEvent : public QHideEvent
{
public:
    PythonQtShell_QHideEvent():QHideEvent(),_wrapper(NULL) {};
    PythonQtShell_QHideEvent(QHideEvent&  arg__1):QHideEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QHideEvent();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHideEvent : public QHideEvent
{ public:
inline QHideEvent&  promoted_operator_assign(QHideEvent&  arg__1) { return ((QHideEvent*)this)->operator=(arg__1); }
};

class PythonQtWrapper_QHideEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHideEvent* new_QHideEvent();
void delete_QHideEvent(QHideEvent* obj) { delete obj; }
   QHideEvent*  operator_assign(QHideEvent* theWrappedObject, QHideEvent&  arg__1);
};



class PythonQtShell_QHoverEvent : public QHoverEvent
{
public:
    PythonQtShell_QHoverEvent(QHoverEvent&  arg__1):QHoverEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QHoverEvent();

virtual QHoverEvent*  clone() const;
virtual bool  isUpdateEvent() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHoverEvent : public QHoverEvent
{ public:
inline QHoverEvent&  promoted_operator_assign(QHoverEvent&  arg__1) { return ((QHoverEvent*)this)->operator=(arg__1); }
inline QHoverEvent*  py_q_clone() const { return QHoverEvent::clone(); }
inline bool  py_q_isUpdateEvent() const { return QHoverEvent::isUpdateEvent(); }
};

class PythonQtWrapper_QHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QHoverEvent(QHoverEvent* obj) { delete obj; }
   QHoverEvent*  clone(QHoverEvent* theWrappedObject) const;
   QHoverEvent*  py_q_clone(QHoverEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHoverEvent*)theWrappedObject)->py_q_clone());}
   bool  isUpdateEvent(QHoverEvent* theWrappedObject) const;
   bool  py_q_isUpdateEvent(QHoverEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHoverEvent*)theWrappedObject)->py_q_isUpdateEvent());}
   QPoint  oldPos(QHoverEvent* theWrappedObject) const;
   QPointF  oldPosF(QHoverEvent* theWrappedObject) const;
   QHoverEvent*  operator_assign(QHoverEvent* theWrappedObject, QHoverEvent&  arg__1);
   QPoint  pos(QHoverEvent* theWrappedObject) const;
   QPointF  posF(QHoverEvent* theWrappedObject) const;
};



class PythonQtShell_QIconDragEvent : public QIconDragEvent
{
public:
    PythonQtShell_QIconDragEvent():QIconDragEvent(),_wrapper(NULL) {};
    PythonQtShell_QIconDragEvent(QIconDragEvent&  arg__1):QIconDragEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QIconDragEvent();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIconDragEvent : public QIconDragEvent
{ public:
inline QIconDragEvent&  promoted_operator_assign(QIconDragEvent&  arg__1) { return ((QIconDragEvent*)this)->operator=(arg__1); }
};

class PythonQtWrapper_QIconDragEvent : public QObject
{ Q_OBJECT
public:
public slots:
QIconDragEvent* new_QIconDragEvent();
void delete_QIconDragEvent(QIconDragEvent* obj) { delete obj; }
   QIconDragEvent*  operator_assign(QIconDragEvent* theWrappedObject, QIconDragEvent&  arg__1);
};



class PythonQtShell_QIconEngine : public QIconEngine
{
public:
    PythonQtShell_QIconEngine():QIconEngine(),_wrapper(NULL) {};
    PythonQtShell_QIconEngine(const QIconEngine&  other):QIconEngine(other),_wrapper(NULL) {};

   ~PythonQtShell_QIconEngine();

virtual QSize  actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual QList<QSize >  availableSizes(QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
virtual QIconEngine*  clone() const;
virtual QString  iconName();
virtual bool  isNull();
virtual QString  key() const;
virtual QPixmap  pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual bool  read(QDataStream&  in);
virtual QPixmap  scaledPixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale);
virtual bool  write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIconEngine : public QIconEngine
{ public:
inline QSize  py_q_actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::actualSize(size, mode, state); }
inline QList<QSize >  py_q_availableSizes(QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) { return QIconEngine::availableSizes(mode, state); }
inline QIconEngine*  py_q_clone() const { return this->clone(); }
inline QString  py_q_iconName() { return QIconEngine::iconName(); }
inline bool  py_q_isNull() { return QIconEngine::isNull(); }
inline QString  py_q_key() const { return QIconEngine::key(); }
inline QPixmap  py_q_pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::pixmap(size, mode, state); }
inline bool  py_q_read(QDataStream&  in) { return QIconEngine::read(in); }
inline QPixmap  py_q_scaledPixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale) { return QIconEngine::scaledPixmap(size, mode, state, scale); }
inline bool  py_q_write(QDataStream&  out) const { return QIconEngine::write(out); }
};

class PythonQtWrapper_QIconEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IconEngineHook )
enum IconEngineHook{
  IsNullHook = QIconEngine::IsNullHook,   ScaledPixmapHook = QIconEngine::ScaledPixmapHook};
public slots:
QIconEngine* new_QIconEngine();
QIconEngine* new_QIconEngine(const QIconEngine&  other);
void delete_QIconEngine(QIconEngine* obj) { delete obj; }
   QSize  actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QSize  py_q_actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_actualSize(size, mode, state));}
   QList<QSize >  availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
   QList<QSize >  py_q_availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_availableSizes(mode, state));}
   QIconEngine*  clone(QIconEngine* theWrappedObject) const;
   QIconEngine*  py_q_clone(QIconEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_clone());}
   QString  iconName(QIconEngine* theWrappedObject);
   QString  py_q_iconName(QIconEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_iconName());}
   bool  isNull(QIconEngine* theWrappedObject);
   bool  py_q_isNull(QIconEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_isNull());}
   QString  key(QIconEngine* theWrappedObject) const;
   QString  py_q_key(QIconEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_key());}
   QPixmap  pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QPixmap  py_q_pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_pixmap(size, mode, state));}
   bool  read(QIconEngine* theWrappedObject, QDataStream&  in);
   bool  py_q_read(QIconEngine* theWrappedObject, QDataStream&  in){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_read(in));}
   QPixmap  scaledPixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale);
   QPixmap  py_q_scaledPixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_scaledPixmap(size, mode, state, scale));}
   bool  write(QIconEngine* theWrappedObject, QDataStream&  out) const;
   bool  py_q_write(QIconEngine* theWrappedObject, QDataStream&  out) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_write(out));}
    bool __nonzero__(QIconEngine* obj) { return !obj->isNull(); }
};



class PythonQtShell_QImageIOPlugin : public QImageIOPlugin
{
public:
    PythonQtShell_QImageIOPlugin(QObject*  parent = nullptr):QImageIOPlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QImageIOPlugin();

virtual QImageIOPlugin::Capabilities  capabilities(QIODevice*  device, const QByteArray&  format) const;
virtual QImageIOHandler*  create(QIODevice*  device, const QByteArray&  format = QByteArray()) const;
virtual const QMetaObject*  metaObject() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QImageIOPlugin : public QImageIOPlugin
{ public:
inline QImageIOPlugin::Capabilities  py_q_capabilities(QIODevice*  device, const QByteArray&  format) const { return this->capabilities(device, format); }
inline QImageIOHandler*  py_q_create(QIODevice*  device, const QByteArray&  format = QByteArray()) const { return this->create(device, format); }
inline const QMetaObject*  py_q_metaObject() const { return QImageIOPlugin::metaObject(); }
};

class PythonQtWrapper_QImageIOPlugin : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability )
Q_FLAGS(Capabilities )
enum Capability{
  CanRead = QImageIOPlugin::CanRead,   CanWrite = QImageIOPlugin::CanWrite,   CanReadIncremental = QImageIOPlugin::CanReadIncremental};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QImageIOPlugin* new_QImageIOPlugin(QObject*  parent = nullptr);
void delete_QImageIOPlugin(QImageIOPlugin* obj) { delete obj; }
   QImageIOPlugin::Capabilities  capabilities(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const;
   QImageIOPlugin::Capabilities  py_q_capabilities(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const{  return (((PythonQtPublicPromoter_QImageIOPlugin*)theWrappedObject)->py_q_capabilities(device, format));}
   QImageIOHandler*  create(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format = QByteArray()) const;
   QImageIOHandler*  py_q_create(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format = QByteArray()) const{  return (((PythonQtPublicPromoter_QImageIOPlugin*)theWrappedObject)->py_q_create(device, format));}
   const QMetaObject*  metaObject(QImageIOPlugin* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QImageIOPlugin* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOPlugin*)theWrappedObject)->py_q_metaObject());}
};



class PythonQtWrapper_QImageReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageReaderError )
enum ImageReaderError{
  UnknownError = QImageReader::UnknownError,   FileNotFoundError = QImageReader::FileNotFoundError,   DeviceError = QImageReader::DeviceError,   UnsupportedFormatError = QImageReader::UnsupportedFormatError,   InvalidDataError = QImageReader::InvalidDataError};
public slots:
void delete_QImageReader(QImageReader* obj) { delete obj; }
   bool  autoDetectImageFormat(QImageReader* theWrappedObject) const;
   bool  autoTransform(QImageReader* theWrappedObject) const;
   QColor  backgroundColor(QImageReader* theWrappedObject) const;
   bool  canRead(QImageReader* theWrappedObject) const;
   QRect  clipRect(QImageReader* theWrappedObject) const;
   QRect  currentImageRect(QImageReader* theWrappedObject) const;
   bool  decideFormatFromContent(QImageReader* theWrappedObject) const;
   QIODevice*  device(QImageReader* theWrappedObject) const;
   QImageReader::ImageReaderError  error(QImageReader* theWrappedObject) const;
   QString  errorString(QImageReader* theWrappedObject) const;
   QString  fileName(QImageReader* theWrappedObject) const;
   QByteArray  format(QImageReader* theWrappedObject) const;
   QImage::Format  imageFormat(QImageReader* theWrappedObject) const;
   QByteArray  static_QImageReader_imageFormat(QIODevice*  device);
   QByteArray  static_QImageReader_imageFormat(const QString&  fileName);
   QList<QByteArray >  static_QImageReader_imageFormatsForMimeType(const QByteArray&  mimeType);
   bool  jumpToNextImage(QImageReader* theWrappedObject);
   QImage  read(QImageReader* theWrappedObject);
   QRect  scaledClipRect(QImageReader* theWrappedObject) const;
   QSize  scaledSize(QImageReader* theWrappedObject) const;
   QSize  size(QImageReader* theWrappedObject) const;
   QByteArray  subType(QImageReader* theWrappedObject) const;
   QList<QByteArray >  static_QImageReader_supportedImageFormats();
   QList<QByteArray >  static_QImageReader_supportedMimeTypes();
   QList<QByteArray >  supportedSubTypes(QImageReader* theWrappedObject) const;
   bool  supportsAnimation(QImageReader* theWrappedObject) const;
   bool  supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QString  text(QImageReader* theWrappedObject, const QString&  key) const;
   QStringList  textKeys(QImageReader* theWrappedObject) const;
};



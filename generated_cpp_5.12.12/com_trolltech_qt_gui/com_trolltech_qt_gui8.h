#include <PythonQt.h>
#include <QObject>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qapplication.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qsplitter.h>
#include <qstackedlayout.h>
#include <qstackedwidget.h>
#include <qstandarditemmodel.h>
#include <qstatictext.h>
#include <qstatusbar.h>
#include <qstringlist.h>
#include <qstringlistmodel.h>
#include <qstyle.h>
#include <qstylefactory.h>
#include <qstylehints.h>
#include <qstyleoption.h>
#include <qtextoption.h>
#include <qtextstream.h>
#include <qthread.h>
#include <qtransform.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QSplitter : public QSplitter
{
public:
    PythonQtShell_QSplitter(QWidget*  parent = nullptr):QSplitter(parent),_wrapper(nullptr) {};
    PythonQtShell_QSplitter(Qt::Orientation  arg__1, QWidget*  parent = nullptr):QSplitter(arg__1, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSplitter() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  arg__1) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
QSplitterHandle*  createHandle() override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSplitter : public QSplitter
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_childEvent(QChildEvent*  arg__1) { this->childEvent(arg__1); }
inline int  promoted_closestLegalPosition(int  arg__1, int  arg__2) { return this->closestLegalPosition(arg__1, arg__2); }
inline QSplitterHandle*  promoted_createHandle() { return this->createHandle(); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_moveSplitter(int  pos, int  index) { this->moveSplitter(pos, index); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_setRubberBand(int  position) { this->setRubberBand(position); }
inline void py_q_changeEvent(QEvent*  arg__1) { QSplitter::changeEvent(arg__1); }
inline void py_q_childEvent(QChildEvent*  arg__1) { QSplitter::childEvent(arg__1); }
inline QSplitterHandle*  py_q_createHandle() { return QSplitter::createHandle(); }
inline bool  py_q_event(QEvent*  arg__1) { return QSplitter::event(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QSplitter::minimumSizeHint(); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QSplitter::resizeEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QSplitter::sizeHint(); }
};

class PythonQtWrapper_QSplitter : public QObject
{ Q_OBJECT
public:
public slots:
QSplitter* new_QSplitter(QWidget*  parent = nullptr);
QSplitter* new_QSplitter(Qt::Orientation  arg__1, QWidget*  parent = nullptr);
void delete_QSplitter(QSplitter* obj) { delete obj; }
   void addWidget(QSplitter* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void py_q_changeEvent(QSplitter* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void py_q_childEvent(QSplitter* theWrappedObject, QChildEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_childEvent(arg__1));}
   bool  childrenCollapsible(QSplitter* theWrappedObject) const;
   int  closestLegalPosition(QSplitter* theWrappedObject, int  arg__1, int  arg__2);
   int  count(QSplitter* theWrappedObject) const;
   QSplitterHandle*  createHandle(QSplitter* theWrappedObject);
   QSplitterHandle*  py_q_createHandle(QSplitter* theWrappedObject){  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_createHandle());}
   bool  py_q_event(QSplitter* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_event(arg__1));}
   QSplitterHandle*  handle(QSplitter* theWrappedObject, int  index) const;
   int  handleWidth(QSplitter* theWrappedObject) const;
   int  indexOf(QSplitter* theWrappedObject, QWidget*  w) const;
   void insertWidget(QSplitter* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   bool  isCollapsible(QSplitter* theWrappedObject, int  index) const;
   QSize  minimumSizeHint(QSplitter* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QSplitter* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_minimumSizeHint());}
   void moveSplitter(QSplitter* theWrappedObject, int  pos, int  index);
   bool  opaqueResize(QSplitter* theWrappedObject) const;
   void writeTo(QSplitter* theWrappedObject, QTextStream&  arg__1);
   void readFrom(QSplitter* theWrappedObject, QTextStream&  arg__1);
   Qt::Orientation  orientation(QSplitter* theWrappedObject) const;
   void refresh(QSplitter* theWrappedObject);
   QWidget*  replaceWidget(QSplitter* theWrappedObject, int  index, QWidget*  widget);
   void py_q_resizeEvent(QSplitter* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   bool  restoreState(QSplitter* theWrappedObject, const QByteArray&  state);
   QByteArray  saveState(QSplitter* theWrappedObject) const;
   void setChildrenCollapsible(QSplitter* theWrappedObject, bool  arg__1);
   void setCollapsible(QSplitter* theWrappedObject, int  index, bool  arg__2);
   void setHandleWidth(QSplitter* theWrappedObject, int  arg__1);
   void setOpaqueResize(QSplitter* theWrappedObject, bool  opaque = true);
   void setOrientation(QSplitter* theWrappedObject, Qt::Orientation  arg__1);
   void setRubberBand(QSplitter* theWrappedObject, int  position);
   void setSizes(QSplitter* theWrappedObject, const QList<int >&  list);
   void setStretchFactor(QSplitter* theWrappedObject, int  index, int  stretch);
   QSize  py_q_sizeHint(QSplitter* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_sizeHint());}
   QList<int >  sizes(QSplitter* theWrappedObject) const;
   QWidget*  widget(QSplitter* theWrappedObject, int  index) const;
};





class PythonQtShell_QSplitterHandle : public QSplitterHandle
{
public:
    PythonQtShell_QSplitterHandle(Qt::Orientation  o, QSplitter*  parent):QSplitterHandle(o, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSplitterHandle() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSplitterHandle : public QSplitterHandle
{ public:
inline int  promoted_closestLegalPosition(int  p) { return this->closestLegalPosition(p); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_moveSplitter(int  p) { this->moveSplitter(p); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QSplitterHandle::event(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QSplitterHandle::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QSplitterHandle::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QSplitterHandle::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QSplitterHandle::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QSplitterHandle::resizeEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QSplitterHandle::sizeHint(); }
};

class PythonQtWrapper_QSplitterHandle : public QObject
{ Q_OBJECT
public:
public slots:
QSplitterHandle* new_QSplitterHandle(Qt::Orientation  o, QSplitter*  parent);
void delete_QSplitterHandle(QSplitterHandle* obj) { delete obj; }
   int  closestLegalPosition(QSplitterHandle* theWrappedObject, int  p);
   bool  py_q_event(QSplitterHandle* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_event(arg__1));}
   void py_q_mouseMoveEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void moveSplitter(QSplitterHandle* theWrappedObject, int  p);
   bool  opaqueResize(QSplitterHandle* theWrappedObject) const;
   Qt::Orientation  orientation(QSplitterHandle* theWrappedObject) const;
   void py_q_paintEvent(QSplitterHandle* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void py_q_resizeEvent(QSplitterHandle* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setOrientation(QSplitterHandle* theWrappedObject, Qt::Orientation  o);
   QSize  sizeHint(QSplitterHandle* theWrappedObject) const;
   QSize  py_q_sizeHint(QSplitterHandle* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_sizeHint());}
   QSplitter*  splitter(QSplitterHandle* theWrappedObject) const;
};





class PythonQtShell_QStackedLayout : public QStackedLayout
{
public:
    PythonQtShell_QStackedLayout():QStackedLayout(),_wrapper(nullptr) {};
    PythonQtShell_QStackedLayout(QWidget*  parent):QStackedLayout(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStackedLayout();

void addItem(QLayoutItem*  item) override;
int  count() const override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  width) const override;
QLayoutItem*  itemAt(int  arg__1) const override;
QSize  minimumSize() const override;
void setGeometry(const QRect&  rect) override;
QSize  sizeHint() const override;
QLayoutItem*  takeAt(int  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStackedLayout : public QStackedLayout
{ public:
inline void py_q_addItem(QLayoutItem*  item) { QStackedLayout::addItem(item); }
inline int  py_q_count() const { return QStackedLayout::count(); }
inline bool  py_q_hasHeightForWidth() const { return QStackedLayout::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  width) const { return QStackedLayout::heightForWidth(width); }
inline QLayoutItem*  py_q_itemAt(int  arg__1) const { return QStackedLayout::itemAt(arg__1); }
inline QSize  py_q_minimumSize() const { return QStackedLayout::minimumSize(); }
inline void py_q_setGeometry(const QRect&  rect) { QStackedLayout::setGeometry(rect); }
inline QSize  py_q_sizeHint() const { return QStackedLayout::sizeHint(); }
inline QLayoutItem*  py_q_takeAt(int  arg__1) { return QStackedLayout::takeAt(arg__1); }
};

class PythonQtWrapper_QStackedLayout : public QObject
{ Q_OBJECT
public:
public slots:
QStackedLayout* new_QStackedLayout();
QStackedLayout* new_QStackedLayout(QWidget*  parent);
void delete_QStackedLayout(QStackedLayout* obj) { delete obj; }
   void addItem(QStackedLayout* theWrappedObject, QLayoutItem*  item);
   void py_q_addItem(QStackedLayout* theWrappedObject, QLayoutItem*  item){  (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_addItem(item));}
   int  addWidget(QStackedLayout* theWrappedObject, QWidget*  w);
   int  count(QStackedLayout* theWrappedObject) const;
   int  py_q_count(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_count());}
   int  currentIndex(QStackedLayout* theWrappedObject) const;
   QWidget*  currentWidget(QStackedLayout* theWrappedObject) const;
   bool  hasHeightForWidth(QStackedLayout* theWrappedObject) const;
   bool  py_q_hasHeightForWidth(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  heightForWidth(QStackedLayout* theWrappedObject, int  width) const;
   int  py_q_heightForWidth(QStackedLayout* theWrappedObject, int  width) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_heightForWidth(width));}
   int  insertWidget(QStackedLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  w);
   QLayoutItem*  itemAt(QStackedLayout* theWrappedObject, int  arg__1) const;
   QLayoutItem*  py_q_itemAt(QStackedLayout* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_itemAt(arg__1));}
   QSize  minimumSize(QStackedLayout* theWrappedObject) const;
   QSize  py_q_minimumSize(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_minimumSize());}
   void setGeometry(QStackedLayout* theWrappedObject, const QRect&  rect);
   void py_q_setGeometry(QStackedLayout* theWrappedObject, const QRect&  rect){  (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_setGeometry(rect));}
   void setStackingMode(QStackedLayout* theWrappedObject, QStackedLayout::StackingMode  stackingMode);
   QSize  sizeHint(QStackedLayout* theWrappedObject) const;
   QSize  py_q_sizeHint(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_sizeHint());}
   QStackedLayout::StackingMode  stackingMode(QStackedLayout* theWrappedObject) const;
   QLayoutItem*  takeAt(QStackedLayout* theWrappedObject, int  arg__1);
   QLayoutItem*  py_q_takeAt(QStackedLayout* theWrappedObject, int  arg__1){  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_takeAt(arg__1));}
   QWidget*  widget(QStackedLayout* theWrappedObject, int  arg__1) const;
};





class PythonQtShell_QStackedWidget : public QStackedWidget
{
public:
    PythonQtShell_QStackedWidget(QWidget*  parent = nullptr):QStackedWidget(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStackedWidget() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStackedWidget : public QStackedWidget
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  py_q_event(QEvent*  e) { return QStackedWidget::event(e); }
};

class PythonQtWrapper_QStackedWidget : public QObject
{ Q_OBJECT
public:
public slots:
QStackedWidget* new_QStackedWidget(QWidget*  parent = nullptr);
void delete_QStackedWidget(QStackedWidget* obj) { delete obj; }
   int  addWidget(QStackedWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w);
   int  count(QStackedWidget* theWrappedObject) const;
   int  currentIndex(QStackedWidget* theWrappedObject) const;
   QWidget*  currentWidget(QStackedWidget* theWrappedObject) const;
   bool  py_q_event(QStackedWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QStackedWidget*)theWrappedObject)->py_q_event(e));}
   int  indexOf(QStackedWidget* theWrappedObject, QWidget*  arg__1) const;
   int  insertWidget(QStackedWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  w);
   void removeWidget(QStackedWidget* theWrappedObject, PythonQtPassOwnershipToPython<QWidget* >  w);
   QWidget*  widget(QStackedWidget* theWrappedObject, int  arg__1) const;
};





class PythonQtShell_QStandardItem : public QStandardItem
{
public:
    PythonQtShell_QStandardItem():QStandardItem(),_wrapper(nullptr) {};
    PythonQtShell_QStandardItem(const QIcon&  icon, const QString&  text):QStandardItem(icon, text),_wrapper(nullptr) {};
    PythonQtShell_QStandardItem(const QStandardItem&  other):QStandardItem(other),_wrapper(nullptr) {};
    PythonQtShell_QStandardItem(const QString&  text):QStandardItem(text),_wrapper(nullptr) {};
    PythonQtShell_QStandardItem(int  rows, int  columns = 1):QStandardItem(rows, columns),_wrapper(nullptr) {};

   ~PythonQtShell_QStandardItem() override;

QStandardItem*  clone() const override;
QVariant  data(int  role = Qt::UserRole + 1) const override;
void read(QDataStream&  in) override;
void setData(const QVariant&  value, int  role = Qt::UserRole + 1) override;
int  type() const override;
void write(QDataStream&  out) const override;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStandardItem : public QStandardItem
{ public:
inline void promoted_emitDataChanged() { this->emitDataChanged(); }
inline QStandardItem*  py_q_clone() const { return QStandardItem::clone(); }
inline QVariant  py_q_data(int  role = Qt::UserRole + 1) const { return QStandardItem::data(role); }
inline void py_q_read(QDataStream&  in) { QStandardItem::read(in); }
inline void py_q_setData(const QVariant&  value, int  role = Qt::UserRole + 1) { QStandardItem::setData(value, role); }
inline int  py_q_type() const { return QStandardItem::type(); }
inline void py_q_write(QDataStream&  out) const { QStandardItem::write(out); }
};

class PythonQtWrapper_QStandardItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QStandardItem::Type,   UserType = QStandardItem::UserType};
public slots:
QStandardItem* new_QStandardItem();
QStandardItem* new_QStandardItem(const QIcon&  icon, const QString&  text);
QStandardItem* new_QStandardItem(const QStandardItem&  other);
QStandardItem* new_QStandardItem(const QString&  text);
QStandardItem* new_QStandardItem(int  rows, int  columns = 1);
void delete_QStandardItem(QStandardItem* obj) { delete obj; }
   QString  accessibleDescription(QStandardItem* theWrappedObject) const;
   QString  accessibleText(QStandardItem* theWrappedObject) const;
   void appendColumn(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void appendRow(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void appendRow(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void appendRows(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   QBrush  background(QStandardItem* theWrappedObject) const;
   Qt::CheckState  checkState(QStandardItem* theWrappedObject) const;
   QStandardItem*  child(QStandardItem* theWrappedObject, int  row, int  column = 0) const;
   void clearData(QStandardItem* theWrappedObject);
   QStandardItem*  clone(QStandardItem* theWrappedObject) const;
   QStandardItem*  py_q_clone(QStandardItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_clone());}
   int  column(QStandardItem* theWrappedObject) const;
   int  columnCount(QStandardItem* theWrappedObject) const;
   QVariant  data(QStandardItem* theWrappedObject, int  role = Qt::UserRole + 1) const;
   QVariant  py_q_data(QStandardItem* theWrappedObject, int  role = Qt::UserRole + 1) const{  return (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_data(role));}
   void emitDataChanged(QStandardItem* theWrappedObject);
   Qt::ItemFlags  flags(QStandardItem* theWrappedObject) const;
   QFont  font(QStandardItem* theWrappedObject) const;
   QBrush  foreground(QStandardItem* theWrappedObject) const;
   bool  hasChildren(QStandardItem* theWrappedObject) const;
   QIcon  icon(QStandardItem* theWrappedObject) const;
   QModelIndex  index(QStandardItem* theWrappedObject) const;
   void insertColumn(QStandardItem* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void insertColumns(QStandardItem* theWrappedObject, int  column, int  count);
   void insertRow(QStandardItem* theWrappedObject, int  row, QStandardItem*  item);
   void insertRow(QStandardItem* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void insertRows(QStandardItem* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void insertRows(QStandardItem* theWrappedObject, int  row, int  count);
   bool  isAutoTristate(QStandardItem* theWrappedObject) const;
   bool  isCheckable(QStandardItem* theWrappedObject) const;
   bool  isDragEnabled(QStandardItem* theWrappedObject) const;
   bool  isDropEnabled(QStandardItem* theWrappedObject) const;
   bool  isEditable(QStandardItem* theWrappedObject) const;
   bool  isEnabled(QStandardItem* theWrappedObject) const;
   bool  isSelectable(QStandardItem* theWrappedObject) const;
   bool  isTristate(QStandardItem* theWrappedObject) const;
   bool  isUserTristate(QStandardItem* theWrappedObject) const;
   QStandardItemModel*  model(QStandardItem* theWrappedObject) const;
   void writeTo(QStandardItem* theWrappedObject, QDataStream&  out);
   void readFrom(QStandardItem* theWrappedObject, QDataStream&  in);
   QStandardItem*  parent(QStandardItem* theWrappedObject) const;
   void read(QStandardItem* theWrappedObject, QDataStream&  in);
   void py_q_read(QStandardItem* theWrappedObject, QDataStream&  in){  (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_read(in));}
   void removeColumn(QStandardItem* theWrappedObject, int  column);
   void removeColumns(QStandardItem* theWrappedObject, int  column, int  count);
   void removeRow(QStandardItem* theWrappedObject, int  row);
   void removeRows(QStandardItem* theWrappedObject, int  row, int  count);
   int  row(QStandardItem* theWrappedObject) const;
   int  rowCount(QStandardItem* theWrappedObject) const;
   void setAccessibleDescription(QStandardItem* theWrappedObject, const QString&  accessibleDescription);
   void setAccessibleText(QStandardItem* theWrappedObject, const QString&  accessibleText);
   void setAutoTristate(QStandardItem* theWrappedObject, bool  tristate);
   void setBackground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QStandardItem* theWrappedObject, Qt::CheckState  checkState);
   void setCheckable(QStandardItem* theWrappedObject, bool  checkable);
   void setChild(QStandardItem* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setChild(QStandardItem* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setColumnCount(QStandardItem* theWrappedObject, int  columns);
   void setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role = Qt::UserRole + 1);
   void py_q_setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role = Qt::UserRole + 1){  (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_setData(value, role));}
   void setDragEnabled(QStandardItem* theWrappedObject, bool  dragEnabled);
   void setDropEnabled(QStandardItem* theWrappedObject, bool  dropEnabled);
   void setEditable(QStandardItem* theWrappedObject, bool  editable);
   void setEnabled(QStandardItem* theWrappedObject, bool  enabled);
   void setFlags(QStandardItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QStandardItem* theWrappedObject, const QFont&  font);
   void setForeground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void setIcon(QStandardItem* theWrappedObject, const QIcon&  icon);
   void setRowCount(QStandardItem* theWrappedObject, int  rows);
   void setSelectable(QStandardItem* theWrappedObject, bool  selectable);
   void setSizeHint(QStandardItem* theWrappedObject, const QSize&  sizeHint);
   void setStatusTip(QStandardItem* theWrappedObject, const QString&  statusTip);
   void setText(QStandardItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QStandardItem* theWrappedObject, Qt::Alignment  textAlignment);
   void setToolTip(QStandardItem* theWrappedObject, const QString&  toolTip);
   void setTristate(QStandardItem* theWrappedObject, bool  tristate);
   void setUserTristate(QStandardItem* theWrappedObject, bool  tristate);
   void setWhatsThis(QStandardItem* theWrappedObject, const QString&  whatsThis);
   QSize  sizeHint(QStandardItem* theWrappedObject) const;
   void sortChildren(QStandardItem* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   QString  statusTip(QStandardItem* theWrappedObject) const;
   PythonQtPassOwnershipToPython<QStandardItem*  > takeChild(QStandardItem* theWrappedObject, int  row, int  column = 0);
   QList<QStandardItem* >  takeColumn(QStandardItem* theWrappedObject, int  column);
   QList<QStandardItem* >  takeRow(QStandardItem* theWrappedObject, int  row);
   QString  text(QStandardItem* theWrappedObject) const;
   Qt::Alignment  textAlignment(QStandardItem* theWrappedObject) const;
   QString  toolTip(QStandardItem* theWrappedObject) const;
   int  type(QStandardItem* theWrappedObject) const;
   int  py_q_type(QStandardItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_type());}
   QString  whatsThis(QStandardItem* theWrappedObject) const;
   void write(QStandardItem* theWrappedObject, QDataStream&  out) const;
   void py_q_write(QStandardItem* theWrappedObject, QDataStream&  out) const{  (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_write(out));}
};





class PythonQtShell_QStandardItemModel : public QStandardItemModel
{
public:
    PythonQtShell_QStandardItemModel(QObject*  parent = nullptr):QStandardItemModel(parent),_wrapper(nullptr) {};
    PythonQtShell_QStandardItemModel(int  rows, int  columns, QObject*  parent = nullptr):QStandardItemModel(rows, columns, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStandardItemModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
int  columnCount(const QModelIndex&  parent = QModelIndex()) const override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
QModelIndex  parent(const QModelIndex&  child) const override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStandardItemModel : public QStandardItemModel
{ public:
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QStandardItemModel::data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QStandardItemModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QStandardItemModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::hasChildren(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QStandardItemModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::insertRows(row, count, parent); }
inline QMap<int , QVariant >  py_q_itemData(const QModelIndex&  index) const { return QStandardItemModel::itemData(index); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QStandardItemModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QStandardItemModel::mimeTypes(); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QStandardItemModel::parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QStandardItemModel::setData(index, value, role); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QStandardItemModel::setHeaderData(section, orientation, value, role); }
inline bool  py_q_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QStandardItemModel::setItemData(index, roles); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QStandardItemModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QStandardItemModel::sort(column, order); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QStandardItemModel::supportedDropActions(); }
};

class PythonQtWrapper_QStandardItemModel : public QObject
{ Q_OBJECT
public:
public slots:
QStandardItemModel* new_QStandardItemModel(QObject*  parent = nullptr);
QStandardItemModel* new_QStandardItemModel(int  rows, int  columns, QObject*  parent = nullptr);
void delete_QStandardItemModel(QStandardItemModel* obj) { delete obj; }
   void appendColumn(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void appendRow(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void appendRow(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void clear(QStandardItemModel* theWrappedObject);
   bool  clearItemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index);
   int  py_q_columnCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_data(QStandardItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_data(index, role));}
   bool  py_q_dropMimeData(QStandardItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   QList<QStandardItem* >  findItems(QStandardItemModel* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = Qt::MatchExactly, int  column = 0) const;
   Qt::ItemFlags  py_q_flags(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_flags(index));}
   bool  py_q_hasChildren(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_hasChildren(parent));}
   QVariant  py_q_headerData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QStandardItem*  horizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column) const;
   QModelIndex  py_q_index(QStandardItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_index(row, column, parent));}
   QModelIndex  indexFromItem(QStandardItemModel* theWrappedObject, const QStandardItem*  item) const;
   void insertColumn(QStandardItemModel* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   bool  py_q_insertColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   void insertRow(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void insertRow(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   bool  py_q_insertRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QStandardItem*  invisibleRootItem(QStandardItemModel* theWrappedObject) const;
   QStandardItem*  item(QStandardItemModel* theWrappedObject, int  row, int  column = 0) const;
   QMap<int , QVariant >  py_q_itemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_itemData(index));}
   QStandardItem*  itemFromIndex(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const;
   const QStandardItem*  itemPrototype(QStandardItemModel* theWrappedObject) const;
   QMimeData*  py_q_mimeData(QStandardItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  py_q_mimeTypes(QStandardItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_mimeTypes());}
   QModelIndex  py_q_parent(QStandardItemModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_parent(child));}
   bool  py_q_removeColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_rowCount(parent));}
   void setColumnCount(QStandardItemModel* theWrappedObject, int  columns);
   bool  py_q_setData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_setData(index, value, role));}
   bool  py_q_setHeaderData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   void setHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setHorizontalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels);
   void setItem(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setItem(QStandardItemModel* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   bool  py_q_setItemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_setItemData(index, roles));}
   void setItemPrototype(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<const QStandardItem* >  item);
   void setItemRoleNames(QStandardItemModel* theWrappedObject, const QHash<int , QByteArray >&  roleNames);
   void setRowCount(QStandardItemModel* theWrappedObject, int  rows);
   void setSortRole(QStandardItemModel* theWrappedObject, int  role);
   void setVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setVerticalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels);
   QModelIndex  py_q_sibling(QStandardItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   void py_q_sort(QStandardItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_sort(column, order));}
   int  sortRole(QStandardItemModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QStandardItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_supportedDropActions());}
   PythonQtPassOwnershipToPython<QList<QStandardItem* >  > takeColumn(QStandardItemModel* theWrappedObject, int  column);
   PythonQtPassOwnershipToPython<QStandardItem*  > takeHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column);
   PythonQtPassOwnershipToPython<QStandardItem*  > takeItem(QStandardItemModel* theWrappedObject, int  row, int  column = 0);
   PythonQtPassOwnershipToPython<QList<QStandardItem* >  > takeRow(QStandardItemModel* theWrappedObject, int  row);
   PythonQtPassOwnershipToPython<QStandardItem*  > takeVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row);
   QStandardItem*  verticalHeaderItem(QStandardItemModel* theWrappedObject, int  row) const;
};





class PythonQtWrapper_QStaticText : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PerformanceHint )
enum PerformanceHint{
  ModerateCaching = QStaticText::ModerateCaching,   AggressiveCaching = QStaticText::AggressiveCaching};
public slots:
QStaticText* new_QStaticText();
QStaticText* new_QStaticText(const QStaticText&  other);
QStaticText* new_QStaticText(const QString&  text);
void delete_QStaticText(QStaticText* obj) { delete obj; }
   bool  __ne__(QStaticText* theWrappedObject, const QStaticText&  arg__1) const;
   QStaticText*  operator_assign(QStaticText* theWrappedObject, const QStaticText&  arg__1);
   bool  __eq__(QStaticText* theWrappedObject, const QStaticText&  arg__1) const;
   QStaticText::PerformanceHint  performanceHint(QStaticText* theWrappedObject) const;
   void prepare(QStaticText* theWrappedObject, const QTransform&  matrix = QTransform(), const QFont&  font = QFont());
   void setPerformanceHint(QStaticText* theWrappedObject, QStaticText::PerformanceHint  performanceHint);
   void setText(QStaticText* theWrappedObject, const QString&  text);
   void setTextFormat(QStaticText* theWrappedObject, Qt::TextFormat  textFormat);
   void setTextOption(QStaticText* theWrappedObject, const QTextOption&  textOption);
   void setTextWidth(QStaticText* theWrappedObject, qreal  textWidth);
   QSizeF  size(QStaticText* theWrappedObject) const;
   void swap(QStaticText* theWrappedObject, QStaticText&  other);
   QString  text(QStaticText* theWrappedObject) const;
   Qt::TextFormat  textFormat(QStaticText* theWrappedObject) const;
   QTextOption  textOption(QStaticText* theWrappedObject) const;
   qreal  textWidth(QStaticText* theWrappedObject) const;
};





class PythonQtShell_QStatusBar : public QStatusBar
{
public:
    PythonQtShell_QStatusBar(QWidget*  parent = nullptr):QStatusBar(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStatusBar() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStatusBar : public QStatusBar
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_hideOrShow() { this->hideOrShow(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_reformat() { this->reformat(); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QStatusBar::event(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QStatusBar::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QStatusBar::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QStatusBar::showEvent(arg__1); }
};

class PythonQtWrapper_QStatusBar : public QObject
{ Q_OBJECT
public:
public slots:
QStatusBar* new_QStatusBar(QWidget*  parent = nullptr);
void delete_QStatusBar(QStatusBar* obj) { delete obj; }
   void addPermanentWidget(QStatusBar* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   void addWidget(QStatusBar* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   QString  currentMessage(QStatusBar* theWrappedObject) const;
   bool  py_q_event(QStatusBar* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_event(arg__1));}
   void hideOrShow(QStatusBar* theWrappedObject);
   int  insertPermanentWidget(QStatusBar* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   int  insertWidget(QStatusBar* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   bool  isSizeGripEnabled(QStatusBar* theWrappedObject) const;
   void py_q_paintEvent(QStatusBar* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void reformat(QStatusBar* theWrappedObject);
   void removeWidget(QStatusBar* theWrappedObject, QWidget*  widget);
   void py_q_resizeEvent(QStatusBar* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setSizeGripEnabled(QStatusBar* theWrappedObject, bool  arg__1);
   void py_q_showEvent(QStatusBar* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_showEvent(arg__1));}
};





class PythonQtWrapper_QStatusTipEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStatusTipEvent* new_QStatusTipEvent(const QString&  tip);
void delete_QStatusTipEvent(QStatusTipEvent* obj) { delete obj; }
   QString  tip(QStatusTipEvent* theWrappedObject) const;
};





class PythonQtShell_QStringListModel : public QStringListModel
{
public:
    PythonQtShell_QStringListModel(QObject*  parent = nullptr):QStringListModel(parent),_wrapper(nullptr) {};
    PythonQtShell_QStringListModel(const QStringList&  strings, QObject*  parent = nullptr):QStringListModel(strings, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStringListModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStringListModel : public QStringListModel
{ public:
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QStringListModel::data(index, role); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QStringListModel::flags(index); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStringListModel::insertRows(row, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStringListModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QStringListModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QStringListModel::setData(index, value, role); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QStringListModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QStringListModel::sort(column, order); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QStringListModel::supportedDropActions(); }
};

class PythonQtWrapper_QStringListModel : public QObject
{ Q_OBJECT
public:
public slots:
QStringListModel* new_QStringListModel(QObject*  parent = nullptr);
QStringListModel* new_QStringListModel(const QStringList&  strings, QObject*  parent = nullptr);
void delete_QStringListModel(QStringListModel* obj) { delete obj; }
   QVariant  py_q_data(QStringListModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_data(index, role));}
   Qt::ItemFlags  py_q_flags(QStringListModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_flags(index));}
   bool  py_q_insertRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   bool  py_q_removeRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QStringListModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  py_q_setData(QStringListModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_setData(index, value, role));}
   void setStringList(QStringListModel* theWrappedObject, const QStringList&  strings);
   QModelIndex  py_q_sibling(QStringListModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   void py_q_sort(QStringListModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_sort(column, order));}
   QStringList  stringList(QStringListModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QStringListModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_supportedDropActions());}
};





class PythonQtPublicPromoter_QStyle : public QStyle
{ public:
inline void py_q_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  widget = nullptr) const { this->drawComplexControl(cc, opt, p, widget); }
inline void py_q_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const { this->drawControl(element, opt, p, w); }
inline void py_q_drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const { QStyle::drawItemPixmap(painter, rect, alignment, pixmap); }
inline void py_q_drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const { QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole); }
inline void py_q_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const { this->drawPrimitive(pe, opt, p, w); }
inline QPixmap  py_q_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return this->generatedIconPixmap(iconMode, pixmap, opt); }
inline QStyle::SubControl  py_q_hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  widget = nullptr) const { return this->hitTestComplexControl(cc, opt, pt, widget); }
inline QRect  py_q_itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const { return QStyle::itemPixmapRect(r, flags, pixmap); }
inline int  py_q_layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const { return this->layoutSpacing(control1, control2, orientation, option, widget); }
inline int  py_q_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const { return this->pixelMetric(metric, option, widget); }
inline void py_q_polish(QApplication*  application) { QStyle::polish(application); }
inline void py_q_polish(QPalette&  palette) { QStyle::polish(palette); }
inline void py_q_polish(QWidget*  widget) { QStyle::polish(widget); }
inline QSize  py_q_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  w = nullptr) const { return this->sizeFromContents(ct, opt, contentsSize, w); }
inline QIcon  py_q_standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const { return this->standardIcon(standardIcon, option, widget); }
inline QPalette  py_q_standardPalette() const { return QStyle::standardPalette(); }
inline QPixmap  py_q_standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const { return this->standardPixmap(standardPixmap, opt, widget); }
inline int  py_q_styleHint(QStyle::StyleHint  stylehint, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr, QStyleHintReturn*  returnData = nullptr) const { return this->styleHint(stylehint, opt, widget, returnData); }
inline QRect  py_q_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = nullptr) const { return this->subControlRect(cc, opt, sc, widget); }
inline QRect  py_q_subElementRect(QStyle::SubElement  subElement, const QStyleOption*  option, const QWidget*  widget = nullptr) const { return this->subElementRect(subElement, option, widget); }
inline void py_q_unpolish(QApplication*  application) { QStyle::unpolish(application); }
inline void py_q_unpolish(QWidget*  widget) { QStyle::unpolish(widget); }
};

class PythonQtWrapper_QStyle : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StateFlag SubControl )
Q_FLAGS(State SubControls )
enum StateFlag{
  State_None = QStyle::State_None,   State_Enabled = QStyle::State_Enabled,   State_Raised = QStyle::State_Raised,   State_Sunken = QStyle::State_Sunken,   State_Off = QStyle::State_Off,   State_NoChange = QStyle::State_NoChange,   State_On = QStyle::State_On,   State_DownArrow = QStyle::State_DownArrow,   State_Horizontal = QStyle::State_Horizontal,   State_HasFocus = QStyle::State_HasFocus,   State_Top = QStyle::State_Top,   State_Bottom = QStyle::State_Bottom,   State_FocusAtBorder = QStyle::State_FocusAtBorder,   State_AutoRaise = QStyle::State_AutoRaise,   State_MouseOver = QStyle::State_MouseOver,   State_UpArrow = QStyle::State_UpArrow,   State_Selected = QStyle::State_Selected,   State_Active = QStyle::State_Active,   State_Window = QStyle::State_Window,   State_Open = QStyle::State_Open,   State_Children = QStyle::State_Children,   State_Item = QStyle::State_Item,   State_Sibling = QStyle::State_Sibling,   State_Editing = QStyle::State_Editing,   State_KeyboardFocusChange = QStyle::State_KeyboardFocusChange,   State_ReadOnly = QStyle::State_ReadOnly,   State_Small = QStyle::State_Small,   State_Mini = QStyle::State_Mini};
enum SubControl{
  SC_None = QStyle::SC_None,   SC_ScrollBarAddLine = QStyle::SC_ScrollBarAddLine,   SC_ScrollBarSubLine = QStyle::SC_ScrollBarSubLine,   SC_ScrollBarAddPage = QStyle::SC_ScrollBarAddPage,   SC_ScrollBarSubPage = QStyle::SC_ScrollBarSubPage,   SC_ScrollBarFirst = QStyle::SC_ScrollBarFirst,   SC_ScrollBarLast = QStyle::SC_ScrollBarLast,   SC_ScrollBarSlider = QStyle::SC_ScrollBarSlider,   SC_ScrollBarGroove = QStyle::SC_ScrollBarGroove,   SC_SpinBoxUp = QStyle::SC_SpinBoxUp,   SC_SpinBoxDown = QStyle::SC_SpinBoxDown,   SC_SpinBoxFrame = QStyle::SC_SpinBoxFrame,   SC_SpinBoxEditField = QStyle::SC_SpinBoxEditField,   SC_ComboBoxFrame = QStyle::SC_ComboBoxFrame,   SC_ComboBoxEditField = QStyle::SC_ComboBoxEditField,   SC_ComboBoxArrow = QStyle::SC_ComboBoxArrow,   SC_ComboBoxListBoxPopup = QStyle::SC_ComboBoxListBoxPopup,   SC_SliderGroove = QStyle::SC_SliderGroove,   SC_SliderHandle = QStyle::SC_SliderHandle,   SC_SliderTickmarks = QStyle::SC_SliderTickmarks,   SC_ToolButton = QStyle::SC_ToolButton,   SC_ToolButtonMenu = QStyle::SC_ToolButtonMenu,   SC_TitleBarSysMenu = QStyle::SC_TitleBarSysMenu,   SC_TitleBarMinButton = QStyle::SC_TitleBarMinButton,   SC_TitleBarMaxButton = QStyle::SC_TitleBarMaxButton,   SC_TitleBarCloseButton = QStyle::SC_TitleBarCloseButton,   SC_TitleBarNormalButton = QStyle::SC_TitleBarNormalButton,   SC_TitleBarShadeButton = QStyle::SC_TitleBarShadeButton,   SC_TitleBarUnshadeButton = QStyle::SC_TitleBarUnshadeButton,   SC_TitleBarContextHelpButton = QStyle::SC_TitleBarContextHelpButton,   SC_TitleBarLabel = QStyle::SC_TitleBarLabel,   SC_DialGroove = QStyle::SC_DialGroove,   SC_DialHandle = QStyle::SC_DialHandle,   SC_DialTickmarks = QStyle::SC_DialTickmarks,   SC_GroupBoxCheckBox = QStyle::SC_GroupBoxCheckBox,   SC_GroupBoxLabel = QStyle::SC_GroupBoxLabel,   SC_GroupBoxContents = QStyle::SC_GroupBoxContents,   SC_GroupBoxFrame = QStyle::SC_GroupBoxFrame,   SC_MdiMinButton = QStyle::SC_MdiMinButton,   SC_MdiNormalButton = QStyle::SC_MdiNormalButton,   SC_MdiCloseButton = QStyle::SC_MdiCloseButton,   SC_CustomBase = QStyle::SC_CustomBase,   SC_All = QStyle::SC_All};
Q_DECLARE_FLAGS(State, StateFlag)
Q_DECLARE_FLAGS(SubControls, SubControl)
public slots:
void delete_QStyle(QStyle* obj) { delete obj; }
   QRect  static_QStyle_alignedRect(Qt::LayoutDirection  direction, Qt::Alignment  alignment, const QSize&  size, const QRect&  rectangle);
   int  combinedLayoutSpacing(QStyle* theWrappedObject, QSizePolicy::ControlTypes  controls1, QSizePolicy::ControlTypes  controls2, Qt::Orientation  orientation, QStyleOption*  option = nullptr, QWidget*  widget = nullptr) const;
   void drawComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  widget = nullptr) const;
   void py_q_drawComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  widget = nullptr) const{  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_drawComplexControl(cc, opt, p, widget));}
   void drawControl(QStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const;
   void py_q_drawControl(QStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const{  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_drawControl(element, opt, p, w));}
   void drawItemPixmap(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
   void py_q_drawItemPixmap(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const{  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_drawItemPixmap(painter, rect, alignment, pixmap));}
   void drawItemText(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const;
   void py_q_drawItemText(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const{  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_drawItemText(painter, rect, flags, pal, enabled, text, textRole));}
   void drawPrimitive(QStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const;
   void py_q_drawPrimitive(QStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const{  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_drawPrimitive(pe, opt, p, w));}
   QPixmap  generatedIconPixmap(QStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
   QPixmap  py_q_generatedIconPixmap(QStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_generatedIconPixmap(iconMode, pixmap, opt));}
   QStyle::SubControl  hitTestComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  widget = nullptr) const;
   QStyle::SubControl  py_q_hitTestComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_hitTestComplexControl(cc, opt, pt, widget));}
   QRect  itemPixmapRect(QStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const;
   QRect  py_q_itemPixmapRect(QStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_itemPixmapRect(r, flags, pixmap));}
   int  layoutSpacing(QStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const;
   int  py_q_layoutSpacing(QStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_layoutSpacing(control1, control2, orientation, option, widget));}
   int  pixelMetric(QStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const;
   int  py_q_pixelMetric(QStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_pixelMetric(metric, option, widget));}
   void polish(QStyle* theWrappedObject, QApplication*  application);
   void py_q_polish(QStyle* theWrappedObject, QApplication*  application){  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_polish(application));}
   void polish(QStyle* theWrappedObject, QPalette&  palette);
   void py_q_polish(QStyle* theWrappedObject, QPalette&  palette){  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_polish(palette));}
   void polish(QStyle* theWrappedObject, QWidget*  widget);
   void py_q_polish(QStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_polish(widget));}
   const QStyle*  proxy(QStyle* theWrappedObject) const;
   QSize  sizeFromContents(QStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  w = nullptr) const;
   QSize  py_q_sizeFromContents(QStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  w = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_sizeFromContents(ct, opt, contentsSize, w));}
   int  static_QStyle_sliderPositionFromValue(int  min, int  max, int  val, int  space, bool  upsideDown = false);
   int  static_QStyle_sliderValueFromPosition(int  min, int  max, int  pos, int  space, bool  upsideDown = false);
   QIcon  standardIcon(QStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const;
   QIcon  py_q_standardIcon(QStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_standardIcon(standardIcon, option, widget));}
   QPalette  standardPalette(QStyle* theWrappedObject) const;
   QPalette  py_q_standardPalette(QStyle* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_standardPalette());}
   QPixmap  standardPixmap(QStyle* theWrappedObject, QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const;
   QPixmap  py_q_standardPixmap(QStyle* theWrappedObject, QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_standardPixmap(standardPixmap, opt, widget));}
   int  styleHint(QStyle* theWrappedObject, QStyle::StyleHint  stylehint, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr, QStyleHintReturn*  returnData = nullptr) const;
   int  py_q_styleHint(QStyle* theWrappedObject, QStyle::StyleHint  stylehint, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr, QStyleHintReturn*  returnData = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_styleHint(stylehint, opt, widget, returnData));}
   QRect  subControlRect(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = nullptr) const;
   QRect  py_q_subControlRect(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_subControlRect(cc, opt, sc, widget));}
   QRect  subElementRect(QStyle* theWrappedObject, QStyle::SubElement  subElement, const QStyleOption*  option, const QWidget*  widget = nullptr) const;
   QRect  py_q_subElementRect(QStyle* theWrappedObject, QStyle::SubElement  subElement, const QStyleOption*  option, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_subElementRect(subElement, option, widget));}
   void unpolish(QStyle* theWrappedObject, QApplication*  application);
   void py_q_unpolish(QStyle* theWrappedObject, QApplication*  application){  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_unpolish(application));}
   void unpolish(QStyle* theWrappedObject, QWidget*  widget);
   void py_q_unpolish(QStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_unpolish(widget));}
   Qt::Alignment  static_QStyle_visualAlignment(Qt::LayoutDirection  direction, Qt::Alignment  alignment);
   QPoint  static_QStyle_visualPos(Qt::LayoutDirection  direction, const QRect&  boundingRect, const QPoint&  logicalPos);
   QRect  static_QStyle_visualRect(Qt::LayoutDirection  direction, const QRect&  boundingRect, const QRect&  logicalRect);
};





class PythonQtShell_QStyleFactory : public QStyleFactory
{
public:
    PythonQtShell_QStyleFactory():QStyleFactory(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleFactory();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleFactory : public QObject
{ Q_OBJECT
public:
public slots:
QStyleFactory* new_QStyleFactory();
void delete_QStyleFactory(QStyleFactory* obj) { delete obj; }
   QStyle*  static_QStyleFactory_create(const QString&  arg__1);
   QStringList  static_QStyleFactory_keys();
};





class PythonQtShell_QStyleHintReturn : public QStyleHintReturn
{
public:
    PythonQtShell_QStyleHintReturn(int  version = QStyleOption::Version, int  type = SH_Default):QStyleHintReturn(version, type),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleHintReturn();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleHintReturn : public QObject
{ Q_OBJECT
public:
Q_ENUMS(HintReturnType StyleOptionType StyleOptionVersion )
enum HintReturnType{
  SH_Default = QStyleHintReturn::SH_Default,   SH_Mask = QStyleHintReturn::SH_Mask,   SH_Variant = QStyleHintReturn::SH_Variant};
enum StyleOptionType{
  Type = QStyleHintReturn::Type};
enum StyleOptionVersion{
  Version = QStyleHintReturn::Version};
public slots:
QStyleHintReturn* new_QStyleHintReturn(int  version = QStyleOption::Version, int  type = SH_Default);
void delete_QStyleHintReturn(QStyleHintReturn* obj) { delete obj; }
void py_set_type(QStyleHintReturn* theWrappedObject, int  type){ theWrappedObject->type = type; }
int  py_get_type(QStyleHintReturn* theWrappedObject){ return theWrappedObject->type; }
void py_set_version(QStyleHintReturn* theWrappedObject, int  version){ theWrappedObject->version = version; }
int  py_get_version(QStyleHintReturn* theWrappedObject){ return theWrappedObject->version; }
};





class PythonQtShell_QStyleHintReturnMask : public QStyleHintReturnMask
{
public:
    PythonQtShell_QStyleHintReturnMask():QStyleHintReturnMask(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleHintReturnMask();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleHintReturnMask : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleHintReturnMask::Type};
enum StyleOptionVersion{
  Version = QStyleHintReturnMask::Version};
public slots:
QStyleHintReturnMask* new_QStyleHintReturnMask();
void delete_QStyleHintReturnMask(QStyleHintReturnMask* obj) { delete obj; }
void py_set_region(QStyleHintReturnMask* theWrappedObject, QRegion  region){ theWrappedObject->region = region; }
QRegion  py_get_region(QStyleHintReturnMask* theWrappedObject){ return theWrappedObject->region; }
};





class PythonQtShell_QStyleHintReturnVariant : public QStyleHintReturnVariant
{
public:
    PythonQtShell_QStyleHintReturnVariant():QStyleHintReturnVariant(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleHintReturnVariant();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleHintReturnVariant : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleHintReturnVariant::Type};
enum StyleOptionVersion{
  Version = QStyleHintReturnVariant::Version};
public slots:
QStyleHintReturnVariant* new_QStyleHintReturnVariant();
void delete_QStyleHintReturnVariant(QStyleHintReturnVariant* obj) { delete obj; }
void py_set_variant(QStyleHintReturnVariant* theWrappedObject, QVariant  variant){ theWrappedObject->variant = variant; }
QVariant  py_get_variant(QStyleHintReturnVariant* theWrappedObject){ return theWrappedObject->variant; }
};





class PythonQtWrapper_QStyleHints : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QStyleHints(QStyleHints* obj) { delete obj; }
   int  cursorFlashTime(QStyleHints* theWrappedObject) const;
   qreal  fontSmoothingGamma(QStyleHints* theWrappedObject) const;
   int  keyboardAutoRepeatRate(QStyleHints* theWrappedObject) const;
   int  keyboardInputInterval(QStyleHints* theWrappedObject) const;
   int  mouseDoubleClickInterval(QStyleHints* theWrappedObject) const;
   int  mousePressAndHoldInterval(QStyleHints* theWrappedObject) const;
   int  mouseQuickSelectionThreshold(QStyleHints* theWrappedObject) const;
   QChar  passwordMaskCharacter(QStyleHints* theWrappedObject) const;
   int  passwordMaskDelay(QStyleHints* theWrappedObject) const;
   void setCursorFlashTime(QStyleHints* theWrappedObject, int  cursorFlashTime);
   bool  setFocusOnTouchRelease(QStyleHints* theWrappedObject) const;
   void setKeyboardInputInterval(QStyleHints* theWrappedObject, int  keyboardInputInterval);
   void setMouseDoubleClickInterval(QStyleHints* theWrappedObject, int  mouseDoubleClickInterval);
   void setMousePressAndHoldInterval(QStyleHints* theWrappedObject, int  mousePressAndHoldInterval);
   void setMouseQuickSelectionThreshold(QStyleHints* theWrappedObject, int  threshold);
   void setStartDragDistance(QStyleHints* theWrappedObject, int  startDragDistance);
   void setStartDragTime(QStyleHints* theWrappedObject, int  startDragTime);
   void setTabFocusBehavior(QStyleHints* theWrappedObject, Qt::TabFocusBehavior  tabFocusBehavior);
   void setUseHoverEffects(QStyleHints* theWrappedObject, bool  useHoverEffects);
   void setWheelScrollLines(QStyleHints* theWrappedObject, int  scrollLines);
   bool  showIsFullScreen(QStyleHints* theWrappedObject) const;
   bool  showIsMaximized(QStyleHints* theWrappedObject) const;
   bool  showShortcutsInContextMenus(QStyleHints* theWrappedObject) const;
   bool  singleClickActivation(QStyleHints* theWrappedObject) const;
   int  startDragDistance(QStyleHints* theWrappedObject) const;
   int  startDragTime(QStyleHints* theWrappedObject) const;
   int  startDragVelocity(QStyleHints* theWrappedObject) const;
   Qt::TabFocusBehavior  tabFocusBehavior(QStyleHints* theWrappedObject) const;
   bool  useHoverEffects(QStyleHints* theWrappedObject) const;
   bool  useRtlExtensions(QStyleHints* theWrappedObject) const;
   int  wheelScrollLines(QStyleHints* theWrappedObject) const;
};





class PythonQtShell_QStyleOption : public QStyleOption
{
public:
    PythonQtShell_QStyleOption(const QStyleOption&  other):QStyleOption(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOption(int  version = QStyleOption::Version, int  type = SO_Default):QStyleOption(version, type),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOption();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOption : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptionType StyleOptionType StyleOptionVersion )
enum OptionType{
  SO_Default = QStyleOption::SO_Default,   SO_FocusRect = QStyleOption::SO_FocusRect,   SO_Button = QStyleOption::SO_Button,   SO_Tab = QStyleOption::SO_Tab,   SO_MenuItem = QStyleOption::SO_MenuItem,   SO_Frame = QStyleOption::SO_Frame,   SO_ProgressBar = QStyleOption::SO_ProgressBar,   SO_ToolBox = QStyleOption::SO_ToolBox,   SO_Header = QStyleOption::SO_Header,   SO_DockWidget = QStyleOption::SO_DockWidget,   SO_ViewItem = QStyleOption::SO_ViewItem,   SO_TabWidgetFrame = QStyleOption::SO_TabWidgetFrame,   SO_TabBarBase = QStyleOption::SO_TabBarBase,   SO_RubberBand = QStyleOption::SO_RubberBand,   SO_ToolBar = QStyleOption::SO_ToolBar,   SO_GraphicsItem = QStyleOption::SO_GraphicsItem,   SO_Complex = QStyleOption::SO_Complex,   SO_Slider = QStyleOption::SO_Slider,   SO_SpinBox = QStyleOption::SO_SpinBox,   SO_ToolButton = QStyleOption::SO_ToolButton,   SO_ComboBox = QStyleOption::SO_ComboBox,   SO_TitleBar = QStyleOption::SO_TitleBar,   SO_GroupBox = QStyleOption::SO_GroupBox,   SO_SizeGrip = QStyleOption::SO_SizeGrip,   SO_CustomBase = QStyleOption::SO_CustomBase,   SO_ComplexCustomBase = QStyleOption::SO_ComplexCustomBase};
enum StyleOptionType{
  Type = QStyleOption::Type};
enum StyleOptionVersion{
  Version = QStyleOption::Version};
public slots:
QStyleOption* new_QStyleOption(const QStyleOption&  other);
QStyleOption* new_QStyleOption(int  version = QStyleOption::Version, int  type = SO_Default);
void delete_QStyleOption(QStyleOption* obj) { delete obj; }
   void initFrom(QStyleOption* theWrappedObject, const QWidget*  w);
    QString py_toString(QStyleOption*);
void py_set_direction(QStyleOption* theWrappedObject, Qt::LayoutDirection  direction){ theWrappedObject->direction = direction; }
Qt::LayoutDirection  py_get_direction(QStyleOption* theWrappedObject){ return theWrappedObject->direction; }
void py_set_fontMetrics(QStyleOption* theWrappedObject, QFontMetrics  fontMetrics){ theWrappedObject->fontMetrics = fontMetrics; }
QFontMetrics  py_get_fontMetrics(QStyleOption* theWrappedObject){ return theWrappedObject->fontMetrics; }
void py_set_palette(QStyleOption* theWrappedObject, QPalette  palette){ theWrappedObject->palette = palette; }
QPalette  py_get_palette(QStyleOption* theWrappedObject){ return theWrappedObject->palette; }
void py_set_rect(QStyleOption* theWrappedObject, QRect  rect){ theWrappedObject->rect = rect; }
QRect  py_get_rect(QStyleOption* theWrappedObject){ return theWrappedObject->rect; }
void py_set_state(QStyleOption* theWrappedObject, QStyle::State  state){ theWrappedObject->state = state; }
QStyle::State  py_get_state(QStyleOption* theWrappedObject){ return theWrappedObject->state; }
void py_set_styleObject(QStyleOption* theWrappedObject, QObject*  styleObject){ theWrappedObject->styleObject = styleObject; }
QObject*  py_get_styleObject(QStyleOption* theWrappedObject){ return theWrappedObject->styleObject; }
void py_set_type(QStyleOption* theWrappedObject, int  type){ theWrappedObject->type = type; }
int  py_get_type(QStyleOption* theWrappedObject){ return theWrappedObject->type; }
void py_set_version(QStyleOption* theWrappedObject, int  version){ theWrappedObject->version = version; }
int  py_get_version(QStyleOption* theWrappedObject){ return theWrappedObject->version; }
};





class PythonQtShell_QStyleOptionButton : public QStyleOptionButton
{
public:
    PythonQtShell_QStyleOptionButton():QStyleOptionButton(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionButton(const QStyleOptionButton&  other):QStyleOptionButton(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionButton(int  version):QStyleOptionButton(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionButton();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionButton : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonFeature StyleOptionType StyleOptionVersion )
Q_FLAGS(ButtonFeatures )
enum ButtonFeature{
  None = QStyleOptionButton::None,   Flat = QStyleOptionButton::Flat,   HasMenu = QStyleOptionButton::HasMenu,   DefaultButton = QStyleOptionButton::DefaultButton,   AutoDefaultButton = QStyleOptionButton::AutoDefaultButton,   CommandLinkButton = QStyleOptionButton::CommandLinkButton};
enum StyleOptionType{
  Type = QStyleOptionButton::Type};
enum StyleOptionVersion{
  Version = QStyleOptionButton::Version};
Q_DECLARE_FLAGS(ButtonFeatures, ButtonFeature)
public slots:
QStyleOptionButton* new_QStyleOptionButton();
QStyleOptionButton* new_QStyleOptionButton(const QStyleOptionButton&  other);
QStyleOptionButton* new_QStyleOptionButton(int  version);
void delete_QStyleOptionButton(QStyleOptionButton* obj) { delete obj; }
void py_set_features(QStyleOptionButton* theWrappedObject, QStyleOptionButton::ButtonFeatures  features){ theWrappedObject->features = features; }
QStyleOptionButton::ButtonFeatures  py_get_features(QStyleOptionButton* theWrappedObject){ return theWrappedObject->features; }
void py_set_icon(QStyleOptionButton* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionButton* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconSize(QStyleOptionButton* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionButton* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_text(QStyleOptionButton* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionButton* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionComboBox : public QStyleOptionComboBox
{
public:
    PythonQtShell_QStyleOptionComboBox():QStyleOptionComboBox(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionComboBox(const QStyleOptionComboBox&  other):QStyleOptionComboBox(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionComboBox(int  version):QStyleOptionComboBox(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionComboBox();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionComboBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionComboBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionComboBox::Version};
public slots:
QStyleOptionComboBox* new_QStyleOptionComboBox();
QStyleOptionComboBox* new_QStyleOptionComboBox(const QStyleOptionComboBox&  other);
QStyleOptionComboBox* new_QStyleOptionComboBox(int  version);
void delete_QStyleOptionComboBox(QStyleOptionComboBox* obj) { delete obj; }
void py_set_currentIcon(QStyleOptionComboBox* theWrappedObject, QIcon  currentIcon){ theWrappedObject->currentIcon = currentIcon; }
QIcon  py_get_currentIcon(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->currentIcon; }
void py_set_currentText(QStyleOptionComboBox* theWrappedObject, QString  currentText){ theWrappedObject->currentText = currentText; }
QString  py_get_currentText(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->currentText; }
void py_set_editable(QStyleOptionComboBox* theWrappedObject, bool  editable){ theWrappedObject->editable = editable; }
bool  py_get_editable(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->editable; }
void py_set_frame(QStyleOptionComboBox* theWrappedObject, bool  frame){ theWrappedObject->frame = frame; }
bool  py_get_frame(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->frame; }
void py_set_iconSize(QStyleOptionComboBox* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_popupRect(QStyleOptionComboBox* theWrappedObject, QRect  popupRect){ theWrappedObject->popupRect = popupRect; }
QRect  py_get_popupRect(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->popupRect; }
};





class PythonQtShell_QStyleOptionDockWidget : public QStyleOptionDockWidget
{
public:
    PythonQtShell_QStyleOptionDockWidget():QStyleOptionDockWidget(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionDockWidget(const QStyleOptionDockWidget&  other):QStyleOptionDockWidget(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionDockWidget(int  version):QStyleOptionDockWidget(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionDockWidget();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionDockWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionDockWidget::Type};
enum StyleOptionVersion{
  Version = QStyleOptionDockWidget::Version};
public slots:
QStyleOptionDockWidget* new_QStyleOptionDockWidget();
QStyleOptionDockWidget* new_QStyleOptionDockWidget(const QStyleOptionDockWidget&  other);
QStyleOptionDockWidget* new_QStyleOptionDockWidget(int  version);
void delete_QStyleOptionDockWidget(QStyleOptionDockWidget* obj) { delete obj; }
void py_set_closable(QStyleOptionDockWidget* theWrappedObject, bool  closable){ theWrappedObject->closable = closable; }
bool  py_get_closable(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->closable; }
void py_set_floatable(QStyleOptionDockWidget* theWrappedObject, bool  floatable){ theWrappedObject->floatable = floatable; }
bool  py_get_floatable(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->floatable; }
void py_set_movable(QStyleOptionDockWidget* theWrappedObject, bool  movable){ theWrappedObject->movable = movable; }
bool  py_get_movable(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->movable; }
void py_set_title(QStyleOptionDockWidget* theWrappedObject, QString  title){ theWrappedObject->title = title; }
QString  py_get_title(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->title; }
void py_set_verticalTitleBar(QStyleOptionDockWidget* theWrappedObject, bool  verticalTitleBar){ theWrappedObject->verticalTitleBar = verticalTitleBar; }
bool  py_get_verticalTitleBar(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->verticalTitleBar; }
};





class PythonQtShell_QStyleOptionDockWidgetV2 : public QStyleOptionDockWidgetV2
{
public:
    PythonQtShell_QStyleOptionDockWidgetV2():QStyleOptionDockWidgetV2(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionDockWidgetV2();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionDockWidgetV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionDockWidgetV2* new_QStyleOptionDockWidgetV2();
QStyleOptionDockWidgetV2* new_QStyleOptionDockWidgetV2(const QStyleOptionDockWidgetV2& other) {
PythonQtShell_QStyleOptionDockWidgetV2* a = new PythonQtShell_QStyleOptionDockWidgetV2();
*((QStyleOptionDockWidgetV2*)a) = other;
return a; }
void delete_QStyleOptionDockWidgetV2(QStyleOptionDockWidgetV2* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionFocusRect : public QStyleOptionFocusRect
{
public:
    PythonQtShell_QStyleOptionFocusRect():QStyleOptionFocusRect(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other):QStyleOptionFocusRect(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionFocusRect(int  version):QStyleOptionFocusRect(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionFocusRect();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionFocusRect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionFocusRect::Type};
enum StyleOptionVersion{
  Version = QStyleOptionFocusRect::Version};
public slots:
QStyleOptionFocusRect* new_QStyleOptionFocusRect();
QStyleOptionFocusRect* new_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other);
QStyleOptionFocusRect* new_QStyleOptionFocusRect(int  version);
void delete_QStyleOptionFocusRect(QStyleOptionFocusRect* obj) { delete obj; }
void py_set_backgroundColor(QStyleOptionFocusRect* theWrappedObject, QColor  backgroundColor){ theWrappedObject->backgroundColor = backgroundColor; }
QColor  py_get_backgroundColor(QStyleOptionFocusRect* theWrappedObject){ return theWrappedObject->backgroundColor; }
};





class PythonQtShell_QStyleOptionFrame : public QStyleOptionFrame
{
public:
    PythonQtShell_QStyleOptionFrame():QStyleOptionFrame(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionFrame(const QStyleOptionFrame&  other):QStyleOptionFrame(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionFrame(int  version):QStyleOptionFrame(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionFrame();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FrameFeature StyleOptionType StyleOptionVersion )
Q_FLAGS(FrameFeatures )
enum FrameFeature{
  None = QStyleOptionFrame::None,   Flat = QStyleOptionFrame::Flat,   Rounded = QStyleOptionFrame::Rounded};
enum StyleOptionType{
  Type = QStyleOptionFrame::Type};
enum StyleOptionVersion{
  Version = QStyleOptionFrame::Version};
Q_DECLARE_FLAGS(FrameFeatures, FrameFeature)
public slots:
QStyleOptionFrame* new_QStyleOptionFrame();
QStyleOptionFrame* new_QStyleOptionFrame(const QStyleOptionFrame&  other);
QStyleOptionFrame* new_QStyleOptionFrame(int  version);
void delete_QStyleOptionFrame(QStyleOptionFrame* obj) { delete obj; }
void py_set_features(QStyleOptionFrame* theWrappedObject, QStyleOptionFrame::FrameFeatures  features){ theWrappedObject->features = features; }
QStyleOptionFrame::FrameFeatures  py_get_features(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->features; }
void py_set_frameShape(QStyleOptionFrame* theWrappedObject, QFrame::Shape  frameShape){ theWrappedObject->frameShape = frameShape; }
QFrame::Shape  py_get_frameShape(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->frameShape; }
void py_set_lineWidth(QStyleOptionFrame* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionFrame* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->midLineWidth; }
};





class PythonQtShell_QStyleOptionFrameV2 : public QStyleOptionFrameV2
{
public:
    PythonQtShell_QStyleOptionFrameV2():QStyleOptionFrameV2(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionFrameV2();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionFrameV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionFrameV2* new_QStyleOptionFrameV2();
QStyleOptionFrameV2* new_QStyleOptionFrameV2(const QStyleOptionFrameV2& other) {
PythonQtShell_QStyleOptionFrameV2* a = new PythonQtShell_QStyleOptionFrameV2();
*((QStyleOptionFrameV2*)a) = other;
return a; }
void delete_QStyleOptionFrameV2(QStyleOptionFrameV2* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionFrameV3 : public QStyleOptionFrameV3
{
public:
    PythonQtShell_QStyleOptionFrameV3():QStyleOptionFrameV3(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionFrameV3();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionFrameV3 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionFrameV3* new_QStyleOptionFrameV3();
QStyleOptionFrameV3* new_QStyleOptionFrameV3(const QStyleOptionFrameV3& other) {
PythonQtShell_QStyleOptionFrameV3* a = new PythonQtShell_QStyleOptionFrameV3();
*((QStyleOptionFrameV3*)a) = other;
return a; }
void delete_QStyleOptionFrameV3(QStyleOptionFrameV3* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionGraphicsItem : public QStyleOptionGraphicsItem
{
public:
    PythonQtShell_QStyleOptionGraphicsItem():QStyleOptionGraphicsItem(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem&  other):QStyleOptionGraphicsItem(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionGraphicsItem(int  version):QStyleOptionGraphicsItem(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionGraphicsItem();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionGraphicsItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionGraphicsItem::Type};
enum StyleOptionVersion{
  Version = QStyleOptionGraphicsItem::Version};
public slots:
QStyleOptionGraphicsItem* new_QStyleOptionGraphicsItem();
QStyleOptionGraphicsItem* new_QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem&  other);
QStyleOptionGraphicsItem* new_QStyleOptionGraphicsItem(int  version);
void delete_QStyleOptionGraphicsItem(QStyleOptionGraphicsItem* obj) { delete obj; }
   qreal  static_QStyleOptionGraphicsItem_levelOfDetailFromTransform(const QTransform&  worldTransform);
void py_set_exposedRect(QStyleOptionGraphicsItem* theWrappedObject, QRectF  exposedRect){ theWrappedObject->exposedRect = exposedRect; }
QRectF  py_get_exposedRect(QStyleOptionGraphicsItem* theWrappedObject){ return theWrappedObject->exposedRect; }
void py_set_levelOfDetail(QStyleOptionGraphicsItem* theWrappedObject, qreal  levelOfDetail){ theWrappedObject->levelOfDetail = levelOfDetail; }
qreal  py_get_levelOfDetail(QStyleOptionGraphicsItem* theWrappedObject){ return theWrappedObject->levelOfDetail; }
void py_set_matrix(QStyleOptionGraphicsItem* theWrappedObject, QMatrix  matrix){ theWrappedObject->matrix = matrix; }
QMatrix  py_get_matrix(QStyleOptionGraphicsItem* theWrappedObject){ return theWrappedObject->matrix; }
};





class PythonQtShell_QStyleOptionGroupBox : public QStyleOptionGroupBox
{
public:
    PythonQtShell_QStyleOptionGroupBox():QStyleOptionGroupBox(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionGroupBox(const QStyleOptionGroupBox&  other):QStyleOptionGroupBox(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionGroupBox(int  version):QStyleOptionGroupBox(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionGroupBox();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionGroupBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionGroupBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionGroupBox::Version};
public slots:
QStyleOptionGroupBox* new_QStyleOptionGroupBox();
QStyleOptionGroupBox* new_QStyleOptionGroupBox(const QStyleOptionGroupBox&  other);
QStyleOptionGroupBox* new_QStyleOptionGroupBox(int  version);
void delete_QStyleOptionGroupBox(QStyleOptionGroupBox* obj) { delete obj; }
void py_set_features(QStyleOptionGroupBox* theWrappedObject, QStyleOptionFrame::FrameFeatures  features){ theWrappedObject->features = features; }
QStyleOptionFrame::FrameFeatures  py_get_features(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->features; }
void py_set_lineWidth(QStyleOptionGroupBox* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionGroupBox* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->midLineWidth; }
void py_set_text(QStyleOptionGroupBox* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->text; }
void py_set_textAlignment(QStyleOptionGroupBox* theWrappedObject, Qt::Alignment  textAlignment){ theWrappedObject->textAlignment = textAlignment; }
Qt::Alignment  py_get_textAlignment(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->textAlignment; }
void py_set_textColor(QStyleOptionGroupBox* theWrappedObject, QColor  textColor){ theWrappedObject->textColor = textColor; }
QColor  py_get_textColor(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->textColor; }
};





class PythonQtShell_QStyleOptionHeader : public QStyleOptionHeader
{
public:
    PythonQtShell_QStyleOptionHeader():QStyleOptionHeader(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionHeader(const QStyleOptionHeader&  other):QStyleOptionHeader(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionHeader(int  version):QStyleOptionHeader(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionHeader();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionHeader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SectionPosition SelectedPosition SortIndicator StyleOptionType StyleOptionVersion )
enum SectionPosition{
  Beginning = QStyleOptionHeader::Beginning,   Middle = QStyleOptionHeader::Middle,   End = QStyleOptionHeader::End,   OnlyOneSection = QStyleOptionHeader::OnlyOneSection};
enum SelectedPosition{
  NotAdjacent = QStyleOptionHeader::NotAdjacent,   NextIsSelected = QStyleOptionHeader::NextIsSelected,   PreviousIsSelected = QStyleOptionHeader::PreviousIsSelected,   NextAndPreviousAreSelected = QStyleOptionHeader::NextAndPreviousAreSelected};
enum SortIndicator{
  None = QStyleOptionHeader::None,   SortUp = QStyleOptionHeader::SortUp,   SortDown = QStyleOptionHeader::SortDown};
enum StyleOptionType{
  Type = QStyleOptionHeader::Type};
enum StyleOptionVersion{
  Version = QStyleOptionHeader::Version};
public slots:
QStyleOptionHeader* new_QStyleOptionHeader();
QStyleOptionHeader* new_QStyleOptionHeader(const QStyleOptionHeader&  other);
QStyleOptionHeader* new_QStyleOptionHeader(int  version);
void delete_QStyleOptionHeader(QStyleOptionHeader* obj) { delete obj; }
void py_set_icon(QStyleOptionHeader* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconAlignment(QStyleOptionHeader* theWrappedObject, Qt::Alignment  iconAlignment){ theWrappedObject->iconAlignment = iconAlignment; }
Qt::Alignment  py_get_iconAlignment(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->iconAlignment; }
void py_set_orientation(QStyleOptionHeader* theWrappedObject, Qt::Orientation  orientation){ theWrappedObject->orientation = orientation; }
Qt::Orientation  py_get_orientation(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->orientation; }
void py_set_position(QStyleOptionHeader* theWrappedObject, QStyleOptionHeader::SectionPosition  position){ theWrappedObject->position = position; }
QStyleOptionHeader::SectionPosition  py_get_position(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->position; }
void py_set_section(QStyleOptionHeader* theWrappedObject, int  section){ theWrappedObject->section = section; }
int  py_get_section(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->section; }
void py_set_selectedPosition(QStyleOptionHeader* theWrappedObject, QStyleOptionHeader::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionHeader::SelectedPosition  py_get_selectedPosition(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->selectedPosition; }
QStyleOptionHeader::SortIndicator*  py_get_sortIndicator(QStyleOptionHeader* theWrappedObject){ return &theWrappedObject->sortIndicator; }
void py_set_text(QStyleOptionHeader* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->text; }
void py_set_textAlignment(QStyleOptionHeader* theWrappedObject, Qt::Alignment  textAlignment){ theWrappedObject->textAlignment = textAlignment; }
Qt::Alignment  py_get_textAlignment(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->textAlignment; }
};





class PythonQtShell_QStyleOptionMenuItem : public QStyleOptionMenuItem
{
public:
    PythonQtShell_QStyleOptionMenuItem():QStyleOptionMenuItem(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionMenuItem(const QStyleOptionMenuItem&  other):QStyleOptionMenuItem(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionMenuItem(int  version):QStyleOptionMenuItem(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionMenuItem();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionMenuItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CheckType MenuItemType StyleOptionType StyleOptionVersion )
enum CheckType{
  NotCheckable = QStyleOptionMenuItem::NotCheckable,   Exclusive = QStyleOptionMenuItem::Exclusive,   NonExclusive = QStyleOptionMenuItem::NonExclusive};
enum MenuItemType{
  Normal = QStyleOptionMenuItem::Normal,   DefaultItem = QStyleOptionMenuItem::DefaultItem,   Separator = QStyleOptionMenuItem::Separator,   SubMenu = QStyleOptionMenuItem::SubMenu,   Scroller = QStyleOptionMenuItem::Scroller,   TearOff = QStyleOptionMenuItem::TearOff,   Margin = QStyleOptionMenuItem::Margin,   EmptyArea = QStyleOptionMenuItem::EmptyArea};
enum StyleOptionType{
  Type = QStyleOptionMenuItem::Type};
enum StyleOptionVersion{
  Version = QStyleOptionMenuItem::Version};
public slots:
QStyleOptionMenuItem* new_QStyleOptionMenuItem();
QStyleOptionMenuItem* new_QStyleOptionMenuItem(const QStyleOptionMenuItem&  other);
QStyleOptionMenuItem* new_QStyleOptionMenuItem(int  version);
void delete_QStyleOptionMenuItem(QStyleOptionMenuItem* obj) { delete obj; }
void py_set_checkType(QStyleOptionMenuItem* theWrappedObject, QStyleOptionMenuItem::CheckType  checkType){ theWrappedObject->checkType = checkType; }
QStyleOptionMenuItem::CheckType  py_get_checkType(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->checkType; }
void py_set_checked(QStyleOptionMenuItem* theWrappedObject, bool  checked){ theWrappedObject->checked = checked; }
bool  py_get_checked(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->checked; }
void py_set_font(QStyleOptionMenuItem* theWrappedObject, QFont  font){ theWrappedObject->font = font; }
QFont  py_get_font(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->font; }
void py_set_icon(QStyleOptionMenuItem* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->icon; }
void py_set_maxIconWidth(QStyleOptionMenuItem* theWrappedObject, int  maxIconWidth){ theWrappedObject->maxIconWidth = maxIconWidth; }
int  py_get_maxIconWidth(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->maxIconWidth; }
void py_set_menuHasCheckableItems(QStyleOptionMenuItem* theWrappedObject, bool  menuHasCheckableItems){ theWrappedObject->menuHasCheckableItems = menuHasCheckableItems; }
bool  py_get_menuHasCheckableItems(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->menuHasCheckableItems; }
void py_set_menuItemType(QStyleOptionMenuItem* theWrappedObject, QStyleOptionMenuItem::MenuItemType  menuItemType){ theWrappedObject->menuItemType = menuItemType; }
QStyleOptionMenuItem::MenuItemType  py_get_menuItemType(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->menuItemType; }
void py_set_menuRect(QStyleOptionMenuItem* theWrappedObject, QRect  menuRect){ theWrappedObject->menuRect = menuRect; }
QRect  py_get_menuRect(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->menuRect; }
void py_set_tabWidth(QStyleOptionMenuItem* theWrappedObject, int  tabWidth){ theWrappedObject->tabWidth = tabWidth; }
int  py_get_tabWidth(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->tabWidth; }
void py_set_text(QStyleOptionMenuItem* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionProgressBar : public QStyleOptionProgressBar
{
public:
    PythonQtShell_QStyleOptionProgressBar():QStyleOptionProgressBar(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other):QStyleOptionProgressBar(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionProgressBar(int  version):QStyleOptionProgressBar(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionProgressBar();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionProgressBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionProgressBar::Type};
enum StyleOptionVersion{
  Version = QStyleOptionProgressBar::Version};
public slots:
QStyleOptionProgressBar* new_QStyleOptionProgressBar();
QStyleOptionProgressBar* new_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other);
QStyleOptionProgressBar* new_QStyleOptionProgressBar(int  version);
void delete_QStyleOptionProgressBar(QStyleOptionProgressBar* obj) { delete obj; }
void py_set_bottomToTop(QStyleOptionProgressBar* theWrappedObject, bool  bottomToTop){ theWrappedObject->bottomToTop = bottomToTop; }
bool  py_get_bottomToTop(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->bottomToTop; }
void py_set_invertedAppearance(QStyleOptionProgressBar* theWrappedObject, bool  invertedAppearance){ theWrappedObject->invertedAppearance = invertedAppearance; }
bool  py_get_invertedAppearance(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->invertedAppearance; }
void py_set_maximum(QStyleOptionProgressBar* theWrappedObject, int  maximum){ theWrappedObject->maximum = maximum; }
int  py_get_maximum(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->maximum; }
void py_set_minimum(QStyleOptionProgressBar* theWrappedObject, int  minimum){ theWrappedObject->minimum = minimum; }
int  py_get_minimum(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->minimum; }
void py_set_orientation(QStyleOptionProgressBar* theWrappedObject, Qt::Orientation  orientation){ theWrappedObject->orientation = orientation; }
Qt::Orientation  py_get_orientation(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->orientation; }
void py_set_progress(QStyleOptionProgressBar* theWrappedObject, int  progress){ theWrappedObject->progress = progress; }
int  py_get_progress(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->progress; }
void py_set_text(QStyleOptionProgressBar* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->text; }
void py_set_textAlignment(QStyleOptionProgressBar* theWrappedObject, Qt::Alignment  textAlignment){ theWrappedObject->textAlignment = textAlignment; }
Qt::Alignment  py_get_textAlignment(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->textAlignment; }
void py_set_textVisible(QStyleOptionProgressBar* theWrappedObject, bool  textVisible){ theWrappedObject->textVisible = textVisible; }
bool  py_get_textVisible(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->textVisible; }
};



#include <PythonQt.h>
#include <QObject>
#include <QPainterPath>
#include <QPixmap>
#include <QVarLengthArray>
#include <QVariant>
#include <QWidget>
#include <qabstracttextdocumentlayout.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgesture.h>
#include <qglyphrun.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qopenglcontext.h>
#include <qopenglvertexarrayobject.h>
#include <qopenglwidget.h>
#include <qopenglwindow.h>
#include <qpagedpaintdevice.h>
#include <qpagelayout.h>
#include <qpagesetupdialog.h>
#include <qpagesize.h>
#include <qpaintdevice.h>
#include <qpaintdevicewindow.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpdfwriter.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpictureformatplugin.h>
#include <qpixelformat.h>
#include <qpixmap.h>
#include <qpixmapcache.h>
#include <qplaintextedit.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qregularexpression.h>
#include <qscreen.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstatictext.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qsurfaceformat.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qthread.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QOpenGLVertexArrayObject : public QOpenGLVertexArrayObject
{
public:
    PythonQtShell_QOpenGLVertexArrayObject(QObject*  parent = nullptr):QOpenGLVertexArrayObject(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLVertexArrayObject() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QOpenGLVertexArrayObject : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLVertexArrayObject* new_QOpenGLVertexArrayObject(QObject*  parent = nullptr);
void delete_QOpenGLVertexArrayObject(QOpenGLVertexArrayObject* obj) { delete obj; }
   void bind(QOpenGLVertexArrayObject* theWrappedObject);
   bool  create(QOpenGLVertexArrayObject* theWrappedObject);
   void destroy(QOpenGLVertexArrayObject* theWrappedObject);
   bool  isCreated(QOpenGLVertexArrayObject* theWrappedObject) const;
   GLuint  objectId(QOpenGLVertexArrayObject* theWrappedObject) const;
   void release(QOpenGLVertexArrayObject* theWrappedObject);
};





class PythonQtShell_QOpenGLWidget : public QOpenGLWidget
{
public:
    PythonQtShell_QOpenGLWidget(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QOpenGLWidget(parent, f),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLWidget() override;

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
void initializeGL() override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  metric) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
void paintGL() override;
QPaintDevice*  redirected(QPoint*  p) const override;
void resizeEvent(QResizeEvent*  e) override;
void resizeGL(int  w, int  h) override;
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

class PythonQtPublicPromoter_QOpenGLWidget : public QOpenGLWidget
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initializeGL() { this->initializeGL(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return this->paintEngine(); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_paintGL() { this->paintGL(); }
inline QPaintDevice*  promoted_redirected(QPoint*  p) const { return this->redirected(p); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_resizeGL(int  w, int  h) { this->resizeGL(w, h); }
inline bool  py_q_event(QEvent*  e) { return QOpenGLWidget::event(e); }
inline void py_q_initializeGL() { QOpenGLWidget::initializeGL(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLWidget::metric(metric); }
inline QPaintEngine*  py_q_paintEngine() const { return QOpenGLWidget::paintEngine(); }
inline void py_q_paintEvent(QPaintEvent*  e) { QOpenGLWidget::paintEvent(e); }
inline void py_q_paintGL() { QOpenGLWidget::paintGL(); }
inline QPaintDevice*  py_q_redirected(QPoint*  p) const { return QOpenGLWidget::redirected(p); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QOpenGLWidget::resizeEvent(e); }
inline void py_q_resizeGL(int  w, int  h) { QOpenGLWidget::resizeGL(w, h); }
};

class PythonQtWrapper_QOpenGLWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(UpdateBehavior )
enum UpdateBehavior{
  NoPartialUpdate = QOpenGLWidget::NoPartialUpdate,   PartialUpdate = QOpenGLWidget::PartialUpdate};
public slots:
QOpenGLWidget* new_QOpenGLWidget(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QOpenGLWidget(QOpenGLWidget* obj) { delete obj; }
   QOpenGLContext*  context(QOpenGLWidget* theWrappedObject) const;
   GLuint  defaultFramebufferObject(QOpenGLWidget* theWrappedObject) const;
   void doneCurrent(QOpenGLWidget* theWrappedObject);
   bool  py_q_event(QOpenGLWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_event(e));}
   QSurfaceFormat  format(QOpenGLWidget* theWrappedObject) const;
   QImage  grabFramebuffer(QOpenGLWidget* theWrappedObject);
   void initializeGL(QOpenGLWidget* theWrappedObject);
   void py_q_initializeGL(QOpenGLWidget* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_initializeGL());}
   bool  isValid(QOpenGLWidget* theWrappedObject) const;
   void makeCurrent(QOpenGLWidget* theWrappedObject);
   int  py_q_metric(QOpenGLWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_metric(metric));}
   QPaintEngine*  py_q_paintEngine(QOpenGLWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintEngine());}
   void py_q_paintEvent(QOpenGLWidget* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintEvent(e));}
   void paintGL(QOpenGLWidget* theWrappedObject);
   void py_q_paintGL(QOpenGLWidget* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintGL());}
   QPaintDevice*  py_q_redirected(QOpenGLWidget* theWrappedObject, QPoint*  p) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_redirected(p));}
   void py_q_resizeEvent(QOpenGLWidget* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_resizeEvent(e));}
   void resizeGL(QOpenGLWidget* theWrappedObject, int  w, int  h);
   void py_q_resizeGL(QOpenGLWidget* theWrappedObject, int  w, int  h){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_resizeGL(w, h));}
   void setFormat(QOpenGLWidget* theWrappedObject, const QSurfaceFormat&  format);
   void setTextureFormat(QOpenGLWidget* theWrappedObject, GLenum  texFormat);
   void setUpdateBehavior(QOpenGLWidget* theWrappedObject, QOpenGLWidget::UpdateBehavior  updateBehavior);
   GLenum  textureFormat(QOpenGLWidget* theWrappedObject) const;
   QOpenGLWidget::UpdateBehavior  updateBehavior(QOpenGLWidget* theWrappedObject) const;
    bool __nonzero__(QOpenGLWidget* obj) { return obj->isValid(); }
};





class PythonQtShell_QOpenGLWindow : public QOpenGLWindow
{
public:
    PythonQtShell_QOpenGLWindow(QOpenGLContext*  shareContext, QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr):QOpenGLWindow(shareContext, updateBehavior, parent),_wrapper(nullptr) {};
    PythonQtShell_QOpenGLWindow(QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr):QOpenGLWindow(updateBehavior, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLWindow() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void exposeEvent(QExposeEvent*  arg__1) override;
void focusInEvent(QFocusEvent*  arg__1) override;
QObject*  focusObject() const override;
void focusOutEvent(QFocusEvent*  arg__1) override;
QSurfaceFormat  format() const override;
void hideEvent(QHideEvent*  arg__1) override;
void initPainter(QPainter*  painter) const override;
void initializeGL() override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  arg__1) override;
int  metric(QPaintDevice::PaintDeviceMetric  metric) const override;
void mouseDoubleClickEvent(QMouseEvent*  arg__1) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  arg__1) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
void paintEvent(QPaintEvent*  event) override;
void paintGL() override;
void paintOverGL() override;
void paintUnderGL() override;
QPaintDevice*  redirected(QPoint*  arg__1) const override;
void resizeEvent(QResizeEvent*  event) override;
void resizeGL(int  w, int  h) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  size() const override;
QSurface::SurfaceType  surfaceType() const override;
void tabletEvent(QTabletEvent*  arg__1) override;
void timerEvent(QTimerEvent*  event) override;
void touchEvent(QTouchEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QOpenGLWindow : public QOpenGLWindow
{ public:
inline void promoted_initializeGL() { this->initializeGL(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_paintGL() { this->paintGL(); }
inline void promoted_paintOverGL() { this->paintOverGL(); }
inline void promoted_paintUnderGL() { this->paintUnderGL(); }
inline QPaintDevice*  promoted_redirected(QPoint*  arg__1) const { return this->redirected(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_resizeGL(int  w, int  h) { this->resizeGL(w, h); }
inline void py_q_initializeGL() { QOpenGLWindow::initializeGL(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLWindow::metric(metric); }
inline void py_q_paintEvent(QPaintEvent*  event) { QOpenGLWindow::paintEvent(event); }
inline void py_q_paintGL() { QOpenGLWindow::paintGL(); }
inline void py_q_paintOverGL() { QOpenGLWindow::paintOverGL(); }
inline void py_q_paintUnderGL() { QOpenGLWindow::paintUnderGL(); }
inline QPaintDevice*  py_q_redirected(QPoint*  arg__1) const { return QOpenGLWindow::redirected(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QOpenGLWindow::resizeEvent(event); }
inline void py_q_resizeGL(int  w, int  h) { QOpenGLWindow::resizeGL(w, h); }
};

class PythonQtWrapper_QOpenGLWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(UpdateBehavior )
enum UpdateBehavior{
  NoPartialUpdate = QOpenGLWindow::NoPartialUpdate,   PartialUpdateBlit = QOpenGLWindow::PartialUpdateBlit,   PartialUpdateBlend = QOpenGLWindow::PartialUpdateBlend};
public slots:
QOpenGLWindow* new_QOpenGLWindow(QOpenGLContext*  shareContext, QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr);
QOpenGLWindow* new_QOpenGLWindow(QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr);
void delete_QOpenGLWindow(QOpenGLWindow* obj) { delete obj; }
   QOpenGLContext*  context(QOpenGLWindow* theWrappedObject) const;
   GLuint  defaultFramebufferObject(QOpenGLWindow* theWrappedObject) const;
   void doneCurrent(QOpenGLWindow* theWrappedObject);
   QImage  grabFramebuffer(QOpenGLWindow* theWrappedObject);
   void initializeGL(QOpenGLWindow* theWrappedObject);
   void py_q_initializeGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_initializeGL());}
   bool  isValid(QOpenGLWindow* theWrappedObject) const;
   void makeCurrent(QOpenGLWindow* theWrappedObject);
   int  py_q_metric(QOpenGLWindow* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_metric(metric));}
   void py_q_paintEvent(QOpenGLWindow* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintEvent(event));}
   void paintGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintGL());}
   void paintOverGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintOverGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintOverGL());}
   void paintUnderGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintUnderGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintUnderGL());}
   QPaintDevice*  py_q_redirected(QOpenGLWindow* theWrappedObject, QPoint*  arg__1) const{  return (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_redirected(arg__1));}
   void py_q_resizeEvent(QOpenGLWindow* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_resizeEvent(event));}
   void resizeGL(QOpenGLWindow* theWrappedObject, int  w, int  h);
   void py_q_resizeGL(QOpenGLWindow* theWrappedObject, int  w, int  h){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_resizeGL(w, h));}
   QOpenGLContext*  shareContext(QOpenGLWindow* theWrappedObject) const;
   QOpenGLWindow::UpdateBehavior  updateBehavior(QOpenGLWindow* theWrappedObject) const;
    bool __nonzero__(QOpenGLWindow* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QPageLayout : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode Orientation Unit )
enum Mode{
  StandardMode = QPageLayout::StandardMode,   FullPageMode = QPageLayout::FullPageMode};
enum Orientation{
  Portrait = QPageLayout::Portrait,   Landscape = QPageLayout::Landscape};
enum Unit{
  Millimeter = QPageLayout::Millimeter,   Point = QPageLayout::Point,   Inch = QPageLayout::Inch,   Pica = QPageLayout::Pica,   Didot = QPageLayout::Didot,   Cicero = QPageLayout::Cicero};
public slots:
QPageLayout* new_QPageLayout();
QPageLayout* new_QPageLayout(const QPageLayout&  other);
QPageLayout* new_QPageLayout(const QPageSize&  pageSize, QPageLayout::Orientation  orientation, const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Point, const QMarginsF&  minMargins = QMarginsF(0, 0, 0, 0));
void delete_QPageLayout(QPageLayout* obj) { delete obj; }
   QRectF  fullRect(QPageLayout* theWrappedObject) const;
   QRectF  fullRect(QPageLayout* theWrappedObject, QPageLayout::Unit  units) const;
   QRect  fullRectPixels(QPageLayout* theWrappedObject, int  resolution) const;
   QRect  fullRectPoints(QPageLayout* theWrappedObject) const;
   bool  isEquivalentTo(QPageLayout* theWrappedObject, const QPageLayout&  other) const;
   bool  isValid(QPageLayout* theWrappedObject) const;
   QMarginsF  margins(QPageLayout* theWrappedObject) const;
   QMarginsF  margins(QPageLayout* theWrappedObject, QPageLayout::Unit  units) const;
   QMargins  marginsPixels(QPageLayout* theWrappedObject, int  resolution) const;
   QMargins  marginsPoints(QPageLayout* theWrappedObject) const;
   QMarginsF  maximumMargins(QPageLayout* theWrappedObject) const;
   QMarginsF  minimumMargins(QPageLayout* theWrappedObject) const;
   QPageLayout::Mode  mode(QPageLayout* theWrappedObject) const;
   bool  __ne__(QPageLayout* theWrappedObject, const QPageLayout&  rhs);
   QPageLayout*  operator_assign(QPageLayout* theWrappedObject, const QPageLayout&  other);
   bool  __eq__(QPageLayout* theWrappedObject, const QPageLayout&  rhs);
   QPageLayout::Orientation  orientation(QPageLayout* theWrappedObject) const;
   QPageSize  pageSize(QPageLayout* theWrappedObject) const;
   QRectF  paintRect(QPageLayout* theWrappedObject) const;
   QRectF  paintRect(QPageLayout* theWrappedObject, QPageLayout::Unit  units) const;
   QRect  paintRectPixels(QPageLayout* theWrappedObject, int  resolution) const;
   QRect  paintRectPoints(QPageLayout* theWrappedObject) const;
   bool  setBottomMargin(QPageLayout* theWrappedObject, qreal  bottomMargin);
   bool  setLeftMargin(QPageLayout* theWrappedObject, qreal  leftMargin);
   bool  setMargins(QPageLayout* theWrappedObject, const QMarginsF&  margins);
   void setMinimumMargins(QPageLayout* theWrappedObject, const QMarginsF&  minMargins);
   void setMode(QPageLayout* theWrappedObject, QPageLayout::Mode  mode);
   void setOrientation(QPageLayout* theWrappedObject, QPageLayout::Orientation  orientation);
   void setPageSize(QPageLayout* theWrappedObject, const QPageSize&  pageSize, const QMarginsF&  minMargins = QMarginsF(0, 0, 0, 0));
   bool  setRightMargin(QPageLayout* theWrappedObject, qreal  rightMargin);
   bool  setTopMargin(QPageLayout* theWrappedObject, qreal  topMargin);
   void setUnits(QPageLayout* theWrappedObject, QPageLayout::Unit  units);
   void swap(QPageLayout* theWrappedObject, QPageLayout&  other);
   QPageLayout::Unit  units(QPageLayout* theWrappedObject) const;
    QString py_toString(QPageLayout*);
    bool __nonzero__(QPageLayout* obj) { return obj->isValid(); }
};





class PythonQtShell_QPageSetupDialog : public QPageSetupDialog
{
public:
    PythonQtShell_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = nullptr):QPageSetupDialog(printer, parent),_wrapper(nullptr) {};
    PythonQtShell_QPageSetupDialog(QWidget*  parent = nullptr):QPageSetupDialog(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPageSetupDialog() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void done(int  result) override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
int  exec() override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
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
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reject() override;
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

class PythonQtPublicPromoter_QPageSetupDialog : public QPageSetupDialog
{ public:
inline void py_q_done(int  result) { QPageSetupDialog::done(result); }
inline int  py_q_exec() { return QPageSetupDialog::exec(); }
};

class PythonQtWrapper_QPageSetupDialog : public QObject
{ Q_OBJECT
public:
public slots:
QPageSetupDialog* new_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = nullptr);
QPageSetupDialog* new_QPageSetupDialog(QWidget*  parent = nullptr);
void delete_QPageSetupDialog(QPageSetupDialog* obj) { delete obj; }
   void py_q_done(QPageSetupDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QPageSetupDialog*)theWrappedObject)->py_q_done(result));}
   int  py_q_exec(QPageSetupDialog* theWrappedObject){  return (((PythonQtPublicPromoter_QPageSetupDialog*)theWrappedObject)->py_q_exec());}
   void open(QPageSetupDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QPrinter*  printer(QPageSetupDialog* theWrappedObject);
};





class PythonQtWrapper_QPageSize : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PageSizeId SizeMatchPolicy Unit )
enum PageSizeId{
  A4 = QPageSize::A4,   B5 = QPageSize::B5,   Letter = QPageSize::Letter,   Legal = QPageSize::Legal,   Executive = QPageSize::Executive,   A0 = QPageSize::A0,   A1 = QPageSize::A1,   A2 = QPageSize::A2,   A3 = QPageSize::A3,   A5 = QPageSize::A5,   A6 = QPageSize::A6,   A7 = QPageSize::A7,   A8 = QPageSize::A8,   A9 = QPageSize::A9,   B0 = QPageSize::B0,   B1 = QPageSize::B1,   B10 = QPageSize::B10,   B2 = QPageSize::B2,   B3 = QPageSize::B3,   B4 = QPageSize::B4,   B6 = QPageSize::B6,   B7 = QPageSize::B7,   B8 = QPageSize::B8,   B9 = QPageSize::B9,   C5E = QPageSize::C5E,   Comm10E = QPageSize::Comm10E,   DLE = QPageSize::DLE,   Folio = QPageSize::Folio,   Ledger = QPageSize::Ledger,   Tabloid = QPageSize::Tabloid,   Custom = QPageSize::Custom,   A10 = QPageSize::A10,   A3Extra = QPageSize::A3Extra,   A4Extra = QPageSize::A4Extra,   A4Plus = QPageSize::A4Plus,   A4Small = QPageSize::A4Small,   A5Extra = QPageSize::A5Extra,   B5Extra = QPageSize::B5Extra,   JisB0 = QPageSize::JisB0,   JisB1 = QPageSize::JisB1,   JisB2 = QPageSize::JisB2,   JisB3 = QPageSize::JisB3,   JisB4 = QPageSize::JisB4,   JisB5 = QPageSize::JisB5,   JisB6 = QPageSize::JisB6,   JisB7 = QPageSize::JisB7,   JisB8 = QPageSize::JisB8,   JisB9 = QPageSize::JisB9,   JisB10 = QPageSize::JisB10,   AnsiC = QPageSize::AnsiC,   AnsiD = QPageSize::AnsiD,   AnsiE = QPageSize::AnsiE,   LegalExtra = QPageSize::LegalExtra,   LetterExtra = QPageSize::LetterExtra,   LetterPlus = QPageSize::LetterPlus,   LetterSmall = QPageSize::LetterSmall,   TabloidExtra = QPageSize::TabloidExtra,   ArchA = QPageSize::ArchA,   ArchB = QPageSize::ArchB,   ArchC = QPageSize::ArchC,   ArchD = QPageSize::ArchD,   ArchE = QPageSize::ArchE,   Imperial7x9 = QPageSize::Imperial7x9,   Imperial8x10 = QPageSize::Imperial8x10,   Imperial9x11 = QPageSize::Imperial9x11,   Imperial9x12 = QPageSize::Imperial9x12,   Imperial10x11 = QPageSize::Imperial10x11,   Imperial10x13 = QPageSize::Imperial10x13,   Imperial10x14 = QPageSize::Imperial10x14,   Imperial12x11 = QPageSize::Imperial12x11,   Imperial15x11 = QPageSize::Imperial15x11,   ExecutiveStandard = QPageSize::ExecutiveStandard,   Note = QPageSize::Note,   Quarto = QPageSize::Quarto,   Statement = QPageSize::Statement,   SuperA = QPageSize::SuperA,   SuperB = QPageSize::SuperB,   Postcard = QPageSize::Postcard,   DoublePostcard = QPageSize::DoublePostcard,   Prc16K = QPageSize::Prc16K,   Prc32K = QPageSize::Prc32K,   Prc32KBig = QPageSize::Prc32KBig,   FanFoldUS = QPageSize::FanFoldUS,   FanFoldGerman = QPageSize::FanFoldGerman,   FanFoldGermanLegal = QPageSize::FanFoldGermanLegal,   EnvelopeB4 = QPageSize::EnvelopeB4,   EnvelopeB5 = QPageSize::EnvelopeB5,   EnvelopeB6 = QPageSize::EnvelopeB6,   EnvelopeC0 = QPageSize::EnvelopeC0,   EnvelopeC1 = QPageSize::EnvelopeC1,   EnvelopeC2 = QPageSize::EnvelopeC2,   EnvelopeC3 = QPageSize::EnvelopeC3,   EnvelopeC4 = QPageSize::EnvelopeC4,   EnvelopeC6 = QPageSize::EnvelopeC6,   EnvelopeC65 = QPageSize::EnvelopeC65,   EnvelopeC7 = QPageSize::EnvelopeC7,   Envelope9 = QPageSize::Envelope9,   Envelope11 = QPageSize::Envelope11,   Envelope12 = QPageSize::Envelope12,   Envelope14 = QPageSize::Envelope14,   EnvelopeMonarch = QPageSize::EnvelopeMonarch,   EnvelopePersonal = QPageSize::EnvelopePersonal,   EnvelopeChou3 = QPageSize::EnvelopeChou3,   EnvelopeChou4 = QPageSize::EnvelopeChou4,   EnvelopeInvite = QPageSize::EnvelopeInvite,   EnvelopeItalian = QPageSize::EnvelopeItalian,   EnvelopeKaku2 = QPageSize::EnvelopeKaku2,   EnvelopeKaku3 = QPageSize::EnvelopeKaku3,   EnvelopePrc1 = QPageSize::EnvelopePrc1,   EnvelopePrc2 = QPageSize::EnvelopePrc2,   EnvelopePrc3 = QPageSize::EnvelopePrc3,   EnvelopePrc4 = QPageSize::EnvelopePrc4,   EnvelopePrc5 = QPageSize::EnvelopePrc5,   EnvelopePrc6 = QPageSize::EnvelopePrc6,   EnvelopePrc7 = QPageSize::EnvelopePrc7,   EnvelopePrc8 = QPageSize::EnvelopePrc8,   EnvelopePrc9 = QPageSize::EnvelopePrc9,   EnvelopePrc10 = QPageSize::EnvelopePrc10,   EnvelopeYou4 = QPageSize::EnvelopeYou4,   LastPageSize = QPageSize::LastPageSize,   NPageSize = QPageSize::NPageSize,   NPaperSize = QPageSize::NPaperSize,   AnsiA = QPageSize::AnsiA,   AnsiB = QPageSize::AnsiB,   EnvelopeC5 = QPageSize::EnvelopeC5,   EnvelopeDL = QPageSize::EnvelopeDL,   Envelope10 = QPageSize::Envelope10};
enum SizeMatchPolicy{
  FuzzyMatch = QPageSize::FuzzyMatch,   FuzzyOrientationMatch = QPageSize::FuzzyOrientationMatch,   ExactMatch = QPageSize::ExactMatch};
enum Unit{
  Millimeter = QPageSize::Millimeter,   Point = QPageSize::Point,   Inch = QPageSize::Inch,   Pica = QPageSize::Pica,   Didot = QPageSize::Didot,   Cicero = QPageSize::Cicero};
public slots:
QPageSize* new_QPageSize();
QPageSize* new_QPageSize(QPageSize::PageSizeId  pageSizeId);
QPageSize* new_QPageSize(const QPageSize&  other);
QPageSize* new_QPageSize(const QSize&  pointSize, const QString&  name = QString(), QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
QPageSize* new_QPageSize(const QSizeF&  size, QPageSize::Unit  units, const QString&  name = QString(), QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
void delete_QPageSize(QPageSize* obj) { delete obj; }
   QSizeF  definitionSize(QPageSize* theWrappedObject) const;
   QSizeF  static_QPageSize_definitionSize(QPageSize::PageSizeId  pageSizeId);
   QPageSize::Unit  definitionUnits(QPageSize* theWrappedObject) const;
   QPageSize::Unit  static_QPageSize_definitionUnits(QPageSize::PageSizeId  pageSizeId);
   QPageSize::PageSizeId  id(QPageSize* theWrappedObject) const;
   QPageSize::PageSizeId  static_QPageSize_id(const QSize&  pointSize, QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
   QPageSize::PageSizeId  static_QPageSize_id(const QSizeF&  size, QPageSize::Unit  units, QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
   QPageSize::PageSizeId  static_QPageSize_id(int  windowsId);
   bool  isEquivalentTo(QPageSize* theWrappedObject, const QPageSize&  other) const;
   bool  isValid(QPageSize* theWrappedObject) const;
   QString  key(QPageSize* theWrappedObject) const;
   QString  static_QPageSize_key(QPageSize::PageSizeId  pageSizeId);
   QString  name(QPageSize* theWrappedObject) const;
   QString  static_QPageSize_name(QPageSize::PageSizeId  pageSizeId);
   bool  __ne__(QPageSize* theWrappedObject, const QPageSize&  rhs);
   QPageSize*  operator_assign(QPageSize* theWrappedObject, const QPageSize&  other);
   bool  __eq__(QPageSize* theWrappedObject, const QPageSize&  rhs);
   QRectF  rect(QPageSize* theWrappedObject, QPageSize::Unit  units) const;
   QRect  rectPixels(QPageSize* theWrappedObject, int  resolution) const;
   QRect  rectPoints(QPageSize* theWrappedObject) const;
   QSizeF  static_QPageSize_size(QPageSize::PageSizeId  pageSizeId, QPageSize::Unit  units);
   QSizeF  size(QPageSize* theWrappedObject, QPageSize::Unit  units) const;
   QSize  static_QPageSize_sizePixels(QPageSize::PageSizeId  pageSizeId, int  resolution);
   QSize  sizePixels(QPageSize* theWrappedObject, int  resolution) const;
   QSize  sizePoints(QPageSize* theWrappedObject) const;
   QSize  static_QPageSize_sizePoints(QPageSize::PageSizeId  pageSizeId);
   void swap(QPageSize* theWrappedObject, QPageSize&  other);
   int  windowsId(QPageSize* theWrappedObject) const;
   int  static_QPageSize_windowsId(QPageSize::PageSizeId  pageSizeId);
    QString py_toString(QPageSize*);
    bool __nonzero__(QPageSize* obj) { return obj->isValid(); }
};





class PythonQtPublicPromoter_QPagedPaintDevice : public QPagedPaintDevice
{ public:
inline QPageLayout&  promoted_devicePageLayout() { return this->devicePageLayout(); }
inline bool  py_q_newPage() { return this->newPage(); }
inline void py_q_setMargins(const QPagedPaintDevice::Margins&  margins) { QPagedPaintDevice::setMargins(margins); }
inline void py_q_setPageSize(QPagedPaintDevice::PageSize  size) { QPagedPaintDevice::setPageSize(size); }
inline void py_q_setPageSizeMM(const QSizeF&  size) { QPagedPaintDevice::setPageSizeMM(size); }
};

class PythonQtWrapper_QPagedPaintDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PageSize PdfVersion )
enum PageSize{
  A4 = QPagedPaintDevice::A4,   B5 = QPagedPaintDevice::B5,   Letter = QPagedPaintDevice::Letter,   Legal = QPagedPaintDevice::Legal,   Executive = QPagedPaintDevice::Executive,   A0 = QPagedPaintDevice::A0,   A1 = QPagedPaintDevice::A1,   A2 = QPagedPaintDevice::A2,   A3 = QPagedPaintDevice::A3,   A5 = QPagedPaintDevice::A5,   A6 = QPagedPaintDevice::A6,   A7 = QPagedPaintDevice::A7,   A8 = QPagedPaintDevice::A8,   A9 = QPagedPaintDevice::A9,   B0 = QPagedPaintDevice::B0,   B1 = QPagedPaintDevice::B1,   B10 = QPagedPaintDevice::B10,   B2 = QPagedPaintDevice::B2,   B3 = QPagedPaintDevice::B3,   B4 = QPagedPaintDevice::B4,   B6 = QPagedPaintDevice::B6,   B7 = QPagedPaintDevice::B7,   B8 = QPagedPaintDevice::B8,   B9 = QPagedPaintDevice::B9,   C5E = QPagedPaintDevice::C5E,   Comm10E = QPagedPaintDevice::Comm10E,   DLE = QPagedPaintDevice::DLE,   Folio = QPagedPaintDevice::Folio,   Ledger = QPagedPaintDevice::Ledger,   Tabloid = QPagedPaintDevice::Tabloid,   Custom = QPagedPaintDevice::Custom,   A10 = QPagedPaintDevice::A10,   A3Extra = QPagedPaintDevice::A3Extra,   A4Extra = QPagedPaintDevice::A4Extra,   A4Plus = QPagedPaintDevice::A4Plus,   A4Small = QPagedPaintDevice::A4Small,   A5Extra = QPagedPaintDevice::A5Extra,   B5Extra = QPagedPaintDevice::B5Extra,   JisB0 = QPagedPaintDevice::JisB0,   JisB1 = QPagedPaintDevice::JisB1,   JisB2 = QPagedPaintDevice::JisB2,   JisB3 = QPagedPaintDevice::JisB3,   JisB4 = QPagedPaintDevice::JisB4,   JisB5 = QPagedPaintDevice::JisB5,   JisB6 = QPagedPaintDevice::JisB6,   JisB7 = QPagedPaintDevice::JisB7,   JisB8 = QPagedPaintDevice::JisB8,   JisB9 = QPagedPaintDevice::JisB9,   JisB10 = QPagedPaintDevice::JisB10,   AnsiC = QPagedPaintDevice::AnsiC,   AnsiD = QPagedPaintDevice::AnsiD,   AnsiE = QPagedPaintDevice::AnsiE,   LegalExtra = QPagedPaintDevice::LegalExtra,   LetterExtra = QPagedPaintDevice::LetterExtra,   LetterPlus = QPagedPaintDevice::LetterPlus,   LetterSmall = QPagedPaintDevice::LetterSmall,   TabloidExtra = QPagedPaintDevice::TabloidExtra,   ArchA = QPagedPaintDevice::ArchA,   ArchB = QPagedPaintDevice::ArchB,   ArchC = QPagedPaintDevice::ArchC,   ArchD = QPagedPaintDevice::ArchD,   ArchE = QPagedPaintDevice::ArchE,   Imperial7x9 = QPagedPaintDevice::Imperial7x9,   Imperial8x10 = QPagedPaintDevice::Imperial8x10,   Imperial9x11 = QPagedPaintDevice::Imperial9x11,   Imperial9x12 = QPagedPaintDevice::Imperial9x12,   Imperial10x11 = QPagedPaintDevice::Imperial10x11,   Imperial10x13 = QPagedPaintDevice::Imperial10x13,   Imperial10x14 = QPagedPaintDevice::Imperial10x14,   Imperial12x11 = QPagedPaintDevice::Imperial12x11,   Imperial15x11 = QPagedPaintDevice::Imperial15x11,   ExecutiveStandard = QPagedPaintDevice::ExecutiveStandard,   Note = QPagedPaintDevice::Note,   Quarto = QPagedPaintDevice::Quarto,   Statement = QPagedPaintDevice::Statement,   SuperA = QPagedPaintDevice::SuperA,   SuperB = QPagedPaintDevice::SuperB,   Postcard = QPagedPaintDevice::Postcard,   DoublePostcard = QPagedPaintDevice::DoublePostcard,   Prc16K = QPagedPaintDevice::Prc16K,   Prc32K = QPagedPaintDevice::Prc32K,   Prc32KBig = QPagedPaintDevice::Prc32KBig,   FanFoldUS = QPagedPaintDevice::FanFoldUS,   FanFoldGerman = QPagedPaintDevice::FanFoldGerman,   FanFoldGermanLegal = QPagedPaintDevice::FanFoldGermanLegal,   EnvelopeB4 = QPagedPaintDevice::EnvelopeB4,   EnvelopeB5 = QPagedPaintDevice::EnvelopeB5,   EnvelopeB6 = QPagedPaintDevice::EnvelopeB6,   EnvelopeC0 = QPagedPaintDevice::EnvelopeC0,   EnvelopeC1 = QPagedPaintDevice::EnvelopeC1,   EnvelopeC2 = QPagedPaintDevice::EnvelopeC2,   EnvelopeC3 = QPagedPaintDevice::EnvelopeC3,   EnvelopeC4 = QPagedPaintDevice::EnvelopeC4,   EnvelopeC6 = QPagedPaintDevice::EnvelopeC6,   EnvelopeC65 = QPagedPaintDevice::EnvelopeC65,   EnvelopeC7 = QPagedPaintDevice::EnvelopeC7,   Envelope9 = QPagedPaintDevice::Envelope9,   Envelope11 = QPagedPaintDevice::Envelope11,   Envelope12 = QPagedPaintDevice::Envelope12,   Envelope14 = QPagedPaintDevice::Envelope14,   EnvelopeMonarch = QPagedPaintDevice::EnvelopeMonarch,   EnvelopePersonal = QPagedPaintDevice::EnvelopePersonal,   EnvelopeChou3 = QPagedPaintDevice::EnvelopeChou3,   EnvelopeChou4 = QPagedPaintDevice::EnvelopeChou4,   EnvelopeInvite = QPagedPaintDevice::EnvelopeInvite,   EnvelopeItalian = QPagedPaintDevice::EnvelopeItalian,   EnvelopeKaku2 = QPagedPaintDevice::EnvelopeKaku2,   EnvelopeKaku3 = QPagedPaintDevice::EnvelopeKaku3,   EnvelopePrc1 = QPagedPaintDevice::EnvelopePrc1,   EnvelopePrc2 = QPagedPaintDevice::EnvelopePrc2,   EnvelopePrc3 = QPagedPaintDevice::EnvelopePrc3,   EnvelopePrc4 = QPagedPaintDevice::EnvelopePrc4,   EnvelopePrc5 = QPagedPaintDevice::EnvelopePrc5,   EnvelopePrc6 = QPagedPaintDevice::EnvelopePrc6,   EnvelopePrc7 = QPagedPaintDevice::EnvelopePrc7,   EnvelopePrc8 = QPagedPaintDevice::EnvelopePrc8,   EnvelopePrc9 = QPagedPaintDevice::EnvelopePrc9,   EnvelopePrc10 = QPagedPaintDevice::EnvelopePrc10,   EnvelopeYou4 = QPagedPaintDevice::EnvelopeYou4,   LastPageSize = QPagedPaintDevice::LastPageSize,   NPageSize = QPagedPaintDevice::NPageSize,   NPaperSize = QPagedPaintDevice::NPaperSize,   AnsiA = QPagedPaintDevice::AnsiA,   AnsiB = QPagedPaintDevice::AnsiB,   EnvelopeC5 = QPagedPaintDevice::EnvelopeC5,   EnvelopeDL = QPagedPaintDevice::EnvelopeDL,   Envelope10 = QPagedPaintDevice::Envelope10};
enum PdfVersion{
  PdfVersion_1_4 = QPagedPaintDevice::PdfVersion_1_4,   PdfVersion_A1b = QPagedPaintDevice::PdfVersion_A1b,   PdfVersion_1_6 = QPagedPaintDevice::PdfVersion_1_6};
public slots:
void delete_QPagedPaintDevice(QPagedPaintDevice* obj) { delete obj; }
   QPageLayout*  devicePageLayout(QPagedPaintDevice* theWrappedObject);
   QPagedPaintDevice::Margins  margins(QPagedPaintDevice* theWrappedObject) const;
   bool  newPage(QPagedPaintDevice* theWrappedObject);
   bool  py_q_newPage(QPagedPaintDevice* theWrappedObject){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_newPage());}
   QPageLayout  pageLayout(QPagedPaintDevice* theWrappedObject) const;
   QPagedPaintDevice::PageSize  pageSize(QPagedPaintDevice* theWrappedObject) const;
   QSizeF  pageSizeMM(QPagedPaintDevice* theWrappedObject) const;
   void setMargins(QPagedPaintDevice* theWrappedObject, const QPagedPaintDevice::Margins&  margins);
   void py_q_setMargins(QPagedPaintDevice* theWrappedObject, const QPagedPaintDevice::Margins&  margins){  (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setMargins(margins));}
   bool  setPageLayout(QPagedPaintDevice* theWrappedObject, const QPageLayout&  pageLayout);
   bool  setPageMargins(QPagedPaintDevice* theWrappedObject, const QMarginsF&  margins);
   bool  setPageMargins(QPagedPaintDevice* theWrappedObject, const QMarginsF&  margins, QPageLayout::Unit  units);
   bool  setPageOrientation(QPagedPaintDevice* theWrappedObject, QPageLayout::Orientation  orientation);
   void setPageSize(QPagedPaintDevice* theWrappedObject, QPagedPaintDevice::PageSize  size);
   void py_q_setPageSize(QPagedPaintDevice* theWrappedObject, QPagedPaintDevice::PageSize  size){  (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageSize(size));}
   bool  setPageSize(QPagedPaintDevice* theWrappedObject, const QPageSize&  pageSize);
   void setPageSizeMM(QPagedPaintDevice* theWrappedObject, const QSizeF&  size);
   void py_q_setPageSizeMM(QPagedPaintDevice* theWrappedObject, const QSizeF&  size){  (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageSizeMM(size));}
};





class PythonQtShell_QPagedPaintDevice__Margins : public QPagedPaintDevice::Margins
{
public:
    PythonQtShell_QPagedPaintDevice__Margins():QPagedPaintDevice::Margins(),_wrapper(nullptr) {};

   ~PythonQtShell_QPagedPaintDevice__Margins();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPagedPaintDevice__Margins : public QObject
{ Q_OBJECT
public:
public slots:
QPagedPaintDevice::Margins* new_QPagedPaintDevice__Margins();
QPagedPaintDevice::Margins* new_QPagedPaintDevice__Margins(const QPagedPaintDevice::Margins& other) {
PythonQtShell_QPagedPaintDevice__Margins* a = new PythonQtShell_QPagedPaintDevice__Margins();
*((QPagedPaintDevice::Margins*)a) = other;
return a; }
void delete_QPagedPaintDevice__Margins(QPagedPaintDevice::Margins* obj) { delete obj; }
void py_set_bottom(QPagedPaintDevice::Margins* theWrappedObject, qreal  bottom){ theWrappedObject->bottom = bottom; }
qreal  py_get_bottom(QPagedPaintDevice::Margins* theWrappedObject){ return theWrappedObject->bottom; }
void py_set_left(QPagedPaintDevice::Margins* theWrappedObject, qreal  left){ theWrappedObject->left = left; }
qreal  py_get_left(QPagedPaintDevice::Margins* theWrappedObject){ return theWrappedObject->left; }
void py_set_right(QPagedPaintDevice::Margins* theWrappedObject, qreal  right){ theWrappedObject->right = right; }
qreal  py_get_right(QPagedPaintDevice::Margins* theWrappedObject){ return theWrappedObject->right; }
void py_set_top(QPagedPaintDevice::Margins* theWrappedObject, qreal  top){ theWrappedObject->top = top; }
qreal  py_get_top(QPagedPaintDevice::Margins* theWrappedObject){ return theWrappedObject->top; }
};





class PythonQtShell_QPaintDevice : public QPaintDevice
{
public:
    PythonQtShell_QPaintDevice():QPaintDevice(),_wrapper(nullptr) {};

   ~PythonQtShell_QPaintDevice() override;

int  devType() const override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  metric) const override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
QPainter*  sharedPainter() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPaintDevice : public QPaintDevice
{ public:
inline void promoted_initPainter(QPainter*  painter) const { this->initPainter(painter); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline QPaintDevice*  promoted_redirected(QPoint*  offset) const { return this->redirected(offset); }
inline QPainter*  promoted_sharedPainter() const { return this->sharedPainter(); }
inline int  py_q_devType() const { return QPaintDevice::devType(); }
inline void py_q_initPainter(QPainter*  painter) const { QPaintDevice::initPainter(painter); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QPaintDevice::metric(metric); }
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
   int  colorCount(QPaintDevice* theWrappedObject) const;
   int  depth(QPaintDevice* theWrappedObject) const;
   int  devType(QPaintDevice* theWrappedObject) const;
   int  py_q_devType(QPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_devType());}
   int  devicePixelRatio(QPaintDevice* theWrappedObject) const;
   qreal  devicePixelRatioF(QPaintDevice* theWrappedObject) const;
   qreal  static_QPaintDevice_devicePixelRatioFScale();
   int  height(QPaintDevice* theWrappedObject) const;
   int  heightMM(QPaintDevice* theWrappedObject) const;
   void initPainter(QPaintDevice* theWrappedObject, QPainter*  painter) const;
   void py_q_initPainter(QPaintDevice* theWrappedObject, QPainter*  painter) const{  (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_initPainter(painter));}
   int  logicalDpiX(QPaintDevice* theWrappedObject) const;
   int  logicalDpiY(QPaintDevice* theWrappedObject) const;
   int  metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   int  py_q_metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_metric(metric));}
   QPaintEngine*  paintEngine(QPaintDevice* theWrappedObject) const;
   QPaintEngine*  py_q_paintEngine(QPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_paintEngine());}
   bool  paintingActive(QPaintDevice* theWrappedObject) const;
   int  physicalDpiX(QPaintDevice* theWrappedObject) const;
   int  physicalDpiY(QPaintDevice* theWrappedObject) const;
   QPaintDevice*  redirected(QPaintDevice* theWrappedObject, QPoint*  offset) const;
   QPaintDevice*  py_q_redirected(QPaintDevice* theWrappedObject, QPoint*  offset) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_redirected(offset));}
   QPainter*  sharedPainter(QPaintDevice* theWrappedObject) const;
   QPainter*  py_q_sharedPainter(QPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_sharedPainter());}
   int  width(QPaintDevice* theWrappedObject) const;
   int  widthMM(QPaintDevice* theWrappedObject) const;
};





class PythonQtPublicPromoter_QPaintDeviceWindow : public QPaintDeviceWindow
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_exposeEvent(QExposeEvent*  arg__1) { this->exposeEvent(arg__1); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QPaintDeviceWindow::event(event); }
inline void py_q_exposeEvent(QExposeEvent*  arg__1) { QPaintDeviceWindow::exposeEvent(arg__1); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QPaintDeviceWindow::metric(metric); }
inline void py_q_paintEvent(QPaintEvent*  event) { QPaintDeviceWindow::paintEvent(event); }
};

class PythonQtWrapper_QPaintDeviceWindow : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QPaintDeviceWindow(QPaintDeviceWindow* obj) { delete obj; }
   bool  py_q_event(QPaintDeviceWindow* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QPaintDeviceWindow*)theWrappedObject)->py_q_event(event));}
   void py_q_exposeEvent(QPaintDeviceWindow* theWrappedObject, QExposeEvent*  arg__1){  (((PythonQtPublicPromoter_QPaintDeviceWindow*)theWrappedObject)->py_q_exposeEvent(arg__1));}
   int  py_q_metric(QPaintDeviceWindow* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QPaintDeviceWindow*)theWrappedObject)->py_q_metric(metric));}
   void paintEvent(QPaintDeviceWindow* theWrappedObject, QPaintEvent*  event);
   void py_q_paintEvent(QPaintDeviceWindow* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QPaintDeviceWindow*)theWrappedObject)->py_q_paintEvent(event));}
   void update(QPaintDeviceWindow* theWrappedObject, const QRect&  rect);
   void update(QPaintDeviceWindow* theWrappedObject, const QRegion&  region);
};





class PythonQtShell_QPaintEngine : public QPaintEngine
{
public:
    PythonQtShell_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = QPaintEngine::PaintEngineFeatures()):QPaintEngine(features),_wrapper(nullptr) {};

   ~PythonQtShell_QPaintEngine() override;

bool  begin(QPaintDevice*  pdev) override;
QPoint  coordinateOffset() const override;
void drawEllipse(const QRect&  r) override;
void drawEllipse(const QRectF&  r) override;
void drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor) override;
void drawLines(const QLine*  lines, int  lineCount) override;
void drawLines(const QLineF*  lines, int  lineCount) override;
void drawPath(const QPainterPath&  path) override;
void drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr) override;
void drawPoints(const QPoint*  points, int  pointCount) override;
void drawPoints(const QPointF*  points, int  pointCount) override;
void drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) override;
void drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) override;
void drawRects(const QRect*  rects, int  rectCount) override;
void drawRects(const QRectF*  rects, int  rectCount) override;
void drawTextItem(const QPointF&  p, const QTextItem&  textItem) override;
void drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s) override;
bool  end() override;
QPaintEngine::Type  type() const override;
void updateState(const QPaintEngineState&  state) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPaintEngine : public QPaintEngine
{ public:
inline bool  py_q_begin(QPaintDevice*  pdev) { return this->begin(pdev); }
inline QPoint  py_q_coordinateOffset() const { return QPaintEngine::coordinateOffset(); }
inline void py_q_drawEllipse(const QRect&  r) { QPaintEngine::drawEllipse(r); }
inline void py_q_drawEllipse(const QRectF&  r) { QPaintEngine::drawEllipse(r); }
inline void py_q_drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor) { QPaintEngine::drawImage(r, pm, sr, flags); }
inline void py_q_drawLines(const QLine*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void py_q_drawLines(const QLineF*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void py_q_drawPath(const QPainterPath&  path) { QPaintEngine::drawPath(path); }
inline void py_q_drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr) { this->drawPixmap(r, pm, sr); }
inline void py_q_drawPoints(const QPoint*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void py_q_drawPoints(const QPointF*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void py_q_drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void py_q_drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void py_q_drawRects(const QRect*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void py_q_drawRects(const QRectF*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void py_q_drawTextItem(const QPointF&  p, const QTextItem&  textItem) { QPaintEngine::drawTextItem(p, textItem); }
inline void py_q_drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s) { QPaintEngine::drawTiledPixmap(r, pixmap, s); }
inline bool  py_q_end() { return this->end(); }
inline QPaintEngine::Type  py_q_type() const { return this->type(); }
inline void py_q_updateState(const QPaintEngineState&  state) { this->updateState(state); }
};

class PythonQtWrapper_QPaintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DirtyFlag PaintEngineFeature PolygonDrawMode Type )
Q_FLAGS(DirtyFlags PaintEngineFeatures )
enum DirtyFlag{
  DirtyPen = QPaintEngine::DirtyPen,   DirtyBrush = QPaintEngine::DirtyBrush,   DirtyBrushOrigin = QPaintEngine::DirtyBrushOrigin,   DirtyFont = QPaintEngine::DirtyFont,   DirtyBackground = QPaintEngine::DirtyBackground,   DirtyBackgroundMode = QPaintEngine::DirtyBackgroundMode,   DirtyTransform = QPaintEngine::DirtyTransform,   DirtyClipRegion = QPaintEngine::DirtyClipRegion,   DirtyClipPath = QPaintEngine::DirtyClipPath,   DirtyHints = QPaintEngine::DirtyHints,   DirtyCompositionMode = QPaintEngine::DirtyCompositionMode,   DirtyClipEnabled = QPaintEngine::DirtyClipEnabled,   DirtyOpacity = QPaintEngine::DirtyOpacity,   AllDirty = QPaintEngine::AllDirty};
enum PaintEngineFeature{
  PrimitiveTransform = QPaintEngine::PrimitiveTransform,   PatternTransform = QPaintEngine::PatternTransform,   PixmapTransform = QPaintEngine::PixmapTransform,   PatternBrush = QPaintEngine::PatternBrush,   LinearGradientFill = QPaintEngine::LinearGradientFill,   RadialGradientFill = QPaintEngine::RadialGradientFill,   ConicalGradientFill = QPaintEngine::ConicalGradientFill,   AlphaBlend = QPaintEngine::AlphaBlend,   PorterDuff = QPaintEngine::PorterDuff,   PainterPaths = QPaintEngine::PainterPaths,   Antialiasing = QPaintEngine::Antialiasing,   BrushStroke = QPaintEngine::BrushStroke,   ConstantOpacity = QPaintEngine::ConstantOpacity,   MaskedBrush = QPaintEngine::MaskedBrush,   PerspectiveTransform = QPaintEngine::PerspectiveTransform,   BlendModes = QPaintEngine::BlendModes,   ObjectBoundingModeGradients = QPaintEngine::ObjectBoundingModeGradients,   RasterOpModes = QPaintEngine::RasterOpModes,   PaintOutsidePaintEvent = QPaintEngine::PaintOutsidePaintEvent,   AllFeatures = QPaintEngine::AllFeatures};
enum PolygonDrawMode{
  OddEvenMode = QPaintEngine::OddEvenMode,   WindingMode = QPaintEngine::WindingMode,   ConvexMode = QPaintEngine::ConvexMode,   PolylineMode = QPaintEngine::PolylineMode};
enum Type{
  X11 = QPaintEngine::X11,   Windows = QPaintEngine::Windows,   QuickDraw = QPaintEngine::QuickDraw,   CoreGraphics = QPaintEngine::CoreGraphics,   MacPrinter = QPaintEngine::MacPrinter,   QWindowSystem = QPaintEngine::QWindowSystem,   PostScript = QPaintEngine::PostScript,   OpenGL = QPaintEngine::OpenGL,   Picture = QPaintEngine::Picture,   SVG = QPaintEngine::SVG,   Raster = QPaintEngine::Raster,   Direct3D = QPaintEngine::Direct3D,   Pdf = QPaintEngine::Pdf,   OpenVG = QPaintEngine::OpenVG,   OpenGL2 = QPaintEngine::OpenGL2,   PaintBuffer = QPaintEngine::PaintBuffer,   Blitter = QPaintEngine::Blitter,   Direct2D = QPaintEngine::Direct2D,   User = QPaintEngine::User,   MaxUser = QPaintEngine::MaxUser};
Q_DECLARE_FLAGS(DirtyFlags, DirtyFlag)
Q_DECLARE_FLAGS(PaintEngineFeatures, PaintEngineFeature)
public slots:
QPaintEngine* new_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = QPaintEngine::PaintEngineFeatures());
void delete_QPaintEngine(QPaintEngine* obj) { delete obj; }
   bool  begin(QPaintEngine* theWrappedObject, QPaintDevice*  pdev);
   bool  py_q_begin(QPaintEngine* theWrappedObject, QPaintDevice*  pdev){  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_begin(pdev));}
   void clearDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   QPoint  coordinateOffset(QPaintEngine* theWrappedObject) const;
   QPoint  py_q_coordinateOffset(QPaintEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_coordinateOffset());}
   void drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r);
   void py_q_drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawEllipse(r));}
   void drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r);
   void py_q_drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawEllipse(r));}
   void drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void py_q_drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawImage(r, pm, sr, flags));}
   void drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount);
   void py_q_drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawLines(lines, lineCount));}
   void drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount);
   void py_q_drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawLines(lines, lineCount));}
   void drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path);
   void py_q_drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPath(path));}
   void drawPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pm, const QRectF&  sr);
   void py_q_drawPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pm, const QRectF&  sr){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPixmap(r, pm, sr));}
   void drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount);
   void py_q_drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPoints(points, pointCount));}
   void drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount);
   void py_q_drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPoints(points, pointCount));}
   void drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void py_q_drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPolygon(points, pointCount, mode));}
   void drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void py_q_drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPolygon(points, pointCount, mode));}
   void drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount);
   void py_q_drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawRects(rects, rectCount));}
   void drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount);
   void py_q_drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawRects(rects, rectCount));}
   void drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem);
   void py_q_drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawTextItem(p, textItem));}
   void drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
   void py_q_drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawTiledPixmap(r, pixmap, s));}
   bool  end(QPaintEngine* theWrappedObject);
   bool  py_q_end(QPaintEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_end());}
   bool  hasFeature(QPaintEngine* theWrappedObject, QPaintEngine::PaintEngineFeatures  feature) const;
   bool  isActive(QPaintEngine* theWrappedObject) const;
   bool  isExtended(QPaintEngine* theWrappedObject) const;
   QPaintDevice*  paintDevice(QPaintEngine* theWrappedObject) const;
   QPainter*  painter(QPaintEngine* theWrappedObject) const;
   void setActive(QPaintEngine* theWrappedObject, bool  newState);
   void setDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   void setSystemClip(QPaintEngine* theWrappedObject, const QRegion&  baseClip);
   void setSystemRect(QPaintEngine* theWrappedObject, const QRect&  rect);
   void syncState(QPaintEngine* theWrappedObject);
   QRegion  systemClip(QPaintEngine* theWrappedObject) const;
   QRect  systemRect(QPaintEngine* theWrappedObject) const;
   bool  testDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   QPaintEngine::Type  type(QPaintEngine* theWrappedObject) const;
   QPaintEngine::Type  py_q_type(QPaintEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_type());}
   void updateState(QPaintEngine* theWrappedObject, const QPaintEngineState&  state);
   void py_q_updateState(QPaintEngine* theWrappedObject, const QPaintEngineState&  state){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_updateState(state));}
};





class PythonQtShell_QPaintEngineState : public QPaintEngineState
{
public:
    PythonQtShell_QPaintEngineState():QPaintEngineState(),_wrapper(nullptr) {};

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
   QMatrix  matrix(QPaintEngineState* theWrappedObject) const;
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
    PythonQtShell_QPaintEvent(const QRect&  paintRect):QPaintEvent(paintRect),_wrapper(nullptr) {};
    PythonQtShell_QPaintEvent(const QRegion&  paintRegion):QPaintEvent(paintRegion),_wrapper(nullptr) {};

   ~PythonQtShell_QPaintEvent() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPaintEvent : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEvent* new_QPaintEvent(const QRect&  paintRect);
QPaintEvent* new_QPaintEvent(const QRegion&  paintRegion);
void delete_QPaintEvent(QPaintEvent* obj) { delete obj; }
   const QRect*  rect(QPaintEvent* theWrappedObject) const;
   const QRegion*  region(QPaintEvent* theWrappedObject) const;
};





class PythonQtWrapper_QPainter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CompositionMode PixmapFragmentHint RenderHint )
Q_FLAGS(PixmapFragmentHints RenderHints )
enum CompositionMode{
  CompositionMode_SourceOver = QPainter::CompositionMode_SourceOver,   CompositionMode_DestinationOver = QPainter::CompositionMode_DestinationOver,   CompositionMode_Clear = QPainter::CompositionMode_Clear,   CompositionMode_Source = QPainter::CompositionMode_Source,   CompositionMode_Destination = QPainter::CompositionMode_Destination,   CompositionMode_SourceIn = QPainter::CompositionMode_SourceIn,   CompositionMode_DestinationIn = QPainter::CompositionMode_DestinationIn,   CompositionMode_SourceOut = QPainter::CompositionMode_SourceOut,   CompositionMode_DestinationOut = QPainter::CompositionMode_DestinationOut,   CompositionMode_SourceAtop = QPainter::CompositionMode_SourceAtop,   CompositionMode_DestinationAtop = QPainter::CompositionMode_DestinationAtop,   CompositionMode_Xor = QPainter::CompositionMode_Xor,   CompositionMode_Plus = QPainter::CompositionMode_Plus,   CompositionMode_Multiply = QPainter::CompositionMode_Multiply,   CompositionMode_Screen = QPainter::CompositionMode_Screen,   CompositionMode_Overlay = QPainter::CompositionMode_Overlay,   CompositionMode_Darken = QPainter::CompositionMode_Darken,   CompositionMode_Lighten = QPainter::CompositionMode_Lighten,   CompositionMode_ColorDodge = QPainter::CompositionMode_ColorDodge,   CompositionMode_ColorBurn = QPainter::CompositionMode_ColorBurn,   CompositionMode_HardLight = QPainter::CompositionMode_HardLight,   CompositionMode_SoftLight = QPainter::CompositionMode_SoftLight,   CompositionMode_Difference = QPainter::CompositionMode_Difference,   CompositionMode_Exclusion = QPainter::CompositionMode_Exclusion,   RasterOp_SourceOrDestination = QPainter::RasterOp_SourceOrDestination,   RasterOp_SourceAndDestination = QPainter::RasterOp_SourceAndDestination,   RasterOp_SourceXorDestination = QPainter::RasterOp_SourceXorDestination,   RasterOp_NotSourceAndNotDestination = QPainter::RasterOp_NotSourceAndNotDestination,   RasterOp_NotSourceOrNotDestination = QPainter::RasterOp_NotSourceOrNotDestination,   RasterOp_NotSourceXorDestination = QPainter::RasterOp_NotSourceXorDestination,   RasterOp_NotSource = QPainter::RasterOp_NotSource,   RasterOp_NotSourceAndDestination = QPainter::RasterOp_NotSourceAndDestination,   RasterOp_SourceAndNotDestination = QPainter::RasterOp_SourceAndNotDestination,   RasterOp_NotSourceOrDestination = QPainter::RasterOp_NotSourceOrDestination,   RasterOp_SourceOrNotDestination = QPainter::RasterOp_SourceOrNotDestination,   RasterOp_ClearDestination = QPainter::RasterOp_ClearDestination,   RasterOp_SetDestination = QPainter::RasterOp_SetDestination,   RasterOp_NotDestination = QPainter::RasterOp_NotDestination};
enum PixmapFragmentHint{
  OpaqueHint = QPainter::OpaqueHint};
enum RenderHint{
  Antialiasing = QPainter::Antialiasing,   TextAntialiasing = QPainter::TextAntialiasing,   SmoothPixmapTransform = QPainter::SmoothPixmapTransform,   HighQualityAntialiasing = QPainter::HighQualityAntialiasing,   NonCosmeticDefaultPen = QPainter::NonCosmeticDefaultPen,   Qt4CompatiblePainting = QPainter::Qt4CompatiblePainting,   LosslessImageRendering = QPainter::LosslessImageRendering};
Q_DECLARE_FLAGS(PixmapFragmentHints, PixmapFragmentHint)
Q_DECLARE_FLAGS(RenderHints, RenderHint)
public slots:
QPainter* new_QPainter();
QPainter* new_QPainter(QPaintDevice*  arg__1);
void delete_QPainter(QPainter* obj) { delete obj; }
   const QBrush*  background(QPainter* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPainter* theWrappedObject) const;
   bool  begin(QPainter* theWrappedObject, QPaintDevice*  arg__1);
   void beginNativePainting(QPainter* theWrappedObject);
   QRect  boundingRect(QPainter* theWrappedObject, const QRect&  rect, int  flags, const QString&  text);
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, const QString&  text, const QTextOption&  o = QTextOption());
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, int  flags, const QString&  text);
   QRect  boundingRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text);
   const QBrush*  brush(QPainter* theWrappedObject) const;
   QPoint  brushOrigin(QPainter* theWrappedObject) const;
   QRectF  clipBoundingRect(QPainter* theWrappedObject) const;
   QPainterPath  clipPath(QPainter* theWrappedObject) const;
   QRegion  clipRegion(QPainter* theWrappedObject) const;
   QMatrix  combinedMatrix(QPainter* theWrappedObject) const;
   QTransform  combinedTransform(QPainter* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPainter* theWrappedObject) const;
   QPaintDevice*  device(QPainter* theWrappedObject) const;
   const QMatrix*  deviceMatrix(QPainter* theWrappedObject) const;
   const QTransform*  deviceTransform(QPainter* theWrappedObject) const;
   void drawArc(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawArc(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawArc(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon);
   void drawEllipse(QPainter* theWrappedObject, const QPoint&  center, int  rx, int  ry);
   void drawEllipse(QPainter* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void drawEllipse(QPainter* theWrappedObject, const QRect&  r);
   void drawEllipse(QPainter* theWrappedObject, const QRectF&  r);
   void drawEllipse(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void drawGlyphRun(QPainter* theWrappedObject, const QPointF&  position, const QGlyphRun&  glyphRun);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image, const QRect&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QRect&  r, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRect&  targetRect, const QImage&  image, const QRect&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QRectF&  r, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRectF&  targetRect, const QImage&  image, const QRectF&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, int  x, int  y, const QImage&  image, int  sx = 0, int  sy = 0, int  sw = -1, int  sh = -1, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawLine(QPainter* theWrappedObject, const QLine&  line);
   void drawLine(QPainter* theWrappedObject, const QLineF&  line);
   void drawLine(QPainter* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void drawLine(QPainter* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   void drawLine(QPainter* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void drawLines(QPainter* theWrappedObject, const QVector<QLine >&  lines);
   void drawLines(QPainter* theWrappedObject, const QVector<QLineF >&  lines);
   void drawLines(QPainter* theWrappedObject, const QVector<QPoint >&  pointPairs);
   void drawLines(QPainter* theWrappedObject, const QVector<QPointF >&  pointPairs);
   void drawPath(QPainter* theWrappedObject, const QPainterPath&  path);
   void drawPicture(QPainter* theWrappedObject, const QPoint&  p, const QPicture&  picture);
   void drawPicture(QPainter* theWrappedObject, const QPointF&  p, const QPicture&  picture);
   void drawPicture(QPainter* theWrappedObject, int  x, int  y, const QPicture&  picture);
   void drawPie(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawPie(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawPie(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm, const QRect&  sr);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm, const QRectF&  sr);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  r, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  targetRect, const QPixmap&  pixmap, const QRect&  sourceRect);
   void drawPixmap(QPainter* theWrappedObject, const QRectF&  targetRect, const QPixmap&  pixmap, const QRectF&  sourceRect);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPixmapFragments(QPainter* theWrappedObject, const QPainter::PixmapFragment*  fragments, int  fragmentCount, const QPixmap&  pixmap, QPainter::PixmapFragmentHints  hints = QPainter::PixmapFragmentHints());
   void drawPoint(QPainter* theWrappedObject, const QPoint&  p);
   void drawPoint(QPainter* theWrappedObject, const QPointF&  pt);
   void drawPoint(QPainter* theWrappedObject, int  x, int  y);
   void drawPoints(QPainter* theWrappedObject, const QPolygon&  points);
   void drawPoints(QPainter* theWrappedObject, const QPolygonF&  points);
   void drawPolygon(QPainter* theWrappedObject, const QPolygon&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolyline(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawPolyline(QPainter* theWrappedObject, const QPolygonF&  polyline);
   void drawRect(QPainter* theWrappedObject, const QRect&  rect);
   void drawRect(QPainter* theWrappedObject, const QRectF&  rect);
   void drawRect(QPainter* theWrappedObject, int  x1, int  y1, int  w, int  h);
   void drawRects(QPainter* theWrappedObject, const QVector<QRect >&  rectangles);
   void drawRects(QPainter* theWrappedObject, const QVector<QRectF >&  rectangles);
   void drawRoundRect(QPainter* theWrappedObject, const QRect&  r, int  xround = 25, int  yround = 25);
   void drawRoundRect(QPainter* theWrappedObject, const QRectF&  r, int  xround = 25, int  yround = 25);
   void drawRoundRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  arg__5 = 25, int  arg__6 = 25);
   void drawRoundedRect(QPainter* theWrappedObject, const QRect&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawRoundedRect(QPainter* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawRoundedRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawStaticText(QPainter* theWrappedObject, const QPoint&  topLeftPosition, const QStaticText&  staticText);
   void drawStaticText(QPainter* theWrappedObject, const QPointF&  topLeftPosition, const QStaticText&  staticText);
   void drawStaticText(QPainter* theWrappedObject, int  left, int  top, const QStaticText&  staticText);
   void drawText(QPainter* theWrappedObject, const QPoint&  p, const QString&  s);
   void drawText(QPainter* theWrappedObject, const QPointF&  p, const QString&  s);
   void drawText(QPainter* theWrappedObject, const QRect&  r, int  flags, const QString&  text, QRect*  br = nullptr);
   void drawText(QPainter* theWrappedObject, const QRectF&  r, const QString&  text, const QTextOption&  o = QTextOption());
   void drawText(QPainter* theWrappedObject, const QRectF&  r, int  flags, const QString&  text, QRectF*  br = nullptr);
   void drawText(QPainter* theWrappedObject, int  x, int  y, const QString&  s);
   void drawText(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, QRect*  br = nullptr);
   void drawTextItem(QPainter* theWrappedObject, const QPoint&  p, const QTextItem&  ti);
   void drawTextItem(QPainter* theWrappedObject, const QPointF&  p, const QTextItem&  ti);
   void drawTextItem(QPainter* theWrappedObject, int  x, int  y, const QTextItem&  ti);
   void drawTiledPixmap(QPainter* theWrappedObject, const QRect&  arg__1, const QPixmap&  arg__2, const QPoint&  arg__3 = QPoint());
   void drawTiledPixmap(QPainter* theWrappedObject, const QRectF&  rect, const QPixmap&  pm, const QPointF&  offset = QPointF());
   void drawTiledPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  arg__5, int  sx = 0, int  sy = 0);
   bool  end(QPainter* theWrappedObject);
   void endNativePainting(QPainter* theWrappedObject);
   void eraseRect(QPainter* theWrappedObject, const QRect&  arg__1);
   void eraseRect(QPainter* theWrappedObject, const QRectF&  arg__1);
   void eraseRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void fillPath(QPainter* theWrappedObject, const QPainterPath&  path, const QBrush&  brush);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QBrush&  arg__2);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QColor&  color);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, QGradient::Preset  preset);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QBrush&  arg__2);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QColor&  color);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, QGradient::Preset  preset);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, QGradient::Preset  preset);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QBrush&  arg__5);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QColor&  color);
   const QFont*  font(QPainter* theWrappedObject) const;
   QFontInfo  fontInfo(QPainter* theWrappedObject) const;
   QFontMetrics  fontMetrics(QPainter* theWrappedObject) const;
   bool  hasClipping(QPainter* theWrappedObject) const;
   void initFrom(QPainter* theWrappedObject, const QPaintDevice*  device);
   bool  isActive(QPainter* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QPainter* theWrappedObject) const;
   qreal  opacity(QPainter* theWrappedObject) const;
   QPaintEngine*  paintEngine(QPainter* theWrappedObject) const;
   const QPen*  pen(QPainter* theWrappedObject) const;
   QPaintDevice*  static_QPainter_redirected(const QPaintDevice*  device, QPoint*  offset = nullptr);
   QPainter::RenderHints  renderHints(QPainter* theWrappedObject) const;
   void resetMatrix(QPainter* theWrappedObject);
   void resetTransform(QPainter* theWrappedObject);
   void restore(QPainter* theWrappedObject);
   void static_QPainter_restoreRedirected(const QPaintDevice*  device);
   void rotate(QPainter* theWrappedObject, qreal  a);
   void save(QPainter* theWrappedObject);
   void scale(QPainter* theWrappedObject, qreal  sx, qreal  sy);
   void setBackground(QPainter* theWrappedObject, const QBrush&  bg);
   void setBackgroundMode(QPainter* theWrappedObject, Qt::BGMode  mode);
   void setBrush(QPainter* theWrappedObject, const QBrush&  brush);
   void setBrushOrigin(QPainter* theWrappedObject, const QPoint&  arg__1);
   void setBrushOrigin(QPainter* theWrappedObject, const QPointF&  arg__1);
   void setBrushOrigin(QPainter* theWrappedObject, int  x, int  y);
   void setClipPath(QPainter* theWrappedObject, const QPainterPath&  path, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, const QRect&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, const QRectF&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRegion(QPainter* theWrappedObject, const QRegion&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipping(QPainter* theWrappedObject, bool  enable);
   void setCompositionMode(QPainter* theWrappedObject, QPainter::CompositionMode  mode);
   void setFont(QPainter* theWrappedObject, const QFont&  f);
   void setLayoutDirection(QPainter* theWrappedObject, Qt::LayoutDirection  direction);
   void setOpacity(QPainter* theWrappedObject, qreal  opacity);
   void setPen(QPainter* theWrappedObject, Qt::PenStyle  style);
   void setPen(QPainter* theWrappedObject, const QColor&  color);
   void setPen(QPainter* theWrappedObject, const QPen&  pen);
   void static_QPainter_setRedirected(const QPaintDevice*  device, QPaintDevice*  replacement, const QPoint&  offset = QPoint());
   void setRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint, bool  on = true);
   void setRenderHints(QPainter* theWrappedObject, QPainter::RenderHints  hints, bool  on = true);
   void setTransform(QPainter* theWrappedObject, const QTransform&  transform, bool  combine = false);
   void setViewTransformEnabled(QPainter* theWrappedObject, bool  enable);
   void setViewport(QPainter* theWrappedObject, const QRect&  viewport);
   void setViewport(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setWindow(QPainter* theWrappedObject, const QRect&  window);
   void setWindow(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setWorldMatrix(QPainter* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   void setWorldMatrixEnabled(QPainter* theWrappedObject, bool  enabled);
   void setWorldTransform(QPainter* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void shear(QPainter* theWrappedObject, qreal  sh, qreal  sv);
   void strokePath(QPainter* theWrappedObject, const QPainterPath&  path, const QPen&  pen);
   bool  testRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint) const;
   const QTransform*  transform(QPainter* theWrappedObject) const;
   void translate(QPainter* theWrappedObject, const QPoint&  offset);
   void translate(QPainter* theWrappedObject, const QPointF&  offset);
   void translate(QPainter* theWrappedObject, qreal  dx, qreal  dy);
   bool  viewTransformEnabled(QPainter* theWrappedObject) const;
   QRect  viewport(QPainter* theWrappedObject) const;
   QRect  window(QPainter* theWrappedObject) const;
   const QMatrix*  worldMatrix(QPainter* theWrappedObject) const;
   bool  worldMatrixEnabled(QPainter* theWrappedObject) const;
   const QTransform*  worldTransform(QPainter* theWrappedObject) const;
};





class PythonQtWrapper_QPainterPath : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ElementType )
enum ElementType{
  MoveToElement = QPainterPath::MoveToElement,   LineToElement = QPainterPath::LineToElement,   CurveToElement = QPainterPath::CurveToElement,   CurveToDataElement = QPainterPath::CurveToDataElement};
public slots:
QPainterPath* new_QPainterPath();
QPainterPath* new_QPainterPath(const QPainterPath&  other);
QPainterPath* new_QPainterPath(const QPointF&  startPoint);
void delete_QPainterPath(QPainterPath* obj) { delete obj; }
   void addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   void addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon);
   void addRect(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addRegion(QPainterPath* theWrappedObject, const QRegion&  region);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd);
   void addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text);
   void addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text);
   qreal  angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle);
   void arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle);
   void arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength);
   void arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength);
   QRectF  boundingRect(QPainterPath* theWrappedObject) const;
   int  capacity(QPainterPath* theWrappedObject) const;
   void clear(QPainterPath* theWrappedObject);
   void closeSubpath(QPainterPath* theWrappedObject);
   void connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   bool  contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   bool  contains(QPainterPath* theWrappedObject, const QPointF&  pt) const;
   bool  contains(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   QRectF  controlPointRect(QPainterPath* theWrappedObject) const;
   void cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt);
   void cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty);
   QPointF  currentPosition(QPainterPath* theWrappedObject) const;
   QPainterPath::Element  elementAt(QPainterPath* theWrappedObject, int  i) const;
   int  elementCount(QPainterPath* theWrappedObject) const;
   Qt::FillRule  fillRule(QPainterPath* theWrappedObject) const;
   QPainterPath  intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   bool  intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   bool  intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   bool  isEmpty(QPainterPath* theWrappedObject) const;
   qreal  length(QPainterPath* theWrappedObject) const;
   void lineTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   void moveTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   bool  __ne__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath  __and__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __iand__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QMatrix&  m);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QTransform&  m);
   QPainterPath  __add__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __iadd__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath  __sub__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __isub__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   void writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   QPainterPath  __or__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __ior__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   qreal  percentAtLength(QPainterPath* theWrappedObject, qreal  t) const;
   QPointF  pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt);
   void quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty);
   void reserve(QPainterPath* theWrappedObject, int  size);
   void setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y);
   void setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule);
   QPainterPath  simplified(QPainterPath* theWrappedObject) const;
   qreal  slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   QPainterPath  subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   QPainterPath  subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void swap(QPainterPath* theWrappedObject, QPainterPath&  other);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix) const;
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix = QTransform()) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix = QTransform()) const;
   QPainterPath  toReversed(QPainterPath* theWrappedObject) const;
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix) const;
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix = QTransform()) const;
   void translate(QPainterPath* theWrappedObject, const QPointF&  offset);
   void translate(QPainterPath* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  translated(QPainterPath* theWrappedObject, const QPointF&  offset) const;
   QPainterPath  translated(QPainterPath* theWrappedObject, qreal  dx, qreal  dy) const;
   QPainterPath  united(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
    QString py_toString(QPainterPath*);
    bool __nonzero__(QPainterPath* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QPainterPathStroker : public QObject
{ Q_OBJECT
public:
public slots:
QPainterPathStroker* new_QPainterPathStroker();
QPainterPathStroker* new_QPainterPathStroker(const QPen&  pen);
void delete_QPainterPathStroker(QPainterPathStroker* obj) { delete obj; }
   Qt::PenCapStyle  capStyle(QPainterPathStroker* theWrappedObject) const;
   QPainterPath  createStroke(QPainterPathStroker* theWrappedObject, const QPainterPath&  path) const;
   qreal  curveThreshold(QPainterPathStroker* theWrappedObject) const;
   qreal  dashOffset(QPainterPathStroker* theWrappedObject) const;
   QVector<qreal >  dashPattern(QPainterPathStroker* theWrappedObject) const;
   Qt::PenJoinStyle  joinStyle(QPainterPathStroker* theWrappedObject) const;
   qreal  miterLimit(QPainterPathStroker* theWrappedObject) const;
   void setCapStyle(QPainterPathStroker* theWrappedObject, Qt::PenCapStyle  style);
   void setCurveThreshold(QPainterPathStroker* theWrappedObject, qreal  threshold);
   void setDashOffset(QPainterPathStroker* theWrappedObject, qreal  offset);
   void setDashPattern(QPainterPathStroker* theWrappedObject, Qt::PenStyle  arg__1);
   void setDashPattern(QPainterPathStroker* theWrappedObject, const QVector<qreal >&  dashPattern);
   void setJoinStyle(QPainterPathStroker* theWrappedObject, Qt::PenJoinStyle  style);
   void setMiterLimit(QPainterPathStroker* theWrappedObject, qreal  length);
   void setWidth(QPainterPathStroker* theWrappedObject, qreal  width);
   qreal  width(QPainterPathStroker* theWrappedObject) const;
};





class PythonQtShell_QPainterPath__Element : public QPainterPath::Element
{
public:
    PythonQtShell_QPainterPath__Element():QPainterPath::Element(),_wrapper(nullptr) {};

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





class PythonQtShell_QPainter__PixmapFragment : public QPainter::PixmapFragment
{
public:
    PythonQtShell_QPainter__PixmapFragment():QPainter::PixmapFragment(),_wrapper(nullptr) {};

   ~PythonQtShell_QPainter__PixmapFragment();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPainter__PixmapFragment : public QObject
{ Q_OBJECT
public:
public slots:
QPainter::PixmapFragment* new_QPainter__PixmapFragment();
QPainter::PixmapFragment* new_QPainter__PixmapFragment(const QPainter::PixmapFragment& other) {
PythonQtShell_QPainter__PixmapFragment* a = new PythonQtShell_QPainter__PixmapFragment();
*((QPainter::PixmapFragment*)a) = other;
return a; }
void delete_QPainter__PixmapFragment(QPainter::PixmapFragment* obj) { delete obj; }
   QPainter::PixmapFragment  static_QPainter__PixmapFragment_create(const QPointF&  pos, const QRectF&  sourceRect, qreal  scaleX = 1, qreal  scaleY = 1, qreal  rotation = 0, qreal  opacity = 1);
void py_set_height(QPainter::PixmapFragment* theWrappedObject, qreal  height){ theWrappedObject->height = height; }
qreal  py_get_height(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->height; }
void py_set_opacity(QPainter::PixmapFragment* theWrappedObject, qreal  opacity){ theWrappedObject->opacity = opacity; }
qreal  py_get_opacity(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->opacity; }
void py_set_rotation(QPainter::PixmapFragment* theWrappedObject, qreal  rotation){ theWrappedObject->rotation = rotation; }
qreal  py_get_rotation(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->rotation; }
void py_set_scaleX(QPainter::PixmapFragment* theWrappedObject, qreal  scaleX){ theWrappedObject->scaleX = scaleX; }
qreal  py_get_scaleX(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->scaleX; }
void py_set_scaleY(QPainter::PixmapFragment* theWrappedObject, qreal  scaleY){ theWrappedObject->scaleY = scaleY; }
qreal  py_get_scaleY(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->scaleY; }
void py_set_sourceLeft(QPainter::PixmapFragment* theWrappedObject, qreal  sourceLeft){ theWrappedObject->sourceLeft = sourceLeft; }
qreal  py_get_sourceLeft(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->sourceLeft; }
void py_set_sourceTop(QPainter::PixmapFragment* theWrappedObject, qreal  sourceTop){ theWrappedObject->sourceTop = sourceTop; }
qreal  py_get_sourceTop(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->sourceTop; }
void py_set_width(QPainter::PixmapFragment* theWrappedObject, qreal  width){ theWrappedObject->width = width; }
qreal  py_get_width(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->width; }
void py_set_x(QPainter::PixmapFragment* theWrappedObject, qreal  x){ theWrappedObject->x = x; }
qreal  py_get_x(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QPainter::PixmapFragment* theWrappedObject, qreal  y){ theWrappedObject->y = y; }
qreal  py_get_y(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->y; }
};





class PythonQtShell_QPanGesture : public QPanGesture
{
public:
    PythonQtShell_QPanGesture(QObject*  parent = nullptr):QPanGesture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPanGesture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPanGesture : public QObject
{ Q_OBJECT
public:
public slots:
QPanGesture* new_QPanGesture(QObject*  parent = nullptr);
void delete_QPanGesture(QPanGesture* obj) { delete obj; }
   qreal  acceleration(QPanGesture* theWrappedObject) const;
   QPointF  delta(QPanGesture* theWrappedObject) const;
   QPointF  lastOffset(QPanGesture* theWrappedObject) const;
   QPointF  offset(QPanGesture* theWrappedObject) const;
   void setAcceleration(QPanGesture* theWrappedObject, qreal  value);
   void setLastOffset(QPanGesture* theWrappedObject, const QPointF&  value);
   void setOffset(QPanGesture* theWrappedObject, const QPointF&  value);
};





class PythonQtShell_QPdfWriter : public QPdfWriter
{
public:
    PythonQtShell_QPdfWriter(QIODevice*  device):QPdfWriter(device),_wrapper(nullptr) {};
    PythonQtShell_QPdfWriter(const QString&  filename):QPdfWriter(filename),_wrapper(nullptr) {};

   ~PythonQtShell_QPdfWriter() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  id) const override;
bool  newPage() override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void setMargins(const QPagedPaintDevice::Margins&  m) override;
void setPageSize(QPagedPaintDevice::PageSize  size) override;
void setPageSizeMM(const QSizeF&  size) override;
QPainter*  sharedPainter() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPdfWriter : public QPdfWriter
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  id) const { return this->metric(id); }
inline QPaintEngine*  promoted_paintEngine() const { return this->paintEngine(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  id) const { return QPdfWriter::metric(id); }
inline bool  py_q_newPage() { return QPdfWriter::newPage(); }
inline QPaintEngine*  py_q_paintEngine() const { return QPdfWriter::paintEngine(); }
inline void py_q_setMargins(const QPagedPaintDevice::Margins&  m) { QPdfWriter::setMargins(m); }
inline void py_q_setPageSize(QPagedPaintDevice::PageSize  size) { QPdfWriter::setPageSize(size); }
inline void py_q_setPageSizeMM(const QSizeF&  size) { QPdfWriter::setPageSizeMM(size); }
};

class PythonQtWrapper_QPdfWriter : public QObject
{ Q_OBJECT
public:
public slots:
QPdfWriter* new_QPdfWriter(QIODevice*  device);
QPdfWriter* new_QPdfWriter(const QString&  filename);
void delete_QPdfWriter(QPdfWriter* obj) { delete obj; }
   void addFileAttachment(QPdfWriter* theWrappedObject, const QString&  fileName, const QByteArray&  data, const QString&  mimeType = QString());
   QString  creator(QPdfWriter* theWrappedObject) const;
   QByteArray  documentXmpMetadata(QPdfWriter* theWrappedObject) const;
   int  py_q_metric(QPdfWriter* theWrappedObject, QPaintDevice::PaintDeviceMetric  id) const{  return (((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->py_q_metric(id));}
   bool  py_q_newPage(QPdfWriter* theWrappedObject){  return (((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->py_q_newPage());}
   QPaintEngine*  py_q_paintEngine(QPdfWriter* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->py_q_paintEngine());}
   QPagedPaintDevice::PdfVersion  pdfVersion(QPdfWriter* theWrappedObject) const;
   int  resolution(QPdfWriter* theWrappedObject) const;
   void setCreator(QPdfWriter* theWrappedObject, const QString&  creator);
   void setDocumentXmpMetadata(QPdfWriter* theWrappedObject, const QByteArray&  xmpMetadata);
   void py_q_setMargins(QPdfWriter* theWrappedObject, const QPagedPaintDevice::Margins&  m){  (((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->py_q_setMargins(m));}
   void py_q_setPageSize(QPdfWriter* theWrappedObject, QPagedPaintDevice::PageSize  size){  (((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->py_q_setPageSize(size));}
   void py_q_setPageSizeMM(QPdfWriter* theWrappedObject, const QSizeF&  size){  (((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->py_q_setPageSizeMM(size));}
   void setPdfVersion(QPdfWriter* theWrappedObject, QPagedPaintDevice::PdfVersion  version);
   void setResolution(QPdfWriter* theWrappedObject, int  resolution);
   void setTitle(QPdfWriter* theWrappedObject, const QString&  title);
   QString  title(QPdfWriter* theWrappedObject) const;
};





class PythonQtShell_QPicture : public QPicture
{
public:
    PythonQtShell_QPicture(const QPicture&  arg__1):QPicture(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QPicture(int  formatVersion = -1):QPicture(formatVersion),_wrapper(nullptr) {};

   ~PythonQtShell_QPicture() override;

int  devType() const override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  m) const override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
QPainter*  sharedPainter() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPicture : public QPicture
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  m) const { return this->metric(m); }
inline int  py_q_devType() const { return QPicture::devType(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  m) const { return QPicture::metric(m); }
inline QPaintEngine*  py_q_paintEngine() const { return QPicture::paintEngine(); }
};

class PythonQtWrapper_QPicture : public QObject
{ Q_OBJECT
public:
public slots:
QPicture* new_QPicture(const QPicture&  arg__1);
QPicture* new_QPicture(int  formatVersion = -1);
void delete_QPicture(QPicture* obj) { delete obj; }
   QRect  boundingRect(QPicture* theWrappedObject) const;
   const char*  data(QPicture* theWrappedObject) const;
   int  py_q_devType(QPicture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPicture*)theWrappedObject)->py_q_devType());}
   bool  isNull(QPicture* theWrappedObject) const;
   bool  load(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = nullptr);
   bool  load(QPicture* theWrappedObject, const QString&  fileName, const char*  format = nullptr);
   int  py_q_metric(QPicture* theWrappedObject, QPaintDevice::PaintDeviceMetric  m) const{  return (((PythonQtPublicPromoter_QPicture*)theWrappedObject)->py_q_metric(m));}
   void writeTo(QPicture* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPicture* theWrappedObject, QDataStream&  arg__1);
   QPaintEngine*  py_q_paintEngine(QPicture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPicture*)theWrappedObject)->py_q_paintEngine());}
   bool  play(QPicture* theWrappedObject, QPainter*  p);
   bool  save(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = nullptr);
   bool  save(QPicture* theWrappedObject, const QString&  fileName, const char*  format = nullptr);
   void setBoundingRect(QPicture* theWrappedObject, const QRect&  r);
   uint  size(QPicture* theWrappedObject) const;
   void swap(QPicture* theWrappedObject, QPicture&  other);
    bool __nonzero__(QPicture* obj) { return !obj->isNull(); }
};





class PythonQtShell_QPictureFormatPlugin : public QPictureFormatPlugin
{
public:
    PythonQtShell_QPictureFormatPlugin(QObject*  parent = nullptr):QPictureFormatPlugin(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPictureFormatPlugin() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  installIOHandler(const QString&  format) override;
bool  loadPicture(const QString&  format, const QString&  filename, QPicture*  pic) override;
bool  savePicture(const QString&  format, const QString&  filename, const QPicture&  pic) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPictureFormatPlugin : public QPictureFormatPlugin
{ public:
inline bool  py_q_installIOHandler(const QString&  format) { return this->installIOHandler(format); }
inline bool  py_q_loadPicture(const QString&  format, const QString&  filename, QPicture*  pic) { return QPictureFormatPlugin::loadPicture(format, filename, pic); }
inline bool  py_q_savePicture(const QString&  format, const QString&  filename, const QPicture&  pic) { return QPictureFormatPlugin::savePicture(format, filename, pic); }
};

class PythonQtWrapper_QPictureFormatPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QPictureFormatPlugin* new_QPictureFormatPlugin(QObject*  parent = nullptr);
void delete_QPictureFormatPlugin(QPictureFormatPlugin* obj) { delete obj; }
   bool  installIOHandler(QPictureFormatPlugin* theWrappedObject, const QString&  format);
   bool  py_q_installIOHandler(QPictureFormatPlugin* theWrappedObject, const QString&  format){  return (((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->py_q_installIOHandler(format));}
   bool  loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic);
   bool  py_q_loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic){  return (((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->py_q_loadPicture(format, filename, pic));}
   bool  savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic);
   bool  py_q_savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic){  return (((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->py_q_savePicture(format, filename, pic));}
};





class PythonQtWrapper_QPictureIO : public QObject
{ Q_OBJECT
public:
public slots:
QPictureIO* new_QPictureIO();
QPictureIO* new_QPictureIO(QIODevice*  ioDevice, const char*  format);
QPictureIO* new_QPictureIO(const QString&  fileName, const char*  format);
void delete_QPictureIO(QPictureIO* obj) { delete obj; }
   QString  description(QPictureIO* theWrappedObject) const;
   QString  fileName(QPictureIO* theWrappedObject) const;
   const char*  format(QPictureIO* theWrappedObject) const;
   float  gamma(QPictureIO* theWrappedObject) const;
   QList<QByteArray >  static_QPictureIO_inputFormats();
   QIODevice*  ioDevice(QPictureIO* theWrappedObject) const;
   QList<QByteArray >  static_QPictureIO_outputFormats();
   const char*  parameters(QPictureIO* theWrappedObject) const;
   const QPicture*  picture(QPictureIO* theWrappedObject) const;
   QByteArray  static_QPictureIO_pictureFormat(QIODevice*  arg__1);
   QByteArray  static_QPictureIO_pictureFormat(const QString&  fileName);
   int  quality(QPictureIO* theWrappedObject) const;
   bool  read(QPictureIO* theWrappedObject);
   void setDescription(QPictureIO* theWrappedObject, const QString&  arg__1);
   void setFileName(QPictureIO* theWrappedObject, const QString&  arg__1);
   void setFormat(QPictureIO* theWrappedObject, const char*  arg__1);
   void setGamma(QPictureIO* theWrappedObject, float  arg__1);
   void setIODevice(QPictureIO* theWrappedObject, QIODevice*  arg__1);
   void setParameters(QPictureIO* theWrappedObject, const char*  arg__1);
   void setPicture(QPictureIO* theWrappedObject, const QPicture&  arg__1);
   void setQuality(QPictureIO* theWrappedObject, int  arg__1);
   void setStatus(QPictureIO* theWrappedObject, int  arg__1);
   int  status(QPictureIO* theWrappedObject) const;
   bool  write(QPictureIO* theWrappedObject);
};





class PythonQtShell_QPinchGesture : public QPinchGesture
{
public:
    PythonQtShell_QPinchGesture(QObject*  parent = nullptr):QPinchGesture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPinchGesture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPinchGesture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ChangeFlag )
Q_FLAGS(ChangeFlags )
enum ChangeFlag{
  ScaleFactorChanged = QPinchGesture::ScaleFactorChanged,   RotationAngleChanged = QPinchGesture::RotationAngleChanged,   CenterPointChanged = QPinchGesture::CenterPointChanged};
Q_DECLARE_FLAGS(ChangeFlags, ChangeFlag)
public slots:
QPinchGesture* new_QPinchGesture(QObject*  parent = nullptr);
void delete_QPinchGesture(QPinchGesture* obj) { delete obj; }
   QPointF  centerPoint(QPinchGesture* theWrappedObject) const;
   QPinchGesture::ChangeFlags  changeFlags(QPinchGesture* theWrappedObject) const;
   QPointF  lastCenterPoint(QPinchGesture* theWrappedObject) const;
   qreal  lastRotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  lastScaleFactor(QPinchGesture* theWrappedObject) const;
   qreal  rotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  scaleFactor(QPinchGesture* theWrappedObject) const;
   void setCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value);
   void setLastCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setLastRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setLastScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   void setRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   void setStartCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setTotalChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value);
   void setTotalRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setTotalScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   QPointF  startCenterPoint(QPinchGesture* theWrappedObject) const;
   QPinchGesture::ChangeFlags  totalChangeFlags(QPinchGesture* theWrappedObject) const;
   qreal  totalRotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  totalScaleFactor(QPinchGesture* theWrappedObject) const;
};





class PythonQtWrapper_QPixelFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AlphaPosition AlphaPremultiplied AlphaUsage ByteOrder ColorModel TypeInterpretation YUVLayout )
enum AlphaPosition{
  AtBeginning = QPixelFormat::AtBeginning,   AtEnd = QPixelFormat::AtEnd};
enum AlphaPremultiplied{
  NotPremultiplied = QPixelFormat::NotPremultiplied,   Premultiplied = QPixelFormat::Premultiplied};
enum AlphaUsage{
  UsesAlpha = QPixelFormat::UsesAlpha,   IgnoresAlpha = QPixelFormat::IgnoresAlpha};
enum ByteOrder{
  LittleEndian = QPixelFormat::LittleEndian,   BigEndian = QPixelFormat::BigEndian,   CurrentSystemEndian = QPixelFormat::CurrentSystemEndian};
enum ColorModel{
  RGB = QPixelFormat::RGB,   BGR = QPixelFormat::BGR,   Indexed = QPixelFormat::Indexed,   Grayscale = QPixelFormat::Grayscale,   CMYK = QPixelFormat::CMYK,   HSL = QPixelFormat::HSL,   HSV = QPixelFormat::HSV,   YUV = QPixelFormat::YUV,   Alpha = QPixelFormat::Alpha};
enum TypeInterpretation{
  UnsignedInteger = QPixelFormat::UnsignedInteger,   UnsignedShort = QPixelFormat::UnsignedShort,   UnsignedByte = QPixelFormat::UnsignedByte,   FloatingPoint = QPixelFormat::FloatingPoint};
enum YUVLayout{
  YUV444 = QPixelFormat::YUV444,   YUV422 = QPixelFormat::YUV422,   YUV411 = QPixelFormat::YUV411,   YUV420P = QPixelFormat::YUV420P,   YUV420SP = QPixelFormat::YUV420SP,   YV12 = QPixelFormat::YV12,   UYVY = QPixelFormat::UYVY,   YUYV = QPixelFormat::YUYV,   NV12 = QPixelFormat::NV12,   NV21 = QPixelFormat::NV21,   IMC1 = QPixelFormat::IMC1,   IMC2 = QPixelFormat::IMC2,   IMC3 = QPixelFormat::IMC3,   IMC4 = QPixelFormat::IMC4,   Y8 = QPixelFormat::Y8,   Y16 = QPixelFormat::Y16};
public slots:
QPixelFormat* new_QPixelFormat();
QPixelFormat* new_QPixelFormat(QPixelFormat::ColorModel  colorModel, uchar  firstSize, uchar  secondSize, uchar  thirdSize, uchar  fourthSize, uchar  fifthSize, uchar  alphaSize, QPixelFormat::AlphaUsage  alphaUsage, QPixelFormat::AlphaPosition  alphaPosition, QPixelFormat::AlphaPremultiplied  premultiplied, QPixelFormat::TypeInterpretation  typeInterpretation, QPixelFormat::ByteOrder  byteOrder = QPixelFormat::CurrentSystemEndian, uchar  subEnum = 0);
void delete_QPixelFormat(QPixelFormat* obj) { delete obj; }
   QPixelFormat::AlphaPosition  alphaPosition(QPixelFormat* theWrappedObject) const;
   uchar  alphaSize(QPixelFormat* theWrappedObject) const;
   QPixelFormat::AlphaUsage  alphaUsage(QPixelFormat* theWrappedObject) const;
   uchar  bitsPerPixel(QPixelFormat* theWrappedObject) const;
   uchar  blackSize(QPixelFormat* theWrappedObject) const;
   uchar  blueSize(QPixelFormat* theWrappedObject) const;
   uchar  brightnessSize(QPixelFormat* theWrappedObject) const;
   QPixelFormat::ByteOrder  byteOrder(QPixelFormat* theWrappedObject) const;
   uchar  channelCount(QPixelFormat* theWrappedObject) const;
   QPixelFormat::ColorModel  colorModel(QPixelFormat* theWrappedObject) const;
   uchar  cyanSize(QPixelFormat* theWrappedObject) const;
   uchar  greenSize(QPixelFormat* theWrappedObject) const;
   uchar  hueSize(QPixelFormat* theWrappedObject) const;
   uchar  lightnessSize(QPixelFormat* theWrappedObject) const;
   uchar  magentaSize(QPixelFormat* theWrappedObject) const;
   bool  __ne__(QPixelFormat* theWrappedObject, QPixelFormat  fmt2);
   bool  __eq__(QPixelFormat* theWrappedObject, QPixelFormat  fmt2);
   QPixelFormat::AlphaPremultiplied  premultiplied(QPixelFormat* theWrappedObject) const;
   uchar  redSize(QPixelFormat* theWrappedObject) const;
   uchar  saturationSize(QPixelFormat* theWrappedObject) const;
   uchar  subEnum(QPixelFormat* theWrappedObject) const;
   QPixelFormat::TypeInterpretation  typeInterpretation(QPixelFormat* theWrappedObject) const;
   uchar  yellowSize(QPixelFormat* theWrappedObject) const;
   QPixelFormat::YUVLayout  yuvLayout(QPixelFormat* theWrappedObject) const;
};





class PythonQtShell_QPixmapCache : public QPixmapCache
{
public:
    PythonQtShell_QPixmapCache():QPixmapCache(),_wrapper(nullptr) {};

   ~PythonQtShell_QPixmapCache();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPixmapCache : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache* new_QPixmapCache();
void delete_QPixmapCache(QPixmapCache* obj) { delete obj; }
   int  static_QPixmapCache_cacheLimit();
   void static_QPixmapCache_clear();
   bool  static_QPixmapCache_find(const QPixmapCache::Key&  key, QPixmap*  pixmap);
   QPixmap*  static_QPixmapCache_find(const QString&  key);
   bool  static_QPixmapCache_find(const QString&  key, QPixmap&  pixmap);
   bool  static_QPixmapCache_find(const QString&  key, QPixmap*  pixmap);
   QPixmapCache::Key  static_QPixmapCache_insert(const QPixmap&  pixmap);
   bool  static_QPixmapCache_insert(const QString&  key, const QPixmap&  pixmap);
   void static_QPixmapCache_remove(const QPixmapCache::Key&  key);
   void static_QPixmapCache_remove(const QString&  key);
   bool  static_QPixmapCache_replace(const QPixmapCache::Key&  key, const QPixmap&  pixmap);
   void static_QPixmapCache_setCacheLimit(int  arg__1);
};





class PythonQtWrapper_QPixmapCache__Key : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache::Key* new_QPixmapCache__Key();
QPixmapCache::Key* new_QPixmapCache__Key(const QPixmapCache::Key&  other);
void delete_QPixmapCache__Key(QPixmapCache::Key* obj) { delete obj; }
   bool  isValid(QPixmapCache::Key* theWrappedObject) const;
   bool  __ne__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const;
   QPixmapCache::Key*  operator_assign(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  other);
   bool  __eq__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const;
   void swap(QPixmapCache::Key* theWrappedObject, QPixmapCache::Key&  other);
    bool __nonzero__(QPixmapCache::Key* obj) { return obj->isValid(); }
};





class PythonQtShell_QPlainTextDocumentLayout : public QPlainTextDocumentLayout
{
public:
    PythonQtShell_QPlainTextDocumentLayout(QTextDocument*  document):QPlainTextDocumentLayout(document),_wrapper(nullptr) {};

   ~PythonQtShell_QPlainTextDocumentLayout() override;

QRectF  blockBoundingRect(const QTextBlock&  block) const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
void documentChanged(int  from, int  arg__2, int  charsAdded) override;
QSizeF  documentSize() const override;
void draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2) override;
void drawInlineObject(QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QRectF  frameBoundingRect(QTextFrame*  arg__1) const override;
int  hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const override;
int  pageCount() const override;
void positionInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) override;
void resizeInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPlainTextDocumentLayout : public QPlainTextDocumentLayout
{ public:
inline void promoted_documentChanged(int  from, int  arg__2, int  charsAdded) { this->documentChanged(from, arg__2, charsAdded); }
inline QRectF  py_q_blockBoundingRect(const QTextBlock&  block) const { return QPlainTextDocumentLayout::blockBoundingRect(block); }
inline void py_q_documentChanged(int  from, int  arg__2, int  charsAdded) { QPlainTextDocumentLayout::documentChanged(from, arg__2, charsAdded); }
inline QSizeF  py_q_documentSize() const { return QPlainTextDocumentLayout::documentSize(); }
inline void py_q_draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2) { QPlainTextDocumentLayout::draw(arg__1, arg__2); }
inline QRectF  py_q_frameBoundingRect(QTextFrame*  arg__1) const { return QPlainTextDocumentLayout::frameBoundingRect(arg__1); }
inline int  py_q_hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const { return QPlainTextDocumentLayout::hitTest(arg__1, arg__2); }
inline int  py_q_pageCount() const { return QPlainTextDocumentLayout::pageCount(); }
};

class PythonQtWrapper_QPlainTextDocumentLayout : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextDocumentLayout* new_QPlainTextDocumentLayout(QTextDocument*  document);
void delete_QPlainTextDocumentLayout(QPlainTextDocumentLayout* obj) { delete obj; }
   QRectF  py_q_blockBoundingRect(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_blockBoundingRect(block));}
   int  cursorWidth(QPlainTextDocumentLayout* theWrappedObject) const;
   void py_q_documentChanged(QPlainTextDocumentLayout* theWrappedObject, int  from, int  arg__2, int  charsAdded){  (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_documentChanged(from, arg__2, charsAdded));}
   QSizeF  py_q_documentSize(QPlainTextDocumentLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_documentSize());}
   void py_q_draw(QPlainTextDocumentLayout* theWrappedObject, QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2){  (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_draw(arg__1, arg__2));}
   void ensureBlockLayout(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
   QRectF  py_q_frameBoundingRect(QPlainTextDocumentLayout* theWrappedObject, QTextFrame*  arg__1) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_frameBoundingRect(arg__1));}
   int  py_q_hitTest(QPlainTextDocumentLayout* theWrappedObject, const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_hitTest(arg__1, arg__2));}
   int  py_q_pageCount(QPlainTextDocumentLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_pageCount());}
   void requestUpdate(QPlainTextDocumentLayout* theWrappedObject);
   void setCursorWidth(QPlainTextDocumentLayout* theWrappedObject, int  width);
};





class PythonQtShell_QPlainTextEdit : public QPlainTextEdit
{
public:
    PythonQtShell_QPlainTextEdit(QWidget*  parent = nullptr):QPlainTextEdit(parent),_wrapper(nullptr) {};
    PythonQtShell_QPlainTextEdit(const QString&  text, QWidget*  parent = nullptr):QPlainTextEdit(text, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPlainTextEdit() override;

void actionEvent(QActionEvent*  event) override;
bool  canInsertFromMimeData(const QMimeData*  source) const override;
void changeEvent(QEvent*  e) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  e) override;
QMimeData*  createMimeDataFromSelection() const override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void doSetTextCursor(const QTextCursor&  cursor) override;
void dragEnterEvent(QDragEnterEvent*  e) override;
void dragLeaveEvent(QDragLeaveEvent*  e) override;
void dragMoveEvent(QDragMoveEvent*  e) override;
void dropEvent(QDropEvent*  e) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  e) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const override;
void insertFromMimeData(const QMimeData*  source) override;
void keyPressEvent(QKeyEvent*  e) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  event) override;
QVariant  loadResource(int  type, const QUrl&  name) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  e) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  e) override;
void scrollContentsBy(int  dx, int  dy) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
bool  viewportEvent(QEvent*  arg__1) override;
QSize  viewportSizeHint() const override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPlainTextEdit : public QPlainTextEdit
{ public:
inline QRectF  promoted_blockBoundingGeometry(const QTextBlock&  block) const { return this->blockBoundingGeometry(block); }
inline QRectF  promoted_blockBoundingRect(const QTextBlock&  block) const { return this->blockBoundingRect(block); }
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return this->canInsertFromMimeData(source); }
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline QPointF  promoted_contentOffset() const { return this->contentOffset(); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { this->contextMenuEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return this->createMimeDataFromSelection(); }
inline void promoted_doSetTextCursor(const QTextCursor&  cursor) { this->doSetTextCursor(cursor); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { this->dragEnterEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { this->dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { this->dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { this->dropEvent(e); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline QTextBlock  promoted_firstVisibleBlock() const { return this->firstVisibleBlock(); }
inline void promoted_focusInEvent(QFocusEvent*  e) { this->focusInEvent(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { this->focusOutEvent(e); }
inline QAbstractTextDocumentLayout::PaintContext  promoted_getPaintContext() const { return this->getPaintContext(); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { this->inputMethodEvent(arg__1); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { this->insertFromMimeData(source); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { this->keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { this->keyReleaseEvent(e); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { this->mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { this->mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { this->mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { this->mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  e) { this->timerEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { this->wheelEvent(e); }
inline void promoted_zoomInF(float  range) { this->zoomInF(range); }
inline bool  py_q_canInsertFromMimeData(const QMimeData*  source) const { return QPlainTextEdit::canInsertFromMimeData(source); }
inline void py_q_changeEvent(QEvent*  e) { QPlainTextEdit::changeEvent(e); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  e) { QPlainTextEdit::contextMenuEvent(e); }
inline QMimeData*  py_q_createMimeDataFromSelection() const { return QPlainTextEdit::createMimeDataFromSelection(); }
inline void py_q_doSetTextCursor(const QTextCursor&  cursor) { QPlainTextEdit::doSetTextCursor(cursor); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  e) { QPlainTextEdit::dragEnterEvent(e); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  e) { QPlainTextEdit::dragLeaveEvent(e); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  e) { QPlainTextEdit::dragMoveEvent(e); }
inline void py_q_dropEvent(QDropEvent*  e) { QPlainTextEdit::dropEvent(e); }
inline bool  py_q_event(QEvent*  e) { return QPlainTextEdit::event(e); }
inline void py_q_focusInEvent(QFocusEvent*  e) { QPlainTextEdit::focusInEvent(e); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QPlainTextEdit::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  e) { QPlainTextEdit::focusOutEvent(e); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  arg__1) { QPlainTextEdit::inputMethodEvent(arg__1); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  property) const { return QPlainTextEdit::inputMethodQuery(property); }
inline void py_q_insertFromMimeData(const QMimeData*  source) { QPlainTextEdit::insertFromMimeData(source); }
inline void py_q_keyPressEvent(QKeyEvent*  e) { QPlainTextEdit::keyPressEvent(e); }
inline void py_q_keyReleaseEvent(QKeyEvent*  e) { QPlainTextEdit::keyReleaseEvent(e); }
inline QVariant  py_q_loadResource(int  type, const QUrl&  name) { return QPlainTextEdit::loadResource(type, name); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  e) { QPlainTextEdit::mouseDoubleClickEvent(e); }
inline void py_q_mouseMoveEvent(QMouseEvent*  e) { QPlainTextEdit::mouseMoveEvent(e); }
inline void py_q_mousePressEvent(QMouseEvent*  e) { QPlainTextEdit::mousePressEvent(e); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  e) { QPlainTextEdit::mouseReleaseEvent(e); }
inline void py_q_paintEvent(QPaintEvent*  e) { QPlainTextEdit::paintEvent(e); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QPlainTextEdit::resizeEvent(e); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QPlainTextEdit::scrollContentsBy(dx, dy); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QPlainTextEdit::showEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  e) { QPlainTextEdit::timerEvent(e); }
inline void py_q_wheelEvent(QWheelEvent*  e) { QPlainTextEdit::wheelEvent(e); }
};

class PythonQtWrapper_QPlainTextEdit : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextEdit* new_QPlainTextEdit(QWidget*  parent = nullptr);
QPlainTextEdit* new_QPlainTextEdit(const QString&  text, QWidget*  parent = nullptr);
void delete_QPlainTextEdit(QPlainTextEdit* obj) { delete obj; }
   QString  anchorAt(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
   bool  backgroundVisible(QPlainTextEdit* theWrappedObject) const;
   QRectF  blockBoundingGeometry(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const;
   QRectF  blockBoundingRect(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const;
   int  blockCount(QPlainTextEdit* theWrappedObject) const;
   bool  canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const;
   bool  py_q_canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const{  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_canInsertFromMimeData(source));}
   bool  canPaste(QPlainTextEdit* theWrappedObject) const;
   bool  centerOnScroll(QPlainTextEdit* theWrappedObject) const;
   void py_q_changeEvent(QPlainTextEdit* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_changeEvent(e));}
   QPointF  contentOffset(QPlainTextEdit* theWrappedObject) const;
   void py_q_contextMenuEvent(QPlainTextEdit* theWrappedObject, QContextMenuEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_contextMenuEvent(e));}
   QMimeData*  createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const;
   QMimeData*  py_q_createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_createMimeDataFromSelection());}
   QMenu*  createStandardContextMenu(QPlainTextEdit* theWrappedObject);
   QMenu*  createStandardContextMenu(QPlainTextEdit* theWrappedObject, const QPoint&  position);
   QTextCharFormat  currentCharFormat(QPlainTextEdit* theWrappedObject) const;
   QTextCursor  cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
   QRect  cursorRect(QPlainTextEdit* theWrappedObject) const;
   QRect  cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   int  cursorWidth(QPlainTextEdit* theWrappedObject) const;
   void doSetTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void py_q_doSetTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_doSetTextCursor(cursor));}
   QTextDocument*  document(QPlainTextEdit* theWrappedObject) const;
   QString  documentTitle(QPlainTextEdit* theWrappedObject) const;
   void py_q_dragEnterEvent(QPlainTextEdit* theWrappedObject, QDragEnterEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dragEnterEvent(e));}
   void py_q_dragLeaveEvent(QPlainTextEdit* theWrappedObject, QDragLeaveEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dragLeaveEvent(e));}
   void py_q_dragMoveEvent(QPlainTextEdit* theWrappedObject, QDragMoveEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dragMoveEvent(e));}
   void py_q_dropEvent(QPlainTextEdit* theWrappedObject, QDropEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dropEvent(e));}
   void ensureCursorVisible(QPlainTextEdit* theWrappedObject);
   bool  py_q_event(QPlainTextEdit* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_event(e));}
   QList<QTextEdit::ExtraSelection >  extraSelections(QPlainTextEdit* theWrappedObject) const;
   bool  find(QPlainTextEdit* theWrappedObject, const QRegExp&  exp, QTextDocument::FindFlags  options = QTextDocument::FindFlags());
   bool  find(QPlainTextEdit* theWrappedObject, const QRegularExpression&  exp, QTextDocument::FindFlags  options = QTextDocument::FindFlags());
   bool  find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = QTextDocument::FindFlags());
   QTextBlock  firstVisibleBlock(QPlainTextEdit* theWrappedObject) const;
   void py_q_focusInEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_focusInEvent(e));}
   bool  py_q_focusNextPrevChild(QPlainTextEdit* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_focusOutEvent(e));}
   QAbstractTextDocumentLayout::PaintContext  getPaintContext(QPlainTextEdit* theWrappedObject) const;
   void py_q_inputMethodEvent(QPlainTextEdit* theWrappedObject, QInputMethodEvent*  arg__1){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_inputMethodEvent(arg__1));}
   QVariant  py_q_inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const{  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_inputMethodQuery(property));}
   QVariant  inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  query, QVariant  argument) const;
   void insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source);
   void py_q_insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_insertFromMimeData(source));}
   bool  isReadOnly(QPlainTextEdit* theWrappedObject) const;
   bool  isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const;
   void py_q_keyPressEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_keyPressEvent(e));}
   void py_q_keyReleaseEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_keyReleaseEvent(e));}
   QPlainTextEdit::LineWrapMode  lineWrapMode(QPlainTextEdit* theWrappedObject) const;
   QVariant  loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name);
   QVariant  py_q_loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name){  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_loadResource(type, name));}
   int  maximumBlockCount(QPlainTextEdit* theWrappedObject) const;
   void mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   void py_q_mouseDoubleClickEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mouseDoubleClickEvent(e));}
   void py_q_mouseMoveEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mouseMoveEvent(e));}
   void py_q_mousePressEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mousePressEvent(e));}
   void py_q_mouseReleaseEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mouseReleaseEvent(e));}
   void moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   bool  overwriteMode(QPlainTextEdit* theWrappedObject) const;
   void py_q_paintEvent(QPlainTextEdit* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_paintEvent(e));}
   QString  placeholderText(QPlainTextEdit* theWrappedObject) const;
   void print(QPlainTextEdit* theWrappedObject, QPagedPaintDevice*  printer) const;
   void py_q_resizeEvent(QPlainTextEdit* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_resizeEvent(e));}
   void py_q_scrollContentsBy(QPlainTextEdit* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible);
   void setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled);
   void setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void setCursorWidth(QPlainTextEdit* theWrappedObject, int  width);
   void setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document);
   void setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title);
   void setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode);
   void setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum);
   void setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite);
   void setPlaceholderText(QPlainTextEdit* theWrappedObject, const QString&  placeholderText);
   void setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro);
   void setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b);
   void setTabStopDistance(QPlainTextEdit* theWrappedObject, qreal  distance);
   void setTabStopWidth(QPlainTextEdit* theWrappedObject, int  width);
   void setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable);
   void setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   void py_q_showEvent(QPlainTextEdit* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_showEvent(arg__1));}
   bool  tabChangesFocus(QPlainTextEdit* theWrappedObject) const;
   qreal  tabStopDistance(QPlainTextEdit* theWrappedObject) const;
   int  tabStopWidth(QPlainTextEdit* theWrappedObject) const;
   QTextCursor  textCursor(QPlainTextEdit* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QPlainTextEdit* theWrappedObject) const;
   void py_q_timerEvent(QPlainTextEdit* theWrappedObject, QTimerEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_timerEvent(e));}
   QString  toPlainText(QPlainTextEdit* theWrappedObject) const;
   void py_q_wheelEvent(QPlainTextEdit* theWrappedObject, QWheelEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_wheelEvent(e));}
   QTextOption::WrapMode  wordWrapMode(QPlainTextEdit* theWrappedObject) const;
   void zoomInF(QPlainTextEdit* theWrappedObject, float  range);
};





class PythonQtShell_QPlatformSurfaceEvent : public QPlatformSurfaceEvent
{
public:
    PythonQtShell_QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType  surfaceEventType):QPlatformSurfaceEvent(surfaceEventType),_wrapper(nullptr) {};

   ~PythonQtShell_QPlatformSurfaceEvent() override;


  PythonQtInstanceWrapper* _wrapper;
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
   QPlatformSurfaceEvent::SurfaceEventType  surfaceEventType(QPlatformSurfaceEvent* theWrappedObject) const;
};



#include "com_trolltech_qt_gui3.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextFrame>
#include <QTextLayout>
#include <QTextOption>
#include <QVariant>
#include <qdatastream.h>
#include <qevent.h>
#include <qpaintdevice.h>
#include <qstyleoption.h>
#include <qstylepainter.h>
#include <qtablewidget.h>
#include <qtextdocumentfragment.h>
#include <qtextdocumentwriter.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qtexttable.h>

PythonQtShell_QStyleOptionTitleBar::~PythonQtShell_QStyleOptionTitleBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTitleBar* PythonQtWrapper_QStyleOptionTitleBar::new_QStyleOptionTitleBar()
{ 
return new PythonQtShell_QStyleOptionTitleBar(); }

QStyleOptionTitleBar* PythonQtWrapper_QStyleOptionTitleBar::new_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other)
{ 
return new PythonQtShell_QStyleOptionTitleBar(other); }



PythonQtShell_QStyleOptionToolBar::~PythonQtShell_QStyleOptionToolBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionToolBar* PythonQtWrapper_QStyleOptionToolBar::new_QStyleOptionToolBar()
{ 
return new PythonQtShell_QStyleOptionToolBar(); }

QStyleOptionToolBar* PythonQtWrapper_QStyleOptionToolBar::new_QStyleOptionToolBar(const QStyleOptionToolBar&  other)
{ 
return new PythonQtShell_QStyleOptionToolBar(other); }



PythonQtShell_QStyleOptionToolBox::~PythonQtShell_QStyleOptionToolBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionToolBox* PythonQtWrapper_QStyleOptionToolBox::new_QStyleOptionToolBox()
{ 
return new PythonQtShell_QStyleOptionToolBox(); }

QStyleOptionToolBox* PythonQtWrapper_QStyleOptionToolBox::new_QStyleOptionToolBox(const QStyleOptionToolBox&  other)
{ 
return new PythonQtShell_QStyleOptionToolBox(other); }



PythonQtShell_QStyleOptionToolButton::~PythonQtShell_QStyleOptionToolButton() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionToolButton* PythonQtWrapper_QStyleOptionToolButton::new_QStyleOptionToolButton()
{ 
return new PythonQtShell_QStyleOptionToolButton(); }

QStyleOptionToolButton* PythonQtWrapper_QStyleOptionToolButton::new_QStyleOptionToolButton(const QStyleOptionToolButton&  other)
{ 
return new PythonQtShell_QStyleOptionToolButton(other); }



PythonQtShell_QStyleOptionViewItem::~PythonQtShell_QStyleOptionViewItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionViewItem* PythonQtWrapper_QStyleOptionViewItem::new_QStyleOptionViewItem()
{ 
return new PythonQtShell_QStyleOptionViewItem(); }

QStyleOptionViewItem* PythonQtWrapper_QStyleOptionViewItem::new_QStyleOptionViewItem(const QStyleOptionViewItem&  other)
{ 
return new PythonQtShell_QStyleOptionViewItem(other); }



bool  PythonQtWrapper_QStylePainter::begin(QStylePainter* theWrappedObject, QPaintDevice*  pd, QWidget*  w)
{
  return ( theWrappedObject->begin(pd, w));
}

bool  PythonQtWrapper_QStylePainter::begin(QStylePainter* theWrappedObject, QWidget*  w)
{
  return ( theWrappedObject->begin(w));
}

QStyle*  PythonQtWrapper_QStylePainter::style(QStylePainter* theWrappedObject) const
{
  return ( theWrappedObject->style());
}



PythonQtShell_QStylePlugin::~PythonQtShell_QStylePlugin() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyle*  PythonQtShell_QStylePlugin::create(const QString&  key0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("create");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStyle*" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QStyle* returnValue{};
      void* args[2] = {NULL, (void*)&key0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
          } else {
            returnValue = *((QStyle**)args[0]);
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
const QMetaObject*  PythonQtShell_QStylePlugin::metaObject() const
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
  return QStylePlugin::metaObject();
}
QStylePlugin* PythonQtWrapper_QStylePlugin::new_QStylePlugin(QObject*  parent)
{ 
return new PythonQtShell_QStylePlugin(parent); }

const QMetaObject* PythonQtShell_QStylePlugin::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QStylePlugin::staticMetaObject);
  } else {
    return &QStylePlugin::staticMetaObject;
  }
}
int PythonQtShell_QStylePlugin::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QStylePlugin::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QStyle*  PythonQtWrapper_QStylePlugin::create(QStylePlugin* theWrappedObject, const QString&  key)
{
  return ( theWrappedObject->create(key));
}

const QMetaObject*  PythonQtWrapper_QStylePlugin::metaObject(QStylePlugin* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}



QBrush  PythonQtWrapper_QTableWidgetItem::background(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->background());
}

Qt::CheckState  PythonQtWrapper_QTableWidgetItem::checkState(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->checkState());
}

QTableWidgetItem*  PythonQtWrapper_QTableWidgetItem::clone(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

Qt::ItemFlags  PythonQtWrapper_QTableWidgetItem::flags(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QFont  PythonQtWrapper_QTableWidgetItem::font(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QBrush  PythonQtWrapper_QTableWidgetItem::foreground(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->foreground());
}

QIcon  PythonQtWrapper_QTableWidgetItem::icon(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

bool  PythonQtWrapper_QTableWidgetItem::isSelected(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isSelected());
}

void PythonQtWrapper_QTableWidgetItem::writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out)
{
  out <<  (*theWrappedObject);
}

void PythonQtWrapper_QTableWidgetItem::readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in)
{
  in >>  (*theWrappedObject);
}

QSize  PythonQtWrapper_QTableWidgetItem::sizeHint(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QString  PythonQtWrapper_QTableWidgetItem::statusTip(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->statusTip());
}

QTableWidget*  PythonQtWrapper_QTableWidgetItem::tableWidget(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->tableWidget());
}

QString  PythonQtWrapper_QTableWidgetItem::text(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QString  PythonQtWrapper_QTableWidgetItem::toolTip(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

QString  PythonQtWrapper_QTableWidgetItem::whatsThis(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->whatsThis());
}





PythonQtShell_QTabletEvent::~PythonQtShell_QTabletEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTabletEvent*  PythonQtShell_QTabletEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QTabletEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QTabletEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QTabletEvent**)args[0]);
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
  return QTabletEvent::clone();
}
QTabletEvent*  PythonQtWrapper_QTabletEvent::clone(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QPoint  PythonQtWrapper_QTabletEvent::globalPos(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalPos());
}

const QPointF  PythonQtWrapper_QTabletEvent::globalPosF(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalPosF());
}

qreal  PythonQtWrapper_QTabletEvent::hiResGlobalX(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->hiResGlobalX());
}

qreal  PythonQtWrapper_QTabletEvent::hiResGlobalY(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->hiResGlobalY());
}

QTabletEvent*  PythonQtWrapper_QTabletEvent::operator_assign(QTabletEvent* theWrappedObject, QTabletEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QPoint  PythonQtWrapper_QTabletEvent::pos(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

const QPointF  PythonQtWrapper_QTabletEvent::posF(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->posF());
}

qreal  PythonQtWrapper_QTabletEvent::pressure(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->pressure());
}

qreal  PythonQtWrapper_QTabletEvent::rotation(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->rotation());
}

qreal  PythonQtWrapper_QTabletEvent::tangentialPressure(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->tangentialPressure());
}

qint64  PythonQtWrapper_QTabletEvent::uniqueId(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->uniqueId());
}

qreal  PythonQtWrapper_QTabletEvent::xTilt(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->xTilt());
}

qreal  PythonQtWrapper_QTabletEvent::yTilt(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->yTilt());
}

qreal  PythonQtWrapper_QTabletEvent::z(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->z());
}



QTextBlock* PythonQtWrapper_QTextBlock::new_QTextBlock()
{ 
return new QTextBlock(); }

QTextBlock* PythonQtWrapper_QTextBlock::new_QTextBlock(const QTextBlock&  o)
{ 
return new QTextBlock(o); }

QTextBlock::iterator  PythonQtWrapper_QTextBlock::begin(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

QTextBlockFormat  PythonQtWrapper_QTextBlock::blockFormat(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->blockFormat());
}

QTextCharFormat  PythonQtWrapper_QTextBlock::charFormat(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->charFormat());
}

const QTextDocument*  PythonQtWrapper_QTextBlock::document(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QTextBlock::iterator  PythonQtWrapper_QTextBlock::end(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

bool  PythonQtWrapper_QTextBlock::isValid(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QTextBlock::isVisible(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->isVisible());
}

QTextLayout*  PythonQtWrapper_QTextBlock::layout(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->layout());
}

QTextBlock  PythonQtWrapper_QTextBlock::next(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->next());
}

bool  PythonQtWrapper_QTextBlock::__ne__(QTextBlock* theWrappedObject, const QTextBlock&  o) const
{
  return ( (*theWrappedObject)!= o);
}

bool  PythonQtWrapper_QTextBlock::__lt__(QTextBlock* theWrappedObject, const QTextBlock&  o) const
{
  return ( (*theWrappedObject)< o);
}

bool  PythonQtWrapper_QTextBlock::__eq__(QTextBlock* theWrappedObject, const QTextBlock&  o) const
{
  return ( (*theWrappedObject)== o);
}

QTextBlock  PythonQtWrapper_QTextBlock::previous(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->previous());
}

QString  PythonQtWrapper_QTextBlock::text(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

Qt::LayoutDirection  PythonQtWrapper_QTextBlock::textDirection(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

QList<QTextLayout::FormatRange >  PythonQtWrapper_QTextBlock::textFormats(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->textFormats());
}

QTextList*  PythonQtWrapper_QTextBlock::textList(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->textList());
}

QTextBlockUserData*  PythonQtWrapper_QTextBlock::userData(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->userData());
}



PythonQtShell_QTextBlockFormat::~PythonQtShell_QTextBlockFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextBlockFormat* PythonQtWrapper_QTextBlockFormat::new_QTextBlockFormat()
{ 
return new PythonQtShell_QTextBlockFormat(); }

QTextBlockFormat* PythonQtWrapper_QTextBlockFormat::new_QTextBlockFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextBlockFormat(fmt); }

Qt::Alignment  PythonQtWrapper_QTextBlockFormat::alignment(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

qreal  PythonQtWrapper_QTextBlockFormat::bottomMargin(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomMargin());
}

bool  PythonQtWrapper_QTextBlockFormat::isValid(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextBlockFormat::leftMargin(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftMargin());
}

qreal  PythonQtWrapper_QTextBlockFormat::lineHeight(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->lineHeight());
}

qreal  PythonQtWrapper_QTextBlockFormat::lineHeight(QTextBlockFormat* theWrappedObject, qreal  scriptLineHeight, qreal  scaling) const
{
  return ( theWrappedObject->lineHeight(scriptLineHeight, scaling));
}

bool  PythonQtWrapper_QTextBlockFormat::nonBreakableLines(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->nonBreakableLines());
}

QTextFormat::PageBreakFlags  PythonQtWrapper_QTextBlockFormat::pageBreakPolicy(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->pageBreakPolicy());
}

qreal  PythonQtWrapper_QTextBlockFormat::rightMargin(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightMargin());
}

QList<QTextOption::Tab >  PythonQtWrapper_QTextBlockFormat::tabPositions(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->tabPositions());
}

qreal  PythonQtWrapper_QTextBlockFormat::textIndent(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->textIndent());
}

qreal  PythonQtWrapper_QTextBlockFormat::topMargin(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->topMargin());
}



PythonQtShell_QTextBlockUserData::~PythonQtShell_QTextBlockUserData() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextBlockUserData* PythonQtWrapper_QTextBlockUserData::new_QTextBlockUserData()
{ 
return new PythonQtShell_QTextBlockUserData(); }



PythonQtShell_QTextCharFormat::~PythonQtShell_QTextCharFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextCharFormat* PythonQtWrapper_QTextCharFormat::new_QTextCharFormat()
{ 
return new PythonQtShell_QTextCharFormat(); }

QTextCharFormat* PythonQtWrapper_QTextCharFormat::new_QTextCharFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextCharFormat(fmt); }

QString  PythonQtWrapper_QTextCharFormat::anchorHref(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->anchorHref());
}

QStringList  PythonQtWrapper_QTextCharFormat::anchorNames(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->anchorNames());
}

qreal  PythonQtWrapper_QTextCharFormat::baselineOffset(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->baselineOffset());
}

QFont  PythonQtWrapper_QTextCharFormat::font(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QFont::Capitalization  PythonQtWrapper_QTextCharFormat::fontCapitalization(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontCapitalization());
}

QVariant  PythonQtWrapper_QTextCharFormat::fontFamilies(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontFamilies());
}

QString  PythonQtWrapper_QTextCharFormat::fontFamily(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontFamily());
}

bool  PythonQtWrapper_QTextCharFormat::fontFixedPitch(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontFixedPitch());
}

QFont::HintingPreference  PythonQtWrapper_QTextCharFormat::fontHintingPreference(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontHintingPreference());
}

bool  PythonQtWrapper_QTextCharFormat::fontItalic(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontItalic());
}

bool  PythonQtWrapper_QTextCharFormat::fontKerning(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontKerning());
}

qreal  PythonQtWrapper_QTextCharFormat::fontLetterSpacing(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontLetterSpacing());
}

QFont::SpacingType  PythonQtWrapper_QTextCharFormat::fontLetterSpacingType(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontLetterSpacingType());
}

bool  PythonQtWrapper_QTextCharFormat::fontOverline(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontOverline());
}

qreal  PythonQtWrapper_QTextCharFormat::fontPointSize(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontPointSize());
}

bool  PythonQtWrapper_QTextCharFormat::fontStrikeOut(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontStrikeOut());
}

QFont::StyleHint  PythonQtWrapper_QTextCharFormat::fontStyleHint(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontStyleHint());
}

QVariant  PythonQtWrapper_QTextCharFormat::fontStyleName(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontStyleName());
}

QFont::StyleStrategy  PythonQtWrapper_QTextCharFormat::fontStyleStrategy(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontStyleStrategy());
}

bool  PythonQtWrapper_QTextCharFormat::fontUnderline(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontUnderline());
}

qreal  PythonQtWrapper_QTextCharFormat::fontWordSpacing(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontWordSpacing());
}

bool  PythonQtWrapper_QTextCharFormat::isAnchor(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->isAnchor());
}

bool  PythonQtWrapper_QTextCharFormat::isValid(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextCharFormat::subScriptBaseline(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->subScriptBaseline());
}

qreal  PythonQtWrapper_QTextCharFormat::superScriptBaseline(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->superScriptBaseline());
}

QPen  PythonQtWrapper_QTextCharFormat::textOutline(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->textOutline());
}

QString  PythonQtWrapper_QTextCharFormat::toolTip(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

QColor  PythonQtWrapper_QTextCharFormat::underlineColor(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->underlineColor());
}

QTextCharFormat::UnderlineStyle  PythonQtWrapper_QTextCharFormat::underlineStyle(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->underlineStyle());
}

QTextCharFormat::VerticalAlignment  PythonQtWrapper_QTextCharFormat::verticalAlignment(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->verticalAlignment());
}



QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment()
{ 
return new QTextDocumentFragment(); }

QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment(const QTextCursor&  range)
{ 
return new QTextDocumentFragment(range); }

QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment(const QTextDocument*  document)
{ 
return new QTextDocumentFragment(document); }

QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment(const QTextDocumentFragment&  rhs)
{ 
return new QTextDocumentFragment(rhs); }

QTextDocumentFragment  PythonQtWrapper_QTextDocumentFragment::static_QTextDocumentFragment_fromHtml(const QString&  html, const QTextDocument*  resourceProvider)
{
  return (QTextDocumentFragment::fromHtml(html, resourceProvider));
}

QTextDocumentFragment  PythonQtWrapper_QTextDocumentFragment::static_QTextDocumentFragment_fromPlainText(const QString&  plainText)
{
  return (QTextDocumentFragment::fromPlainText(plainText));
}

bool  PythonQtWrapper_QTextDocumentFragment::isEmpty(QTextDocumentFragment* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QString  PythonQtWrapper_QTextDocumentFragment::toHtml(QTextDocumentFragment* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QString  PythonQtWrapper_QTextDocumentFragment::toPlainText(QTextDocumentFragment* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}



QIODevice*  PythonQtWrapper_QTextDocumentWriter::device(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QString  PythonQtWrapper_QTextDocumentWriter::fileName(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QByteArray  PythonQtWrapper_QTextDocumentWriter::format(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QList<QByteArray >  PythonQtWrapper_QTextDocumentWriter::static_QTextDocumentWriter_supportedDocumentFormats()
{
  return (QTextDocumentWriter::supportedDocumentFormats());
}

bool  PythonQtWrapper_QTextDocumentWriter::write(QTextDocumentWriter* theWrappedObject, const QTextDocument*  document)
{
  return ( theWrappedObject->write(document));
}

bool  PythonQtWrapper_QTextDocumentWriter::write(QTextDocumentWriter* theWrappedObject, const QTextDocumentFragment&  fragment)
{
  return ( theWrappedObject->write(fragment));
}



QTextFragment* PythonQtWrapper_QTextFragment::new_QTextFragment()
{ 
return new QTextFragment(); }

QTextFragment* PythonQtWrapper_QTextFragment::new_QTextFragment(const QTextFragment&  o)
{ 
return new QTextFragment(o); }

QTextCharFormat  PythonQtWrapper_QTextFragment::charFormat(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->charFormat());
}

bool  PythonQtWrapper_QTextFragment::isValid(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QTextFragment::__ne__(QTextFragment* theWrappedObject, const QTextFragment&  o) const
{
  return ( (*theWrappedObject)!= o);
}

bool  PythonQtWrapper_QTextFragment::__lt__(QTextFragment* theWrappedObject, const QTextFragment&  o) const
{
  return ( (*theWrappedObject)< o);
}

bool  PythonQtWrapper_QTextFragment::__eq__(QTextFragment* theWrappedObject, const QTextFragment&  o) const
{
  return ( (*theWrappedObject)== o);
}

QString  PythonQtWrapper_QTextFragment::text(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->text());
}



PythonQtShell_QTextFrameFormat::~PythonQtShell_QTextFrameFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextFrameFormat* PythonQtWrapper_QTextFrameFormat::new_QTextFrameFormat()
{ 
return new PythonQtShell_QTextFrameFormat(); }

QTextFrameFormat* PythonQtWrapper_QTextFrameFormat::new_QTextFrameFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextFrameFormat(fmt); }

qreal  PythonQtWrapper_QTextFrameFormat::border(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->border());
}

QBrush  PythonQtWrapper_QTextFrameFormat::borderBrush(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->borderBrush());
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextFrameFormat::borderStyle(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->borderStyle());
}

qreal  PythonQtWrapper_QTextFrameFormat::bottomMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomMargin());
}

QTextLength  PythonQtWrapper_QTextFrameFormat::height(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QTextFrameFormat::isValid(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextFrameFormat::leftMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftMargin());
}

qreal  PythonQtWrapper_QTextFrameFormat::margin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->margin());
}

qreal  PythonQtWrapper_QTextFrameFormat::padding(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->padding());
}

QTextFormat::PageBreakFlags  PythonQtWrapper_QTextFrameFormat::pageBreakPolicy(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->pageBreakPolicy());
}

QTextFrameFormat::Position  PythonQtWrapper_QTextFrameFormat::position(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

qreal  PythonQtWrapper_QTextFrameFormat::rightMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightMargin());
}

qreal  PythonQtWrapper_QTextFrameFormat::topMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->topMargin());
}

QTextLength  PythonQtWrapper_QTextFrameFormat::width(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



PythonQtShell_QTextImageFormat::~PythonQtShell_QTextImageFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextImageFormat* PythonQtWrapper_QTextImageFormat::new_QTextImageFormat()
{ 
return new PythonQtShell_QTextImageFormat(); }

QTextImageFormat* PythonQtWrapper_QTextImageFormat::new_QTextImageFormat(const QTextFormat&  format)
{ 
return new PythonQtShell_QTextImageFormat(format); }

qreal  PythonQtWrapper_QTextImageFormat::height(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QTextImageFormat::isValid(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QTextImageFormat::name(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

qreal  PythonQtWrapper_QTextImageFormat::width(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QTextInlineObject* PythonQtWrapper_QTextInlineObject::new_QTextInlineObject()
{ 
return new QTextInlineObject(); }

qreal  PythonQtWrapper_QTextInlineObject::ascent(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextInlineObject::descent(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QTextFormat  PythonQtWrapper_QTextInlineObject::format(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

qreal  PythonQtWrapper_QTextInlineObject::height(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QTextInlineObject::isValid(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QRectF  PythonQtWrapper_QTextInlineObject::rect(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

Qt::LayoutDirection  PythonQtWrapper_QTextInlineObject::textDirection(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

qreal  PythonQtWrapper_QTextInlineObject::width(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



PythonQtShell_QTextItem::~PythonQtShell_QTextItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextItem* PythonQtWrapper_QTextItem::new_QTextItem()
{ 
return new PythonQtShell_QTextItem(); }

qreal  PythonQtWrapper_QTextItem::ascent(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextItem::descent(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QFont  PythonQtWrapper_QTextItem::font(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QTextItem::RenderFlags  PythonQtWrapper_QTextItem::renderFlags(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->renderFlags());
}

QString  PythonQtWrapper_QTextItem::text(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

qreal  PythonQtWrapper_QTextItem::width(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QRectF  PythonQtWrapper_QTextLayout::boundingRect(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QTextLayout::cacheEnabled(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->cacheEnabled());
}

QTextLine  PythonQtWrapper_QTextLayout::createLine(QTextLayout* theWrappedObject)
{
  return ( theWrappedObject->createLine());
}

Qt::CursorMoveStyle  PythonQtWrapper_QTextLayout::cursorMoveStyle(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->cursorMoveStyle());
}

QFont  PythonQtWrapper_QTextLayout::font(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QList<QTextLayout::FormatRange >  PythonQtWrapper_QTextLayout::formats(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->formats());
}

qreal  PythonQtWrapper_QTextLayout::maximumWidth(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->maximumWidth());
}

qreal  PythonQtWrapper_QTextLayout::minimumWidth(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->minimumWidth());
}

QPointF  PythonQtWrapper_QTextLayout::position(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QString  PythonQtWrapper_QTextLayout::preeditAreaText(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->preeditAreaText());
}

QString  PythonQtWrapper_QTextLayout::text(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

const QTextOption*  PythonQtWrapper_QTextLayout::textOption(QTextLayout* theWrappedObject) const
{
  return &( theWrappedObject->textOption());
}



PythonQtShell_QTextLayout__FormatRange::~PythonQtShell_QTextLayout__FormatRange() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextLayout::FormatRange* PythonQtWrapper_QTextLayout__FormatRange::new_QTextLayout__FormatRange()
{ 
return new PythonQtShell_QTextLayout__FormatRange(); }



QTextLine* PythonQtWrapper_QTextLine::new_QTextLine()
{ 
return new QTextLine(); }

qreal  PythonQtWrapper_QTextLine::ascent(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextLine::descent(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

qreal  PythonQtWrapper_QTextLine::height(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

qreal  PythonQtWrapper_QTextLine::horizontalAdvance(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->horizontalAdvance());
}

bool  PythonQtWrapper_QTextLine::isValid(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextLine::leading(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->leading());
}

bool  PythonQtWrapper_QTextLine::leadingIncluded(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->leadingIncluded());
}

QRectF  PythonQtWrapper_QTextLine::naturalTextRect(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->naturalTextRect());
}

qreal  PythonQtWrapper_QTextLine::naturalTextWidth(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->naturalTextWidth());
}

QPointF  PythonQtWrapper_QTextLine::position(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QRectF  PythonQtWrapper_QTextLine::rect(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

qreal  PythonQtWrapper_QTextLine::width(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

qreal  PythonQtWrapper_QTextLine::x(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

qreal  PythonQtWrapper_QTextLine::y(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



PythonQtShell_QTextListFormat::~PythonQtShell_QTextListFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextListFormat* PythonQtWrapper_QTextListFormat::new_QTextListFormat()
{ 
return new PythonQtShell_QTextListFormat(); }

QTextListFormat* PythonQtWrapper_QTextListFormat::new_QTextListFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextListFormat(fmt); }

bool  PythonQtWrapper_QTextListFormat::isValid(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QTextListFormat::numberPrefix(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->numberPrefix());
}

QString  PythonQtWrapper_QTextListFormat::numberSuffix(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->numberSuffix());
}

QTextListFormat::Style  PythonQtWrapper_QTextListFormat::style(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->style());
}



QTextOption* PythonQtWrapper_QTextOption::new_QTextOption()
{ 
return new QTextOption(); }

QTextOption* PythonQtWrapper_QTextOption::new_QTextOption(Qt::Alignment  alignment)
{ 
return new QTextOption(alignment); }

QTextOption* PythonQtWrapper_QTextOption::new_QTextOption(const QTextOption&  o)
{ 
return new QTextOption(o); }

Qt::Alignment  PythonQtWrapper_QTextOption::alignment(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

QTextOption::Flags  PythonQtWrapper_QTextOption::flags(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QList<qreal >  PythonQtWrapper_QTextOption::tabArray(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->tabArray());
}

qreal  PythonQtWrapper_QTextOption::tabStopDistance(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->tabStopDistance());
}

QList<QTextOption::Tab >  PythonQtWrapper_QTextOption::tabs(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->tabs());
}

Qt::LayoutDirection  PythonQtWrapper_QTextOption::textDirection(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

bool  PythonQtWrapper_QTextOption::useDesignMetrics(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->useDesignMetrics());
}

QTextOption::WrapMode  PythonQtWrapper_QTextOption::wrapMode(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->wrapMode());
}



PythonQtShell_QTextOption__Tab::~PythonQtShell_QTextOption__Tab() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextOption::Tab* PythonQtWrapper_QTextOption__Tab::new_QTextOption__Tab()
{ 
return new PythonQtShell_QTextOption__Tab(); }

QTextOption::Tab* PythonQtWrapper_QTextOption__Tab::new_QTextOption__Tab(qreal  pos, QTextOption::TabType  tabType, QChar  delim)
{ 
return new PythonQtShell_QTextOption__Tab(pos, tabType, delim); }

bool  PythonQtWrapper_QTextOption__Tab::__ne__(QTextOption::Tab* theWrappedObject, const QTextOption::Tab&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QTextOption__Tab::__eq__(QTextOption::Tab* theWrappedObject, const QTextOption::Tab&  other) const
{
  return ( (*theWrappedObject)== other);
}



QTextTableCell* PythonQtWrapper_QTextTableCell::new_QTextTableCell()
{ 
return new QTextTableCell(); }

QTextTableCell* PythonQtWrapper_QTextTableCell::new_QTextTableCell(const QTextTableCell&  o)
{ 
return new QTextTableCell(o); }

QTextFrame::iterator  PythonQtWrapper_QTextTableCell::begin(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

QTextFrame::iterator  PythonQtWrapper_QTextTableCell::end(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

QTextCursor  PythonQtWrapper_QTextTableCell::firstCursorPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->firstCursorPosition());
}

QTextCharFormat  PythonQtWrapper_QTextTableCell::format(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

bool  PythonQtWrapper_QTextTableCell::isValid(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QTextCursor  PythonQtWrapper_QTextTableCell::lastCursorPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->lastCursorPosition());
}

bool  PythonQtWrapper_QTextTableCell::__ne__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QTextTableCell::__eq__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const
{
  return ( (*theWrappedObject)== other);
}



PythonQtShell_QTextTableCellFormat::~PythonQtShell_QTextTableCellFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextTableCellFormat* PythonQtWrapper_QTextTableCellFormat::new_QTextTableCellFormat()
{ 
return new PythonQtShell_QTextTableCellFormat(); }

QTextTableCellFormat* PythonQtWrapper_QTextTableCellFormat::new_QTextTableCellFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextTableCellFormat(fmt); }

qreal  PythonQtWrapper_QTextTableCellFormat::bottomBorder(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomBorder());
}

QBrush  PythonQtWrapper_QTextTableCellFormat::bottomBorderBrush(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomBorderBrush());
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextTableCellFormat::bottomBorderStyle(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomBorderStyle());
}

qreal  PythonQtWrapper_QTextTableCellFormat::bottomPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomPadding());
}

bool  PythonQtWrapper_QTextTableCellFormat::isValid(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextTableCellFormat::leftBorder(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftBorder());
}

QBrush  PythonQtWrapper_QTextTableCellFormat::leftBorderBrush(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftBorderBrush());
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextTableCellFormat::leftBorderStyle(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftBorderStyle());
}

qreal  PythonQtWrapper_QTextTableCellFormat::leftPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftPadding());
}

qreal  PythonQtWrapper_QTextTableCellFormat::rightBorder(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightBorder());
}

QBrush  PythonQtWrapper_QTextTableCellFormat::rightBorderBrush(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightBorderBrush());
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextTableCellFormat::rightBorderStyle(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightBorderStyle());
}

qreal  PythonQtWrapper_QTextTableCellFormat::rightPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightPadding());
}

qreal  PythonQtWrapper_QTextTableCellFormat::topBorder(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->topBorder());
}

QBrush  PythonQtWrapper_QTextTableCellFormat::topBorderBrush(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->topBorderBrush());
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextTableCellFormat::topBorderStyle(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->topBorderStyle());
}

qreal  PythonQtWrapper_QTextTableCellFormat::topPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->topPadding());
}



PythonQtShell_QTextTableFormat::~PythonQtShell_QTextTableFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextTableFormat* PythonQtWrapper_QTextTableFormat::new_QTextTableFormat()
{ 
return new PythonQtShell_QTextTableFormat(); }

QTextTableFormat* PythonQtWrapper_QTextTableFormat::new_QTextTableFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextTableFormat(fmt); }

Qt::Alignment  PythonQtWrapper_QTextTableFormat::alignment(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

bool  PythonQtWrapper_QTextTableFormat::borderCollapse(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->borderCollapse());
}

qreal  PythonQtWrapper_QTextTableFormat::cellPadding(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellPadding());
}

qreal  PythonQtWrapper_QTextTableFormat::cellSpacing(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellSpacing());
}

QList<QTextLength >  PythonQtWrapper_QTextTableFormat::columnWidthConstraints(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->columnWidthConstraints());
}

bool  PythonQtWrapper_QTextTableFormat::isValid(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}



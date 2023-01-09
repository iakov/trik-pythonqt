#include "com_trolltech_qt_gui2.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qevent.h>
#include <qlayoutitem.h>
#include <qscrollerproperties.h>
#include <qstringlistmodel.h>
#include <qstyleoption.h>
#include <qtransform.h>

PythonQtShell_QScrollEvent::~PythonQtShell_QScrollEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QScrollEvent*  PythonQtShell_QScrollEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QScrollEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QScrollEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QScrollEvent**)args[0]);
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
  return QScrollEvent::clone();
}
QScrollEvent* PythonQtWrapper_QScrollEvent::new_QScrollEvent(const QPointF&  contentPos, const QPointF&  overshoot, QScrollEvent::ScrollState  scrollState)
{ 
return new PythonQtShell_QScrollEvent(contentPos, overshoot, scrollState); }

QScrollEvent*  PythonQtWrapper_QScrollEvent::clone(QScrollEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QPointF  PythonQtWrapper_QScrollEvent::contentPos(QScrollEvent* theWrappedObject) const
{
  return ( theWrappedObject->contentPos());
}

QScrollEvent*  PythonQtWrapper_QScrollEvent::operator_assign(QScrollEvent* theWrappedObject, QScrollEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QPointF  PythonQtWrapper_QScrollEvent::overshootDistance(QScrollEvent* theWrappedObject) const
{
  return ( theWrappedObject->overshootDistance());
}

QScrollEvent::ScrollState  PythonQtWrapper_QScrollEvent::scrollState(QScrollEvent* theWrappedObject) const
{
  return ( theWrappedObject->scrollState());
}



PythonQtShell_QScrollPrepareEvent::~PythonQtShell_QScrollPrepareEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QScrollPrepareEvent*  PythonQtShell_QScrollPrepareEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QScrollPrepareEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QScrollPrepareEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QScrollPrepareEvent**)args[0]);
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
  return QScrollPrepareEvent::clone();
}
QScrollPrepareEvent* PythonQtWrapper_QScrollPrepareEvent::new_QScrollPrepareEvent(const QPointF&  startPos)
{ 
return new PythonQtShell_QScrollPrepareEvent(startPos); }

QScrollPrepareEvent*  PythonQtWrapper_QScrollPrepareEvent::clone(QScrollPrepareEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QPointF  PythonQtWrapper_QScrollPrepareEvent::contentPos(QScrollPrepareEvent* theWrappedObject) const
{
  return ( theWrappedObject->contentPos());
}

QRectF  PythonQtWrapper_QScrollPrepareEvent::contentPosRange(QScrollPrepareEvent* theWrappedObject) const
{
  return ( theWrappedObject->contentPosRange());
}

QScrollPrepareEvent*  PythonQtWrapper_QScrollPrepareEvent::operator_assign(QScrollPrepareEvent* theWrappedObject, QScrollPrepareEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QPointF  PythonQtWrapper_QScrollPrepareEvent::startPos(QScrollPrepareEvent* theWrappedObject) const
{
  return ( theWrappedObject->startPos());
}

QSizeF  PythonQtWrapper_QScrollPrepareEvent::viewportSize(QScrollPrepareEvent* theWrappedObject) const
{
  return ( theWrappedObject->viewportSize());
}



PythonQtShell_QScrollerProperties::~PythonQtShell_QScrollerProperties() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QScrollerProperties* PythonQtWrapper_QScrollerProperties::new_QScrollerProperties()
{ 
return new PythonQtShell_QScrollerProperties(); }

QScrollerProperties* PythonQtWrapper_QScrollerProperties::new_QScrollerProperties(const QScrollerProperties&  sp)
{ 
return new PythonQtShell_QScrollerProperties(sp); }

bool  PythonQtWrapper_QScrollerProperties::__ne__(QScrollerProperties* theWrappedObject, const QScrollerProperties&  sp) const
{
  return ( (*theWrappedObject)!= sp);
}

QScrollerProperties*  PythonQtWrapper_QScrollerProperties::operator_assign(QScrollerProperties* theWrappedObject, const QScrollerProperties&  sp)
{
  return &( (*theWrappedObject)= sp);
}

bool  PythonQtWrapper_QScrollerProperties::__eq__(QScrollerProperties* theWrappedObject, const QScrollerProperties&  sp) const
{
  return ( (*theWrappedObject)== sp);
}

QVariant  PythonQtWrapper_QScrollerProperties::scrollMetric(QScrollerProperties* theWrappedObject, QScrollerProperties::ScrollMetric  metric) const
{
  return ( theWrappedObject->scrollMetric(metric));
}



PythonQtShell_QShortcutEvent::~PythonQtShell_QShortcutEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QShortcutEvent*  PythonQtShell_QShortcutEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QShortcutEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QShortcutEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QShortcutEvent**)args[0]);
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
  return QShortcutEvent::clone();
}
QShortcutEvent*  PythonQtWrapper_QShortcutEvent::clone(QShortcutEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

bool  PythonQtWrapper_QShortcutEvent::isAmbiguous(QShortcutEvent* theWrappedObject) const
{
  return ( theWrappedObject->isAmbiguous());
}

const QKeySequence*  PythonQtWrapper_QShortcutEvent::key(QShortcutEvent* theWrappedObject) const
{
  return &( theWrappedObject->key());
}

QShortcutEvent*  PythonQtWrapper_QShortcutEvent::operator_assign(QShortcutEvent* theWrappedObject, QShortcutEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QShowEvent::~PythonQtShell_QShowEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QShowEvent* PythonQtWrapper_QShowEvent::new_QShowEvent()
{ 
return new PythonQtShell_QShowEvent(); }

QShowEvent*  PythonQtWrapper_QShowEvent::operator_assign(QShowEvent* theWrappedObject, QShowEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



QSizePolicy  PythonQtWrapper_QSpacerItem::sizePolicy(QSpacerItem* theWrappedObject) const
{
  return ( theWrappedObject->sizePolicy());
}



PythonQtShell_QStatusTipEvent::~PythonQtShell_QStatusTipEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStatusTipEvent*  PythonQtShell_QStatusTipEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStatusTipEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStatusTipEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QStatusTipEvent**)args[0]);
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
  return QStatusTipEvent::clone();
}
QStatusTipEvent* PythonQtWrapper_QStatusTipEvent::new_QStatusTipEvent(const QString&  tip)
{ 
return new PythonQtShell_QStatusTipEvent(tip); }

QStatusTipEvent*  PythonQtWrapper_QStatusTipEvent::clone(QStatusTipEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QStatusTipEvent*  PythonQtWrapper_QStatusTipEvent::operator_assign(QStatusTipEvent* theWrappedObject, QStatusTipEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QString  PythonQtWrapper_QStatusTipEvent::tip(QStatusTipEvent* theWrappedObject) const
{
  return ( theWrappedObject->tip());
}



PythonQtShell_QStringListModel::~PythonQtShell_QStringListModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QStringListModel::clearItemData(const QModelIndex&  index0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clearItemData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clearItemData", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
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
  return QStringListModel::clearItemData(index0);
}
Qt::ItemFlags  PythonQtShell_QStringListModel::flags(const QModelIndex&  index0) const
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
  return QStringListModel::flags(index0);
}
const QMetaObject*  PythonQtShell_QStringListModel::metaObject() const
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
  return QStringListModel::metaObject();
}
Qt::DropActions  PythonQtShell_QStringListModel::supportedDropActions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedDropActions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedDropActions", methodInfo, result);
          } else {
            returnValue = *((Qt::DropActions*)args[0]);
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
  return QStringListModel::supportedDropActions();
}
QStringListModel* PythonQtWrapper_QStringListModel::new_QStringListModel(QObject*  parent)
{ 
return new PythonQtShell_QStringListModel(parent); }

QStringListModel* PythonQtWrapper_QStringListModel::new_QStringListModel(const QStringList&  strings, QObject*  parent)
{ 
return new PythonQtShell_QStringListModel(strings, parent); }

bool  PythonQtWrapper_QStringListModel::clearItemData(QStringListModel* theWrappedObject, const QModelIndex&  index)
{
  return ( theWrappedObject->clearItemData(index));
}

QStringList  PythonQtWrapper_QStringListModel::stringList(QStringListModel* theWrappedObject) const
{
  return ( theWrappedObject->stringList());
}

Qt::DropActions  PythonQtWrapper_QStringListModel::supportedDropActions(QStringListModel* theWrappedObject) const
{
  return ( theWrappedObject->supportedDropActions());
}



PythonQtShell_QStyleFactory::~PythonQtShell_QStyleFactory() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleFactory* PythonQtWrapper_QStyleFactory::new_QStyleFactory()
{ 
return new PythonQtShell_QStyleFactory(); }

QStyle*  PythonQtWrapper_QStyleFactory::static_QStyleFactory_create(const QString&  arg__1)
{
  return (QStyleFactory::create(arg__1));
}

QStringList  PythonQtWrapper_QStyleFactory::static_QStyleFactory_keys()
{
  return (QStyleFactory::keys());
}





PythonQtShell_QStyleHintReturnMask::~PythonQtShell_QStyleHintReturnMask() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleHintReturnMask* PythonQtWrapper_QStyleHintReturnMask::new_QStyleHintReturnMask()
{ 
return new PythonQtShell_QStyleHintReturnMask(); }



PythonQtShell_QStyleHintReturnVariant::~PythonQtShell_QStyleHintReturnVariant() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleHintReturnVariant* PythonQtWrapper_QStyleHintReturnVariant::new_QStyleHintReturnVariant()
{ 
return new PythonQtShell_QStyleHintReturnVariant(); }



PythonQtShell_QStyleOption::~PythonQtShell_QStyleOption() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOption* PythonQtWrapper_QStyleOption::new_QStyleOption(const QStyleOption&  other)
{ 
return new PythonQtShell_QStyleOption(other); }

QString PythonQtWrapper_QStyleOption::py_toString(QStyleOption* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QStyleOptionButton::~PythonQtShell_QStyleOptionButton() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionButton* PythonQtWrapper_QStyleOptionButton::new_QStyleOptionButton()
{ 
return new PythonQtShell_QStyleOptionButton(); }

QStyleOptionButton* PythonQtWrapper_QStyleOptionButton::new_QStyleOptionButton(const QStyleOptionButton&  other)
{ 
return new PythonQtShell_QStyleOptionButton(other); }



PythonQtShell_QStyleOptionComboBox::~PythonQtShell_QStyleOptionComboBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionComboBox* PythonQtWrapper_QStyleOptionComboBox::new_QStyleOptionComboBox()
{ 
return new PythonQtShell_QStyleOptionComboBox(); }

QStyleOptionComboBox* PythonQtWrapper_QStyleOptionComboBox::new_QStyleOptionComboBox(const QStyleOptionComboBox&  other)
{ 
return new PythonQtShell_QStyleOptionComboBox(other); }



PythonQtShell_QStyleOptionDockWidget::~PythonQtShell_QStyleOptionDockWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionDockWidget* PythonQtWrapper_QStyleOptionDockWidget::new_QStyleOptionDockWidget()
{ 
return new PythonQtShell_QStyleOptionDockWidget(); }

QStyleOptionDockWidget* PythonQtWrapper_QStyleOptionDockWidget::new_QStyleOptionDockWidget(const QStyleOptionDockWidget&  other)
{ 
return new PythonQtShell_QStyleOptionDockWidget(other); }



PythonQtShell_QStyleOptionFocusRect::~PythonQtShell_QStyleOptionFocusRect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionFocusRect* PythonQtWrapper_QStyleOptionFocusRect::new_QStyleOptionFocusRect()
{ 
return new PythonQtShell_QStyleOptionFocusRect(); }

QStyleOptionFocusRect* PythonQtWrapper_QStyleOptionFocusRect::new_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other)
{ 
return new PythonQtShell_QStyleOptionFocusRect(other); }



PythonQtShell_QStyleOptionFrame::~PythonQtShell_QStyleOptionFrame() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionFrame* PythonQtWrapper_QStyleOptionFrame::new_QStyleOptionFrame()
{ 
return new PythonQtShell_QStyleOptionFrame(); }

QStyleOptionFrame* PythonQtWrapper_QStyleOptionFrame::new_QStyleOptionFrame(const QStyleOptionFrame&  other)
{ 
return new PythonQtShell_QStyleOptionFrame(other); }



PythonQtShell_QStyleOptionGraphicsItem::~PythonQtShell_QStyleOptionGraphicsItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionGraphicsItem* PythonQtWrapper_QStyleOptionGraphicsItem::new_QStyleOptionGraphicsItem()
{ 
return new PythonQtShell_QStyleOptionGraphicsItem(); }

QStyleOptionGraphicsItem* PythonQtWrapper_QStyleOptionGraphicsItem::new_QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem&  other)
{ 
return new PythonQtShell_QStyleOptionGraphicsItem(other); }

qreal  PythonQtWrapper_QStyleOptionGraphicsItem::static_QStyleOptionGraphicsItem_levelOfDetailFromTransform(const QTransform&  worldTransform)
{
  return (QStyleOptionGraphicsItem::levelOfDetailFromTransform(worldTransform));
}



PythonQtShell_QStyleOptionGroupBox::~PythonQtShell_QStyleOptionGroupBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionGroupBox* PythonQtWrapper_QStyleOptionGroupBox::new_QStyleOptionGroupBox()
{ 
return new PythonQtShell_QStyleOptionGroupBox(); }

QStyleOptionGroupBox* PythonQtWrapper_QStyleOptionGroupBox::new_QStyleOptionGroupBox(const QStyleOptionGroupBox&  other)
{ 
return new PythonQtShell_QStyleOptionGroupBox(other); }



PythonQtShell_QStyleOptionHeader::~PythonQtShell_QStyleOptionHeader() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionHeader* PythonQtWrapper_QStyleOptionHeader::new_QStyleOptionHeader()
{ 
return new PythonQtShell_QStyleOptionHeader(); }

QStyleOptionHeader* PythonQtWrapper_QStyleOptionHeader::new_QStyleOptionHeader(const QStyleOptionHeader&  other)
{ 
return new PythonQtShell_QStyleOptionHeader(other); }



PythonQtShell_QStyleOptionMenuItem::~PythonQtShell_QStyleOptionMenuItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionMenuItem* PythonQtWrapper_QStyleOptionMenuItem::new_QStyleOptionMenuItem()
{ 
return new PythonQtShell_QStyleOptionMenuItem(); }

QStyleOptionMenuItem* PythonQtWrapper_QStyleOptionMenuItem::new_QStyleOptionMenuItem(const QStyleOptionMenuItem&  other)
{ 
return new PythonQtShell_QStyleOptionMenuItem(other); }



PythonQtShell_QStyleOptionProgressBar::~PythonQtShell_QStyleOptionProgressBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionProgressBar* PythonQtWrapper_QStyleOptionProgressBar::new_QStyleOptionProgressBar()
{ 
return new PythonQtShell_QStyleOptionProgressBar(); }

QStyleOptionProgressBar* PythonQtWrapper_QStyleOptionProgressBar::new_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other)
{ 
return new PythonQtShell_QStyleOptionProgressBar(other); }



PythonQtShell_QStyleOptionRubberBand::~PythonQtShell_QStyleOptionRubberBand() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionRubberBand* PythonQtWrapper_QStyleOptionRubberBand::new_QStyleOptionRubberBand()
{ 
return new PythonQtShell_QStyleOptionRubberBand(); }

QStyleOptionRubberBand* PythonQtWrapper_QStyleOptionRubberBand::new_QStyleOptionRubberBand(const QStyleOptionRubberBand&  other)
{ 
return new PythonQtShell_QStyleOptionRubberBand(other); }



PythonQtShell_QStyleOptionSizeGrip::~PythonQtShell_QStyleOptionSizeGrip() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionSizeGrip* PythonQtWrapper_QStyleOptionSizeGrip::new_QStyleOptionSizeGrip()
{ 
return new PythonQtShell_QStyleOptionSizeGrip(); }

QStyleOptionSizeGrip* PythonQtWrapper_QStyleOptionSizeGrip::new_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other)
{ 
return new PythonQtShell_QStyleOptionSizeGrip(other); }



PythonQtShell_QStyleOptionSlider::~PythonQtShell_QStyleOptionSlider() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionSlider* PythonQtWrapper_QStyleOptionSlider::new_QStyleOptionSlider()
{ 
return new PythonQtShell_QStyleOptionSlider(); }

QStyleOptionSlider* PythonQtWrapper_QStyleOptionSlider::new_QStyleOptionSlider(const QStyleOptionSlider&  other)
{ 
return new PythonQtShell_QStyleOptionSlider(other); }



PythonQtShell_QStyleOptionSpinBox::~PythonQtShell_QStyleOptionSpinBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionSpinBox* PythonQtWrapper_QStyleOptionSpinBox::new_QStyleOptionSpinBox()
{ 
return new PythonQtShell_QStyleOptionSpinBox(); }

QStyleOptionSpinBox* PythonQtWrapper_QStyleOptionSpinBox::new_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other)
{ 
return new PythonQtShell_QStyleOptionSpinBox(other); }



PythonQtShell_QStyleOptionTab::~PythonQtShell_QStyleOptionTab() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTab* PythonQtWrapper_QStyleOptionTab::new_QStyleOptionTab()
{ 
return new PythonQtShell_QStyleOptionTab(); }

QStyleOptionTab* PythonQtWrapper_QStyleOptionTab::new_QStyleOptionTab(const QStyleOptionTab&  other)
{ 
return new PythonQtShell_QStyleOptionTab(other); }



PythonQtShell_QStyleOptionTabBarBase::~PythonQtShell_QStyleOptionTabBarBase() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabBarBase* PythonQtWrapper_QStyleOptionTabBarBase::new_QStyleOptionTabBarBase()
{ 
return new PythonQtShell_QStyleOptionTabBarBase(); }

QStyleOptionTabBarBase* PythonQtWrapper_QStyleOptionTabBarBase::new_QStyleOptionTabBarBase(const QStyleOptionTabBarBase&  other)
{ 
return new PythonQtShell_QStyleOptionTabBarBase(other); }



PythonQtShell_QStyleOptionTabWidgetFrame::~PythonQtShell_QStyleOptionTabWidgetFrame() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabWidgetFrame* PythonQtWrapper_QStyleOptionTabWidgetFrame::new_QStyleOptionTabWidgetFrame()
{ 
return new PythonQtShell_QStyleOptionTabWidgetFrame(); }

QStyleOptionTabWidgetFrame* PythonQtWrapper_QStyleOptionTabWidgetFrame::new_QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame&  other)
{ 
return new PythonQtShell_QStyleOptionTabWidgetFrame(other); }



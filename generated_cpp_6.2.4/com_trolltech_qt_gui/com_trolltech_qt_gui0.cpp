#include "com_trolltech_qt_gui0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QColor>
#include <QImage>
#include <QPair>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QTextCursor>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qaccessible.h>
#include <qboxlayout.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qevent.h>
#include <qfontinfo.h>
#include <qgesturerecognizer.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qiconengine.h>
#include <qimagereader.h>
#include <qpaintdevice.h>
#include <qpainterpath.h>
#include <qregion.h>
#include <qtransform.h>
#include <qurl.h>

PythonQtShell_QAbstractTableModel::~PythonQtShell_QAbstractTableModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
Qt::ItemFlags  PythonQtShell_QAbstractTableModel::flags(const QModelIndex&  index0) const
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
  return QAbstractTableModel::flags(index0);
}
const QMetaObject*  PythonQtShell_QAbstractTableModel::metaObject() const
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
  return QAbstractTableModel::metaObject();
}
QAbstractTableModel* PythonQtWrapper_QAbstractTableModel::new_QAbstractTableModel(QObject*  parent)
{ 
return new PythonQtShell_QAbstractTableModel(parent); }

Qt::ItemFlags  PythonQtWrapper_QAbstractTableModel::flags(QAbstractTableModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->flags(index));
}

const QMetaObject*  PythonQtWrapper_QAbstractTableModel::metaObject(QAbstractTableModel* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}



PythonQtShell_QAccessibleEvent::~PythonQtShell_QAccessibleEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QAccessibleEvent* PythonQtWrapper_QAccessibleEvent::new_QAccessibleEvent(QObject*  obj, QAccessible::Event  typ)
{ 
return new PythonQtShell_QAccessibleEvent(obj, typ); }

QObject*  PythonQtWrapper_QAccessibleEvent::object(QAccessibleEvent* theWrappedObject) const
{
  return ( theWrappedObject->object());
}

QAccessible::Event  PythonQtWrapper_QAccessibleEvent::type(QAccessibleEvent* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QAccessibleEvent::py_toString(QAccessibleEvent* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QActionEvent::~PythonQtShell_QActionEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QActionEvent*  PythonQtShell_QActionEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QActionEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QActionEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QActionEvent**)args[0]);
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
  return QActionEvent::clone();
}
QAction*  PythonQtWrapper_QActionEvent::action(QActionEvent* theWrappedObject) const
{
  return ( theWrappedObject->action());
}

QAction*  PythonQtWrapper_QActionEvent::before(QActionEvent* theWrappedObject) const
{
  return ( theWrappedObject->before());
}

QActionEvent*  PythonQtWrapper_QActionEvent::clone(QActionEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QActionEvent*  PythonQtWrapper_QActionEvent::operator_assign(QActionEvent* theWrappedObject, QActionEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



QBackingStore* PythonQtWrapper_QBackingStore::new_QBackingStore(QWindow*  window)
{ 
return new QBackingStore(window); }

bool  PythonQtWrapper_QBackingStore::hasStaticContents(QBackingStore* theWrappedObject) const
{
  return ( theWrappedObject->hasStaticContents());
}

QPaintDevice*  PythonQtWrapper_QBackingStore::paintDevice(QBackingStore* theWrappedObject)
{
  return ( theWrappedObject->paintDevice());
}

QSize  PythonQtWrapper_QBackingStore::size(QBackingStore* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QRegion  PythonQtWrapper_QBackingStore::staticContents(QBackingStore* theWrappedObject) const
{
  return ( theWrappedObject->staticContents());
}

QWindow*  PythonQtWrapper_QBackingStore::window(QBackingStore* theWrappedObject) const
{
  return ( theWrappedObject->window());
}



PythonQtShell_QCloseEvent::~PythonQtShell_QCloseEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QCloseEvent* PythonQtWrapper_QCloseEvent::new_QCloseEvent()
{ 
return new PythonQtShell_QCloseEvent(); }

QCloseEvent*  PythonQtWrapper_QCloseEvent::operator_assign(QCloseEvent* theWrappedObject, QCloseEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



QConicalGradient* PythonQtWrapper_QConicalGradient::new_QConicalGradient()
{ 
return new QConicalGradient(); }

QConicalGradient* PythonQtWrapper_QConicalGradient::new_QConicalGradient(const QPointF&  center, qreal  startAngle)
{ 
return new QConicalGradient(center, startAngle); }

QConicalGradient* PythonQtWrapper_QConicalGradient::new_QConicalGradient(qreal  cx, qreal  cy, qreal  startAngle)
{ 
return new QConicalGradient(cx, cy, startAngle); }

qreal  PythonQtWrapper_QConicalGradient::angle(QConicalGradient* theWrappedObject) const
{
  return ( theWrappedObject->angle());
}

QPointF  PythonQtWrapper_QConicalGradient::center(QConicalGradient* theWrappedObject) const
{
  return ( theWrappedObject->center());
}



PythonQtShell_QContextMenuEvent::~PythonQtShell_QContextMenuEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QContextMenuEvent*  PythonQtShell_QContextMenuEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QContextMenuEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QContextMenuEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QContextMenuEvent**)args[0]);
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
  return QContextMenuEvent::clone();
}
QContextMenuEvent* PythonQtWrapper_QContextMenuEvent::new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos)
{ 
return new PythonQtShell_QContextMenuEvent(reason, pos); }

QContextMenuEvent* PythonQtWrapper_QContextMenuEvent::new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QContextMenuEvent(reason, pos, globalPos, modifiers); }

const QPoint*  PythonQtWrapper_QContextMenuEvent::globalPos(QContextMenuEvent* theWrappedObject) const
{
  return &( theWrappedObject->globalPos());
}

QContextMenuEvent*  PythonQtWrapper_QContextMenuEvent::operator_assign(QContextMenuEvent* theWrappedObject, QContextMenuEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

const QPoint*  PythonQtWrapper_QContextMenuEvent::pos(QContextMenuEvent* theWrappedObject) const
{
  return &( theWrappedObject->pos());
}

QContextMenuEvent::Reason  PythonQtWrapper_QContextMenuEvent::reason(QContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->reason());
}



PythonQtShell_QDateEdit::~PythonQtShell_QDateEdit() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
const QMetaObject*  PythonQtShell_QDateEdit::metaObject() const
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
  return QDateEdit::metaObject();
}
QDateEdit* PythonQtWrapper_QDateEdit::new_QDateEdit(QDate  date, QWidget*  parent)
{ 
return new PythonQtShell_QDateEdit(date, parent); }

QDateEdit* PythonQtWrapper_QDateEdit::new_QDateEdit(QWidget*  parent)
{ 
return new PythonQtShell_QDateEdit(parent); }

const QMetaObject*  PythonQtWrapper_QDateEdit::metaObject(QDateEdit* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}



PythonQtShell_QDesktopServices::~PythonQtShell_QDesktopServices() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDesktopServices* PythonQtWrapper_QDesktopServices::new_QDesktopServices()
{ 
return new PythonQtShell_QDesktopServices(); }

bool  PythonQtWrapper_QDesktopServices::static_QDesktopServices_openUrl(const QUrl&  url)
{
  return (QDesktopServices::openUrl(url));
}



PythonQtShell_QDragEnterEvent::~PythonQtShell_QDragEnterEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDragMoveEvent*  PythonQtShell_QDragEnterEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QDragMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QDragMoveEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QDragMoveEvent**)args[0]);
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
  return QDragEnterEvent::clone();
}
QDragEnterEvent* PythonQtWrapper_QDragEnterEvent::new_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QDragEnterEvent(pos, actions, data, buttons, modifiers); }

QDragEnterEvent*  PythonQtWrapper_QDragEnterEvent::operator_assign(QDragEnterEvent* theWrappedObject, QDragEnterEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QDragLeaveEvent::~PythonQtShell_QDragLeaveEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDragLeaveEvent* PythonQtWrapper_QDragLeaveEvent::new_QDragLeaveEvent()
{ 
return new PythonQtShell_QDragLeaveEvent(); }

QDragLeaveEvent*  PythonQtWrapper_QDragLeaveEvent::operator_assign(QDragLeaveEvent* theWrappedObject, QDragLeaveEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QDragMoveEvent::~PythonQtShell_QDragMoveEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDragMoveEvent*  PythonQtShell_QDragMoveEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QDragMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QDragMoveEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QDragMoveEvent**)args[0]);
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
  return QDragMoveEvent::clone();
}
QDragMoveEvent* PythonQtWrapper_QDragMoveEvent::new_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type)
{ 
return new PythonQtShell_QDragMoveEvent(pos, actions, data, buttons, modifiers, type); }

QRect  PythonQtWrapper_QDragMoveEvent::answerRect(QDragMoveEvent* theWrappedObject) const
{
  return ( theWrappedObject->answerRect());
}

QDragMoveEvent*  PythonQtWrapper_QDragMoveEvent::operator_assign(QDragMoveEvent* theWrappedObject, QDragMoveEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QDropEvent::~PythonQtShell_QDropEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDropEvent*  PythonQtShell_QDropEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QDropEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QDropEvent**)args[0]);
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
  return QDropEvent::clone();
}
QDropEvent* PythonQtWrapper_QDropEvent::new_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type)
{ 
return new PythonQtShell_QDropEvent(pos, actions, data, buttons, modifiers, type); }

Qt::MouseButtons  PythonQtWrapper_QDropEvent::buttons(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

QDropEvent*  PythonQtWrapper_QDropEvent::clone(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

Qt::DropAction  PythonQtWrapper_QDropEvent::dropAction(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->dropAction());
}

Qt::KeyboardModifiers  PythonQtWrapper_QDropEvent::keyboardModifiers(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->keyboardModifiers());
}

const QMimeData*  PythonQtWrapper_QDropEvent::mimeData(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->mimeData());
}

Qt::KeyboardModifiers  PythonQtWrapper_QDropEvent::modifiers(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

Qt::MouseButtons  PythonQtWrapper_QDropEvent::mouseButtons(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->mouseButtons());
}

QDropEvent*  PythonQtWrapper_QDropEvent::operator_assign(QDropEvent* theWrappedObject, QDropEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QPoint  PythonQtWrapper_QDropEvent::pos(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QDropEvent::posF(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->posF());
}

QPointF  PythonQtWrapper_QDropEvent::position(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

Qt::DropActions  PythonQtWrapper_QDropEvent::possibleActions(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->possibleActions());
}

Qt::DropAction  PythonQtWrapper_QDropEvent::proposedAction(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->proposedAction());
}

QObject*  PythonQtWrapper_QDropEvent::source(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->source());
}



PythonQtShell_QEnterEvent::~PythonQtShell_QEnterEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QEnterEvent*  PythonQtShell_QEnterEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QEnterEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QEnterEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QEnterEvent**)args[0]);
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
  return QEnterEvent::clone();
}
QEnterEvent*  PythonQtWrapper_QEnterEvent::clone(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QPoint  PythonQtWrapper_QEnterEvent::globalPos(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalPos());
}

QPointF  PythonQtWrapper_QEnterEvent::localPos(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->localPos());
}

QEnterEvent*  PythonQtWrapper_QEnterEvent::operator_assign(QEnterEvent* theWrappedObject, QEnterEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QPoint  PythonQtWrapper_QEnterEvent::pos(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QEnterEvent::screenPos(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

QPointF  PythonQtWrapper_QEnterEvent::windowPos(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->windowPos());
}



PythonQtShell_QExposeEvent::~PythonQtShell_QExposeEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QExposeEvent*  PythonQtShell_QExposeEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QExposeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QExposeEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QExposeEvent**)args[0]);
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
  return QExposeEvent::clone();
}
QExposeEvent* PythonQtWrapper_QExposeEvent::new_QExposeEvent(const QRegion&  m_region)
{ 
return new PythonQtShell_QExposeEvent(m_region); }

QExposeEvent*  PythonQtWrapper_QExposeEvent::clone(QExposeEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QExposeEvent*  PythonQtWrapper_QExposeEvent::operator_assign(QExposeEvent* theWrappedObject, QExposeEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

const QRegion*  PythonQtWrapper_QExposeEvent::region(QExposeEvent* theWrappedObject) const
{
  return &( theWrappedObject->region());
}



PythonQtShell_QFileOpenEvent::~PythonQtShell_QFileOpenEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QFileOpenEvent*  PythonQtShell_QFileOpenEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QFileOpenEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QFileOpenEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QFileOpenEvent**)args[0]);
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
  return QFileOpenEvent::clone();
}
QFileOpenEvent* PythonQtWrapper_QFileOpenEvent::new_QFileOpenEvent(const QString&  file)
{ 
return new PythonQtShell_QFileOpenEvent(file); }

QFileOpenEvent* PythonQtWrapper_QFileOpenEvent::new_QFileOpenEvent(const QUrl&  url)
{ 
return new PythonQtShell_QFileOpenEvent(url); }

QFileOpenEvent*  PythonQtWrapper_QFileOpenEvent::clone(QFileOpenEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QString  PythonQtWrapper_QFileOpenEvent::file(QFileOpenEvent* theWrappedObject) const
{
  return ( theWrappedObject->file());
}

bool  PythonQtWrapper_QFileOpenEvent::openFile(QFileOpenEvent* theWrappedObject, QFile&  file, QIODevice::OpenMode  flags) const
{
  return ( theWrappedObject->openFile(file, flags));
}

QFileOpenEvent*  PythonQtWrapper_QFileOpenEvent::operator_assign(QFileOpenEvent* theWrappedObject, QFileOpenEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QUrl  PythonQtWrapper_QFileOpenEvent::url(QFileOpenEvent* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



PythonQtShell_QFocusEvent::~PythonQtShell_QFocusEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QFocusEvent*  PythonQtShell_QFocusEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QFocusEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QFocusEvent**)args[0]);
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
  return QFocusEvent::clone();
}
QFocusEvent* PythonQtWrapper_QFocusEvent::new_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason)
{ 
return new PythonQtShell_QFocusEvent(type, reason); }

QFocusEvent*  PythonQtWrapper_QFocusEvent::clone(QFocusEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

bool  PythonQtWrapper_QFocusEvent::gotFocus(QFocusEvent* theWrappedObject) const
{
  return ( theWrappedObject->gotFocus());
}

bool  PythonQtWrapper_QFocusEvent::lostFocus(QFocusEvent* theWrappedObject) const
{
  return ( theWrappedObject->lostFocus());
}

QFocusEvent*  PythonQtWrapper_QFocusEvent::operator_assign(QFocusEvent* theWrappedObject, QFocusEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

Qt::FocusReason  PythonQtWrapper_QFocusEvent::reason(QFocusEvent* theWrappedObject) const
{
  return ( theWrappedObject->reason());
}



QFontInfo* PythonQtWrapper_QFontInfo::new_QFontInfo(const QFont&  arg__1)
{ 
return new QFontInfo(arg__1); }

QFontInfo* PythonQtWrapper_QFontInfo::new_QFontInfo(const QFontInfo&  arg__1)
{ 
return new QFontInfo(arg__1); }

bool  PythonQtWrapper_QFontInfo::bold(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->bold());
}

bool  PythonQtWrapper_QFontInfo::exactMatch(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->exactMatch());
}

QString  PythonQtWrapper_QFontInfo::family(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->family());
}

bool  PythonQtWrapper_QFontInfo::fixedPitch(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->fixedPitch());
}

bool  PythonQtWrapper_QFontInfo::italic(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->italic());
}

bool  PythonQtWrapper_QFontInfo::overline(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->overline());
}

qreal  PythonQtWrapper_QFontInfo::pointSizeF(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->pointSizeF());
}

bool  PythonQtWrapper_QFontInfo::strikeOut(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->strikeOut());
}

QFont::Style  PythonQtWrapper_QFontInfo::style(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

QFont::StyleHint  PythonQtWrapper_QFontInfo::styleHint(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->styleHint());
}

QString  PythonQtWrapper_QFontInfo::styleName(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->styleName());
}

bool  PythonQtWrapper_QFontInfo::underline(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->underline());
}



QGestureEvent* PythonQtWrapper_QGestureEvent::new_QGestureEvent(const QList<QGesture* >&  gestures)
{ 
return new QGestureEvent(gestures); }

QList<QGesture* >  PythonQtWrapper_QGestureEvent::activeGestures(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->activeGestures());
}

QList<QGesture* >  PythonQtWrapper_QGestureEvent::canceledGestures(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->canceledGestures());
}

QGesture*  PythonQtWrapper_QGestureEvent::gesture(QGestureEvent* theWrappedObject, Qt::GestureType  type) const
{
  return ( theWrappedObject->gesture(type));
}

QList<QGesture* >  PythonQtWrapper_QGestureEvent::gestures(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->gestures());
}

bool  PythonQtWrapper_QGestureEvent::isAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1) const
{
  return ( theWrappedObject->isAccepted(arg__1));
}

bool  PythonQtWrapper_QGestureEvent::isAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1) const
{
  return ( theWrappedObject->isAccepted(arg__1));
}

QPointF  PythonQtWrapper_QGestureEvent::mapToGraphicsScene(QGestureEvent* theWrappedObject, const QPointF&  gesturePoint) const
{
  return ( theWrappedObject->mapToGraphicsScene(gesturePoint));
}

QWidget*  PythonQtWrapper_QGestureEvent::widget(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}

QString PythonQtWrapper_QGestureEvent::py_toString(QGestureEvent* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QGestureRecognizer::~PythonQtShell_QGestureRecognizer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QGesture*  PythonQtShell_QGestureRecognizer::create(QObject*  target0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("create");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QGesture*" , "QObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGesture* returnValue{};
      void* args[2] = {NULL, (void*)&target0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
          } else {
            returnValue = *((QGesture**)args[0]);
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
  return QGestureRecognizer::create(target0);
}
QGestureRecognizer::Result  PythonQtShell_QGestureRecognizer::recognize(QGesture*  state0, QObject*  watched1, QEvent*  event2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("recognize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QGestureRecognizer::Result" , "QGesture*" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QGestureRecognizer::Result returnValue{};
      void* args[4] = {NULL, (void*)&state0, (void*)&watched1, (void*)&event2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("recognize", methodInfo, result);
          } else {
            returnValue = *((QGestureRecognizer::Result*)args[0]);
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
  return QGestureRecognizer::Result();
}
QGestureRecognizer* PythonQtWrapper_QGestureRecognizer::new_QGestureRecognizer()
{ 
return new PythonQtShell_QGestureRecognizer(); }

QGesture*  PythonQtWrapper_QGestureRecognizer::create(QGestureRecognizer* theWrappedObject, QObject*  target)
{
  return ( theWrappedObject->create(target));
}

QGestureRecognizer::Result  PythonQtWrapper_QGestureRecognizer::recognize(QGestureRecognizer* theWrappedObject, QGesture*  state, QObject*  watched, QEvent*  event)
{
  return ( theWrappedObject->recognize(state, watched, event));
}

Qt::GestureType  PythonQtWrapper_QGestureRecognizer::static_QGestureRecognizer_registerRecognizer(QGestureRecognizer*  recognizer)
{
  return (QGestureRecognizer::registerRecognizer(recognizer));
}



PythonQtShell_QGraphicsItemAnimation::~PythonQtShell_QGraphicsItemAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
const QMetaObject*  PythonQtShell_QGraphicsItemAnimation::metaObject() const
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
  return QGraphicsItemAnimation::metaObject();
}
QGraphicsItemAnimation* PythonQtWrapper_QGraphicsItemAnimation::new_QGraphicsItemAnimation(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsItemAnimation(parent); }

const QMetaObject* PythonQtShell_QGraphicsItemAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsItemAnimation::staticMetaObject);
  } else {
    return &QGraphicsItemAnimation::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsItemAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsItemAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->horizontalScaleAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->horizontalShearAt(step));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItemAnimation::item(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->item());
}

const QMetaObject*  PythonQtWrapper_QGraphicsItemAnimation::metaObject(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

QPointF  PythonQtWrapper_QGraphicsItemAnimation::posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->posAt(step));
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::posList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->posList());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->rotationAt(step));
}

QList<QPair<qreal , qreal >  >  PythonQtWrapper_QGraphicsItemAnimation::rotationList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->rotationList());
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::scaleList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->scaleList());
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::shearList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->shearList());
}

QTimeLine*  PythonQtWrapper_QGraphicsItemAnimation::timeLine(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->timeLine());
}

QTransform  PythonQtWrapper_QGraphicsItemAnimation::transformAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->transformAt(step));
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::translationList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->translationList());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->verticalScaleAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->verticalShearAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->xTranslationAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->yTranslationAt(step));
}



PythonQtShell_QGraphicsTextItem::~PythonQtShell_QGraphicsTextItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsTextItem::boundingRect() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
          } else {
            returnValue = *((QRectF*)args[0]);
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
  return QGraphicsTextItem::boundingRect();
}
bool  PythonQtShell_QGraphicsTextItem::contains(const QPointF&  point0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contains");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QPointF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&point0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
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
  return QGraphicsTextItem::contains(point0);
}
QVariant  PythonQtShell_QGraphicsTextItem::extension(const QVariant&  variant0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("extension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue{};
      void* args[2] = {NULL, (void*)&variant0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
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
  return QGraphicsTextItem::extension(variant0);
}
QVariant  PythonQtShell_QGraphicsTextItem::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("inputMethodQuery");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue{};
      void* args[2] = {NULL, (void*)&query0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
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
  return QGraphicsTextItem::inputMethodQuery(query0);
}
bool  PythonQtShell_QGraphicsTextItem::isObscuredBy(const QGraphicsItem*  item0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isObscuredBy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&item0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
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
  return QGraphicsTextItem::isObscuredBy(item0);
}
const QMetaObject*  PythonQtShell_QGraphicsTextItem::metaObject() const
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
  return QGraphicsTextItem::metaObject();
}
QPainterPath  PythonQtShell_QGraphicsTextItem::opaqueArea() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("opaqueArea");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
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
  return QGraphicsTextItem::opaqueArea();
}
bool  PythonQtShell_QGraphicsTextItem::sceneEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sceneEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
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
  return QGraphicsTextItem::sceneEvent(event0);
}
QPainterPath  PythonQtShell_QGraphicsTextItem::shape() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("shape");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
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
  return QGraphicsTextItem::shape();
}
bool  PythonQtShell_QGraphicsTextItem::supportsExtension(QGraphicsItem::Extension  extension0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportsExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&extension0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportsExtension", methodInfo, result);
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
  return QGraphicsTextItem::supportsExtension(extension0);
}
QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsTextItem(parent); }

QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsTextItem(text, parent); }

const QMetaObject* PythonQtShell_QGraphicsTextItem::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsTextItem::staticMetaObject);
  } else {
    return &QGraphicsTextItem::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsTextItem::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsTextItem::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QRectF  PythonQtWrapper_QGraphicsTextItem::boundingRect(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsTextItem::contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

QColor  PythonQtWrapper_QGraphicsTextItem::defaultTextColor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextColor());
}

QTextDocument*  PythonQtWrapper_QGraphicsTextItem::document(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QVariant  PythonQtWrapper_QGraphicsTextItem::extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_extension(variant));
}

QFont  PythonQtWrapper_QGraphicsTextItem::font(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QVariant  PythonQtWrapper_QGraphicsTextItem::inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_inputMethodQuery(query));
}

bool  PythonQtWrapper_QGraphicsTextItem::isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( theWrappedObject->isObscuredBy(item));
}

const QMetaObject*  PythonQtWrapper_QGraphicsTextItem::metaObject(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::opaqueArea(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->opaqueArea());
}

bool  PythonQtWrapper_QGraphicsTextItem::openExternalLinks(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->openExternalLinks());
}

bool  PythonQtWrapper_QGraphicsTextItem::sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_sceneEvent(event));
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::shape(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

bool  PythonQtWrapper_QGraphicsTextItem::supportsExtension(QGraphicsTextItem* theWrappedObject, QGraphicsItem::Extension  extension) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_supportsExtension(extension));
}

bool  PythonQtWrapper_QGraphicsTextItem::tabChangesFocus(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->tabChangesFocus());
}

QTextCursor  PythonQtWrapper_QGraphicsTextItem::textCursor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textCursor());
}

Qt::TextInteractionFlags  PythonQtWrapper_QGraphicsTextItem::textInteractionFlags(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

qreal  PythonQtWrapper_QGraphicsTextItem::textWidth(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textWidth());
}

QString  PythonQtWrapper_QGraphicsTextItem::toHtml(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QString  PythonQtWrapper_QGraphicsTextItem::toPlainText(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}



PythonQtShell_QHBoxLayout::~PythonQtShell_QHBoxLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
const QMetaObject*  PythonQtShell_QHBoxLayout::metaObject() const
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
  return QHBoxLayout::metaObject();
}
QHBoxLayout* PythonQtWrapper_QHBoxLayout::new_QHBoxLayout()
{ 
return new PythonQtShell_QHBoxLayout(); }

QHBoxLayout* PythonQtWrapper_QHBoxLayout::new_QHBoxLayout(QWidget*  parent)
{ 
return new PythonQtShell_QHBoxLayout(parent); }

const QMetaObject*  PythonQtWrapper_QHBoxLayout::metaObject(QHBoxLayout* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}



PythonQtShell_QHelpEvent::~PythonQtShell_QHelpEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QHelpEvent*  PythonQtShell_QHelpEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QHelpEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QHelpEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QHelpEvent**)args[0]);
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
  return QHelpEvent::clone();
}
QHelpEvent* PythonQtWrapper_QHelpEvent::new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos)
{ 
return new PythonQtShell_QHelpEvent(type, pos, globalPos); }

QHelpEvent*  PythonQtWrapper_QHelpEvent::clone(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

const QPoint*  PythonQtWrapper_QHelpEvent::globalPos(QHelpEvent* theWrappedObject) const
{
  return &( theWrappedObject->globalPos());
}

QHelpEvent*  PythonQtWrapper_QHelpEvent::operator_assign(QHelpEvent* theWrappedObject, QHelpEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

const QPoint*  PythonQtWrapper_QHelpEvent::pos(QHelpEvent* theWrappedObject) const
{
  return &( theWrappedObject->pos());
}



PythonQtShell_QHideEvent::~PythonQtShell_QHideEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QHideEvent* PythonQtWrapper_QHideEvent::new_QHideEvent()
{ 
return new PythonQtShell_QHideEvent(); }

QHideEvent*  PythonQtWrapper_QHideEvent::operator_assign(QHideEvent* theWrappedObject, QHideEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QHoverEvent::~PythonQtShell_QHoverEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QHoverEvent*  PythonQtShell_QHoverEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QHoverEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QHoverEvent**)args[0]);
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
  return QHoverEvent::clone();
}
bool  PythonQtShell_QHoverEvent::isUpdateEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isUpdateEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isUpdateEvent", methodInfo, result);
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
  return QHoverEvent::isUpdateEvent();
}
QHoverEvent*  PythonQtWrapper_QHoverEvent::clone(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

bool  PythonQtWrapper_QHoverEvent::isUpdateEvent(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->isUpdateEvent());
}

QPoint  PythonQtWrapper_QHoverEvent::oldPos(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldPos());
}

QPointF  PythonQtWrapper_QHoverEvent::oldPosF(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldPosF());
}

QHoverEvent*  PythonQtWrapper_QHoverEvent::operator_assign(QHoverEvent* theWrappedObject, QHoverEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QPoint  PythonQtWrapper_QHoverEvent::pos(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QHoverEvent::posF(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->posF());
}



PythonQtShell_QIconDragEvent::~PythonQtShell_QIconDragEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QIconDragEvent* PythonQtWrapper_QIconDragEvent::new_QIconDragEvent()
{ 
return new PythonQtShell_QIconDragEvent(); }

QIconDragEvent*  PythonQtWrapper_QIconDragEvent::operator_assign(QIconDragEvent* theWrappedObject, QIconDragEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QIconEngine::~PythonQtShell_QIconEngine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSize  PythonQtShell_QIconEngine::actualSize(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("actualSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize" , "const QSize&" , "QIcon::Mode" , "QIcon::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QSize returnValue{};
      void* args[4] = {NULL, (void*)&size0, (void*)&mode1, (void*)&state2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("actualSize", methodInfo, result);
          } else {
            returnValue = *((QSize*)args[0]);
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
  return QIconEngine::actualSize(size0, mode1, state2);
}
QList<QSize >  PythonQtShell_QIconEngine::availableSizes(QIcon::Mode  mode0, QIcon::State  state1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("availableSizes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QSize >" , "QIcon::Mode" , "QIcon::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QList<QSize > returnValue{};
      void* args[3] = {NULL, (void*)&mode0, (void*)&state1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("availableSizes", methodInfo, result);
          } else {
            returnValue = *((QList<QSize >*)args[0]);
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
  return QIconEngine::availableSizes(mode0, state1);
}
QIconEngine*  PythonQtShell_QIconEngine::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QIconEngine*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QIconEngine* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QIconEngine**)args[0]);
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
QString  PythonQtShell_QIconEngine::iconName()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("iconName");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("iconName", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
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
  return QIconEngine::iconName();
}
bool  PythonQtShell_QIconEngine::isNull()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isNull");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isNull", methodInfo, result);
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
  return QIconEngine::isNull();
}
QString  PythonQtShell_QIconEngine::key() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("key");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("key", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
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
  return QIconEngine::key();
}
QPixmap  PythonQtShell_QIconEngine::pixmap(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("pixmap");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPixmap" , "const QSize&" , "QIcon::Mode" , "QIcon::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QPixmap returnValue{};
      void* args[4] = {NULL, (void*)&size0, (void*)&mode1, (void*)&state2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pixmap", methodInfo, result);
          } else {
            returnValue = *((QPixmap*)args[0]);
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
  return QIconEngine::pixmap(size0, mode1, state2);
}
bool  PythonQtShell_QIconEngine::read(QDataStream&  in0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("read");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QDataStream&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&in0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("read", methodInfo, result);
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
  return QIconEngine::read(in0);
}
QPixmap  PythonQtShell_QIconEngine::scaledPixmap(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2, qreal  scale3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("scaledPixmap");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPixmap" , "const QSize&" , "QIcon::Mode" , "QIcon::State" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QPixmap returnValue{};
      void* args[5] = {NULL, (void*)&size0, (void*)&mode1, (void*)&state2, (void*)&scale3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("scaledPixmap", methodInfo, result);
          } else {
            returnValue = *((QPixmap*)args[0]);
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
  return QIconEngine::scaledPixmap(size0, mode1, state2, scale3);
}
bool  PythonQtShell_QIconEngine::write(QDataStream&  out0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("write");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QDataStream&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&out0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("write", methodInfo, result);
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
  return QIconEngine::write(out0);
}
QIconEngine* PythonQtWrapper_QIconEngine::new_QIconEngine()
{ 
return new PythonQtShell_QIconEngine(); }

QIconEngine* PythonQtWrapper_QIconEngine::new_QIconEngine(const QIconEngine&  other)
{ 
return new PythonQtShell_QIconEngine(other); }

QSize  PythonQtWrapper_QIconEngine::actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
  return ( theWrappedObject->actualSize(size, mode, state));
}

QList<QSize >  PythonQtWrapper_QIconEngine::availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode, QIcon::State  state)
{
  return ( theWrappedObject->availableSizes(mode, state));
}

QIconEngine*  PythonQtWrapper_QIconEngine::clone(QIconEngine* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QString  PythonQtWrapper_QIconEngine::iconName(QIconEngine* theWrappedObject)
{
  return ( theWrappedObject->iconName());
}

bool  PythonQtWrapper_QIconEngine::isNull(QIconEngine* theWrappedObject)
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QIconEngine::key(QIconEngine* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

QPixmap  PythonQtWrapper_QIconEngine::pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
  return ( theWrappedObject->pixmap(size, mode, state));
}

bool  PythonQtWrapper_QIconEngine::read(QIconEngine* theWrappedObject, QDataStream&  in)
{
  return ( theWrappedObject->read(in));
}

QPixmap  PythonQtWrapper_QIconEngine::scaledPixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale)
{
  return ( theWrappedObject->scaledPixmap(size, mode, state, scale));
}

bool  PythonQtWrapper_QIconEngine::write(QIconEngine* theWrappedObject, QDataStream&  out) const
{
  return ( theWrappedObject->write(out));
}



PythonQtShell_QImageIOPlugin::~PythonQtShell_QImageIOPlugin() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QImageIOPlugin::Capabilities  PythonQtShell_QImageIOPlugin::capabilities(QIODevice*  device0, const QByteArray&  format1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("capabilities");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QImageIOPlugin::Capabilities" , "QIODevice*" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QImageIOPlugin::Capabilities returnValue{};
      void* args[3] = {NULL, (void*)&device0, (void*)&format1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("capabilities", methodInfo, result);
          } else {
            returnValue = *((QImageIOPlugin::Capabilities*)args[0]);
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
  return QImageIOPlugin::Capabilities();
}
QImageIOHandler*  PythonQtShell_QImageIOPlugin::create(QIODevice*  device0, const QByteArray&  format1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("create");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QImageIOHandler*" , "QIODevice*" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QImageIOHandler* returnValue{};
      void* args[3] = {NULL, (void*)&device0, (void*)&format1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
          } else {
            returnValue = *((QImageIOHandler**)args[0]);
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
const QMetaObject*  PythonQtShell_QImageIOPlugin::metaObject() const
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
  return QImageIOPlugin::metaObject();
}
QImageIOPlugin* PythonQtWrapper_QImageIOPlugin::new_QImageIOPlugin(QObject*  parent)
{ 
return new PythonQtShell_QImageIOPlugin(parent); }

const QMetaObject* PythonQtShell_QImageIOPlugin::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QImageIOPlugin::staticMetaObject);
  } else {
    return &QImageIOPlugin::staticMetaObject;
  }
}
int PythonQtShell_QImageIOPlugin::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QImageIOPlugin::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QImageIOPlugin::Capabilities  PythonQtWrapper_QImageIOPlugin::capabilities(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const
{
  return ( theWrappedObject->capabilities(device, format));
}

QImageIOHandler*  PythonQtWrapper_QImageIOPlugin::create(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const
{
  return ( theWrappedObject->create(device, format));
}

const QMetaObject*  PythonQtWrapper_QImageIOPlugin::metaObject(QImageIOPlugin* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}



bool  PythonQtWrapper_QImageReader::autoDetectImageFormat(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->autoDetectImageFormat());
}

bool  PythonQtWrapper_QImageReader::autoTransform(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->autoTransform());
}

QColor  PythonQtWrapper_QImageReader::backgroundColor(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->backgroundColor());
}

bool  PythonQtWrapper_QImageReader::canRead(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->canRead());
}

QRect  PythonQtWrapper_QImageReader::clipRect(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->clipRect());
}

QRect  PythonQtWrapper_QImageReader::currentImageRect(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->currentImageRect());
}

bool  PythonQtWrapper_QImageReader::decideFormatFromContent(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->decideFormatFromContent());
}

QIODevice*  PythonQtWrapper_QImageReader::device(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QImageReader::ImageReaderError  PythonQtWrapper_QImageReader::error(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QImageReader::errorString(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QImageReader::fileName(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QByteArray  PythonQtWrapper_QImageReader::format(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QImage::Format  PythonQtWrapper_QImageReader::imageFormat(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->imageFormat());
}

QByteArray  PythonQtWrapper_QImageReader::static_QImageReader_imageFormat(QIODevice*  device)
{
  return (QImageReader::imageFormat(device));
}

QByteArray  PythonQtWrapper_QImageReader::static_QImageReader_imageFormat(const QString&  fileName)
{
  return (QImageReader::imageFormat(fileName));
}

QList<QByteArray >  PythonQtWrapper_QImageReader::static_QImageReader_imageFormatsForMimeType(const QByteArray&  mimeType)
{
  return (QImageReader::imageFormatsForMimeType(mimeType));
}

bool  PythonQtWrapper_QImageReader::jumpToNextImage(QImageReader* theWrappedObject)
{
  return ( theWrappedObject->jumpToNextImage());
}

QImage  PythonQtWrapper_QImageReader::read(QImageReader* theWrappedObject)
{
  return ( theWrappedObject->read());
}

QRect  PythonQtWrapper_QImageReader::scaledClipRect(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->scaledClipRect());
}

QSize  PythonQtWrapper_QImageReader::scaledSize(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->scaledSize());
}

QSize  PythonQtWrapper_QImageReader::size(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QByteArray  PythonQtWrapper_QImageReader::subType(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->subType());
}

QList<QByteArray >  PythonQtWrapper_QImageReader::static_QImageReader_supportedImageFormats()
{
  return (QImageReader::supportedImageFormats());
}

QList<QByteArray >  PythonQtWrapper_QImageReader::static_QImageReader_supportedMimeTypes()
{
  return (QImageReader::supportedMimeTypes());
}

QList<QByteArray >  PythonQtWrapper_QImageReader::supportedSubTypes(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->supportedSubTypes());
}

bool  PythonQtWrapper_QImageReader::supportsAnimation(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->supportsAnimation());
}

bool  PythonQtWrapper_QImageReader::supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const
{
  return ( theWrappedObject->supportsOption(option));
}

QString  PythonQtWrapper_QImageReader::text(QImageReader* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->text(key));
}

QStringList  PythonQtWrapper_QImageReader::textKeys(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->textKeys());
}



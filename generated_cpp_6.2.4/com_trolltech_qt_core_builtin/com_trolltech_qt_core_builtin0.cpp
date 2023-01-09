#include "com_trolltech_qt_core_builtin0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QStringList>
#include <QTextDocument>
#include <QTransform>
#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qline.h>
#include <qtransform.h>
#include <qurl.h>

QDate* PythonQtWrapper_QDate::new_QDate()
{ 
return new QDate(); }

QDate  PythonQtWrapper_QDate::addDays(QDate* theWrappedObject, qint64  days) const
{
  return ( theWrappedObject->addDays(days));
}

QDate  PythonQtWrapper_QDate::static_QDate_currentDate()
{
  return (QDate::currentDate());
}

qint64  PythonQtWrapper_QDate::daysTo(QDate* theWrappedObject, QDate  d) const
{
  return ( theWrappedObject->daysTo(d));
}

QDateTime  PythonQtWrapper_QDate::endOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const
{
  return ( theWrappedObject->endOfDay(zone));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromJulianDay(qint64  jd_)
{
  return (QDate::fromJulianDay(jd_));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromString(const QString&  string, Qt::DateFormat  format)
{
  return (QDate::fromString(string, format));
}

bool  PythonQtWrapper_QDate::isNull(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QDate::isValid(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QDate::writeTo(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QDate::readFrom(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QDateTime  PythonQtWrapper_QDate::startOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const
{
  return ( theWrappedObject->startOfDay(zone));
}

qint64  PythonQtWrapper_QDate::toJulianDay(QDate* theWrappedObject) const
{
  return ( theWrappedObject->toJulianDay());
}

QString  PythonQtWrapper_QDate::toString(QDate* theWrappedObject, Qt::DateFormat  format) const
{
  return ( theWrappedObject->toString(format));
}

QString PythonQtWrapper_QDate::py_toString(QDate* obj) { return obj->toString(); }


QLineF* PythonQtWrapper_QLineF::new_QLineF()
{ 
return new QLineF(); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(const QLine&  line)
{ 
return new QLineF(line); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(const QPointF&  pt1, const QPointF&  pt2)
{ 
return new QLineF(pt1, pt2); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{ 
return new QLineF(x1, y1, x2, y2); }

qreal  PythonQtWrapper_QLineF::angle(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->angle());
}

qreal  PythonQtWrapper_QLineF::angleTo(QLineF* theWrappedObject, const QLineF&  l) const
{
  return ( theWrappedObject->angleTo(l));
}

QPointF  PythonQtWrapper_QLineF::center(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

qreal  PythonQtWrapper_QLineF::dx(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->dx());
}

qreal  PythonQtWrapper_QLineF::dy(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->dy());
}

QLineF  PythonQtWrapper_QLineF::fromPolar(QLineF* theWrappedObject, qreal  length, qreal  angle)
{
  return ( theWrappedObject->fromPolar(length, angle));
}

bool  PythonQtWrapper_QLineF::isNull(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qreal  PythonQtWrapper_QLineF::length(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QLineF  PythonQtWrapper_QLineF::normalVector(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->normalVector());
}

bool  PythonQtWrapper_QLineF::__ne__(QLineF* theWrappedObject, const QLineF&  d) const
{
  return ( (*theWrappedObject)!= d);
}

QLineF  PythonQtWrapper_QLineF::__mul__(QLineF* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QLineF::writeTo(QLineF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QLineF::__eq__(QLineF* theWrappedObject, const QLineF&  d) const
{
  return ( (*theWrappedObject)== d);
}

void PythonQtWrapper_QLineF::readFrom(QLineF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPointF  PythonQtWrapper_QLineF::p1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->p1());
}

QPointF  PythonQtWrapper_QLineF::p2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->p2());
}

QPointF  PythonQtWrapper_QLineF::pointAt(QLineF* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->pointAt(t));
}

QLine  PythonQtWrapper_QLineF::toLine(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->toLine());
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->translated(p));
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QLineF  PythonQtWrapper_QLineF::unitVector(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->unitVector());
}

qreal  PythonQtWrapper_QLineF::x1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->x1());
}

qreal  PythonQtWrapper_QLineF::x2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->x2());
}

qreal  PythonQtWrapper_QLineF::y1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->y1());
}

qreal  PythonQtWrapper_QLineF::y2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->y2());
}

QString PythonQtWrapper_QLineF::py_toString(QLineF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QTime* PythonQtWrapper_QTime::new_QTime()
{ 
return new QTime(); }

QTime  PythonQtWrapper_QTime::static_QTime_currentTime()
{
  return (QTime::currentTime());
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  string, Qt::DateFormat  format)
{
  return (QTime::fromString(string, format));
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  string, const QString&  format)
{
  return (QTime::fromString(string, format));
}

bool  PythonQtWrapper_QTime::isNull(QTime* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QTime::isValid(QTime* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QTime::writeTo(QTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QTime::readFrom(QTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, Qt::DateFormat  f) const
{
  return ( theWrappedObject->toString(f));
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->toString(format));
}

QString PythonQtWrapper_QTime::py_toString(QTime* obj) { return obj->toString(); }


QUrl* PythonQtWrapper_QUrl::new_QUrl()
{ 
return new QUrl(); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QString&  url, QUrl::ParsingMode  mode)
{ 
return new QUrl(url, mode); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QUrl&  copy)
{ 
return new QUrl(copy); }

void PythonQtWrapper_QUrl::writeTo(QUrl* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QUrl::readFrom(QUrl* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QUrl::py_toString(QUrl* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QTextStream*  PythonQtWrapper_Qt::static_Qt_bin(QTextStream&  s)
{
  return &(Qt::bin(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_bom(QTextStream&  s)
{
  return &(Qt::bom(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_center(QTextStream&  s)
{
  return &(Qt::center(s));
}

QString  PythonQtWrapper_Qt::static_Qt_convertFromPlainText(const QString&  plain, Qt::WhiteSpaceMode  mode)
{
  return (Qt::convertFromPlainText(plain, mode));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_dec(QTextStream&  s)
{
  return &(Qt::dec(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_endl(QTextStream&  s)
{
  return &(Qt::endl(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_fixed(QTextStream&  s)
{
  return &(Qt::fixed(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_flush(QTextStream&  s)
{
  return &(Qt::flush(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_forcepoint(QTextStream&  s)
{
  return &(Qt::forcepoint(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_forcesign(QTextStream&  s)
{
  return &(Qt::forcesign(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_hex(QTextStream&  s)
{
  return &(Qt::hex(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_left(QTextStream&  s)
{
  return &(Qt::left(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_lowercasebase(QTextStream&  s)
{
  return &(Qt::lowercasebase(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_lowercasedigits(QTextStream&  s)
{
  return &(Qt::lowercasedigits(s));
}

bool  PythonQtWrapper_Qt::static_Qt_mightBeRichText(const QString&  arg__1)
{
  return (Qt::mightBeRichText(arg__1));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_noforcepoint(QTextStream&  s)
{
  return &(Qt::noforcepoint(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_noforcesign(QTextStream&  s)
{
  return &(Qt::noforcesign(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_noshowbase(QTextStream&  s)
{
  return &(Qt::noshowbase(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_oct(QTextStream&  s)
{
  return &(Qt::oct(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_reset(QTextStream&  s)
{
  return &(Qt::reset(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_right(QTextStream&  s)
{
  return &(Qt::right(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_scientific(QTextStream&  s)
{
  return &(Qt::scientific(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_showbase(QTextStream&  s)
{
  return &(Qt::showbase(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_uppercasebase(QTextStream&  s)
{
  return &(Qt::uppercasebase(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_uppercasedigits(QTextStream&  s)
{
  return &(Qt::uppercasedigits(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_ws(QTextStream&  s)
{
  return &(Qt::ws(s));
}



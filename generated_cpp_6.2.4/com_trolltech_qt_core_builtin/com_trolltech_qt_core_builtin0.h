#include <PythonQt.h>
#include <QObject>
#include <QStringList>
#include <QTextDocument>
#include <QTransform>
#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qline.h>
#include <qnamespace.h>
#include <qtransform.h>
#include <qurl.h>

class PythonQtWrapper_QDate : public QObject
{ Q_OBJECT
public:
public slots:
QDate* new_QDate();
QDate* new_QDate(const QDate& other) {
QDate* a = new QDate();
*((QDate*)a) = other;
return a; }
void delete_QDate(QDate* obj) { delete obj; }
   QDate  addDays(QDate* theWrappedObject, qint64  days) const;
   QDate  static_QDate_currentDate();
   qint64  daysTo(QDate* theWrappedObject, QDate  d) const;
   QDateTime  endOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const;
   QDate  static_QDate_fromJulianDay(qint64  jd_);
   QDate  static_QDate_fromString(const QString&  string, Qt::DateFormat  format = Qt::TextDate);
   bool  isNull(QDate* theWrappedObject) const;
   bool  isValid(QDate* theWrappedObject) const;
   void writeTo(QDate* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QDate* theWrappedObject, QDataStream&  arg__1);
   QDateTime  startOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const;
   qint64  toJulianDay(QDate* theWrappedObject) const;
   QString  toString(QDate* theWrappedObject, Qt::DateFormat  format = Qt::TextDate) const;
    QString py_toString(QDate*);
    bool __nonzero__(QDate* obj) { return obj->isValid(); }
};



class PythonQtWrapper_QLineF : public QObject
{ Q_OBJECT
public:
public slots:
QLineF* new_QLineF();
QLineF* new_QLineF(const QLine&  line);
QLineF* new_QLineF(const QPointF&  pt1, const QPointF&  pt2);
QLineF* new_QLineF(qreal  x1, qreal  y1, qreal  x2, qreal  y2);
QLineF* new_QLineF(const QLineF& other) {
QLineF* a = new QLineF();
*((QLineF*)a) = other;
return a; }
void delete_QLineF(QLineF* obj) { delete obj; }
   qreal  angle(QLineF* theWrappedObject) const;
   qreal  angleTo(QLineF* theWrappedObject, const QLineF&  l) const;
   QPointF  center(QLineF* theWrappedObject) const;
   qreal  dx(QLineF* theWrappedObject) const;
   qreal  dy(QLineF* theWrappedObject) const;
   QLineF  fromPolar(QLineF* theWrappedObject, qreal  length, qreal  angle);
   bool  isNull(QLineF* theWrappedObject) const;
   qreal  length(QLineF* theWrappedObject) const;
   QLineF  normalVector(QLineF* theWrappedObject) const;
   bool  __ne__(QLineF* theWrappedObject, const QLineF&  d) const;
   QLineF  __mul__(QLineF* theWrappedObject, const QTransform&  m);
   void writeTo(QLineF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QLineF* theWrappedObject, const QLineF&  d) const;
   void readFrom(QLineF* theWrappedObject, QDataStream&  arg__1);
   QPointF  p1(QLineF* theWrappedObject) const;
   QPointF  p2(QLineF* theWrappedObject) const;
   QPointF  pointAt(QLineF* theWrappedObject, qreal  t) const;
   QLine  toLine(QLineF* theWrappedObject) const;
   QLineF  translated(QLineF* theWrappedObject, const QPointF&  p) const;
   QLineF  translated(QLineF* theWrappedObject, qreal  dx, qreal  dy) const;
   QLineF  unitVector(QLineF* theWrappedObject) const;
   qreal  x1(QLineF* theWrappedObject) const;
   qreal  x2(QLineF* theWrappedObject) const;
   qreal  y1(QLineF* theWrappedObject) const;
   qreal  y2(QLineF* theWrappedObject) const;
    QString py_toString(QLineF*);
    bool __nonzero__(QLineF* obj) { return !obj->isNull(); }
};



class PythonQtWrapper_QTime : public QObject
{ Q_OBJECT
public:
public slots:
QTime* new_QTime();
QTime* new_QTime(const QTime& other) {
QTime* a = new QTime();
*((QTime*)a) = other;
return a; }
void delete_QTime(QTime* obj) { delete obj; }
   QTime  static_QTime_currentTime();
   QTime  static_QTime_fromString(const QString&  string, Qt::DateFormat  format = Qt::TextDate);
   QTime  static_QTime_fromString(const QString&  string, const QString&  format);
   bool  isNull(QTime* theWrappedObject) const;
   bool  isValid(QTime* theWrappedObject) const;
   void writeTo(QTime* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QTime* theWrappedObject, QDataStream&  arg__1);
   QString  toString(QTime* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QString  toString(QTime* theWrappedObject, const QString&  format) const;
    QString py_toString(QTime*);
    bool __nonzero__(QTime* obj) { return obj->isValid(); }
};



class PythonQtWrapper_QUrl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ParsingMode )
enum ParsingMode{
  TolerantMode = QUrl::TolerantMode,   StrictMode = QUrl::StrictMode,   DecodedMode = QUrl::DecodedMode};
public slots:
QUrl* new_QUrl();
QUrl* new_QUrl(const QString&  url, QUrl::ParsingMode  mode = QUrl::TolerantMode);
QUrl* new_QUrl(const QUrl&  copy);
void delete_QUrl(QUrl* obj) { delete obj; }
   void writeTo(QUrl* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QUrl* theWrappedObject, QDataStream&  arg__1);
    QString py_toString(QUrl*);
};



class PythonQtWrapper_Qt : public QObject
{ Q_OBJECT
public:
Q_ENUMS(GlobalColor MouseButton )
Q_FLAGS(MouseButtons )
enum GlobalColor{
  color0 = Qt::color0,   color1 = Qt::color1,   black = Qt::black,   white = Qt::white,   darkGray = Qt::darkGray,   gray = Qt::gray,   lightGray = Qt::lightGray,   red = Qt::red,   green = Qt::green,   blue = Qt::blue,   cyan = Qt::cyan,   magenta = Qt::magenta,   yellow = Qt::yellow,   darkRed = Qt::darkRed,   darkGreen = Qt::darkGreen,   darkBlue = Qt::darkBlue,   darkCyan = Qt::darkCyan,   darkMagenta = Qt::darkMagenta,   darkYellow = Qt::darkYellow,   transparent = Qt::transparent};
enum MouseButton{
  NoButton = Qt::NoButton,   LeftButton = Qt::LeftButton,   RightButton = Qt::RightButton,   MiddleButton = Qt::MiddleButton,   BackButton = Qt::BackButton,   XButton1 = Qt::XButton1,   ExtraButton1 = Qt::ExtraButton1,   ForwardButton = Qt::ForwardButton,   XButton2 = Qt::XButton2,   ExtraButton2 = Qt::ExtraButton2,   TaskButton = Qt::TaskButton,   ExtraButton3 = Qt::ExtraButton3,   ExtraButton4 = Qt::ExtraButton4,   ExtraButton5 = Qt::ExtraButton5,   ExtraButton6 = Qt::ExtraButton6,   ExtraButton7 = Qt::ExtraButton7,   ExtraButton8 = Qt::ExtraButton8,   ExtraButton9 = Qt::ExtraButton9,   ExtraButton10 = Qt::ExtraButton10,   ExtraButton11 = Qt::ExtraButton11,   ExtraButton12 = Qt::ExtraButton12,   ExtraButton13 = Qt::ExtraButton13,   ExtraButton14 = Qt::ExtraButton14,   ExtraButton15 = Qt::ExtraButton15,   ExtraButton16 = Qt::ExtraButton16,   ExtraButton17 = Qt::ExtraButton17,   ExtraButton18 = Qt::ExtraButton18,   ExtraButton19 = Qt::ExtraButton19,   ExtraButton20 = Qt::ExtraButton20,   ExtraButton21 = Qt::ExtraButton21,   ExtraButton22 = Qt::ExtraButton22,   ExtraButton23 = Qt::ExtraButton23,   ExtraButton24 = Qt::ExtraButton24,   AllButtons = Qt::AllButtons,   MaxMouseButton = Qt::MaxMouseButton,   MouseButtonMask = Qt::MouseButtonMask};
Q_DECLARE_FLAGS(MouseButtons, MouseButton)
public slots:
   QTextStream*  static_Qt_bin(QTextStream&  s);
   QTextStream*  static_Qt_bom(QTextStream&  s);
   QTextStream*  static_Qt_center(QTextStream&  s);
   QString  static_Qt_convertFromPlainText(const QString&  plain, Qt::WhiteSpaceMode  mode = Qt::WhiteSpacePre);
   QTextStream*  static_Qt_dec(QTextStream&  s);
   QTextStream*  static_Qt_endl(QTextStream&  s);
   QTextStream*  static_Qt_fixed(QTextStream&  s);
   QTextStream*  static_Qt_flush(QTextStream&  s);
   QTextStream*  static_Qt_forcepoint(QTextStream&  s);
   QTextStream*  static_Qt_forcesign(QTextStream&  s);
   QTextStream*  static_Qt_hex(QTextStream&  s);
   QTextStream*  static_Qt_left(QTextStream&  s);
   QTextStream*  static_Qt_lowercasebase(QTextStream&  s);
   QTextStream*  static_Qt_lowercasedigits(QTextStream&  s);
   bool  static_Qt_mightBeRichText(const QString&  arg__1);
   QTextStream*  static_Qt_noforcepoint(QTextStream&  s);
   QTextStream*  static_Qt_noforcesign(QTextStream&  s);
   QTextStream*  static_Qt_noshowbase(QTextStream&  s);
   QTextStream*  static_Qt_oct(QTextStream&  s);
   QTextStream*  static_Qt_reset(QTextStream&  s);
   QTextStream*  static_Qt_right(QTextStream&  s);
   QTextStream*  static_Qt_scientific(QTextStream&  s);
   QTextStream*  static_Qt_showbase(QTextStream&  s);
   QTextStream*  static_Qt_uppercasebase(QTextStream&  s);
   QTextStream*  static_Qt_uppercasedigits(QTextStream&  s);
   QTextStream*  static_Qt_ws(QTextStream&  s);
};



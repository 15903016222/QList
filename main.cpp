#include <QApplication>
#include <QList>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qint32 i = 0;

    QList<QString> str;
    str.append("wangsheng0");
    str.append("wangsheng1");
    str.append("wangsheng2");
    str.append("wangsheng3");
    str.append("wangsheng4");
    str.append("wangsheng5");
    str.append("wangsheng6");
    str.append("wangsheng7");

//    for (i = 0; i < str.length(); ++i) {
//        qDebug ("%s", qPrintable(str.at(i)));
//    }

    str.back();
    str.append("wangsheng8");
//    for (i = 0; i < str.length(); ++i) {
//        qDebug ("%s", qPrintable(str.at(i)));
//    }

    str.indexOf("wangsheng9", 4);
    str.insert(4, "wangsheng10");
    for (i = 0; i < str.length(); ++i) {
        qDebug ("%s", qPrintable(str.at(i)));
    }

    qDebug ("-------------------------------");
    qDebug ("%s", qPrintable (str.back()));
    qDebug ("-------------------------------");
    qDebug ("%s", qPrintable (str.first()));
    qDebug ("-------------------------------");
    qDebug ("%s", qPrintable (str.last()));
    qDebug ("-------------------------------");
    str.move(2, 5);
    for (i = 0; i < str.length(); ++i) {
        qDebug ("%s", qPrintable(str.at(i)));
    }
    qDebug ("-------------------------------");
    str.removeAt(4);
    for (i = 0; i < str.length(); ++i) {
        qDebug ("%s", qPrintable(str.at(i)));
    }
    qDebug ("-------------------------------");
    str.removeOne("wangsheng10");
    for (i = 0; i < str.length(); ++i) {
        qDebug ("%s", qPrintable(str.at(i)));
    }
    qDebug ("-------------------------------");
    str.replace(5, "wangsheng10");
    for (i = 0; i < str.length(); ++i) {
        qDebug ("%s", qPrintable(str.at(i)));
    }
    qDebug ("-------------------------------");
    str.push_back("wangsheng11");
    for (i = 0; i < str.length(); ++i) {
        qDebug ("%s", qPrintable(str.at(i)));
    }
    qDebug ("-------------------------------");
    str.push_front("wangsheng12");
    for (i = 0; i < str.length(); ++i) {
        qDebug ("%s", qPrintable(str.at(i)));
    }
    qDebug ("-------------------------------");
    qDebug ("%d", str.indexOf("wangsheng8"));
    qDebug ("-------------------------------");
    qDebug ("%d", str.count());
    qDebug ("-------------------------------");
    qDebug ("%d", str.count("wangsheng8"));
    qDebug ("-------------------------------");
    str += "wangsheng13";
    for (i = 0; i < str.length(); ++i) {
        qDebug ("%s", qPrintable(str.at(i)));
    }
    str << "wangsheng14";
    for (i = 0; i < str.length(); ++i) {
        qDebug ("%s", qPrintable(str.at(i)));
    }
    qDebug ("-------------------------------");
    QList<QString>::iterator it;
    for (it = str.begin(); it != str.end(); ++it) {
        qDebug ("%s", qPrintable((*it)));
    }
    qDebug ("-------------------------------");
    foreach (QString s, str) {
        qDebug ("%s", qPrintable(s));
    }

    return a.exec();
}

#include "mainwindow.h"

#include <QApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    qInfo() << "Application is Loaded";
    return a.exec();
}

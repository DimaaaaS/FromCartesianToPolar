#include "mainwindow.h"
#include "FromCartesianToPolar.h"
#include "calculateservice.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FromCartesianToPolar window;

    window.resize(300,30);
    window.show();
    return a.exec();
}

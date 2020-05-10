#include "mainwindow.h"
#include "infomemory.h"
#include "infovideo.h"
#include "infocpu.h"
#include "infotime.h"
#include "infowindow.h"
#include "infonames.h"
#include <stdio.h>
#include <QApplication>
//#include "stdafx.h"
#include <iostream>
#include <infovolumes.h>
#include <QTimer>


using namespace std;

int main(int argc, char *argv[])
{
    InfoVideo v;
    v.getStatus();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

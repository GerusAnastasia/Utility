#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "infonames.h"
#include "infocpu.h"
#include "infovideo.h"
#include "infowindow.h"
#include "infovolumes.h"
#include <QString>
#include <QTextCodec>
#include <QTimer>
#include "infotime.h"
#include "infomemory.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InfoNames in;
    InfoCPU ic;
    InfoWindow iw;
    InfoVolumes iv;
    InfoVideo ivid;
    InfoTime it;
    InfoMemory im;
     QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    //отрисовка времени

    ui->labelTime->setText(it.getTimeUPC().c_str());
    ui->labelTime_2->setText(it.getTimeLocal().c_str());
    ui->labelTimeUp->setText(it.getTimeFromStart().c_str());

    //отрисовка состояния памяти
    ui->labelLoadMemory->setText(im.getMemoryLoad().c_str());
    ui->labelTotalPhis->setText(im.getTotalPhys().c_str());
    ui->labelTotalVirt->setText(im.getTotalVirt().c_str());
    ui->labelFreePhis->setText(im.getAvailPhys().c_str());
      ui->labelFreeVirt->setText(im.getAvailVirt().c_str());
      ui->labelPage->setText(im.getTotalPagefile().c_str());
    //отрисовка вкладки основная информация

    QByteArray ba(in.getUserName().c_str());                  // Convert to QByteArray
    QString msg = codec->toUnicode(ba);
    ui->labelUserName->setText(msg);
    ba=in.getComputerName().c_str();
    msg = codec->toUnicode(ba);
    ui->labelComputerName->setText(msg);
    ui->labelArchiType->setText(ic.getProcArchitecture().c_str());
    ui->labelCPU->setText(ic.getProcType().c_str());
    ui->labelCount->setText(ic.getNumberOfProcessors().c_str());
    ui->labelOperationSystem->setText(iw.getVersion().c_str());
    ui->labelRole->setText(iw.getRole().c_str());

    //отрисовка вкладки диски
    //еще одни диски
    ui->DiskTable->setColumnCount(4);
    ui->DiskTable->setColumnWidth(0, 100);
    ui->DiskTable->setColumnWidth(1, 100);
    ui->DiskTable->setColumnWidth(2, 170);
    ui->DiskTable->setColumnWidth(3, 106);
    QStringList table_names;
    table_names << "Имя диска" << "Имя тома" << "Файловая система" << "Свободно";
    ui->DiskTable->setHorizontalHeaderLabels(table_names);
    ui->DiskTable->setRowCount(iv.getCount());
    ui->DiskTable->setShowGrid(true);
    ui->DiskTable->verticalHeader()->hide();

        for (int count = 0; count < iv.getCount(); ++count){

         QString temp (iv.getDiskName(count).c_str());
         ui->DiskTable->setItem(count, 0, new QTableWidgetItem (temp));

         QString temp1 (iv.getTomNumber(count).c_str());
          ui->DiskTable->setItem(count, 1, new QTableWidgetItem (temp1));

          QString temp2 (iv.getFileSystem(count).c_str());
           ui->DiskTable->setItem(count, 2, new QTableWidgetItem (temp2));

           QString temp3 (iv.getFreeSpace(count).c_str());
            ui->DiskTable->setItem(count, 3, new QTableWidgetItem (temp3));
         }


    //отрисовка вкладки видеосистема
    int i=0;
    while(i<ivid.getCount()){
        switch (i){
                case 0: {
                    ui->labelDisplay1->setText(ivid.getDeviceName(i).c_str());
                    ui->labelMonitor1->setText(ivid.getMonitorName(i).c_str());
                    ui->labelDeepRes1->setText(ivid.getDeepColor(i).c_str());
                    ui->labelSizeRes1->setText(ivid.getSize(i).c_str());
                    ui->labelFrecuencyRes1->setText(ivid.getFrequency(i).c_str());
                    break;
                }
                case 1: {
                    ui->labelDisplay2->setText(ivid.getDeviceName(i).c_str());
                    ui->labelMonitor2->setText(ivid.getMonitorName(i).c_str());
                    ui->labelDeepRes2->setText(ivid.getDeepColor(i).c_str());
                    ui->labelSizeRes2->setText(ivid.getSize(i).c_str());
                    ui->labelFrecuencyRes2->setText(ivid.getFrequency(i).c_str());
                    ui->labelSize2->setText("Разрешение");
                    ui->labelFrecuency2->setText("Частота");
                    ui->labelDeep2->setText("Цветопередача");
                    ui->labelDis2->setText("Дисплей");
                    ui->labelMon2->setText("Монитор");
                    break;
                }
                case 2: {
                    ui->labelDisplay3->setText(ivid.getDeviceName(i).c_str());
                    ui->labelMonitor3->setText(ivid.getMonitorName(i).c_str());
                    ui->labelDeepRes3->setText(ivid.getDeepColor(i).c_str());
                    ui->labelSizeRes3->setText(ivid.getSize(i).c_str());
                    ui->labelFrecuencyRes3->setText(ivid.getFrequency(i).c_str());
                    ui->labelSize3->setText("Разрешение");
                    ui->labelFrecuency3->setText("Частота");
                    ui->labelDeep3->setText("Цветопередача");
                    ui->labelDis3->setText("Дисплей");
                    ui->labelMon3->setText("Монитор");
                    break;
                }
                case 3: {
                    ui->labelDisplay4->setText(ivid.getDeviceName(i).c_str());
                    ui->labelMonitor4->setText(ivid.getMonitorName(i).c_str());
                    ui->labelDeepRes4->setText(ivid.getDeepColor(i).c_str());
                    ui->labelSizeRes4->setText(ivid.getSize(i).c_str());
                    ui->labelFrecuencyRes4->setText(ivid.getFrequency(i).c_str());
                    ui->labelSize4->setText("Разрешение");
                    ui->labelFrecuency4->setText("Частота");
                    ui->labelDeep4->setText("Цветопередача");
                    ui->labelDis4->setText("Дисплей");
                    ui->labelMon4->setText("Монитор");
                    break;
                }
        }
       i++;
    }
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(slotTimerAlarm()));
    timer->start(1000); // И запустим таймер
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotTimerAlarm()
{
   // Ежесекундно обновляем данные по текущему времени

    InfoTime it;
    InfoMemory im;
    ui->labelLoadMemory->setText(im.getMemoryLoad().c_str());
    ui->labelTotalPhis->setText(im.getTotalPhys().c_str());
    ui->labelTotalVirt->setText(im.getTotalVirt().c_str());
    ui->labelFreePhis->setText(im.getAvailPhys().c_str());
    ui->labelFreeVirt->setText(im.getAvailVirt().c_str());
    ui->labelPage->setText(im.getTotalPagefile().c_str());
    ui->labelTime->setText(it.getTimeUPC().c_str());
    ui->labelTime_2->setText(it.getTimeLocal().c_str());
    ui->labelTimeUp->setText(it.getTimeFromStart().c_str());
}

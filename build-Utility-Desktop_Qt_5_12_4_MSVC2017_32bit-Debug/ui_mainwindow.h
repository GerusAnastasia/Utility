/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTime;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelTime_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTimeUp;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *labelComputerName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *labelUserName;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *labelCPU;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *labelArchiType;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLabel *labelCount;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLabel *labelOperationSystem;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_17;
    QLabel *labelRole;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_10;
    QLabel *labelLoadMemory;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_5;
    QLabel *labelTotalPhis;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_14;
    QLabel *labelFreePhis;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_18;
    QLabel *labelTotalVirt;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_20;
    QLabel *labelFreeVirt;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_60;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_42;
    QLabel *labelDis1;
    QLabel *labelDisplay1;
    QHBoxLayout *horizontalLayout_43;
    QLabel *labelMon1;
    QLabel *labelMonitor1;
    QHBoxLayout *horizontalLayout_44;
    QLabel *labelFrecuency1;
    QLabel *labelFrecuencyRes1;
    QHBoxLayout *horizontalLayout_45;
    QLabel *labelSize1;
    QLabel *labelSizeRes1;
    QHBoxLayout *horizontalLayout_46;
    QLabel *labelDeep1;
    QLabel *labelDeepRes1;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_36;
    QLabel *labelDis2;
    QLabel *labelDisplay2;
    QHBoxLayout *horizontalLayout_37;
    QLabel *labelMon2;
    QLabel *labelMonitor2;
    QHBoxLayout *horizontalLayout_39;
    QLabel *labelFrecuency2;
    QLabel *labelFrecuencyRes2;
    QHBoxLayout *horizontalLayout_41;
    QLabel *labelSize2;
    QLabel *labelSizeRes2;
    QHBoxLayout *horizontalLayout_40;
    QLabel *labelDeep2;
    QLabel *labelDeepRes2;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_48;
    QLabel *labelDis3;
    QLabel *labelDisplay3;
    QHBoxLayout *horizontalLayout_50;
    QLabel *labelMon3;
    QLabel *labelMonitor3;
    QHBoxLayout *horizontalLayout_51;
    QLabel *labelFrecuency3;
    QLabel *labelFrecuencyRes3;
    QHBoxLayout *horizontalLayout_52;
    QLabel *labelSize3;
    QLabel *labelSizeRes3;
    QHBoxLayout *horizontalLayout_53;
    QLabel *labelDeep3;
    QLabel *labelDeepRes3;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_54;
    QLabel *labelDis4;
    QLabel *labelDisplay4;
    QHBoxLayout *horizontalLayout_56;
    QLabel *labelMon4;
    QLabel *labelMonitor4;
    QHBoxLayout *horizontalLayout_57;
    QLabel *labelFrecuency4;
    QLabel *labelFrecuencyRes4;
    QHBoxLayout *horizontalLayout_58;
    QLabel *labelSize4;
    QLabel *labelSizeRes4;
    QHBoxLayout *horizontalLayout_59;
    QLabel *labelDeep4;
    QLabel *labelDeepRes4;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_17;
    QTableWidget *DiskTable;
    QWidget *tab_4;
    QTableWidget *AppTable;
    QLabel *label_8;
    QLabel *labelAppCount;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(528, 414);
        MainWindow->setMaximumSize(QSize(528, 414));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        labelTime = new QLabel(centralWidget);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));

        horizontalLayout_2->addWidget(labelTime);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_38->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_3);

        labelTime_2 = new QLabel(centralWidget);
        labelTime_2->setObjectName(QString::fromUtf8("labelTime_2"));

        horizontalLayout_38->addWidget(labelTime_2);


        verticalLayout->addLayout(horizontalLayout_38);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        labelTimeUp = new QLabel(centralWidget);
        labelTimeUp->setObjectName(QString::fromUtf8("labelTimeUp"));

        horizontalLayout->addWidget(labelTimeUp);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setMinimumSize(QSize(550, 310));
        tabWidget->setBaseSize(QSize(0, 0));
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        labelComputerName = new QLabel(tab);
        labelComputerName->setObjectName(QString::fromUtf8("labelComputerName"));

        horizontalLayout_3->addWidget(labelComputerName);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        labelUserName = new QLabel(tab);
        labelUserName->setObjectName(QString::fromUtf8("labelUserName"));

        horizontalLayout_4->addWidget(labelUserName);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        labelCPU = new QLabel(tab);
        labelCPU->setObjectName(QString::fromUtf8("labelCPU"));

        horizontalLayout_5->addWidget(labelCPU);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_6->addWidget(label_11);

        labelArchiType = new QLabel(tab);
        labelArchiType->setObjectName(QString::fromUtf8("labelArchiType"));

        horizontalLayout_6->addWidget(labelArchiType);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_7->addWidget(label_13);

        labelCount = new QLabel(tab);
        labelCount->setObjectName(QString::fromUtf8("labelCount"));

        horizontalLayout_7->addWidget(labelCount);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_8->addWidget(label_15);

        labelOperationSystem = new QLabel(tab);
        labelOperationSystem->setObjectName(QString::fromUtf8("labelOperationSystem"));

        horizontalLayout_8->addWidget(labelOperationSystem);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_9->addWidget(label_17);

        labelRole = new QLabel(tab);
        labelRole->setObjectName(QString::fromUtf8("labelRole"));

        horizontalLayout_9->addWidget(labelRole);


        verticalLayout_2->addLayout(horizontalLayout_9);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_10 = new QVBoxLayout(tab_2);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_31->addWidget(label_10);

        labelLoadMemory = new QLabel(tab_2);
        labelLoadMemory->setObjectName(QString::fromUtf8("labelLoadMemory"));

        horizontalLayout_31->addWidget(labelLoadMemory);


        verticalLayout_10->addLayout(horizontalLayout_31);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_30->addWidget(label_5);

        labelTotalPhis = new QLabel(tab_2);
        labelTotalPhis->setObjectName(QString::fromUtf8("labelTotalPhis"));

        horizontalLayout_30->addWidget(labelTotalPhis);


        verticalLayout_10->addLayout(horizontalLayout_30);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_32->addWidget(label_14);

        labelFreePhis = new QLabel(tab_2);
        labelFreePhis->setObjectName(QString::fromUtf8("labelFreePhis"));

        horizontalLayout_32->addWidget(labelFreePhis);


        verticalLayout_10->addLayout(horizontalLayout_32);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_33->addWidget(label_18);

        labelTotalVirt = new QLabel(tab_2);
        labelTotalVirt->setObjectName(QString::fromUtf8("labelTotalVirt"));

        horizontalLayout_33->addWidget(labelTotalVirt);


        verticalLayout_10->addLayout(horizontalLayout_33);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_34->addWidget(label_20);

        labelFreeVirt = new QLabel(tab_2);
        labelFreeVirt->setObjectName(QString::fromUtf8("labelFreeVirt"));

        horizontalLayout_34->addWidget(labelFreeVirt);


        verticalLayout_10->addLayout(horizontalLayout_34);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_60 = new QHBoxLayout(tab_3);
        horizontalLayout_60->setSpacing(6);
        horizontalLayout_60->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_60->setObjectName(QString::fromUtf8("horizontalLayout_60"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        labelDis1 = new QLabel(tab_3);
        labelDis1->setObjectName(QString::fromUtf8("labelDis1"));

        horizontalLayout_42->addWidget(labelDis1);

        labelDisplay1 = new QLabel(tab_3);
        labelDisplay1->setObjectName(QString::fromUtf8("labelDisplay1"));

        horizontalLayout_42->addWidget(labelDisplay1);


        verticalLayout_12->addLayout(horizontalLayout_42);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        labelMon1 = new QLabel(tab_3);
        labelMon1->setObjectName(QString::fromUtf8("labelMon1"));

        horizontalLayout_43->addWidget(labelMon1);

        labelMonitor1 = new QLabel(tab_3);
        labelMonitor1->setObjectName(QString::fromUtf8("labelMonitor1"));
        labelMonitor1->setLayoutDirection(Qt::LeftToRight);
        labelMonitor1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_43->addWidget(labelMonitor1);


        verticalLayout_12->addLayout(horizontalLayout_43);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setObjectName(QString::fromUtf8("horizontalLayout_44"));
        labelFrecuency1 = new QLabel(tab_3);
        labelFrecuency1->setObjectName(QString::fromUtf8("labelFrecuency1"));

        horizontalLayout_44->addWidget(labelFrecuency1);

        labelFrecuencyRes1 = new QLabel(tab_3);
        labelFrecuencyRes1->setObjectName(QString::fromUtf8("labelFrecuencyRes1"));

        horizontalLayout_44->addWidget(labelFrecuencyRes1);


        verticalLayout_12->addLayout(horizontalLayout_44);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setSpacing(6);
        horizontalLayout_45->setObjectName(QString::fromUtf8("horizontalLayout_45"));
        labelSize1 = new QLabel(tab_3);
        labelSize1->setObjectName(QString::fromUtf8("labelSize1"));

        horizontalLayout_45->addWidget(labelSize1);

        labelSizeRes1 = new QLabel(tab_3);
        labelSizeRes1->setObjectName(QString::fromUtf8("labelSizeRes1"));

        horizontalLayout_45->addWidget(labelSizeRes1);


        verticalLayout_12->addLayout(horizontalLayout_45);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        labelDeep1 = new QLabel(tab_3);
        labelDeep1->setObjectName(QString::fromUtf8("labelDeep1"));

        horizontalLayout_46->addWidget(labelDeep1);

        labelDeepRes1 = new QLabel(tab_3);
        labelDeepRes1->setObjectName(QString::fromUtf8("labelDeepRes1"));

        horizontalLayout_46->addWidget(labelDeepRes1);


        verticalLayout_12->addLayout(horizontalLayout_46);


        verticalLayout_13->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        labelDis2 = new QLabel(tab_3);
        labelDis2->setObjectName(QString::fromUtf8("labelDis2"));

        horizontalLayout_36->addWidget(labelDis2);

        labelDisplay2 = new QLabel(tab_3);
        labelDisplay2->setObjectName(QString::fromUtf8("labelDisplay2"));

        horizontalLayout_36->addWidget(labelDisplay2);


        verticalLayout_11->addLayout(horizontalLayout_36);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        labelMon2 = new QLabel(tab_3);
        labelMon2->setObjectName(QString::fromUtf8("labelMon2"));

        horizontalLayout_37->addWidget(labelMon2);

        labelMonitor2 = new QLabel(tab_3);
        labelMonitor2->setObjectName(QString::fromUtf8("labelMonitor2"));

        horizontalLayout_37->addWidget(labelMonitor2);


        verticalLayout_11->addLayout(horizontalLayout_37);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        labelFrecuency2 = new QLabel(tab_3);
        labelFrecuency2->setObjectName(QString::fromUtf8("labelFrecuency2"));

        horizontalLayout_39->addWidget(labelFrecuency2);

        labelFrecuencyRes2 = new QLabel(tab_3);
        labelFrecuencyRes2->setObjectName(QString::fromUtf8("labelFrecuencyRes2"));

        horizontalLayout_39->addWidget(labelFrecuencyRes2);


        verticalLayout_11->addLayout(horizontalLayout_39);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        labelSize2 = new QLabel(tab_3);
        labelSize2->setObjectName(QString::fromUtf8("labelSize2"));

        horizontalLayout_41->addWidget(labelSize2);

        labelSizeRes2 = new QLabel(tab_3);
        labelSizeRes2->setObjectName(QString::fromUtf8("labelSizeRes2"));

        horizontalLayout_41->addWidget(labelSizeRes2);


        verticalLayout_11->addLayout(horizontalLayout_41);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        labelDeep2 = new QLabel(tab_3);
        labelDeep2->setObjectName(QString::fromUtf8("labelDeep2"));

        horizontalLayout_40->addWidget(labelDeep2);

        labelDeepRes2 = new QLabel(tab_3);
        labelDeepRes2->setObjectName(QString::fromUtf8("labelDeepRes2"));

        horizontalLayout_40->addWidget(labelDeepRes2);


        verticalLayout_11->addLayout(horizontalLayout_40);


        verticalLayout_13->addLayout(verticalLayout_11);


        horizontalLayout_60->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setSpacing(6);
        horizontalLayout_48->setObjectName(QString::fromUtf8("horizontalLayout_48"));
        labelDis3 = new QLabel(tab_3);
        labelDis3->setObjectName(QString::fromUtf8("labelDis3"));

        horizontalLayout_48->addWidget(labelDis3);

        labelDisplay3 = new QLabel(tab_3);
        labelDisplay3->setObjectName(QString::fromUtf8("labelDisplay3"));

        horizontalLayout_48->addWidget(labelDisplay3);


        verticalLayout_15->addLayout(horizontalLayout_48);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setSpacing(6);
        horizontalLayout_50->setObjectName(QString::fromUtf8("horizontalLayout_50"));
        labelMon3 = new QLabel(tab_3);
        labelMon3->setObjectName(QString::fromUtf8("labelMon3"));

        horizontalLayout_50->addWidget(labelMon3);

        labelMonitor3 = new QLabel(tab_3);
        labelMonitor3->setObjectName(QString::fromUtf8("labelMonitor3"));

        horizontalLayout_50->addWidget(labelMonitor3);


        verticalLayout_15->addLayout(horizontalLayout_50);

        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setSpacing(6);
        horizontalLayout_51->setObjectName(QString::fromUtf8("horizontalLayout_51"));
        labelFrecuency3 = new QLabel(tab_3);
        labelFrecuency3->setObjectName(QString::fromUtf8("labelFrecuency3"));

        horizontalLayout_51->addWidget(labelFrecuency3);

        labelFrecuencyRes3 = new QLabel(tab_3);
        labelFrecuencyRes3->setObjectName(QString::fromUtf8("labelFrecuencyRes3"));

        horizontalLayout_51->addWidget(labelFrecuencyRes3);


        verticalLayout_15->addLayout(horizontalLayout_51);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setSpacing(6);
        horizontalLayout_52->setObjectName(QString::fromUtf8("horizontalLayout_52"));
        labelSize3 = new QLabel(tab_3);
        labelSize3->setObjectName(QString::fromUtf8("labelSize3"));

        horizontalLayout_52->addWidget(labelSize3);

        labelSizeRes3 = new QLabel(tab_3);
        labelSizeRes3->setObjectName(QString::fromUtf8("labelSizeRes3"));

        horizontalLayout_52->addWidget(labelSizeRes3);


        verticalLayout_15->addLayout(horizontalLayout_52);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setSpacing(6);
        horizontalLayout_53->setObjectName(QString::fromUtf8("horizontalLayout_53"));
        labelDeep3 = new QLabel(tab_3);
        labelDeep3->setObjectName(QString::fromUtf8("labelDeep3"));

        horizontalLayout_53->addWidget(labelDeep3);

        labelDeepRes3 = new QLabel(tab_3);
        labelDeepRes3->setObjectName(QString::fromUtf8("labelDeepRes3"));

        horizontalLayout_53->addWidget(labelDeepRes3);


        verticalLayout_15->addLayout(horizontalLayout_53);


        verticalLayout_14->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setSpacing(6);
        horizontalLayout_54->setObjectName(QString::fromUtf8("horizontalLayout_54"));
        labelDis4 = new QLabel(tab_3);
        labelDis4->setObjectName(QString::fromUtf8("labelDis4"));

        horizontalLayout_54->addWidget(labelDis4);

        labelDisplay4 = new QLabel(tab_3);
        labelDisplay4->setObjectName(QString::fromUtf8("labelDisplay4"));

        horizontalLayout_54->addWidget(labelDisplay4);


        verticalLayout_16->addLayout(horizontalLayout_54);

        horizontalLayout_56 = new QHBoxLayout();
        horizontalLayout_56->setSpacing(6);
        horizontalLayout_56->setObjectName(QString::fromUtf8("horizontalLayout_56"));
        labelMon4 = new QLabel(tab_3);
        labelMon4->setObjectName(QString::fromUtf8("labelMon4"));

        horizontalLayout_56->addWidget(labelMon4);

        labelMonitor4 = new QLabel(tab_3);
        labelMonitor4->setObjectName(QString::fromUtf8("labelMonitor4"));

        horizontalLayout_56->addWidget(labelMonitor4);


        verticalLayout_16->addLayout(horizontalLayout_56);

        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setSpacing(6);
        horizontalLayout_57->setObjectName(QString::fromUtf8("horizontalLayout_57"));
        labelFrecuency4 = new QLabel(tab_3);
        labelFrecuency4->setObjectName(QString::fromUtf8("labelFrecuency4"));

        horizontalLayout_57->addWidget(labelFrecuency4);

        labelFrecuencyRes4 = new QLabel(tab_3);
        labelFrecuencyRes4->setObjectName(QString::fromUtf8("labelFrecuencyRes4"));

        horizontalLayout_57->addWidget(labelFrecuencyRes4);


        verticalLayout_16->addLayout(horizontalLayout_57);

        horizontalLayout_58 = new QHBoxLayout();
        horizontalLayout_58->setSpacing(6);
        horizontalLayout_58->setObjectName(QString::fromUtf8("horizontalLayout_58"));
        labelSize4 = new QLabel(tab_3);
        labelSize4->setObjectName(QString::fromUtf8("labelSize4"));

        horizontalLayout_58->addWidget(labelSize4);

        labelSizeRes4 = new QLabel(tab_3);
        labelSizeRes4->setObjectName(QString::fromUtf8("labelSizeRes4"));

        horizontalLayout_58->addWidget(labelSizeRes4);


        verticalLayout_16->addLayout(horizontalLayout_58);

        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setSpacing(6);
        horizontalLayout_59->setObjectName(QString::fromUtf8("horizontalLayout_59"));
        labelDeep4 = new QLabel(tab_3);
        labelDeep4->setObjectName(QString::fromUtf8("labelDeep4"));

        horizontalLayout_59->addWidget(labelDeep4);

        labelDeepRes4 = new QLabel(tab_3);
        labelDeepRes4->setObjectName(QString::fromUtf8("labelDeepRes4"));

        horizontalLayout_59->addWidget(labelDeepRes4);


        verticalLayout_16->addLayout(horizontalLayout_59);


        verticalLayout_14->addLayout(verticalLayout_16);


        horizontalLayout_60->addLayout(verticalLayout_14);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_17 = new QVBoxLayout(tab_5);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        DiskTable = new QTableWidget(tab_5);
        DiskTable->setObjectName(QString::fromUtf8("DiskTable"));

        verticalLayout_17->addWidget(DiskTable);

        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        AppTable = new QTableWidget(tab_4);
        AppTable->setObjectName(QString::fromUtf8("AppTable"));
        AppTable->setGeometry(QRect(6, 34, 521, 251));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 341, 21));
        labelAppCount = new QLabel(tab_4);
        labelAppCount->setObjectName(QString::fromUtf8("labelAppCount"));
        labelAppCount->setGeometry(QRect(420, 10, 81, 21));
        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 528, 17));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\234\320\265\321\201\321\202\320\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 :", nullptr));
        labelTime->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\234\320\270\321\200\320\276\320\262\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 :", nullptr));
        labelTime_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\201 \320\274\320\276\320\274\320\265\320\275\321\202\320\260 \320\262\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217:", nullptr));
        labelTimeUp->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260", nullptr));
        labelComputerName->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        labelUserName->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\321\201\320\276\321\200", nullptr));
        labelCPU->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\260\321\200\321\205\320\270\321\202\320\265\320\272\321\202\321\203\321\200\321\213", nullptr));
        labelArchiType->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\273\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\276\320\262", nullptr));
        labelCount->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\276\320\275\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260", nullptr));
        labelOperationSystem->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\320\240\320\276\320\273\321\214 \320\274\320\260\321\210\320\270\320\275\321\213", nullptr));
        labelRole->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\265", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\275\321\217\321\202\320\276\321\201\321\202\321\214 \320\277\320\260\320\274\321\217\321\202\320\270", nullptr));
        labelLoadMemory->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\320\244\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214", nullptr));
        labelTotalPhis->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "\320\241\320\262\320\276\320\261\320\276\320\264\320\275\320\260\321\217 \321\204\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214", nullptr));
        labelFreePhis->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "\320\222\320\270\321\200\321\202\321\203\320\260\320\273\321\214\320\275\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214", nullptr));
        labelTotalVirt->setText(QString());
        label_20->setText(QApplication::translate("MainWindow", "\320\241\320\262\320\276\320\261\320\276\320\264\320\275\320\260\321\217 \320\262\320\270\321\200\321\202\321\203\320\260\320\273\321\214\320\275\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214", nullptr));
        labelFreeVirt->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\237\320\260\320\274\321\217\321\202\321\214", nullptr));
        labelDis1->setText(QApplication::translate("MainWindow", "\320\224\320\270\321\201\320\277\320\273\320\265\320\271", nullptr));
        labelDisplay1->setText(QString());
        labelMon1->setText(QApplication::translate("MainWindow", "\320\234\320\276\320\275\320\270\321\202\320\276\321\200", nullptr));
        labelMonitor1->setText(QString());
        labelFrecuency1->setText(QApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260", nullptr));
        labelFrecuencyRes1->setText(QString());
        labelSize1->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\321\200\320\265\321\210\320\265\320\275\320\270\320\265", nullptr));
        labelSizeRes1->setText(QString());
        labelDeep1->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202\320\276\320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\260", nullptr));
        labelDeepRes1->setText(QString());
        labelDis2->setText(QString());
        labelDisplay2->setText(QString());
        labelMon2->setText(QString());
        labelMonitor2->setText(QString());
        labelFrecuency2->setText(QString());
        labelFrecuencyRes2->setText(QString());
        labelSize2->setText(QString());
        labelSizeRes2->setText(QString());
        labelDeep2->setText(QString());
        labelDeepRes2->setText(QString());
        labelDis3->setText(QString());
        labelDisplay3->setText(QString());
        labelMon3->setText(QString());
        labelMonitor3->setText(QString());
        labelFrecuency3->setText(QString());
        labelFrecuencyRes3->setText(QString());
        labelSize3->setText(QString());
        labelSizeRes3->setText(QString());
        labelDeep3->setText(QString());
        labelDeepRes3->setText(QString());
        labelDis4->setText(QString());
        labelDisplay4->setText(QString());
        labelMon4->setText(QString());
        labelMonitor4->setText(QString());
        labelFrecuency4->setText(QString());
        labelFrecuencyRes4->setText(QString());
        labelSize4->setText(QString());
        labelSizeRes4->setText(QString());
        labelDeep4->setText(QString());
        labelDeepRes4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\320\222\320\270\320\264\320\265\320\276\321\201\320\270\321\201\321\202\320\265\320\274\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\320\224\320\270\321\201\320\272\320\270", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\275\321\213\321\205 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\271", nullptr));
        labelAppCount->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'demo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO_H
#define UI_DEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demoClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabUdp;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lEditGroupAddr;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lEditGroupPort;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pBtnCreateUdp;
    QPushButton *pBtnAddGroup;
    QPushButton *pBtnExitGroup;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QTextEdit *txEditSendUdp;
    QPushButton *pBtnSendUdp;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QTextEdit *txtEditRecvUdp;
    QWidget *tabTcp;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QLabel *label_11;
    QLabel *label_14;
    QTextEdit *txtEditServerRecvTcp;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lEditServerAddr;
    QLabel *label_6;
    QLineEdit *lEditServerPort;
    QPushButton *pBtnCreateServer;
    QPushButton *pBtnCloseServer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_11;
    QTextEdit *txEditServerSendTcp;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QComboBox *cBoxServerSendTimes;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QLineEdit *lEditServerSendInterval;
    QPushButton *pBtnServerSendTcp;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pBtnServerTimerSendTcp;
    QPushButton *pBtnServerEndTimer;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *lEditClientAddr;
    QLabel *label_10;
    QLineEdit *lEditClientPort;
    QPushButton *pBtnCreateClient;
    QPushButton *pBtnCloseClient;
    QSpacerItem *horizontalSpacer_6;
    QTextEdit *txtEditClientRecvTcp;
    QLabel *label_16;
    QLabel *label_15;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_15;
    QTextEdit *txEditClientSendTcp;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_17;
    QComboBox *cBoxClientSendTimes;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QLineEdit *lEditClientSendInterval;
    QPushButton *pBtnClientSendTcp;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pBtnClientTimerSendTcp;
    QPushButton *pBtnClientEndTimer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *demoClass)
    {
        if (demoClass->objectName().isEmpty())
            demoClass->setObjectName(QStringLiteral("demoClass"));
        demoClass->resize(927, 879);
        centralWidget = new QWidget(demoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabUdp = new QWidget();
        tabUdp->setObjectName(QStringLiteral("tabUdp"));
        layoutWidget = new QWidget(tabUdp);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(31, 22, 821, 511));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lEditGroupAddr = new QLineEdit(layoutWidget);
        lEditGroupAddr->setObjectName(QStringLiteral("lEditGroupAddr"));

        horizontalLayout->addWidget(lEditGroupAddr);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lEditGroupPort = new QLineEdit(layoutWidget);
        lEditGroupPort->setObjectName(QStringLiteral("lEditGroupPort"));

        horizontalLayout_2->addWidget(lEditGroupPort);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pBtnCreateUdp = new QPushButton(layoutWidget);
        pBtnCreateUdp->setObjectName(QStringLiteral("pBtnCreateUdp"));

        horizontalLayout_3->addWidget(pBtnCreateUdp);

        pBtnAddGroup = new QPushButton(layoutWidget);
        pBtnAddGroup->setObjectName(QStringLiteral("pBtnAddGroup"));

        horizontalLayout_3->addWidget(pBtnAddGroup);

        pBtnExitGroup = new QPushButton(layoutWidget);
        pBtnExitGroup->setObjectName(QStringLiteral("pBtnExitGroup"));

        horizontalLayout_3->addWidget(pBtnExitGroup);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        txEditSendUdp = new QTextEdit(layoutWidget);
        txEditSendUdp->setObjectName(QStringLiteral("txEditSendUdp"));

        horizontalLayout_4->addWidget(txEditSendUdp);

        pBtnSendUdp = new QPushButton(layoutWidget);
        pBtnSendUdp->setObjectName(QStringLiteral("pBtnSendUdp"));

        horizontalLayout_4->addWidget(pBtnSendUdp);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        txtEditRecvUdp = new QTextEdit(layoutWidget);
        txtEditRecvUdp->setObjectName(QStringLiteral("txtEditRecvUdp"));

        horizontalLayout_5->addWidget(txtEditRecvUdp);


        verticalLayout->addLayout(horizontalLayout_5);

        tabWidget->addTab(tabUdp, QString());
        tabTcp = new QWidget();
        tabTcp->setObjectName(QStringLiteral("tabTcp"));
        layoutWidget1 = new QWidget(tabTcp);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 861, 741));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 60, 54, 12));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 210, 54, 12));
        txtEditServerRecvTcp = new QTextEdit(groupBox);
        txtEditServerRecvTcp->setObjectName(QStringLiteral("txtEditServerRecvTcp"));
        txtEditServerRecvTcp->setGeometry(QRect(50, 210, 791, 141));
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 831, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lEditServerAddr = new QLineEdit(layoutWidget2);
        lEditServerAddr->setObjectName(QStringLiteral("lEditServerAddr"));

        horizontalLayout_6->addWidget(lEditServerAddr);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lEditServerPort = new QLineEdit(layoutWidget2);
        lEditServerPort->setObjectName(QStringLiteral("lEditServerPort"));

        horizontalLayout_6->addWidget(lEditServerPort);

        pBtnCreateServer = new QPushButton(layoutWidget2);
        pBtnCreateServer->setObjectName(QStringLiteral("pBtnCreateServer"));

        horizontalLayout_6->addWidget(pBtnCreateServer);

        pBtnCloseServer = new QPushButton(layoutWidget2);
        pBtnCloseServer->setObjectName(QStringLiteral("pBtnCloseServer"));

        horizontalLayout_6->addWidget(pBtnCloseServer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(51, 60, 791, 141));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        txEditServerSendTcp = new QTextEdit(layoutWidget3);
        txEditServerSendTcp->setObjectName(QStringLiteral("txEditServerSendTcp"));

        horizontalLayout_11->addWidget(txEditServerSendTcp);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_9->addWidget(label_12);

        cBoxServerSendTimes = new QComboBox(layoutWidget3);
        cBoxServerSendTimes->addItem(QString());
        cBoxServerSendTimes->addItem(QString());
        cBoxServerSendTimes->addItem(QString());
        cBoxServerSendTimes->setObjectName(QStringLiteral("cBoxServerSendTimes"));
        cBoxServerSendTimes->setEditable(true);

        horizontalLayout_9->addWidget(cBoxServerSendTimes);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_10->addWidget(label_13);

        lEditServerSendInterval = new QLineEdit(layoutWidget3);
        lEditServerSendInterval->setObjectName(QStringLiteral("lEditServerSendInterval"));

        horizontalLayout_10->addWidget(lEditServerSendInterval);


        verticalLayout_3->addLayout(horizontalLayout_10);

        pBtnServerSendTcp = new QPushButton(layoutWidget3);
        pBtnServerSendTcp->setObjectName(QStringLiteral("pBtnServerSendTcp"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(8);
        pBtnServerSendTcp->setFont(font);

        verticalLayout_3->addWidget(pBtnServerSendTcp);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pBtnServerTimerSendTcp = new QPushButton(layoutWidget3);
        pBtnServerTimerSendTcp->setObjectName(QStringLiteral("pBtnServerTimerSendTcp"));
        pBtnServerTimerSendTcp->setFont(font);

        horizontalLayout_7->addWidget(pBtnServerTimerSendTcp);

        pBtnServerEndTimer = new QPushButton(layoutWidget3);
        pBtnServerEndTimer->setObjectName(QStringLiteral("pBtnServerEndTimer"));
        pBtnServerEndTimer->setFont(font);

        horizontalLayout_7->addWidget(pBtnServerEndTimer);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_11->addLayout(verticalLayout_3);

        horizontalLayout_11->setStretch(0, 19);
        horizontalLayout_11->setStretch(1, 1);

        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        layoutWidget4 = new QWidget(groupBox_2);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 821, 25));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        lEditClientAddr = new QLineEdit(layoutWidget4);
        lEditClientAddr->setObjectName(QStringLiteral("lEditClientAddr"));

        horizontalLayout_8->addWidget(lEditClientAddr);

        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_8->addWidget(label_10);

        lEditClientPort = new QLineEdit(layoutWidget4);
        lEditClientPort->setObjectName(QStringLiteral("lEditClientPort"));

        horizontalLayout_8->addWidget(lEditClientPort);

        pBtnCreateClient = new QPushButton(layoutWidget4);
        pBtnCreateClient->setObjectName(QStringLiteral("pBtnCreateClient"));

        horizontalLayout_8->addWidget(pBtnCreateClient);

        pBtnCloseClient = new QPushButton(layoutWidget4);
        pBtnCloseClient->setObjectName(QStringLiteral("pBtnCloseClient"));

        horizontalLayout_8->addWidget(pBtnCloseClient);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        txtEditClientRecvTcp = new QTextEdit(groupBox_2);
        txtEditClientRecvTcp->setObjectName(QStringLiteral("txtEditClientRecvTcp"));
        txtEditClientRecvTcp->setGeometry(QRect(50, 200, 791, 151));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 200, 54, 12));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 60, 54, 12));
        layoutWidget5 = new QWidget(groupBox_2);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(51, 60, 791, 131));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        txEditClientSendTcp = new QTextEdit(layoutWidget5);
        txEditClientSendTcp->setObjectName(QStringLiteral("txEditClientSendTcp"));

        horizontalLayout_15->addWidget(txEditClientSendTcp);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_17 = new QLabel(layoutWidget5);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_13->addWidget(label_17);

        cBoxClientSendTimes = new QComboBox(layoutWidget5);
        cBoxClientSendTimes->addItem(QString());
        cBoxClientSendTimes->addItem(QString());
        cBoxClientSendTimes->addItem(QString());
        cBoxClientSendTimes->setObjectName(QStringLiteral("cBoxClientSendTimes"));
        cBoxClientSendTimes->setEditable(true);

        horizontalLayout_13->addWidget(cBoxClientSendTimes);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_18 = new QLabel(layoutWidget5);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_14->addWidget(label_18);

        lEditClientSendInterval = new QLineEdit(layoutWidget5);
        lEditClientSendInterval->setObjectName(QStringLiteral("lEditClientSendInterval"));

        horizontalLayout_14->addWidget(lEditClientSendInterval);


        verticalLayout_4->addLayout(horizontalLayout_14);

        pBtnClientSendTcp = new QPushButton(layoutWidget5);
        pBtnClientSendTcp->setObjectName(QStringLiteral("pBtnClientSendTcp"));
        pBtnClientSendTcp->setFont(font);

        verticalLayout_4->addWidget(pBtnClientSendTcp);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        pBtnClientTimerSendTcp = new QPushButton(layoutWidget5);
        pBtnClientTimerSendTcp->setObjectName(QStringLiteral("pBtnClientTimerSendTcp"));
        pBtnClientTimerSendTcp->setFont(font);

        horizontalLayout_12->addWidget(pBtnClientTimerSendTcp);

        pBtnClientEndTimer = new QPushButton(layoutWidget5);
        pBtnClientEndTimer->setObjectName(QStringLiteral("pBtnClientEndTimer"));
        pBtnClientEndTimer->setFont(font);

        horizontalLayout_12->addWidget(pBtnClientEndTimer);


        verticalLayout_4->addLayout(horizontalLayout_12);


        horizontalLayout_15->addLayout(verticalLayout_4);

        horizontalLayout_15->setStretch(0, 19);
        horizontalLayout_15->setStretch(1, 1);

        verticalLayout_5->addWidget(groupBox_2);

        tabWidget->addTab(tabTcp, QString());

        verticalLayout_2->addWidget(tabWidget);

        demoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(demoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 927, 23));
        demoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(demoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        demoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(demoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        demoClass->setStatusBar(statusBar);

        retranslateUi(demoClass);

        tabWidget->setCurrentIndex(1);
        cBoxServerSendTimes->setCurrentIndex(0);
        cBoxClientSendTimes->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(demoClass);
    } // setupUi

    void retranslateUi(QMainWindow *demoClass)
    {
        demoClass->setWindowTitle(QApplication::translate("demoClass", "demo", nullptr));
        label->setText(QApplication::translate("demoClass", "\347\273\204\346\222\255\345\234\260\345\235\200\357\274\232", nullptr));
        lEditGroupAddr->setText(QApplication::translate("demoClass", "224.2.2.2", nullptr));
        lEditGroupAddr->setPlaceholderText(QApplication::translate("demoClass", "224.0.0.0 ~ 239.255.255.255", nullptr));
        label_2->setText(QApplication::translate("demoClass", "\347\273\204\346\222\255\347\253\257\345\217\243\357\274\232", nullptr));
        lEditGroupPort->setText(QApplication::translate("demoClass", "5000", nullptr));
        lEditGroupPort->setPlaceholderText(QApplication::translate("demoClass", "1025 ~ 65535", nullptr));
        pBtnCreateUdp->setText(QApplication::translate("demoClass", "\345\210\233\345\273\272", nullptr));
        pBtnAddGroup->setText(QApplication::translate("demoClass", "\345\212\240\345\205\245", nullptr));
        pBtnExitGroup->setText(QApplication::translate("demoClass", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QApplication::translate("demoClass", "\345\217\221\351\200\201\357\274\232", nullptr));
        pBtnSendUdp->setText(QApplication::translate("demoClass", "\345\217\221\351\200\201", nullptr));
        label_4->setText(QApplication::translate("demoClass", "\346\216\245\346\224\266\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabUdp), QApplication::translate("demoClass", "UDP\347\273\204\346\222\255", nullptr));
        groupBox->setTitle(QApplication::translate("demoClass", "\346\234\215\345\212\241\347\253\257", nullptr));
        label_11->setText(QApplication::translate("demoClass", "\345\217\221\351\200\201\357\274\232", nullptr));
        label_14->setText(QApplication::translate("demoClass", "\346\216\245\346\224\266\357\274\232", nullptr));
        label_5->setText(QApplication::translate("demoClass", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_6->setText(QApplication::translate("demoClass", "\347\253\257\345\217\243\357\274\232", nullptr));
        lEditServerPort->setText(QApplication::translate("demoClass", "5000", nullptr));
        pBtnCreateServer->setText(QApplication::translate("demoClass", "\345\210\233\345\273\272", nullptr));
        pBtnCloseServer->setText(QApplication::translate("demoClass", "\345\205\263\351\227\255", nullptr));
        label_12->setText(QApplication::translate("demoClass", "\346\254\241\346\225\260\357\274\232", nullptr));
        cBoxServerSendTimes->setItemText(0, QApplication::translate("demoClass", "1", nullptr));
        cBoxServerSendTimes->setItemText(1, QApplication::translate("demoClass", "10", nullptr));
        cBoxServerSendTimes->setItemText(2, QApplication::translate("demoClass", "100", nullptr));

        cBoxServerSendTimes->setCurrentText(QApplication::translate("demoClass", "1", nullptr));
        label_13->setText(QApplication::translate("demoClass", "\345\273\266\346\227\266(ms)\357\274\232", nullptr));
        lEditServerSendInterval->setText(QApplication::translate("demoClass", "100", nullptr));
        pBtnServerSendTcp->setText(QApplication::translate("demoClass", "\345\217\221\351\200\201", nullptr));
        pBtnServerTimerSendTcp->setText(QApplication::translate("demoClass", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        pBtnServerEndTimer->setText(QApplication::translate("demoClass", "\345\201\234\346\255\242\345\256\232\346\227\266", nullptr));
        groupBox_2->setTitle(QApplication::translate("demoClass", "\345\256\242\346\210\267\347\253\257", nullptr));
        label_9->setText(QApplication::translate("demoClass", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_10->setText(QApplication::translate("demoClass", "\347\253\257\345\217\243\357\274\232", nullptr));
        lEditClientPort->setText(QApplication::translate("demoClass", "5000", nullptr));
        pBtnCreateClient->setText(QApplication::translate("demoClass", "\345\210\233\345\273\272", nullptr));
        pBtnCloseClient->setText(QApplication::translate("demoClass", "\345\205\263\351\227\255", nullptr));
        label_16->setText(QApplication::translate("demoClass", "\346\216\245\346\224\266\357\274\232", nullptr));
        label_15->setText(QApplication::translate("demoClass", "\345\217\221\351\200\201\357\274\232", nullptr));
        label_17->setText(QApplication::translate("demoClass", "\346\254\241\346\225\260\357\274\232", nullptr));
        cBoxClientSendTimes->setItemText(0, QApplication::translate("demoClass", "1", nullptr));
        cBoxClientSendTimes->setItemText(1, QApplication::translate("demoClass", "10", nullptr));
        cBoxClientSendTimes->setItemText(2, QApplication::translate("demoClass", "100", nullptr));

        cBoxClientSendTimes->setCurrentText(QApplication::translate("demoClass", "1", nullptr));
        label_18->setText(QApplication::translate("demoClass", "\345\273\266\346\227\266(ms)\357\274\232", nullptr));
        lEditClientSendInterval->setText(QApplication::translate("demoClass", "100", nullptr));
        pBtnClientSendTcp->setText(QApplication::translate("demoClass", "\345\217\221\351\200\201", nullptr));
        pBtnClientTimerSendTcp->setText(QApplication::translate("demoClass", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        pBtnClientEndTimer->setText(QApplication::translate("demoClass", "\345\201\234\346\255\242\345\256\232\346\227\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTcp), QApplication::translate("demoClass", "TCP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class demoClass: public Ui_demoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO_H

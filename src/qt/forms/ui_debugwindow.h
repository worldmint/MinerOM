/********************************************************************************
** Form generated from reading UI file 'debugwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGWINDOW_H
#define UI_DEBUGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "trafficgraphwidget.h"

QT_BEGIN_NAMESPACE

class Ui_RPCConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_info;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *clientName;
    QLabel *label_6;
    QLabel *clientVersion;
    QLabel *labelClientUserAgent;
    QLabel *clientUserAgent;
    QLabel *label_berkeleyDBVersion;
    QLabel *berkeleyDBVersion;
    QLabel *label_12;
    QLabel *buildDate;
    QLabel *label_13;
    QLabel *startupTime;
    QLabel *labelNetwork;
    QLabel *label_8;
    QLabel *networkName;
    QLabel *label_7;
    QLabel *numberOfConnections;
    QLabel *masternodeCountLabel;
    QLabel *masternodeCount;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *numberOfBlocks;
    QLabel *labelLastBlockTime;
    QLabel *lastBlockTime;
    QLabel *labelMempoolTitle;
    QLabel *labelNumberOfTransactions;
    QLabel *mempoolNumberTxs;
    QLabel *labelMemoryUsage;
    QLabel *mempoolSize;
    QVBoxLayout *verticalLayoutDebugButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelDebugLogfile;
    QPushButton *openDebugLogfileButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_console;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *clearButton;
    QWidget *tab_nettraffic;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    TrafficGraphWidget *trafficGraph;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sldGraphRange;
    QLabel *lblGraphRange;
    QPushButton *btnClearTrafficGraph;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QFrame *line;
    QLabel *label_16;
    QLabel *lblBytesIn;
    QHBoxLayout *horizontalLayout_5;
    QFrame *line_2;
    QLabel *label_17;
    QLabel *lblBytesOut;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_peers;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_101;
    QTableView *peerWidget;
    QLabel *banHeading;
    QTableView *banlistWidget;
    QLabel *peerHeading;
    QWidget *detailWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_30;
    QLabel *peerWhitelisted;
    QLabel *label_23;
    QLabel *peerDirection;
    QLabel *label_21;
    QLabel *peerVersion;
    QLabel *label_28;
    QLabel *peerSubversion;
    QLabel *label_4;
    QLabel *peerServices;
    QLabel *label_29;
    QLabel *peerHeight;
    QLabel *label_27;
    QLabel *peerSyncHeight;
    QLabel *label_25;
    QLabel *peerCommonHeight;
    QLabel *label_24;
    QLabel *peerBanScore;
    QLabel *label_22;
    QLabel *peerConnTime;
    QLabel *label_15;
    QLabel *peerLastSend;
    QLabel *label_19;
    QLabel *peerLastRecv;
    QLabel *label_18;
    QLabel *peerBytesSent;
    QLabel *label_20;
    QLabel *peerBytesRecv;
    QLabel *label_26;
    QLabel *peerPingTime;
    QLabel *peerPingWaitLabel;
    QLabel *peerPingWait;
    QLabel *label_timeoffset;
    QLabel *timeoffset;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_repair;
    QPushButton *btn_salvagewallet;
    QPushButton *btn_rescan;
    QPushButton *btn_zapwallettxes1;
    QPushButton *btn_zapwallettxes2;
    QPushButton *btn_upgradewallet;
    QLabel *label_repair_helptext;
    QLabel *label_repair_salvage;
    QLabel *label_repair_rescan;
    QLabel *label_repair_zap1;
    QLabel *label_repair_zap2;
    QLabel *label_repair_upgrade;
    QLabel *label_repair_header;
    QPushButton *btn_reindex;
    QLabel *label_repair_reindex;
    QLabel *wallet_path;

    void setupUi(QWidget *RPCConsole)
    {
        if (RPCConsole->objectName().isEmpty())
            RPCConsole->setObjectName(QStringLiteral("RPCConsole"));
        RPCConsole->resize(769, 485);
        verticalLayout_2 = new QVBoxLayout(RPCConsole);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(RPCConsole);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_info = new QWidget();
        tab_info->setObjectName(QStringLiteral("tab_info"));
        gridLayout = new QGridLayout(tab_info);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        label_9 = new QLabel(tab_info);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_5 = new QLabel(tab_info);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        clientName = new QLabel(tab_info);
        clientName->setObjectName(QStringLiteral("clientName"));
        clientName->setCursor(QCursor(Qt::IBeamCursor));
        clientName->setTextFormat(Qt::PlainText);
        clientName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientName, 1, 1, 1, 2);

        label_6 = new QLabel(tab_info);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        clientVersion = new QLabel(tab_info);
        clientVersion->setObjectName(QStringLiteral("clientVersion"));
        clientVersion->setCursor(QCursor(Qt::IBeamCursor));
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientVersion, 2, 1, 1, 2);

        labelClientUserAgent = new QLabel(tab_info);
        labelClientUserAgent->setObjectName(QStringLiteral("labelClientUserAgent"));
        labelClientUserAgent->setIndent(10);

        gridLayout->addWidget(labelClientUserAgent, 3, 0, 1, 1);

        clientUserAgent = new QLabel(tab_info);
        clientUserAgent->setObjectName(QStringLiteral("clientUserAgent"));
        clientUserAgent->setCursor(QCursor(Qt::IBeamCursor));
        clientUserAgent->setTextFormat(Qt::PlainText);
        clientUserAgent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientUserAgent, 3, 1, 1, 2);

        label_berkeleyDBVersion = new QLabel(tab_info);
        label_berkeleyDBVersion->setObjectName(QStringLiteral("label_berkeleyDBVersion"));
        label_berkeleyDBVersion->setIndent(10);

        gridLayout->addWidget(label_berkeleyDBVersion, 4, 0, 1, 1);

        berkeleyDBVersion = new QLabel(tab_info);
        berkeleyDBVersion->setObjectName(QStringLiteral("berkeleyDBVersion"));
        berkeleyDBVersion->setCursor(QCursor(Qt::IBeamCursor));
        berkeleyDBVersion->setTextFormat(Qt::PlainText);
        berkeleyDBVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(berkeleyDBVersion, 4, 1, 1, 2);

        label_12 = new QLabel(tab_info);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 5, 0, 1, 1);

        buildDate = new QLabel(tab_info);
        buildDate->setObjectName(QStringLiteral("buildDate"));
        buildDate->setCursor(QCursor(Qt::IBeamCursor));
        buildDate->setTextFormat(Qt::PlainText);
        buildDate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(buildDate, 5, 1, 1, 2);

        label_13 = new QLabel(tab_info);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 6, 0, 1, 1);

        startupTime = new QLabel(tab_info);
        startupTime->setObjectName(QStringLiteral("startupTime"));
        startupTime->setCursor(QCursor(Qt::IBeamCursor));
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(startupTime, 6, 1, 1, 2);

        labelNetwork = new QLabel(tab_info);
        labelNetwork->setObjectName(QStringLiteral("labelNetwork"));
        labelNetwork->setFont(font);

        gridLayout->addWidget(labelNetwork, 7, 0, 1, 1);

        label_8 = new QLabel(tab_info);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        networkName = new QLabel(tab_info);
        networkName->setObjectName(QStringLiteral("networkName"));
        networkName->setCursor(QCursor(Qt::IBeamCursor));
        networkName->setTextFormat(Qt::PlainText);
        networkName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(networkName, 8, 1, 1, 2);

        label_7 = new QLabel(tab_info);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 9, 0, 1, 1);

        numberOfConnections = new QLabel(tab_info);
        numberOfConnections->setObjectName(QStringLiteral("numberOfConnections"));
        numberOfConnections->setCursor(QCursor(Qt::IBeamCursor));
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfConnections, 9, 1, 1, 2);

        masternodeCountLabel = new QLabel(tab_info);
        masternodeCountLabel->setObjectName(QStringLiteral("masternodeCountLabel"));

        gridLayout->addWidget(masternodeCountLabel, 10, 0, 1, 1);

        masternodeCount = new QLabel(tab_info);
        masternodeCount->setObjectName(QStringLiteral("masternodeCount"));

        gridLayout->addWidget(masternodeCount, 10, 1, 1, 1);

        label_10 = new QLabel(tab_info);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 11, 0, 1, 1);

        label_3 = new QLabel(tab_info);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 12, 0, 1, 1);

        numberOfBlocks = new QLabel(tab_info);
        numberOfBlocks->setObjectName(QStringLiteral("numberOfBlocks"));
        numberOfBlocks->setCursor(QCursor(Qt::IBeamCursor));
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfBlocks, 12, 1, 1, 2);

        labelLastBlockTime = new QLabel(tab_info);
        labelLastBlockTime->setObjectName(QStringLiteral("labelLastBlockTime"));

        gridLayout->addWidget(labelLastBlockTime, 13, 0, 1, 1);

        lastBlockTime = new QLabel(tab_info);
        lastBlockTime->setObjectName(QStringLiteral("lastBlockTime"));
        lastBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockTime, 13, 1, 1, 2);

        labelMempoolTitle = new QLabel(tab_info);
        labelMempoolTitle->setObjectName(QStringLiteral("labelMempoolTitle"));
        labelMempoolTitle->setFont(font);

        gridLayout->addWidget(labelMempoolTitle, 14, 0, 1, 1);

        labelNumberOfTransactions = new QLabel(tab_info);
        labelNumberOfTransactions->setObjectName(QStringLiteral("labelNumberOfTransactions"));

        gridLayout->addWidget(labelNumberOfTransactions, 15, 0, 1, 1);

        mempoolNumberTxs = new QLabel(tab_info);
        mempoolNumberTxs->setObjectName(QStringLiteral("mempoolNumberTxs"));
        mempoolNumberTxs->setCursor(QCursor(Qt::IBeamCursor));
        mempoolNumberTxs->setTextFormat(Qt::PlainText);
        mempoolNumberTxs->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mempoolNumberTxs, 15, 1, 1, 1);

        labelMemoryUsage = new QLabel(tab_info);
        labelMemoryUsage->setObjectName(QStringLiteral("labelMemoryUsage"));

        gridLayout->addWidget(labelMemoryUsage, 16, 0, 1, 1);

        mempoolSize = new QLabel(tab_info);
        mempoolSize->setObjectName(QStringLiteral("mempoolSize"));
        mempoolSize->setCursor(QCursor(Qt::IBeamCursor));
        mempoolSize->setTextFormat(Qt::PlainText);
        mempoolSize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mempoolSize, 16, 1, 1, 1);

        verticalLayoutDebugButton = new QVBoxLayout();
        verticalLayoutDebugButton->setSpacing(3);
        verticalLayoutDebugButton->setObjectName(QStringLiteral("verticalLayoutDebugButton"));
        verticalSpacer_2 = new QSpacerItem(10, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutDebugButton->addItem(verticalSpacer_2);

        labelDebugLogfile = new QLabel(tab_info);
        labelDebugLogfile->setObjectName(QStringLiteral("labelDebugLogfile"));

        verticalLayoutDebugButton->addWidget(labelDebugLogfile);

        openDebugLogfileButton = new QPushButton(tab_info);
        openDebugLogfileButton->setObjectName(QStringLiteral("openDebugLogfileButton"));
        openDebugLogfileButton->setAutoDefault(false);

        verticalLayoutDebugButton->addWidget(openDebugLogfileButton);


        gridLayout->addLayout(verticalLayoutDebugButton, 14, 2, 3, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 18, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        tabWidget->addTab(tab_info, QString());
        tab_console = new QWidget();
        tab_console->setObjectName(QStringLiteral("tab_console"));
        verticalLayout_3 = new QVBoxLayout(tab_console);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        messagesWidget = new QTextEdit(tab_console);
        messagesWidget->setObjectName(QStringLiteral("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(tab_console);
        label->setObjectName(QStringLiteral("label"));
        label->setText(QStringLiteral(">"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(tab_console);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        clearButton = new QPushButton(tab_console);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/drkblue/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon);
#ifndef QT_NO_SHORTCUT
        clearButton->setShortcut(QStringLiteral("Ctrl+L"));
#endif // QT_NO_SHORTCUT
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(tab_console, QString());
        tab_nettraffic = new QWidget();
        tab_nettraffic->setObjectName(QStringLiteral("tab_nettraffic"));
        horizontalLayout_3 = new QHBoxLayout(tab_nettraffic);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        trafficGraph = new TrafficGraphWidget(tab_nettraffic);
        trafficGraph->setObjectName(QStringLiteral("trafficGraph"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trafficGraph->sizePolicy().hasHeightForWidth());
        trafficGraph->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(trafficGraph);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sldGraphRange = new QSlider(tab_nettraffic);
        sldGraphRange->setObjectName(QStringLiteral("sldGraphRange"));
        sldGraphRange->setMinimum(1);
        sldGraphRange->setMaximum(288);
        sldGraphRange->setPageStep(12);
        sldGraphRange->setValue(6);
        sldGraphRange->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sldGraphRange);

        lblGraphRange = new QLabel(tab_nettraffic);
        lblGraphRange->setObjectName(QStringLiteral("lblGraphRange"));
        lblGraphRange->setMinimumSize(QSize(100, 0));
        lblGraphRange->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblGraphRange);

        btnClearTrafficGraph = new QPushButton(tab_nettraffic);
        btnClearTrafficGraph->setObjectName(QStringLiteral("btnClearTrafficGraph"));
        btnClearTrafficGraph->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnClearTrafficGraph);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(tab_nettraffic);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setMinimumSize(QSize(10, 0));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        line->setPalette(palette);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_4->addWidget(label_16);

        lblBytesIn = new QLabel(groupBox);
        lblBytesIn->setObjectName(QStringLiteral("lblBytesIn"));
        lblBytesIn->setMinimumSize(QSize(50, 0));
        lblBytesIn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lblBytesIn);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setMinimumSize(QSize(10, 0));
        QPalette palette1;
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        line_2->setPalette(palette1);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_2);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_5->addWidget(label_17);

        lblBytesOut = new QLabel(groupBox);
        lblBytesOut->setObjectName(QStringLiteral("lblBytesOut"));
        lblBytesOut->setMinimumSize(QSize(50, 0));
        lblBytesOut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lblBytesOut);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 407, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        verticalLayout->addWidget(groupBox);


        horizontalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(tab_nettraffic, QString());
        tab_peers = new QWidget();
        tab_peers->setObjectName(QStringLiteral("tab_peers"));
        gridLayout_2 = new QGridLayout(tab_peers);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_101 = new QVBoxLayout();
        verticalLayout_101->setSpacing(0);
        verticalLayout_101->setObjectName(QStringLiteral("verticalLayout_101"));
        peerWidget = new QTableView(tab_peers);
        peerWidget->setObjectName(QStringLiteral("peerWidget"));
        peerWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        peerWidget->setSortingEnabled(true);
        peerWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_101->addWidget(peerWidget);

        banHeading = new QLabel(tab_peers);
        banHeading->setObjectName(QStringLiteral("banHeading"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(banHeading->sizePolicy().hasHeightForWidth());
        banHeading->setSizePolicy(sizePolicy2);
        banHeading->setMinimumSize(QSize(300, 32));
        banHeading->setMaximumSize(QSize(16777215, 32));
        QFont font1;
        font1.setPointSize(12);
        banHeading->setFont(font1);
        banHeading->setCursor(QCursor(Qt::IBeamCursor));
        banHeading->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        banHeading->setWordWrap(true);
        banHeading->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_101->addWidget(banHeading);

        banlistWidget = new QTableView(tab_peers);
        banlistWidget->setObjectName(QStringLiteral("banlistWidget"));
        sizePolicy.setHeightForWidth(banlistWidget->sizePolicy().hasHeightForWidth());
        banlistWidget->setSizePolicy(sizePolicy);
        banlistWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        banlistWidget->setSortingEnabled(true);
        banlistWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_101->addWidget(banlistWidget);


        gridLayout_2->addLayout(verticalLayout_101, 0, 0, 2, 1);

        peerHeading = new QLabel(tab_peers);
        peerHeading->setObjectName(QStringLiteral("peerHeading"));
        sizePolicy2.setHeightForWidth(peerHeading->sizePolicy().hasHeightForWidth());
        peerHeading->setSizePolicy(sizePolicy2);
        peerHeading->setMinimumSize(QSize(300, 32));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        peerHeading->setFont(font2);
        peerHeading->setCursor(QCursor(Qt::IBeamCursor));
        peerHeading->setAlignment(Qt::AlignCenter);
        peerHeading->setWordWrap(true);
        peerHeading->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerHeading, 0, 1, 1, 1);

        detailWidget = new QWidget(tab_peers);
        detailWidget->setObjectName(QStringLiteral("detailWidget"));
        detailWidget->setMinimumSize(QSize(300, 0));
        gridLayout_3 = new QGridLayout(detailWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_30 = new QLabel(detailWidget);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_3->addWidget(label_30, 0, 0, 1, 1);

        peerWhitelisted = new QLabel(detailWidget);
        peerWhitelisted->setObjectName(QStringLiteral("peerWhitelisted"));
        peerWhitelisted->setCursor(QCursor(Qt::IBeamCursor));
        peerWhitelisted->setTextFormat(Qt::PlainText);
        peerWhitelisted->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerWhitelisted, 0, 2, 1, 1);

        label_23 = new QLabel(detailWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_3->addWidget(label_23, 1, 0, 1, 1);

        peerDirection = new QLabel(detailWidget);
        peerDirection->setObjectName(QStringLiteral("peerDirection"));
        peerDirection->setCursor(QCursor(Qt::IBeamCursor));
        peerDirection->setTextFormat(Qt::PlainText);
        peerDirection->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerDirection, 1, 2, 1, 1);

        label_21 = new QLabel(detailWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_3->addWidget(label_21, 2, 0, 1, 1);

        peerVersion = new QLabel(detailWidget);
        peerVersion->setObjectName(QStringLiteral("peerVersion"));
        peerVersion->setCursor(QCursor(Qt::IBeamCursor));
        peerVersion->setTextFormat(Qt::PlainText);
        peerVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerVersion, 2, 2, 1, 1);

        label_28 = new QLabel(detailWidget);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_3->addWidget(label_28, 3, 0, 1, 1);

        peerSubversion = new QLabel(detailWidget);
        peerSubversion->setObjectName(QStringLiteral("peerSubversion"));
        peerSubversion->setCursor(QCursor(Qt::IBeamCursor));
        peerSubversion->setTextFormat(Qt::PlainText);
        peerSubversion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerSubversion, 3, 2, 1, 1);

        label_4 = new QLabel(detailWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        peerServices = new QLabel(detailWidget);
        peerServices->setObjectName(QStringLiteral("peerServices"));
        peerServices->setCursor(QCursor(Qt::IBeamCursor));
        peerServices->setTextFormat(Qt::PlainText);
        peerServices->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerServices, 4, 2, 1, 1);

        label_29 = new QLabel(detailWidget);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_3->addWidget(label_29, 5, 0, 1, 1);

        peerHeight = new QLabel(detailWidget);
        peerHeight->setObjectName(QStringLiteral("peerHeight"));
        peerHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerHeight->setTextFormat(Qt::PlainText);
        peerHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerHeight, 5, 2, 1, 1);

        label_27 = new QLabel(detailWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_3->addWidget(label_27, 6, 0, 1, 1);

        peerSyncHeight = new QLabel(detailWidget);
        peerSyncHeight->setObjectName(QStringLiteral("peerSyncHeight"));
        peerSyncHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerSyncHeight->setTextFormat(Qt::PlainText);
        peerSyncHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerSyncHeight, 6, 2, 1, 1);

        label_25 = new QLabel(detailWidget);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_3->addWidget(label_25, 7, 0, 1, 1);

        peerCommonHeight = new QLabel(detailWidget);
        peerCommonHeight->setObjectName(QStringLiteral("peerCommonHeight"));
        peerCommonHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerCommonHeight->setTextFormat(Qt::PlainText);
        peerCommonHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerCommonHeight, 7, 2, 1, 1);

        label_24 = new QLabel(detailWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_3->addWidget(label_24, 8, 0, 1, 1);

        peerBanScore = new QLabel(detailWidget);
        peerBanScore->setObjectName(QStringLiteral("peerBanScore"));
        peerBanScore->setCursor(QCursor(Qt::IBeamCursor));
        peerBanScore->setTextFormat(Qt::PlainText);
        peerBanScore->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBanScore, 8, 2, 1, 1);

        label_22 = new QLabel(detailWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_3->addWidget(label_22, 9, 0, 1, 1);

        peerConnTime = new QLabel(detailWidget);
        peerConnTime->setObjectName(QStringLiteral("peerConnTime"));
        peerConnTime->setCursor(QCursor(Qt::IBeamCursor));
        peerConnTime->setTextFormat(Qt::PlainText);
        peerConnTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerConnTime, 9, 2, 1, 1);

        label_15 = new QLabel(detailWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 10, 0, 1, 1);

        peerLastSend = new QLabel(detailWidget);
        peerLastSend->setObjectName(QStringLiteral("peerLastSend"));
        peerLastSend->setCursor(QCursor(Qt::IBeamCursor));
        peerLastSend->setTextFormat(Qt::PlainText);
        peerLastSend->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerLastSend, 10, 2, 1, 1);

        label_19 = new QLabel(detailWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_3->addWidget(label_19, 11, 0, 1, 1);

        peerLastRecv = new QLabel(detailWidget);
        peerLastRecv->setObjectName(QStringLiteral("peerLastRecv"));
        peerLastRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerLastRecv->setTextFormat(Qt::PlainText);
        peerLastRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerLastRecv, 11, 2, 1, 1);

        label_18 = new QLabel(detailWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_3->addWidget(label_18, 12, 0, 1, 1);

        peerBytesSent = new QLabel(detailWidget);
        peerBytesSent->setObjectName(QStringLiteral("peerBytesSent"));
        peerBytesSent->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesSent->setTextFormat(Qt::PlainText);
        peerBytesSent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBytesSent, 12, 2, 1, 1);

        label_20 = new QLabel(detailWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_3->addWidget(label_20, 13, 0, 1, 1);

        peerBytesRecv = new QLabel(detailWidget);
        peerBytesRecv->setObjectName(QStringLiteral("peerBytesRecv"));
        peerBytesRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesRecv->setTextFormat(Qt::PlainText);
        peerBytesRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBytesRecv, 13, 2, 1, 1);

        label_26 = new QLabel(detailWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_3->addWidget(label_26, 14, 0, 1, 1);

        peerPingTime = new QLabel(detailWidget);
        peerPingTime->setObjectName(QStringLiteral("peerPingTime"));
        peerPingTime->setCursor(QCursor(Qt::IBeamCursor));
        peerPingTime->setTextFormat(Qt::PlainText);
        peerPingTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerPingTime, 14, 2, 1, 1);

        peerPingWaitLabel = new QLabel(detailWidget);
        peerPingWaitLabel->setObjectName(QStringLiteral("peerPingWaitLabel"));

        gridLayout_3->addWidget(peerPingWaitLabel, 15, 0, 1, 1);

        peerPingWait = new QLabel(detailWidget);
        peerPingWait->setObjectName(QStringLiteral("peerPingWait"));
        peerPingWait->setCursor(QCursor(Qt::IBeamCursor));
        peerPingWait->setTextFormat(Qt::PlainText);
        peerPingWait->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerPingWait, 15, 2, 1, 1);

        label_timeoffset = new QLabel(detailWidget);
        label_timeoffset->setObjectName(QStringLiteral("label_timeoffset"));

        gridLayout_3->addWidget(label_timeoffset, 16, 0, 1, 1);

        timeoffset = new QLabel(detailWidget);
        timeoffset->setObjectName(QStringLiteral("timeoffset"));
        timeoffset->setCursor(QCursor(Qt::IBeamCursor));
        timeoffset->setTextFormat(Qt::PlainText);
        timeoffset->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(timeoffset, 16, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 17, 1, 1, 1);


        gridLayout_2->addWidget(detailWidget, 1, 1, 1, 1);

        tabWidget->addTab(tab_peers, QString());
        tab_repair = new QWidget();
        tab_repair->setObjectName(QStringLiteral("tab_repair"));
        btn_salvagewallet = new QPushButton(tab_repair);
        btn_salvagewallet->setObjectName(QStringLiteral("btn_salvagewallet"));
        btn_salvagewallet->setGeometry(QRect(10, 100, 301, 23));
        btn_salvagewallet->setMinimumSize(QSize(180, 23));
        btn_rescan = new QPushButton(tab_repair);
        btn_rescan->setObjectName(QStringLiteral("btn_rescan"));
        btn_rescan->setGeometry(QRect(10, 150, 301, 23));
        btn_rescan->setMinimumSize(QSize(180, 23));
        btn_zapwallettxes1 = new QPushButton(tab_repair);
        btn_zapwallettxes1->setObjectName(QStringLiteral("btn_zapwallettxes1"));
        btn_zapwallettxes1->setGeometry(QRect(10, 200, 301, 23));
        btn_zapwallettxes1->setMinimumSize(QSize(180, 23));
        btn_zapwallettxes2 = new QPushButton(tab_repair);
        btn_zapwallettxes2->setObjectName(QStringLiteral("btn_zapwallettxes2"));
        btn_zapwallettxes2->setGeometry(QRect(10, 250, 301, 23));
        btn_zapwallettxes2->setMinimumSize(QSize(180, 23));
        btn_upgradewallet = new QPushButton(tab_repair);
        btn_upgradewallet->setObjectName(QStringLiteral("btn_upgradewallet"));
        btn_upgradewallet->setGeometry(QRect(10, 300, 301, 23));
        btn_upgradewallet->setMinimumSize(QSize(180, 23));
        label_repair_helptext = new QLabel(tab_repair);
        label_repair_helptext->setObjectName(QStringLiteral("label_repair_helptext"));
        label_repair_helptext->setGeometry(QRect(10, 30, 711, 41));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        label_repair_helptext->setFont(font3);
        label_repair_helptext->setWordWrap(true);
        label_repair_salvage = new QLabel(tab_repair);
        label_repair_salvage->setObjectName(QStringLiteral("label_repair_salvage"));
        label_repair_salvage->setGeometry(QRect(330, 90, 411, 41));
        label_repair_salvage->setWordWrap(true);
        label_repair_rescan = new QLabel(tab_repair);
        label_repair_rescan->setObjectName(QStringLiteral("label_repair_rescan"));
        label_repair_rescan->setGeometry(QRect(330, 140, 411, 41));
        label_repair_rescan->setWordWrap(true);
        label_repair_zap1 = new QLabel(tab_repair);
        label_repair_zap1->setObjectName(QStringLiteral("label_repair_zap1"));
        label_repair_zap1->setGeometry(QRect(330, 190, 411, 41));
        label_repair_zap1->setWordWrap(true);
        label_repair_zap2 = new QLabel(tab_repair);
        label_repair_zap2->setObjectName(QStringLiteral("label_repair_zap2"));
        label_repair_zap2->setGeometry(QRect(330, 240, 411, 41));
        label_repair_zap2->setWordWrap(true);
        label_repair_upgrade = new QLabel(tab_repair);
        label_repair_upgrade->setObjectName(QStringLiteral("label_repair_upgrade"));
        label_repair_upgrade->setGeometry(QRect(330, 290, 411, 41));
        label_repair_upgrade->setWordWrap(true);
        label_repair_header = new QLabel(tab_repair);
        label_repair_header->setObjectName(QStringLiteral("label_repair_header"));
        label_repair_header->setGeometry(QRect(10, 10, 711, 16));
        label_repair_header->setFont(font2);
        label_repair_header->setWordWrap(true);
        btn_reindex = new QPushButton(tab_repair);
        btn_reindex->setObjectName(QStringLiteral("btn_reindex"));
        btn_reindex->setGeometry(QRect(10, 350, 301, 23));
        label_repair_reindex = new QLabel(tab_repair);
        label_repair_reindex->setObjectName(QStringLiteral("label_repair_reindex"));
        label_repair_reindex->setGeometry(QRect(330, 340, 411, 41));
        label_repair_reindex->setWordWrap(true);
        wallet_path = new QLabel(tab_repair);
        wallet_path->setObjectName(QStringLiteral("wallet_path"));
        wallet_path->setGeometry(QRect(10, 70, 731, 21));
        tabWidget->addTab(tab_repair, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(RPCConsole);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole);
    } // setupUi

    void retranslateUi(QWidget *RPCConsole)
    {
        RPCConsole->setWindowTitle(QApplication::translate("RPCConsole", "Tools window", nullptr));
        label_9->setText(QApplication::translate("RPCConsole", "General", nullptr));
        label_5->setText(QApplication::translate("RPCConsole", "Client name", nullptr));
        clientName->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_6->setText(QApplication::translate("RPCConsole", "Client version", nullptr));
        clientVersion->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        labelClientUserAgent->setText(QApplication::translate("RPCConsole", "User Agent", nullptr));
        clientUserAgent->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_berkeleyDBVersion->setText(QApplication::translate("RPCConsole", "Using BerkeleyDB version", nullptr));
        berkeleyDBVersion->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_12->setText(QApplication::translate("RPCConsole", "Build date", nullptr));
        buildDate->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_13->setText(QApplication::translate("RPCConsole", "Startup time", nullptr));
        startupTime->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        labelNetwork->setText(QApplication::translate("RPCConsole", "Network", nullptr));
        label_8->setText(QApplication::translate("RPCConsole", "Name", nullptr));
        networkName->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_7->setText(QApplication::translate("RPCConsole", "Number of connections", nullptr));
        numberOfConnections->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        masternodeCountLabel->setText(QApplication::translate("RPCConsole", "Number of Masternodes", nullptr));
        masternodeCount->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_10->setText(QApplication::translate("RPCConsole", "Block chain", nullptr));
        label_3->setText(QApplication::translate("RPCConsole", "Current number of blocks", nullptr));
        numberOfBlocks->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        labelLastBlockTime->setText(QApplication::translate("RPCConsole", "Last block time", nullptr));
        lastBlockTime->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        labelMempoolTitle->setText(QApplication::translate("RPCConsole", "Memory Pool", nullptr));
        labelNumberOfTransactions->setText(QApplication::translate("RPCConsole", "Current number of transactions", nullptr));
        mempoolNumberTxs->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        labelMemoryUsage->setText(QApplication::translate("RPCConsole", "Memory usage", nullptr));
        mempoolSize->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        labelDebugLogfile->setText(QApplication::translate("RPCConsole", "Debug log file", nullptr));
#ifndef QT_NO_TOOLTIP
        openDebugLogfileButton->setToolTip(QApplication::translate("RPCConsole", "Open the MinerOM Core debug log file from the current data directory. This can take a few seconds for large log files.", nullptr));
#endif // QT_NO_TOOLTIP
        openDebugLogfileButton->setText(QApplication::translate("RPCConsole", "&Open", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_info), QApplication::translate("RPCConsole", "&Information", nullptr));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("RPCConsole", "Clear console", nullptr));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_console), QApplication::translate("RPCConsole", "&Console", nullptr));
        btnClearTrafficGraph->setText(QApplication::translate("RPCConsole", "&Clear", nullptr));
        groupBox->setTitle(QApplication::translate("RPCConsole", "Totals", nullptr));
        label_16->setText(QApplication::translate("RPCConsole", "Received", nullptr));
        label_17->setText(QApplication::translate("RPCConsole", "Sent", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_nettraffic), QApplication::translate("RPCConsole", "&Network Traffic", nullptr));
        banHeading->setText(QApplication::translate("RPCConsole", "Banned peers", nullptr));
        peerHeading->setText(QApplication::translate("RPCConsole", "Select a peer to view detailed information.", nullptr));
        label_30->setText(QApplication::translate("RPCConsole", "Whitelisted", nullptr));
        peerWhitelisted->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_23->setText(QApplication::translate("RPCConsole", "Direction", nullptr));
        peerDirection->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_21->setText(QApplication::translate("RPCConsole", "Version", nullptr));
        peerVersion->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_28->setText(QApplication::translate("RPCConsole", "User Agent", nullptr));
        peerSubversion->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_4->setText(QApplication::translate("RPCConsole", "Services", nullptr));
        peerServices->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_29->setText(QApplication::translate("RPCConsole", "Starting Block", nullptr));
        peerHeight->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_27->setText(QApplication::translate("RPCConsole", "Synced Headers", nullptr));
        peerSyncHeight->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_25->setText(QApplication::translate("RPCConsole", "Synced Blocks", nullptr));
        peerCommonHeight->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_24->setText(QApplication::translate("RPCConsole", "Ban Score", nullptr));
        peerBanScore->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_22->setText(QApplication::translate("RPCConsole", "Connection Time", nullptr));
        peerConnTime->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_15->setText(QApplication::translate("RPCConsole", "Last Send", nullptr));
        peerLastSend->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_19->setText(QApplication::translate("RPCConsole", "Last Receive", nullptr));
        peerLastRecv->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_18->setText(QApplication::translate("RPCConsole", "Sent", nullptr));
        peerBytesSent->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_20->setText(QApplication::translate("RPCConsole", "Received", nullptr));
        peerBytesRecv->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_26->setText(QApplication::translate("RPCConsole", "Ping Time", nullptr));
        peerPingTime->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
#ifndef QT_NO_TOOLTIP
        peerPingWaitLabel->setToolTip(QApplication::translate("RPCConsole", "The duration of a currently outstanding ping.", nullptr));
#endif // QT_NO_TOOLTIP
        peerPingWaitLabel->setText(QApplication::translate("RPCConsole", "Ping Wait", nullptr));
        peerPingWait->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        label_timeoffset->setText(QApplication::translate("RPCConsole", "Time Offset", nullptr));
        timeoffset->setText(QApplication::translate("RPCConsole", "N/A", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_peers), QApplication::translate("RPCConsole", "&Peers", nullptr));
        btn_salvagewallet->setText(QApplication::translate("RPCConsole", "Salvage wallet", nullptr));
        btn_rescan->setText(QApplication::translate("RPCConsole", "Rescan blockchain files", nullptr));
        btn_zapwallettxes1->setText(QApplication::translate("RPCConsole", "Recover transactions 1", nullptr));
        btn_zapwallettxes2->setText(QApplication::translate("RPCConsole", "Recover transactions 2", nullptr));
        btn_upgradewallet->setText(QApplication::translate("RPCConsole", "Upgrade wallet format", nullptr));
        label_repair_helptext->setText(QApplication::translate("RPCConsole", "The buttons below will restart the wallet with command-line options to repair the wallet, fix issues with corrupt blockhain files or missing/obsolete transactions.", nullptr));
        label_repair_salvage->setText(QApplication::translate("RPCConsole", "-salvagewallet: Attempt to recover private keys from a corrupt wallet.dat.", nullptr));
        label_repair_rescan->setText(QApplication::translate("RPCConsole", "-rescan: Rescan the block chain for missing wallet transactions.", nullptr));
        label_repair_zap1->setText(QApplication::translate("RPCConsole", "-zapwallettxes=1: Recover transactions from blockchain (keep meta-data, e.g. account owner).", nullptr));
        label_repair_zap2->setText(QApplication::translate("RPCConsole", "-zapwallettxes=2: Recover transactions from blockchain (drop meta-data).", nullptr));
        label_repair_upgrade->setText(QApplication::translate("RPCConsole", "-upgradewallet: Upgrade wallet to latest format on startup. (Note: this is NOT an update of the wallet itself!)", nullptr));
        label_repair_header->setText(QApplication::translate("RPCConsole", "Wallet repair options.", nullptr));
        btn_reindex->setText(QApplication::translate("RPCConsole", "Rebuild index", nullptr));
        label_repair_reindex->setText(QApplication::translate("RPCConsole", "-reindex: Rebuild block chain index from current blk000??.dat files.", nullptr));
        wallet_path->setText(QApplication::translate("RPCConsole", "Wallet Path", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_repair), QApplication::translate("RPCConsole", "&Wallet Repair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole: public Ui_RPCConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGWINDOW_H

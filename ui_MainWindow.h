/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_feed;
    QAction *actionRemove_feed;
    QAction *actionQuit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableView *feedTableView;
    QSpacerItem *horizontalSpacer;
    QPushButton *addBtn;
    QPushButton *removeBtn;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QTableView *rssTableView;
    QLabel *chooseLabel;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(819, 458);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/rss.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        actionAdd_feed = new QAction(MainWindow);
        actionAdd_feed->setObjectName(QString::fromUtf8("actionAdd_feed"));
        actionRemove_feed = new QAction(MainWindow);
        actionRemove_feed->setObjectName(QString::fromUtf8("actionRemove_feed"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        feedTableView = new QTableView(groupBox);
        feedTableView->setObjectName(QString::fromUtf8("feedTableView"));

        gridLayout->addWidget(feedTableView, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(152, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        addBtn = new QPushButton(groupBox);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));

        gridLayout->addWidget(addBtn, 1, 1, 1, 1);

        removeBtn = new QPushButton(groupBox);
        removeBtn->setObjectName(QString::fromUtf8("removeBtn"));

        gridLayout->addWidget(removeBtn, 1, 2, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        rssTableView = new QTableView(groupBox_2);
        rssTableView->setObjectName(QString::fromUtf8("rssTableView"));

        gridLayout_3->addWidget(rssTableView, 0, 1, 1, 1);

        chooseLabel = new QLabel(groupBox_2);
        chooseLabel->setObjectName(QString::fromUtf8("chooseLabel"));
        chooseLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(chooseLabel, 1, 1, 1, 1);

        splitter->addWidget(groupBox_2);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 819, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAdd_feed);
        menuFile->addAction(actionRemove_feed);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RSS Feed", nullptr));
        actionAdd_feed->setText(QCoreApplication::translate("MainWindow", "Add RSS Source", nullptr));
        actionRemove_feed->setText(QCoreApplication::translate("MainWindow", "Delete RSS Source", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "RSS Sources", nullptr));
        addBtn->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        removeBtn->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "News", nullptr));
        chooseLabel->setText(QCoreApplication::translate("MainWindow", "Please select or add an RSS source", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

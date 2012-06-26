/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "main_table.h"

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QAction *actionAbout;
    QAction *actionShowGrid;
    QAction *actionResizeColumns;
    QAction *actionSaveSettings;
    QAction *actionPopulateOnStart;
    QAction *actionShowErrorDialog;
    QAction *actionResetErrorLogOnDisconnect;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionExit;
    QAction *actionDeleteEntry;
    QAction *actionModifyEntry;
    QAction *actionMembersBrowser;
    QAction *actionDatabaseSearch;
    QAction *actionRefreshTable;
    QAction *actionViewDetails;
    QAction *actionSetGlobalFonts;
    QAction *actionAutoPopulateOnCreation;
    QAction *connectTool;
    QAction *disconnectTool;
    QAction *detailsTool;
    QAction *createTool;
    QAction *deleteTool;
    QAction *modifyTool;
    QAction *printTool;
    QAction *reserveTool;
    QAction *userTool;
    QAction *searchTool;
    QAction *customQueryTool;
    QAction *refreshTool;
    QAction *configTool;
    QAction *exitTool;
    QAction *actionReservationHistory;
    QAction *actionChangePassword;
    QAction *actionPreserveGeometry;
    QAction *actionAutomaticallySaveSettingsOnExit;
    QAction *actionConfigureAdministratorPrivileges;
    QAction *actionRequests;
    QAction *actionPopulate_Members_Browser_Table_on_Display;
    QAction *actionPopulate_Administrator_Browser_Table_on_Display;
    QAction *action_New_SQLite_Database;
    QAction *actionDatabase_Enumerations;
    QAction *actionPopulate_Database_Enumerations_Browser_on_Display;
    QAction *actionExport_Current_View;
    QAction *duplicateTool;
    QAction *actionDuplicateEntry;
    QAction *action_Book;
    QAction *action_DVD;
    QAction *action_Journal;
    QAction *action_Magazine;
    QAction *actionMusic_CD;
    QAction *action_Video_Game;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *typefilter;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *itemSummary;
    QVBoxLayout *vboxLayout;
    QLabel *summary;
    QLabel *frontImage;
    QLabel *backImage;
    QSpacerItem *spacerItem;
    QLabel *label;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QGraphicsView *graphicsView;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    main_table *table;
    QHBoxLayout *horizontalLayout_2;
    QLabel *itemsCountLabel;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *previousPageButton;
    QLabel *pagesLabel;
    QToolButton *nextPageButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QMenu *menuTools;
    QMenu *menu_File;
    QMenu *menu_Recent_SQLite_Files;
    QMenu *menu_Edit;
    QMenu *menu_Add_Item;
    QMenu *menu_View;
    QMenu *menuOptions;
    QMenu *menuEntriesPerPage;
    QMenu *menuPreferredZ3950Server;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QToolBar *toolBar_4;
    QToolBar *toolBar_5;
    QToolBar *toolBar_6;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->resize(900, 650);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainWindow->setWindowIcon(icon);
        actionAbout = new QAction(mainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon1);
        actionShowGrid = new QAction(mainWindow);
        actionShowGrid->setObjectName(QString::fromUtf8("actionShowGrid"));
        actionShowGrid->setCheckable(true);
        actionResizeColumns = new QAction(mainWindow);
        actionResizeColumns->setObjectName(QString::fromUtf8("actionResizeColumns"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/resizecol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionResizeColumns->setIcon(icon2);
        actionSaveSettings = new QAction(mainWindow);
        actionSaveSettings->setObjectName(QString::fromUtf8("actionSaveSettings"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/16x16/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveSettings->setIcon(icon3);
        actionPopulateOnStart = new QAction(mainWindow);
        actionPopulateOnStart->setObjectName(QString::fromUtf8("actionPopulateOnStart"));
        actionPopulateOnStart->setCheckable(true);
        actionPopulateOnStart->setChecked(false);
        actionShowErrorDialog = new QAction(mainWindow);
        actionShowErrorDialog->setObjectName(QString::fromUtf8("actionShowErrorDialog"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons.d/16x16/log.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowErrorDialog->setIcon(icon4);
        actionResetErrorLogOnDisconnect = new QAction(mainWindow);
        actionResetErrorLogOnDisconnect->setObjectName(QString::fromUtf8("actionResetErrorLogOnDisconnect"));
        actionResetErrorLogOnDisconnect->setCheckable(true);
        actionConnect = new QAction(mainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icons.d/16x16/connected.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon5);
        actionDisconnect = new QAction(mainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("icons.d/16x16/disconnected.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon6);
        actionExit = new QAction(mainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("icons.d/16x16/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon7);
        actionDeleteEntry = new QAction(mainWindow);
        actionDeleteEntry->setObjectName(QString::fromUtf8("actionDeleteEntry"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("icons.d/16x16/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeleteEntry->setIcon(icon8);
        actionModifyEntry = new QAction(mainWindow);
        actionModifyEntry->setObjectName(QString::fromUtf8("actionModifyEntry"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("icons.d/16x16/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionModifyEntry->setIcon(icon9);
        actionMembersBrowser = new QAction(mainWindow);
        actionMembersBrowser->setObjectName(QString::fromUtf8("actionMembersBrowser"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("icons.d/16x16/members.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMembersBrowser->setIcon(icon10);
        actionDatabaseSearch = new QAction(mainWindow);
        actionDatabaseSearch->setObjectName(QString::fromUtf8("actionDatabaseSearch"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("icons.d/16x16/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDatabaseSearch->setIcon(icon11);
        actionRefreshTable = new QAction(mainWindow);
        actionRefreshTable->setObjectName(QString::fromUtf8("actionRefreshTable"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("icons.d/16x16/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefreshTable->setIcon(icon12);
        actionViewDetails = new QAction(mainWindow);
        actionViewDetails->setObjectName(QString::fromUtf8("actionViewDetails"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("icons.d/16x16/details.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewDetails->setIcon(icon13);
        actionSetGlobalFonts = new QAction(mainWindow);
        actionSetGlobalFonts->setObjectName(QString::fromUtf8("actionSetGlobalFonts"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8("icons.d/16x16/fonts.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetGlobalFonts->setIcon(icon14);
        actionAutoPopulateOnCreation = new QAction(mainWindow);
        actionAutoPopulateOnCreation->setObjectName(QString::fromUtf8("actionAutoPopulateOnCreation"));
        actionAutoPopulateOnCreation->setCheckable(true);
        connectTool = new QAction(mainWindow);
        connectTool->setObjectName(QString::fromUtf8("connectTool"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8("icons.d/32x32/connect_established.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectTool->setIcon(icon15);
        disconnectTool = new QAction(mainWindow);
        disconnectTool->setObjectName(QString::fromUtf8("disconnectTool"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8("icons.d/32x32/connect_no.png"), QSize(), QIcon::Normal, QIcon::Off);
        disconnectTool->setIcon(icon16);
        detailsTool = new QAction(mainWindow);
        detailsTool->setObjectName(QString::fromUtf8("detailsTool"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8("icons.d/32x32/details.png"), QSize(), QIcon::Normal, QIcon::Off);
        detailsTool->setIcon(icon17);
        createTool = new QAction(mainWindow);
        createTool->setObjectName(QString::fromUtf8("createTool"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8("icons.d/32x32/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        createTool->setIcon(icon18);
        createTool->setMenuRole(QAction::TextHeuristicRole);
        deleteTool = new QAction(mainWindow);
        deleteTool->setObjectName(QString::fromUtf8("deleteTool"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8("icons.d/32x32/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteTool->setIcon(icon19);
        modifyTool = new QAction(mainWindow);
        modifyTool->setObjectName(QString::fromUtf8("modifyTool"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8("icons.d/32x32/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        modifyTool->setIcon(icon20);
        printTool = new QAction(mainWindow);
        printTool->setObjectName(QString::fromUtf8("printTool"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8("icons.d/32x32/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        printTool->setIcon(icon21);
        reserveTool = new QAction(mainWindow);
        reserveTool->setObjectName(QString::fromUtf8("reserveTool"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8("icons.d/32x32/checkout.png"), QSize(), QIcon::Normal, QIcon::Off);
        reserveTool->setIcon(icon22);
        userTool = new QAction(mainWindow);
        userTool->setObjectName(QString::fromUtf8("userTool"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8("icons.d/32x32/members.png"), QSize(), QIcon::Normal, QIcon::Off);
        userTool->setIcon(icon23);
        searchTool = new QAction(mainWindow);
        searchTool->setObjectName(QString::fromUtf8("searchTool"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8("icons.d/32x32/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchTool->setIcon(icon24);
        customQueryTool = new QAction(mainWindow);
        customQueryTool->setObjectName(QString::fromUtf8("customQueryTool"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8("icons.d/32x32/customquery.png"), QSize(), QIcon::Normal, QIcon::Off);
        customQueryTool->setIcon(icon25);
        refreshTool = new QAction(mainWindow);
        refreshTool->setObjectName(QString::fromUtf8("refreshTool"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8("icons.d/32x32/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        refreshTool->setIcon(icon26);
        configTool = new QAction(mainWindow);
        configTool->setObjectName(QString::fromUtf8("configTool"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8("icons.d/32x32/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        configTool->setIcon(icon27);
        exitTool = new QAction(mainWindow);
        exitTool->setObjectName(QString::fromUtf8("exitTool"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8("icons.d/32x32/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitTool->setIcon(icon28);
        actionReservationHistory = new QAction(mainWindow);
        actionReservationHistory->setObjectName(QString::fromUtf8("actionReservationHistory"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8("icons.d/32x32/history.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReservationHistory->setIcon(icon29);
        actionChangePassword = new QAction(mainWindow);
        actionChangePassword->setObjectName(QString::fromUtf8("actionChangePassword"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8("icons.d/32x32/password.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChangePassword->setIcon(icon30);
        actionPreserveGeometry = new QAction(mainWindow);
        actionPreserveGeometry->setObjectName(QString::fromUtf8("actionPreserveGeometry"));
        actionPreserveGeometry->setCheckable(true);
        actionAutomaticallySaveSettingsOnExit = new QAction(mainWindow);
        actionAutomaticallySaveSettingsOnExit->setObjectName(QString::fromUtf8("actionAutomaticallySaveSettingsOnExit"));
        actionAutomaticallySaveSettingsOnExit->setCheckable(true);
        actionConfigureAdministratorPrivileges = new QAction(mainWindow);
        actionConfigureAdministratorPrivileges->setObjectName(QString::fromUtf8("actionConfigureAdministratorPrivileges"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8("icons.d/32x32/identity.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigureAdministratorPrivileges->setIcon(icon31);
        actionRequests = new QAction(mainWindow);
        actionRequests->setObjectName(QString::fromUtf8("actionRequests"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8("icons.d/32x32/request.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRequests->setIcon(icon32);
        actionPopulate_Members_Browser_Table_on_Display = new QAction(mainWindow);
        actionPopulate_Members_Browser_Table_on_Display->setObjectName(QString::fromUtf8("actionPopulate_Members_Browser_Table_on_Display"));
        actionPopulate_Members_Browser_Table_on_Display->setCheckable(true);
        actionPopulate_Administrator_Browser_Table_on_Display = new QAction(mainWindow);
        actionPopulate_Administrator_Browser_Table_on_Display->setObjectName(QString::fromUtf8("actionPopulate_Administrator_Browser_Table_on_Display"));
        actionPopulate_Administrator_Browser_Table_on_Display->setCheckable(true);
        action_New_SQLite_Database = new QAction(mainWindow);
        action_New_SQLite_Database->setObjectName(QString::fromUtf8("action_New_SQLite_Database"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8("icons.d/16x16/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New_SQLite_Database->setIcon(icon33);
        actionDatabase_Enumerations = new QAction(mainWindow);
        actionDatabase_Enumerations->setObjectName(QString::fromUtf8("actionDatabase_Enumerations"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8("icons.d/32x32/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDatabase_Enumerations->setIcon(icon34);
        actionPopulate_Database_Enumerations_Browser_on_Display = new QAction(mainWindow);
        actionPopulate_Database_Enumerations_Browser_on_Display->setObjectName(QString::fromUtf8("actionPopulate_Database_Enumerations_Browser_on_Display"));
        actionPopulate_Database_Enumerations_Browser_on_Display->setCheckable(true);
        actionExport_Current_View = new QAction(mainWindow);
        actionExport_Current_View->setObjectName(QString::fromUtf8("actionExport_Current_View"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8("icons.d/16x16/fileexport.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_Current_View->setIcon(icon35);
        duplicateTool = new QAction(mainWindow);
        duplicateTool->setObjectName(QString::fromUtf8("duplicateTool"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8("icons.d/32x32/duplicate.png"), QSize(), QIcon::Normal, QIcon::Off);
        duplicateTool->setIcon(icon36);
        actionDuplicateEntry = new QAction(mainWindow);
        actionDuplicateEntry->setObjectName(QString::fromUtf8("actionDuplicateEntry"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8("icons.d/16x16/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDuplicateEntry->setIcon(icon37);
        action_Book = new QAction(mainWindow);
        action_Book->setObjectName(QString::fromUtf8("action_Book"));
        action_DVD = new QAction(mainWindow);
        action_DVD->setObjectName(QString::fromUtf8("action_DVD"));
        action_Journal = new QAction(mainWindow);
        action_Journal->setObjectName(QString::fromUtf8("action_Journal"));
        action_Magazine = new QAction(mainWindow);
        action_Magazine->setObjectName(QString::fromUtf8("action_Magazine"));
        actionMusic_CD = new QAction(mainWindow);
        actionMusic_CD->setObjectName(QString::fromUtf8("actionMusic_CD"));
        action_Video_Game = new QAction(mainWindow);
        action_Video_Game->setObjectName(QString::fromUtf8("action_Video_Game"));
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        typefilter = new QComboBox(groupBox);
        typefilter->setObjectName(QString::fromUtf8("typefilter"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(typefilter->sizePolicy().hasHeightForWidth());
        typefilter->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(typefilter);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox);

        itemSummary = new QGroupBox(layoutWidget);
        itemSummary->setObjectName(QString::fromUtf8("itemSummary"));
        itemSummary->setFlat(false);
        vboxLayout = new QVBoxLayout(itemSummary);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        summary = new QLabel(itemSummary);
        summary->setObjectName(QString::fromUtf8("summary"));
        summary->setFrameShape(QFrame::NoFrame);
        summary->setWordWrap(true);

        vboxLayout->addWidget(summary);

        frontImage = new QLabel(itemSummary);
        frontImage->setObjectName(QString::fromUtf8("frontImage"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frontImage->sizePolicy().hasHeightForWidth());
        frontImage->setSizePolicy(sizePolicy1);
        frontImage->setScaledContents(true);

        vboxLayout->addWidget(frontImage);

        backImage = new QLabel(itemSummary);
        backImage->setObjectName(QString::fromUtf8("backImage"));
        sizePolicy1.setHeightForWidth(backImage->sizePolicy().hasHeightForWidth());
        backImage->setSizePolicy(sizePolicy1);
        backImage->setScaledContents(true);

        vboxLayout->addWidget(backImage);

        spacerItem = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        label = new QLabel(itemSummary);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);


        verticalLayout_3->addWidget(itemSummary);

        splitter->addWidget(layoutWidget);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(groupBox_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        graphicsView = new QGraphicsView(page_2);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);

        verticalLayout_6->addWidget(graphicsView);

        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        table = new main_table(page);
        if (table->columnCount() < 16)
            table->setColumnCount(16);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        table->setObjectName(QString::fromUtf8("table"));
        table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table->setProperty("showDropIndicator", QVariant(true));
        table->setDragEnabled(false);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::MultiSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setShowGrid(true);
        table->setSortingEnabled(true);
        table->setColumnCount(16);
        table->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_5->addWidget(table);

        stackedWidget->addWidget(page);

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        itemsCountLabel = new QLabel(groupBox_2);
        itemsCountLabel->setObjectName(QString::fromUtf8("itemsCountLabel"));

        horizontalLayout_2->addWidget(itemsCountLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        previousPageButton = new QToolButton(groupBox_2);
        previousPageButton->setObjectName(QString::fromUtf8("previousPageButton"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8("icons.d/16x16/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        previousPageButton->setIcon(icon38);
        previousPageButton->setIconSize(QSize(16, 16));
        previousPageButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(previousPageButton);

        pagesLabel = new QLabel(groupBox_2);
        pagesLabel->setObjectName(QString::fromUtf8("pagesLabel"));
        pagesLabel->setTextFormat(Qt::RichText);
        pagesLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(pagesLabel);

        nextPageButton = new QToolButton(groupBox_2);
        nextPageButton->setObjectName(QString::fromUtf8("nextPageButton"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8("icons.d/16x16/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextPageButton->setIcon(icon39);
        nextPageButton->setIconSize(QSize(16, 16));
        nextPageButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(nextPageButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter->addWidget(groupBox_2);

        verticalLayout_4->addWidget(splitter);

        mainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Recent_SQLite_Files = new QMenu(menu_File);
        menu_Recent_SQLite_Files->setObjectName(QString::fromUtf8("menu_Recent_SQLite_Files"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menu_Add_Item = new QMenu(menu_Edit);
        menu_Add_Item->setObjectName(QString::fromUtf8("menu_Add_Item"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8("icons.d/16x16/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_Add_Item->setIcon(icon40);
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuEntriesPerPage = new QMenu(menuOptions);
        menuEntriesPerPage->setObjectName(QString::fromUtf8("menuEntriesPerPage"));
        menuPreferredZ3950Server = new QMenu(menuOptions);
        menuPreferredZ3950Server->setObjectName(QString::fromUtf8("menuPreferredZ3950Server"));
        mainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(mainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(32, 32));
        mainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);
        toolBar_2 = new QToolBar(mainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        toolBar_2->setIconSize(QSize(32, 32));
        mainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(mainWindow);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        toolBar_3->setIconSize(QSize(32, 32));
        mainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);
        toolBar_4 = new QToolBar(mainWindow);
        toolBar_4->setObjectName(QString::fromUtf8("toolBar_4"));
        toolBar_4->setIconSize(QSize(32, 32));
        mainWindow->addToolBar(Qt::TopToolBarArea, toolBar_4);
        toolBar_5 = new QToolBar(mainWindow);
        toolBar_5->setObjectName(QString::fromUtf8("toolBar_5"));
        toolBar_5->setIconSize(QSize(32, 32));
        mainWindow->addToolBar(Qt::TopToolBarArea, toolBar_5);
        toolBar_6 = new QToolBar(mainWindow);
        toolBar_6->setObjectName(QString::fromUtf8("toolBar_6"));
        toolBar_6->setIconSize(QSize(32, 32));
        mainWindow->addToolBar(Qt::LeftToolBarArea, toolBar_6);
        QWidget::setTabOrder(typefilter, table);
        QWidget::setTabOrder(table, graphicsView);
        QWidget::setTabOrder(graphicsView, previousPageButton);
        QWidget::setTabOrder(previousPageButton, nextPageButton);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAbout);
        menuTools->addAction(actionResizeColumns);
        menuTools->addAction(actionShowErrorDialog);
        menuTools->addSeparator();
        menuTools->addAction(actionDatabaseSearch);
        menuTools->addAction(actionRefreshTable);
        menu_File->addAction(action_New_SQLite_Database);
        menu_File->addAction(menu_Recent_SQLite_Files->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(actionConnect);
        menu_File->addAction(actionDisconnect);
        menu_File->addSeparator();
        menu_File->addAction(actionExport_Current_View);
        menu_File->addSeparator();
        menu_File->addAction(actionExit);
        menu_Edit->addAction(menu_Add_Item->menuAction());
        menu_Edit->addAction(actionDeleteEntry);
        menu_Edit->addAction(actionDuplicateEntry);
        menu_Edit->addAction(actionModifyEntry);
        menu_Add_Item->addAction(action_Book);
        menu_Add_Item->addAction(action_DVD);
        menu_Add_Item->addAction(action_Journal);
        menu_Add_Item->addAction(action_Magazine);
        menu_Add_Item->addAction(actionMusic_CD);
        menu_Add_Item->addAction(action_Video_Game);
        menu_View->addAction(actionMembersBrowser);
        menu_View->addAction(actionViewDetails);
        menu_View->addSeparator();
        menuOptions->addAction(actionAutomaticallySaveSettingsOnExit);
        menuOptions->addAction(actionShowGrid);
        menuOptions->addAction(actionPopulate_Administrator_Browser_Table_on_Display);
        menuOptions->addAction(actionPopulate_Database_Enumerations_Browser_on_Display);
        menuOptions->addAction(actionPopulate_Members_Browser_Table_on_Display);
        menuOptions->addAction(actionPopulateOnStart);
        menuOptions->addAction(actionAutoPopulateOnCreation);
        menuOptions->addAction(actionPreserveGeometry);
        menuOptions->addAction(actionResetErrorLogOnDisconnect);
        menuOptions->addSeparator();
        menuOptions->addAction(menuEntriesPerPage->menuAction());
        menuOptions->addAction(menuPreferredZ3950Server->menuAction());
        menuOptions->addSeparator();
        menuOptions->addAction(actionSaveSettings);
        menuOptions->addAction(actionSetGlobalFonts);
        toolBar->addAction(connectTool);
        toolBar->addAction(disconnectTool);
        toolBar->addAction(actionChangePassword);
        toolBar->addAction(actionDatabase_Enumerations);
        toolBar->addAction(actionConfigureAdministratorPrivileges);
        toolBar_2->addAction(detailsTool);
        toolBar_2->addAction(createTool);
        toolBar_2->addAction(duplicateTool);
        toolBar_2->addAction(deleteTool);
        toolBar_2->addAction(modifyTool);
        toolBar_2->addAction(printTool);
        toolBar_3->addAction(actionReservationHistory);
        toolBar_3->addAction(actionRequests);
        toolBar_3->addAction(reserveTool);
        toolBar_3->addAction(userTool);
        toolBar_4->addAction(searchTool);
        toolBar_4->addAction(customQueryTool);
        toolBar_4->addAction(refreshTool);
        toolBar_5->addAction(configTool);
        toolBar_5->addSeparator();
        toolBar_6->addAction(exitTool);

        retranslateUi(mainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "BiblioteQ", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("mainWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionShowGrid->setText(QApplication::translate("mainWindow", "&Display Table Grid", 0, QApplication::UnicodeUTF8));
        actionResizeColumns->setText(QApplication::translate("mainWindow", "&Resize Columns to Contents", 0, QApplication::UnicodeUTF8));
        actionSaveSettings->setText(QApplication::translate("mainWindow", "&Save Settings", 0, QApplication::UnicodeUTF8));
        actionSaveSettings->setShortcut(QApplication::translate("mainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionPopulateOnStart->setText(QApplication::translate("mainWindow", "&Populate View on Connect", 0, QApplication::UnicodeUTF8));
        actionShowErrorDialog->setText(QApplication::translate("mainWindow", "View Error &Log", 0, QApplication::UnicodeUTF8));
        actionShowErrorDialog->setShortcut(QApplication::translate("mainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionResetErrorLogOnDisconnect->setText(QApplication::translate("mainWindow", "Reset &Error Log on Disconnect", 0, QApplication::UnicodeUTF8));
        actionConnect->setText(QApplication::translate("mainWindow", "&Connect", 0, QApplication::UnicodeUTF8));
        actionConnect->setShortcut(QApplication::translate("mainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionDisconnect->setText(QApplication::translate("mainWindow", "&Disconnect", 0, QApplication::UnicodeUTF8));
        actionDisconnect->setShortcut(QApplication::translate("mainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("mainWindow", "Exit Bibliote&Q", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("mainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionDeleteEntry->setText(QApplication::translate("mainWindow", "&Delete Selected Item(s)", 0, QApplication::UnicodeUTF8));
        actionDeleteEntry->setShortcut(QApplication::translate("mainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionModifyEntry->setText(QApplication::translate("mainWindow", "&Modify Selected Item(s)", 0, QApplication::UnicodeUTF8));
        actionModifyEntry->setShortcut(QApplication::translate("mainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionMembersBrowser->setText(QApplication::translate("mainWindow", "&Members Browser", 0, QApplication::UnicodeUTF8));
        actionMembersBrowser->setShortcut(QApplication::translate("mainWindow", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        actionDatabaseSearch->setText(QApplication::translate("mainWindow", "&Database Search", 0, QApplication::UnicodeUTF8));
        actionDatabaseSearch->setIconText(QApplication::translate("mainWindow", "Database Search", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDatabaseSearch->setToolTip(QApplication::translate("mainWindow", "Database Search", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDatabaseSearch->setShortcut(QApplication::translate("mainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionRefreshTable->setText(QApplication::translate("mainWindow", "&Refresh View", 0, QApplication::UnicodeUTF8));
        actionRefreshTable->setShortcut(QApplication::translate("mainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionViewDetails->setText(QApplication::translate("mainWindow", "&Selected Item(s)", 0, QApplication::UnicodeUTF8));
        actionViewDetails->setShortcut(QApplication::translate("mainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionSetGlobalFonts->setText(QApplication::translate("mainWindow", "Select &Global Font", 0, QApplication::UnicodeUTF8));
        actionSetGlobalFonts->setShortcut(QApplication::translate("mainWindow", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        actionAutoPopulateOnCreation->setText(QApplication::translate("mainWindow", "Populate View on Item &Creation", 0, QApplication::UnicodeUTF8));
        connectTool->setText(QApplication::translate("mainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        disconnectTool->setText(QApplication::translate("mainWindow", "Disconnect", 0, QApplication::UnicodeUTF8));
        detailsTool->setText(QApplication::translate("mainWindow", "View Selected Item(s)", 0, QApplication::UnicodeUTF8));
        createTool->setText(QApplication::translate("mainWindow", "Add Item", 0, QApplication::UnicodeUTF8));
        deleteTool->setText(QApplication::translate("mainWindow", "Delete Selected Item(s)", 0, QApplication::UnicodeUTF8));
        modifyTool->setText(QApplication::translate("mainWindow", "Modify Selected Item(s)", 0, QApplication::UnicodeUTF8));
        printTool->setText(QApplication::translate("mainWindow", "Print Current View", 0, QApplication::UnicodeUTF8));
        reserveTool->setText(QApplication::translate("mainWindow", "Reserve Selected Item", 0, QApplication::UnicodeUTF8));
        userTool->setText(QApplication::translate("mainWindow", "Display Members Browser", 0, QApplication::UnicodeUTF8));
        searchTool->setText(QApplication::translate("mainWindow", "Database Search", 0, QApplication::UnicodeUTF8));
        customQueryTool->setText(QApplication::translate("mainWindow", "Custom Database Query", 0, QApplication::UnicodeUTF8));
        refreshTool->setText(QApplication::translate("mainWindow", "Refresh Table", 0, QApplication::UnicodeUTF8));
        configTool->setText(QApplication::translate("mainWindow", "Select Viewable Columns", 0, QApplication::UnicodeUTF8));
        exitTool->setText(QApplication::translate("mainWindow", "Exit BiblioteQ", 0, QApplication::UnicodeUTF8));
        actionReservationHistory->setText(QApplication::translate("mainWindow", "View Member's Reservation History", 0, QApplication::UnicodeUTF8));
        actionChangePassword->setText(QApplication::translate("mainWindow", "Change Password", 0, QApplication::UnicodeUTF8));
        actionPreserveGeometry->setText(QApplication::translate("mainWindow", "Preserve Main &Window's Geometry", 0, QApplication::UnicodeUTF8));
        actionAutomaticallySaveSettingsOnExit->setText(QApplication::translate("mainWindow", "Automatically Save Settings on E&xit", 0, QApplication::UnicodeUTF8));
        actionConfigureAdministratorPrivileges->setText(QApplication::translate("mainWindow", "Configure Administrator Privileges", 0, QApplication::UnicodeUTF8));
        actionRequests->setText(QApplication::translate("mainWindow", "Item Requests", 0, QApplication::UnicodeUTF8));
        actionPopulate_Members_Browser_Table_on_Display->setText(QApplication::translate("mainWindow", "Populate &Members Browser Table on Display", 0, QApplication::UnicodeUTF8));
        actionPopulate_Administrator_Browser_Table_on_Display->setText(QApplication::translate("mainWindow", "Populate &Administrator Browser Table on Display", 0, QApplication::UnicodeUTF8));
        action_New_SQLite_Database->setText(QApplication::translate("mainWindow", "&New SQLite Database", 0, QApplication::UnicodeUTF8));
        action_New_SQLite_Database->setShortcut(QApplication::translate("mainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionDatabase_Enumerations->setText(QApplication::translate("mainWindow", "Database Enumerations", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDatabase_Enumerations->setToolTip(QApplication::translate("mainWindow", "Database Enumerations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPopulate_Database_Enumerations_Browser_on_Display->setText(QApplication::translate("mainWindow", "Populate Database En&umerations Browser on Display", 0, QApplication::UnicodeUTF8));
        actionExport_Current_View->setText(QApplication::translate("mainWindow", "&Export Table View as CSV", 0, QApplication::UnicodeUTF8));
        duplicateTool->setText(QApplication::translate("mainWindow", "Duplicate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        duplicateTool->setToolTip(QApplication::translate("mainWindow", "Duplicate Selected Item(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDuplicateEntry->setText(QApplication::translate("mainWindow", "D&uplicate Selected Item(s)", 0, QApplication::UnicodeUTF8));
        actionDuplicateEntry->setShortcut(QApplication::translate("mainWindow", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        action_Book->setText(QApplication::translate("mainWindow", "&Book", 0, QApplication::UnicodeUTF8));
        action_DVD->setText(QApplication::translate("mainWindow", "&DVD", 0, QApplication::UnicodeUTF8));
        action_Journal->setText(QApplication::translate("mainWindow", "&Journal", 0, QApplication::UnicodeUTF8));
        action_Magazine->setText(QApplication::translate("mainWindow", "&Magazine", 0, QApplication::UnicodeUTF8));
        actionMusic_CD->setText(QApplication::translate("mainWindow", "Music &CD", 0, QApplication::UnicodeUTF8));
        action_Video_Game->setText(QApplication::translate("mainWindow", "&Video Game", 0, QApplication::UnicodeUTF8));
        summary->setText(QString());
        frontImage->setText(QString());
        backImage->setText(QString());
        label->setText(QApplication::translate("mainWindow", "Hunka chuncka pb fudge", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("mainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("mainWindow", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("mainWindow", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("mainWindow", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("mainWindow", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("mainWindow", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("mainWindow", "7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("mainWindow", "8", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = table->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("mainWindow", "9", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = table->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("mainWindow", "10", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = table->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("mainWindow", "11", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = table->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("mainWindow", "12", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = table->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("mainWindow", "13", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = table->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("mainWindow", "14", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = table->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("mainWindow", "15", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = table->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QApplication::translate("mainWindow", "16", 0, QApplication::UnicodeUTF8));
        itemsCountLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        previousPageButton->setToolTip(QApplication::translate("mainWindow", "Previous Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pagesLabel->setText(QApplication::translate("mainWindow", "1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nextPageButton->setToolTip(QApplication::translate("mainWindow", "Next Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        menuHelp->setTitle(QApplication::translate("mainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("mainWindow", "&Tools", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("mainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Recent_SQLite_Files->setTitle(QApplication::translate("mainWindow", "&Recent SQLite Files", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("mainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menu_Add_Item->setTitle(QApplication::translate("mainWindow", "&Add Item", 0, QApplication::UnicodeUTF8));
        menu_View->setTitle(QApplication::translate("mainWindow", "&View", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("mainWindow", "&Options", 0, QApplication::UnicodeUTF8));
        menuEntriesPerPage->setTitle(QApplication::translate("mainWindow", "E&ntries per Page", 0, QApplication::UnicodeUTF8));
        menuPreferredZ3950Server->setTitle(QApplication::translate("mainWindow", "Preferred &Z39.50 Site", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("mainWindow", "Connect Toobar", 0, QApplication::UnicodeUTF8));
        toolBar_2->setWindowTitle(QApplication::translate("mainWindow", "Edit Toolbar", 0, QApplication::UnicodeUTF8));
        toolBar_3->setWindowTitle(QApplication::translate("mainWindow", "Reservations Toolbar", 0, QApplication::UnicodeUTF8));
        toolBar_4->setWindowTitle(QApplication::translate("mainWindow", "Search Toolbar", 0, QApplication::UnicodeUTF8));
        toolBar_5->setWindowTitle(QApplication::translate("mainWindow", "Configurations Toolbar", 0, QApplication::UnicodeUTF8));
        toolBar_6->setWindowTitle(QApplication::translate("mainWindow", "Exit Toolbar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

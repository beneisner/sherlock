/********************************************************************************
** Form generated from reading UI file 'dbenumerations.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBENUMERATIONS_H
#define UI_DBENUMERATIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dbEnumerations
{
public:
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter_5;
    QSplitter *splitter_4;
    QSplitter *splitter_3;
    QWidget *layoutWidget_1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QListWidget *cdFormatsList;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QToolButton *addCdFormat;
    QToolButton *removeCdFormat;
    QSpacerItem *horizontalSpacer_8;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QListWidget *dvdAspectRatiosList;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *addDvdAspectRatio;
    QToolButton *removeDvdAspectRatio;
    QSpacerItem *horizontalSpacer_10;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QListWidget *dvdRatingsList;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QToolButton *addDvdRating;
    QToolButton *removeDvdRating;
    QSpacerItem *horizontalSpacer_12;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_13;
    QListWidget *dvdRegionsList;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_25;
    QToolButton *addDvdRegion;
    QToolButton *removeDvdRegion;
    QSpacerItem *horizontalSpacer_26;
    QSplitter *splitter_2;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *languagesList;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *addLanguage;
    QToolButton *removeLanguage;
    QSpacerItem *horizontalSpacer_4;
    QWidget *layoutWidget_6;
    QVBoxLayout *_3;
    QLabel *label;
    QTableWidget *locationsTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *addLocation;
    QToolButton *removeLocation;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QListWidget *monetaryUnitsList;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *addMonetaryUnit;
    QToolButton *removeMonetaryUnit;
    QSpacerItem *horizontalSpacer_6;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_14;
    QTableWidget *minimumDaysTable;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_31;
    QLabel *emptyLabel;
    QSpacerItem *horizontalSpacer_32;
    QSplitter *splitter;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_16;
    QListWidget *videoGamePlatformsList;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_29;
    QToolButton *addVideoGamePlatform;
    QToolButton *removeVideoGamePlatform;
    QSpacerItem *horizontalSpacer_30;
    QWidget *layoutWidget_10;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_15;
    QListWidget *videoGameRatingsList;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_27;
    QToolButton *addVideoGameRating;
    QToolButton *removeVideoGameRating;
    QSpacerItem *horizontalSpacer_28;
    QVBoxLayout *_2;
    QToolButton *saveButton;
    QFrame *line;
    QToolButton *reloadButton;
    QSpacerItem *spacer;
    QToolButton *cancelButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dbEnumerations)
    {
        if (dbEnumerations->objectName().isEmpty())
            dbEnumerations->setObjectName(QString::fromUtf8("dbEnumerations"));
        dbEnumerations->resize(929, 731);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        dbEnumerations->setWindowIcon(icon);
        centralwidget = new QWidget(dbEnumerations);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        verticalLayout_7 = new QVBoxLayout(frame);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        splitter_5 = new QSplitter(frame);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        splitter_4 = new QSplitter(splitter_5);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        layoutWidget_1 = new QWidget(splitter_3);
        layoutWidget_1->setObjectName(QString::fromUtf8("layoutWidget_1"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        cdFormatsList = new QListWidget(layoutWidget_1);
        cdFormatsList->setObjectName(QString::fromUtf8("cdFormatsList"));

        verticalLayout_4->addWidget(cdFormatsList);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        addCdFormat = new QToolButton(layoutWidget_1);
        addCdFormat->setObjectName(QString::fromUtf8("addCdFormat"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addCdFormat->setIcon(icon1);
        addCdFormat->setIconSize(QSize(16, 16));

        horizontalLayout_4->addWidget(addCdFormat);

        removeCdFormat = new QToolButton(layoutWidget_1);
        removeCdFormat->setObjectName(QString::fromUtf8("removeCdFormat"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeCdFormat->setIcon(icon2);
        removeCdFormat->setIconSize(QSize(16, 16));

        horizontalLayout_4->addWidget(removeCdFormat);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_4);

        splitter_3->addWidget(layoutWidget_1);
        layoutWidget_2 = new QWidget(splitter_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        dvdAspectRatiosList = new QListWidget(layoutWidget_2);
        dvdAspectRatiosList->setObjectName(QString::fromUtf8("dvdAspectRatiosList"));

        verticalLayout_5->addWidget(dvdAspectRatiosList);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        addDvdAspectRatio = new QToolButton(layoutWidget_2);
        addDvdAspectRatio->setObjectName(QString::fromUtf8("addDvdAspectRatio"));
        addDvdAspectRatio->setIcon(icon1);
        addDvdAspectRatio->setIconSize(QSize(16, 16));

        horizontalLayout_5->addWidget(addDvdAspectRatio);

        removeDvdAspectRatio = new QToolButton(layoutWidget_2);
        removeDvdAspectRatio->setObjectName(QString::fromUtf8("removeDvdAspectRatio"));
        removeDvdAspectRatio->setIcon(icon2);
        removeDvdAspectRatio->setIconSize(QSize(16, 16));

        horizontalLayout_5->addWidget(removeDvdAspectRatio);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_5->addLayout(horizontalLayout_5);

        splitter_3->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter_3);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        dvdRatingsList = new QListWidget(layoutWidget_3);
        dvdRatingsList->setObjectName(QString::fromUtf8("dvdRatingsList"));

        verticalLayout_6->addWidget(dvdRatingsList);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        addDvdRating = new QToolButton(layoutWidget_3);
        addDvdRating->setObjectName(QString::fromUtf8("addDvdRating"));
        addDvdRating->setIcon(icon1);
        addDvdRating->setIconSize(QSize(16, 16));

        horizontalLayout_6->addWidget(addDvdRating);

        removeDvdRating = new QToolButton(layoutWidget_3);
        removeDvdRating->setObjectName(QString::fromUtf8("removeDvdRating"));
        removeDvdRating->setIcon(icon2);
        removeDvdRating->setIconSize(QSize(16, 16));

        horizontalLayout_6->addWidget(removeDvdRating);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout_6->addLayout(horizontalLayout_6);

        splitter_3->addWidget(layoutWidget_3);
        layoutWidget_4 = new QWidget(splitter_3);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        verticalLayout_13 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_13->addWidget(label_13);

        dvdRegionsList = new QListWidget(layoutWidget_4);
        dvdRegionsList->setObjectName(QString::fromUtf8("dvdRegionsList"));

        verticalLayout_13->addWidget(dvdRegionsList);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_25);

        addDvdRegion = new QToolButton(layoutWidget_4);
        addDvdRegion->setObjectName(QString::fromUtf8("addDvdRegion"));
        addDvdRegion->setIcon(icon1);
        addDvdRegion->setIconSize(QSize(16, 16));

        horizontalLayout_13->addWidget(addDvdRegion);

        removeDvdRegion = new QToolButton(layoutWidget_4);
        removeDvdRegion->setObjectName(QString::fromUtf8("removeDvdRegion"));
        removeDvdRegion->setIcon(icon2);
        removeDvdRegion->setIconSize(QSize(16, 16));

        horizontalLayout_13->addWidget(removeDvdRegion);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_26);


        verticalLayout_13->addLayout(horizontalLayout_13);

        splitter_3->addWidget(layoutWidget_4);
        splitter_4->addWidget(splitter_3);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        layoutWidget_5 = new QWidget(splitter_2);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        languagesList = new QListWidget(layoutWidget_5);
        languagesList->setObjectName(QString::fromUtf8("languagesList"));

        verticalLayout_2->addWidget(languagesList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        addLanguage = new QToolButton(layoutWidget_5);
        addLanguage->setObjectName(QString::fromUtf8("addLanguage"));
        addLanguage->setIcon(icon1);
        addLanguage->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(addLanguage);

        removeLanguage = new QToolButton(layoutWidget_5);
        removeLanguage->setObjectName(QString::fromUtf8("removeLanguage"));
        removeLanguage->setIcon(icon2);
        removeLanguage->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(removeLanguage);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        splitter_2->addWidget(layoutWidget_5);
        layoutWidget_6 = new QWidget(splitter_2);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        _3 = new QVBoxLayout(layoutWidget_6);
        _3->setObjectName(QString::fromUtf8("_3"));
        _3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_6);
        label->setObjectName(QString::fromUtf8("label"));

        _3->addWidget(label);

        locationsTable = new QTableWidget(layoutWidget_6);
        if (locationsTable->columnCount() < 2)
            locationsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        locationsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        locationsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        locationsTable->setObjectName(QString::fromUtf8("locationsTable"));

        _3->addWidget(locationsTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addLocation = new QToolButton(layoutWidget_6);
        addLocation->setObjectName(QString::fromUtf8("addLocation"));
        addLocation->setIcon(icon1);
        addLocation->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(addLocation);

        removeLocation = new QToolButton(layoutWidget_6);
        removeLocation->setObjectName(QString::fromUtf8("removeLocation"));
        removeLocation->setIcon(icon2);
        removeLocation->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(removeLocation);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        _3->addLayout(horizontalLayout);

        splitter_2->addWidget(layoutWidget_6);
        layoutWidget_7 = new QWidget(splitter_2);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        monetaryUnitsList = new QListWidget(layoutWidget_7);
        monetaryUnitsList->setObjectName(QString::fromUtf8("monetaryUnitsList"));

        verticalLayout_3->addWidget(monetaryUnitsList);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        addMonetaryUnit = new QToolButton(layoutWidget_7);
        addMonetaryUnit->setObjectName(QString::fromUtf8("addMonetaryUnit"));
        addMonetaryUnit->setIcon(icon1);
        addMonetaryUnit->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(addMonetaryUnit);

        removeMonetaryUnit = new QToolButton(layoutWidget_7);
        removeMonetaryUnit->setObjectName(QString::fromUtf8("removeMonetaryUnit"));
        removeMonetaryUnit->setIcon(icon2);
        removeMonetaryUnit->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(removeMonetaryUnit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_3);

        splitter_2->addWidget(layoutWidget_7);
        layoutWidget_8 = new QWidget(splitter_2);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        verticalLayout_14 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_8);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_14->addWidget(label_14);

        minimumDaysTable = new QTableWidget(layoutWidget_8);
        if (minimumDaysTable->columnCount() < 2)
            minimumDaysTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        minimumDaysTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        minimumDaysTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        if (minimumDaysTable->rowCount() < 6)
            minimumDaysTable->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        minimumDaysTable->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        minimumDaysTable->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        minimumDaysTable->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        minimumDaysTable->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        minimumDaysTable->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        minimumDaysTable->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(0, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(0, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(1, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(1, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(2, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(2, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(3, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(3, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(4, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(4, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(5, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        minimumDaysTable->setItem(5, 1, __qtablewidgetitem21);
        minimumDaysTable->setObjectName(QString::fromUtf8("minimumDaysTable"));

        verticalLayout_14->addWidget(minimumDaysTable);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_31);

        emptyLabel = new QLabel(layoutWidget_8);
        emptyLabel->setObjectName(QString::fromUtf8("emptyLabel"));

        horizontalLayout_16->addWidget(emptyLabel);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_32);


        verticalLayout_14->addLayout(horizontalLayout_16);

        splitter_2->addWidget(layoutWidget_8);
        splitter_4->addWidget(splitter_2);
        splitter_5->addWidget(splitter_4);
        splitter = new QSplitter(splitter_5);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget_9 = new QWidget(splitter);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        verticalLayout_16 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_9);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_16->addWidget(label_16);

        videoGamePlatformsList = new QListWidget(layoutWidget_9);
        videoGamePlatformsList->setObjectName(QString::fromUtf8("videoGamePlatformsList"));

        verticalLayout_16->addWidget(videoGamePlatformsList);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_29);

        addVideoGamePlatform = new QToolButton(layoutWidget_9);
        addVideoGamePlatform->setObjectName(QString::fromUtf8("addVideoGamePlatform"));
        addVideoGamePlatform->setIcon(icon1);
        addVideoGamePlatform->setIconSize(QSize(16, 16));

        horizontalLayout_15->addWidget(addVideoGamePlatform);

        removeVideoGamePlatform = new QToolButton(layoutWidget_9);
        removeVideoGamePlatform->setObjectName(QString::fromUtf8("removeVideoGamePlatform"));
        removeVideoGamePlatform->setIcon(icon2);
        removeVideoGamePlatform->setIconSize(QSize(16, 16));

        horizontalLayout_15->addWidget(removeVideoGamePlatform);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_30);


        verticalLayout_16->addLayout(horizontalLayout_15);

        splitter->addWidget(layoutWidget_9);
        layoutWidget_10 = new QWidget(splitter);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        verticalLayout_15 = new QVBoxLayout(layoutWidget_10);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_10);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_15->addWidget(label_15);

        videoGameRatingsList = new QListWidget(layoutWidget_10);
        videoGameRatingsList->setObjectName(QString::fromUtf8("videoGameRatingsList"));

        verticalLayout_15->addWidget(videoGameRatingsList);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_27);

        addVideoGameRating = new QToolButton(layoutWidget_10);
        addVideoGameRating->setObjectName(QString::fromUtf8("addVideoGameRating"));
        addVideoGameRating->setIcon(icon1);
        addVideoGameRating->setIconSize(QSize(16, 16));

        horizontalLayout_14->addWidget(addVideoGameRating);

        removeVideoGameRating = new QToolButton(layoutWidget_10);
        removeVideoGameRating->setObjectName(QString::fromUtf8("removeVideoGameRating"));
        removeVideoGameRating->setIcon(icon2);
        removeVideoGameRating->setIconSize(QSize(16, 16));

        horizontalLayout_14->addWidget(removeVideoGameRating);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_28);


        verticalLayout_15->addLayout(horizontalLayout_14);

        splitter->addWidget(layoutWidget_10);
        splitter_5->addWidget(splitter);

        verticalLayout_7->addWidget(splitter_5);


        hboxLayout->addWidget(frame);

        _2 = new QVBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        saveButton = new QToolButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/32x32/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon3);
        saveButton->setIconSize(QSize(32, 32));
        saveButton->setAutoRaise(true);

        _2->addWidget(saveButton);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        _2->addWidget(line);

        reloadButton = new QToolButton(centralwidget);
        reloadButton->setObjectName(QString::fromUtf8("reloadButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons.d/32x32/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        reloadButton->setIcon(icon4);
        reloadButton->setIconSize(QSize(32, 32));
        reloadButton->setAutoRaise(true);

        _2->addWidget(reloadButton);

        spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _2->addItem(spacer);

        cancelButton = new QToolButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icons.d/32x32/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon5);
        cancelButton->setIconSize(QSize(32, 32));
        cancelButton->setAutoRaise(true);

        _2->addWidget(cancelButton);


        hboxLayout->addLayout(_2);

        dbEnumerations->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(dbEnumerations);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        dbEnumerations->setStatusBar(statusbar);
        QWidget::setTabOrder(cdFormatsList, addCdFormat);
        QWidget::setTabOrder(addCdFormat, removeCdFormat);
        QWidget::setTabOrder(removeCdFormat, dvdAspectRatiosList);
        QWidget::setTabOrder(dvdAspectRatiosList, addDvdAspectRatio);
        QWidget::setTabOrder(addDvdAspectRatio, removeDvdAspectRatio);
        QWidget::setTabOrder(removeDvdAspectRatio, dvdRatingsList);
        QWidget::setTabOrder(dvdRatingsList, addDvdRating);
        QWidget::setTabOrder(addDvdRating, removeDvdRating);
        QWidget::setTabOrder(removeDvdRating, dvdRegionsList);
        QWidget::setTabOrder(dvdRegionsList, addDvdRegion);
        QWidget::setTabOrder(addDvdRegion, removeDvdRegion);
        QWidget::setTabOrder(removeDvdRegion, languagesList);
        QWidget::setTabOrder(languagesList, addLanguage);
        QWidget::setTabOrder(addLanguage, removeLanguage);
        QWidget::setTabOrder(removeLanguage, locationsTable);
        QWidget::setTabOrder(locationsTable, addLocation);
        QWidget::setTabOrder(addLocation, removeLocation);
        QWidget::setTabOrder(removeLocation, monetaryUnitsList);
        QWidget::setTabOrder(monetaryUnitsList, addMonetaryUnit);
        QWidget::setTabOrder(addMonetaryUnit, removeMonetaryUnit);
        QWidget::setTabOrder(removeMonetaryUnit, minimumDaysTable);
        QWidget::setTabOrder(minimumDaysTable, videoGamePlatformsList);
        QWidget::setTabOrder(videoGamePlatformsList, addVideoGamePlatform);
        QWidget::setTabOrder(addVideoGamePlatform, removeVideoGamePlatform);
        QWidget::setTabOrder(removeVideoGamePlatform, videoGameRatingsList);
        QWidget::setTabOrder(videoGameRatingsList, addVideoGameRating);
        QWidget::setTabOrder(addVideoGameRating, removeVideoGameRating);
        QWidget::setTabOrder(removeVideoGameRating, saveButton);
        QWidget::setTabOrder(saveButton, reloadButton);
        QWidget::setTabOrder(reloadButton, cancelButton);

        retranslateUi(dbEnumerations);

        QMetaObject::connectSlotsByName(dbEnumerations);
    } // setupUi

    void retranslateUi(QMainWindow *dbEnumerations)
    {
        dbEnumerations->setWindowTitle(QApplication::translate("dbEnumerations", "BiblioteQ: Database Enumerations Browser", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dbEnumerations", "CD Formats", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addCdFormat->setToolTip(QApplication::translate("dbEnumerations", "Add CD Format", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        removeCdFormat->setToolTip(QApplication::translate("dbEnumerations", "Remove CD Format", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("dbEnumerations", "DVD Aspect Ratios", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addDvdAspectRatio->setToolTip(QApplication::translate("dbEnumerations", "Add DVD Aspect Ratio", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        removeDvdAspectRatio->setToolTip(QApplication::translate("dbEnumerations", "Remove DVD Aspect Ratio", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("dbEnumerations", "DVD Ratings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addDvdRating->setToolTip(QApplication::translate("dbEnumerations", "Add DVD Rating", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        removeDvdRating->setToolTip(QApplication::translate("dbEnumerations", "Remove DVD Rating", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("dbEnumerations", "DVD Regions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addDvdRegion->setToolTip(QApplication::translate("dbEnumerations", "Add DVD Region", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        removeDvdRegion->setToolTip(QApplication::translate("dbEnumerations", "Remove DVD Region", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("dbEnumerations", "Languages", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addLanguage->setToolTip(QApplication::translate("dbEnumerations", "Add Language", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        removeLanguage->setToolTip(QApplication::translate("dbEnumerations", "Remove Language", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("dbEnumerations", "Locations", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = locationsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("dbEnumerations", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = locationsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("dbEnumerations", "Location", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addLocation->setToolTip(QApplication::translate("dbEnumerations", "Add Location", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        removeLocation->setToolTip(QApplication::translate("dbEnumerations", "Remove Location", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("dbEnumerations", "Monetary Units", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addMonetaryUnit->setToolTip(QApplication::translate("dbEnumerations", "Add Monetary Unit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        removeMonetaryUnit->setToolTip(QApplication::translate("dbEnumerations", "Remove Monetary Unit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("dbEnumerations", "Reservations Minimum Days", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = minimumDaysTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("dbEnumerations", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = minimumDaysTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("dbEnumerations", "Days", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = minimumDaysTable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("dbEnumerations", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = minimumDaysTable->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("dbEnumerations", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = minimumDaysTable->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("dbEnumerations", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = minimumDaysTable->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("dbEnumerations", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = minimumDaysTable->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("dbEnumerations", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = minimumDaysTable->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("dbEnumerations", "6", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = minimumDaysTable->isSortingEnabled();
        minimumDaysTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem10 = minimumDaysTable->item(0, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("dbEnumerations", "Books", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = minimumDaysTable->item(1, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("dbEnumerations", "DVDs", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = minimumDaysTable->item(2, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("dbEnumerations", "Journals", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = minimumDaysTable->item(3, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("dbEnumerations", "Magazines", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = minimumDaysTable->item(4, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("dbEnumerations", "Music CDs", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = minimumDaysTable->item(5, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("dbEnumerations", "Video Games", 0, QApplication::UnicodeUTF8));
        minimumDaysTable->setSortingEnabled(__sortingEnabled);

        emptyLabel->setText(QString());
        label_16->setText(QApplication::translate("dbEnumerations", "Video Game Platforms", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addVideoGamePlatform->setToolTip(QApplication::translate("dbEnumerations", "Add Video Game Platform", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        removeVideoGamePlatform->setToolTip(QApplication::translate("dbEnumerations", "Remove Video Game Platform", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("dbEnumerations", "Video Game Ratings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addVideoGameRating->setToolTip(QApplication::translate("dbEnumerations", "Add Video Game Rating", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        removeVideoGameRating->setToolTip(QApplication::translate("dbEnumerations", "Remove Video Game Rating", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("dbEnumerations", "Save Changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        reloadButton->setToolTip(QApplication::translate("dbEnumerations", "Refresh", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("dbEnumerations", "Close Browser", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class dbEnumerations: public Ui_dbEnumerations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBENUMERATIONS_H

/********************************************************************************
** Form generated from reading UI file 'dvdinfo.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DVDINFO_H
#define UI_DVDINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "hyperlinked_text_edit.h"
#include "image_drop_site.h"

QT_BEGIN_NAMESPACE

class Ui_dvdDialog
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QGroupBox *coverImages;
    QVBoxLayout *vboxLayout1;
    image_drop_site *front_image;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *frontButton;
    QSpacerItem *spacerItem1;
    image_drop_site *back_image;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QPushButton *backButton;
    QSpacerItem *spacerItem3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *id;
    QLabel *label_12;
    QHBoxLayout *hboxLayout2;
    QComboBox *rating;
    QSpacerItem *spacerItem4;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_5;
    QHBoxLayout *hboxLayout3;
    QSpinBox *no_of_discs;
    QSpacerItem *spacerItem5;
    QLabel *label_6;
    QLabel *label_18;
    QLineEdit *format;
    QLabel *label_17;
    QHBoxLayout *hboxLayout4;
    QComboBox *region;
    QSpacerItem *spacerItem6;
    QLabel *label_19;
    QHBoxLayout *hboxLayout5;
    QComboBox *aspectratio;
    QSpacerItem *spacerItem7;
    QHBoxLayout *hboxLayout6;
    QTimeEdit *runtime;
    QSpacerItem *spacerItem8;
    hyperlinked_text_edit *actors;
    hyperlinked_text_edit *directors;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QLineEdit *title;
    QLabel *label_13;
    QHBoxLayout *hboxLayout7;
    QDateEdit *release_date;
    QSpacerItem *spacerItem9;
    QLabel *label_14;
    hyperlinked_text_edit *studio;
    QLabel *label_15;
    QLabel *label_16;
    QDoubleSpinBox *price;
    QLabel *label_4;
    QHBoxLayout *hboxLayout8;
    QComboBox *language;
    QSpacerItem *spacerItem10;
    QLabel *label_3;
    QComboBox *monetary_units;
    QLabel *label_8;
    QHBoxLayout *hboxLayout9;
    QSpinBox *quantity;
    QGridLayout *gridLayout2;
    QPushButton *copiesButton;
    QPushButton *showUserButton;
    QSpacerItem *spacerItem11;
    QLabel *label_10;
    QHBoxLayout *hboxLayout10;
    QComboBox *location;
    QSpacerItem *spacerItem12;
    QLabel *label_7;
    QTextEdit *description;
    hyperlinked_text_edit *category;
    QLabel *label_20;
    hyperlinked_text_edit *keyword;
    QHBoxLayout *hboxLayout11;
    QSpacerItem *spacerItem13;
    QPushButton *okButton;
    QPushButton *queryButton;
    QToolButton *resetButton;
    QPushButton *printButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem14;

    void setupUi(QMainWindow *dvdDialog)
    {
        if (dvdDialog->objectName().isEmpty())
            dvdDialog->setObjectName(QString::fromUtf8("dvdDialog"));
        dvdDialog->resize(1031, 1198);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        dvdDialog->setWindowIcon(icon);
        centralwidget = new QWidget(dvdDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1007, 1129));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(scrollAreaWidgetContents);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        coverImages = new QGroupBox(splitter);
        coverImages->setObjectName(QString::fromUtf8("coverImages"));
        vboxLayout1 = new QVBoxLayout(coverImages);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        front_image = new image_drop_site(coverImages);
        front_image->setObjectName(QString::fromUtf8("front_image"));
        front_image->setMinimumSize(QSize(150, 200));

        vboxLayout1->addWidget(front_image);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        frontButton = new QPushButton(coverImages);
        frontButton->setObjectName(QString::fromUtf8("frontButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        frontButton->setIcon(icon1);

        hboxLayout->addWidget(frontButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout1->addLayout(hboxLayout);

        back_image = new image_drop_site(coverImages);
        back_image->setObjectName(QString::fromUtf8("back_image"));
        back_image->setMinimumSize(QSize(150, 200));

        vboxLayout1->addWidget(back_image);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        backButton = new QPushButton(coverImages);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setIcon(icon1);

        hboxLayout1->addWidget(backButton);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        vboxLayout1->addLayout(hboxLayout1);

        splitter->addWidget(coverImages);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        id = new QLineEdit(groupBox);
        id->setObjectName(QString::fromUtf8("id"));
        id->setMaxLength(32);

        gridLayout->addWidget(id, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        rating = new QComboBox(groupBox);
        rating->setObjectName(QString::fromUtf8("rating"));

        hboxLayout2->addWidget(rating);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem4);


        gridLayout->addLayout(hboxLayout2, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        no_of_discs = new QSpinBox(groupBox);
        no_of_discs->setObjectName(QString::fromUtf8("no_of_discs"));
        no_of_discs->setMinimum(1);
        no_of_discs->setMaximum(100);

        hboxLayout3->addWidget(no_of_discs);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem5);


        gridLayout->addLayout(hboxLayout3, 4, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 6, 0, 1, 1);

        format = new QLineEdit(groupBox);
        format->setObjectName(QString::fromUtf8("format"));

        gridLayout->addWidget(format, 6, 1, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 7, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        region = new QComboBox(groupBox);
        region->setObjectName(QString::fromUtf8("region"));

        hboxLayout4->addWidget(region);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem6);


        gridLayout->addLayout(hboxLayout4, 7, 1, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 8, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        aspectratio = new QComboBox(groupBox);
        aspectratio->setObjectName(QString::fromUtf8("aspectratio"));

        hboxLayout5->addWidget(aspectratio);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem7);


        gridLayout->addLayout(hboxLayout5, 8, 1, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        runtime = new QTimeEdit(groupBox);
        runtime->setObjectName(QString::fromUtf8("runtime"));

        hboxLayout6->addWidget(runtime);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem8);


        gridLayout->addLayout(hboxLayout6, 5, 1, 1, 1);

        actors = new hyperlinked_text_edit(groupBox);
        actors->setObjectName(QString::fromUtf8("actors"));
        actors->setReadOnly(false);
        actors->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        actors->setOpenLinks(false);

        gridLayout->addWidget(actors, 2, 1, 1, 1);

        directors = new hyperlinked_text_edit(groupBox);
        directors->setObjectName(QString::fromUtf8("directors"));
        directors->setReadOnly(false);
        directors->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        directors->setOpenLinks(false);

        gridLayout->addWidget(directors, 3, 1, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        title = new QLineEdit(groupBox_2);
        title->setObjectName(QString::fromUtf8("title"));

        gridLayout1->addWidget(title, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout1->addWidget(label_13, 1, 0, 1, 1);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        release_date = new QDateEdit(groupBox_2);
        release_date->setObjectName(QString::fromUtf8("release_date"));
        release_date->setCalendarPopup(true);

        hboxLayout7->addWidget(release_date);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem9);


        gridLayout1->addLayout(hboxLayout7, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout1->addWidget(label_14, 2, 0, 1, 1);

        studio = new hyperlinked_text_edit(groupBox_2);
        studio->setObjectName(QString::fromUtf8("studio"));
        studio->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        studio->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        studio->setReadOnly(false);
        studio->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        studio->setOpenLinks(false);

        gridLayout1->addWidget(studio, 2, 1, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout1->addWidget(label_15, 3, 0, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout1->addWidget(label_16, 4, 0, 1, 1);

        price = new QDoubleSpinBox(groupBox_2);
        price->setObjectName(QString::fromUtf8("price"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(price->sizePolicy().hasHeightForWidth());
        price->setSizePolicy(sizePolicy);
        price->setMinimum(0.01);
        price->setMaximum(10000);
        price->setSingleStep(0.01);
        price->setValue(0.01);

        gridLayout1->addWidget(price, 4, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 5, 0, 1, 1);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        language = new QComboBox(groupBox_2);
        language->setObjectName(QString::fromUtf8("language"));

        hboxLayout8->addWidget(language);

        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem10);


        gridLayout1->addLayout(hboxLayout8, 5, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 6, 0, 1, 1);

        monetary_units = new QComboBox(groupBox_2);
        monetary_units->setObjectName(QString::fromUtf8("monetary_units"));
        sizePolicy.setHeightForWidth(monetary_units->sizePolicy().hasHeightForWidth());
        monetary_units->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(monetary_units, 6, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout1->addWidget(label_8, 7, 0, 1, 1);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        quantity = new QSpinBox(groupBox_2);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setMinimum(1);
        quantity->setMaximum(5000);
        quantity->setValue(1);

        hboxLayout9->addWidget(quantity);

        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        copiesButton = new QPushButton(groupBox_2);
        copiesButton->setObjectName(QString::fromUtf8("copiesButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        copiesButton->setIcon(icon2);

        gridLayout2->addWidget(copiesButton, 0, 0, 1, 1);

        showUserButton = new QPushButton(groupBox_2);
        showUserButton->setObjectName(QString::fromUtf8("showUserButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/16x16/members.png"), QSize(), QIcon::Normal, QIcon::Off);
        showUserButton->setIcon(icon3);

        gridLayout2->addWidget(showUserButton, 1, 0, 1, 1);


        hboxLayout9->addLayout(gridLayout2);

        spacerItem11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem11);


        gridLayout1->addLayout(hboxLayout9, 7, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout1->addWidget(label_10, 8, 0, 1, 1);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        location = new QComboBox(groupBox_2);
        location->setObjectName(QString::fromUtf8("location"));

        hboxLayout10->addWidget(location);

        spacerItem12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout10->addItem(spacerItem12);


        gridLayout1->addLayout(hboxLayout10, 8, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout1->addWidget(label_7, 9, 0, 1, 1);

        description = new QTextEdit(groupBox_2);
        description->setObjectName(QString::fromUtf8("description"));
        description->setAcceptRichText(false);

        gridLayout1->addWidget(description, 9, 1, 1, 1);

        category = new hyperlinked_text_edit(groupBox_2);
        category->setObjectName(QString::fromUtf8("category"));
        category->setReadOnly(false);
        category->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        category->setOpenLinks(false);

        gridLayout1->addWidget(category, 3, 1, 1, 1);

        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout1->addWidget(label_20, 10, 0, 1, 1);

        keyword = new hyperlinked_text_edit(groupBox_2);
        keyword->setObjectName(QString::fromUtf8("keyword"));
        keyword->setReadOnly(false);
        keyword->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        keyword->setOpenLinks(false);

        gridLayout1->addWidget(keyword, 10, 1, 1, 1);

        splitter->addWidget(groupBox_2);

        verticalLayout->addWidget(splitter);

        scrollArea->setWidget(scrollAreaWidgetContents);

        vboxLayout->addWidget(scrollArea);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        spacerItem13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout11->addItem(spacerItem13);

        okButton = new QPushButton(centralwidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        sizePolicy.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy);
        okButton->setMinimumSize(QSize(170, 0));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon4);

        hboxLayout11->addWidget(okButton);

        queryButton = new QPushButton(centralwidget);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));
        queryButton->setMinimumSize(QSize(170, 0));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icons.d/16x16/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        queryButton->setIcon(icon5);

        hboxLayout11->addWidget(queryButton);

        resetButton = new QToolButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setMinimumSize(QSize(170, 0));
        resetButton->setPopupMode(QToolButton::MenuButtonPopup);
        resetButton->setArrowType(Qt::NoArrow);

        hboxLayout11->addWidget(resetButton);

        printButton = new QPushButton(centralwidget);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        printButton->setMinimumSize(QSize(170, 0));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("icons.d/16x16/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        printButton->setIcon(icon6);

        hboxLayout11->addWidget(printButton);

        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(170, 0));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon7);

        hboxLayout11->addWidget(cancelButton);

        spacerItem14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout11->addItem(spacerItem14);


        vboxLayout->addLayout(hboxLayout11);

        dvdDialog->setCentralWidget(centralwidget);
        QWidget::setTabOrder(scrollArea, front_image);
        QWidget::setTabOrder(front_image, frontButton);
        QWidget::setTabOrder(frontButton, back_image);
        QWidget::setTabOrder(back_image, backButton);
        QWidget::setTabOrder(backButton, id);
        QWidget::setTabOrder(id, rating);
        QWidget::setTabOrder(rating, actors);
        QWidget::setTabOrder(actors, directors);
        QWidget::setTabOrder(directors, no_of_discs);
        QWidget::setTabOrder(no_of_discs, runtime);
        QWidget::setTabOrder(runtime, format);
        QWidget::setTabOrder(format, region);
        QWidget::setTabOrder(region, aspectratio);
        QWidget::setTabOrder(aspectratio, title);
        QWidget::setTabOrder(title, release_date);
        QWidget::setTabOrder(release_date, studio);
        QWidget::setTabOrder(studio, category);
        QWidget::setTabOrder(category, price);
        QWidget::setTabOrder(price, language);
        QWidget::setTabOrder(language, monetary_units);
        QWidget::setTabOrder(monetary_units, quantity);
        QWidget::setTabOrder(quantity, copiesButton);
        QWidget::setTabOrder(copiesButton, showUserButton);
        QWidget::setTabOrder(showUserButton, location);
        QWidget::setTabOrder(location, description);
        QWidget::setTabOrder(description, keyword);
        QWidget::setTabOrder(keyword, okButton);
        QWidget::setTabOrder(okButton, queryButton);
        QWidget::setTabOrder(queryButton, resetButton);
        QWidget::setTabOrder(resetButton, printButton);
        QWidget::setTabOrder(printButton, cancelButton);

        retranslateUi(dvdDialog);

        rating->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(dvdDialog);
    } // setupUi

    void retranslateUi(QMainWindow *dvdDialog)
    {
        dvdDialog->setWindowTitle(QApplication::translate("dvdDialog", "BiblioteQ", 0, QApplication::UnicodeUTF8));
        coverImages->setTitle(QApplication::translate("dvdDialog", "Cover Images", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        front_image->setToolTip(QApplication::translate("dvdDialog", "Front Cover Image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        frontButton->setText(QApplication::translate("dvdDialog", "&Select", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        back_image->setToolTip(QApplication::translate("dvdDialog", "Back Cover Image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        backButton->setText(QApplication::translate("dvdDialog", "&Select", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("dvdDialog", "Specific Information", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dvdDialog", "UPC", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("dvdDialog", "Rating", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("dvdDialog", "Actor(s)", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("dvdDialog", "Director(s)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("dvdDialog", "Number of Discs", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("dvdDialog", "Runtime", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("dvdDialog", "Format", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("dvdDialog", "Region", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("dvdDialog", "Aspect Ratio", 0, QApplication::UnicodeUTF8));
        runtime->setDisplayFormat(QApplication::translate("dvdDialog", "hh:mm:ss", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("dvdDialog", "General Information", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dvdDialog", "Title", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("dvdDialog", "Release Date", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("dvdDialog", "Studio", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("dvdDialog", "Categories", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("dvdDialog", "Price", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dvdDialog", "Language", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dvdDialog", "Monetary Units", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("dvdDialog", "Copies", 0, QApplication::UnicodeUTF8));
        copiesButton->setText(QApplication::translate("dvdDialog", "&Copies", 0, QApplication::UnicodeUTF8));
        showUserButton->setText(QApplication::translate("dvdDialog", "&Reservation Status", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("dvdDialog", "Location", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("dvdDialog", "Abstract", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("dvdDialog", "Keywords", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("dvdDialog", "&OK", 0, QApplication::UnicodeUTF8));
        queryButton->setText(QApplication::translate("dvdDialog", "&Z39.50 Query", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("dvdDialog", "&Reset", 0, QApplication::UnicodeUTF8));
        printButton->setText(QApplication::translate("dvdDialog", "&Print", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("dvdDialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dvdDialog: public Ui_dvdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DVDINFO_H

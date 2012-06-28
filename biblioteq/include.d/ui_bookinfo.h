/********************************************************************************
** Form generated from reading UI file 'bookinfo.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFO_H
#define UI_BOOKINFO_H

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
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "hyperlinked_text_edit.h"
#include "image_drop_site.h"

QT_BEGIN_NAMESPACE

class Ui_informationDialog
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QGroupBox *coverImages;
    QVBoxLayout *vboxLayout1;
    image_drop_site *front_image;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *dwnldFront;
    QPushButton *frontButton;
    QSpacerItem *spacerItem1;
    image_drop_site *back_image;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QPushButton *dwnldBack;
    QPushButton *backButton;
    QSpacerItem *spacerItem3;
    QGroupBox *specificGroup;
    QVBoxLayout *verticalLayout;
    QGroupBox *isbnAvailableCheckBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *id;
    QPushButton *isbn13to10;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *isbn13;
    QPushButton *isbn10to13;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QHBoxLayout *hboxLayout2;
    QComboBox *edition;
    QSpacerItem *spacerItem4;
    QLabel *label_6;
    hyperlinked_text_edit *author;
    QLabel *label_9;
    QHBoxLayout *hboxLayout3;
    QComboBox *binding;
    QSpacerItem *spacerItem5;
    QLabel *label_12;
    QLineEdit *lcnum;
    QLabel *label_17;
    QLineEdit *callnum;
    QLabel *label_18;
    QLineEdit *deweynum;
    QGroupBox *generalGroup;
    QGridLayout *gridLayout1;
    QLineEdit *title;
    QLabel *label_13;
    QHBoxLayout *hboxLayout4;
    QDateEdit *publication_date;
    QSpacerItem *spacerItem6;
    QLabel *label_14;
    hyperlinked_text_edit *publisher;
    QLabel *label_15;
    QLabel *label_16;
    QDoubleSpinBox *price;
    QLabel *label_3;
    QHBoxLayout *hboxLayout5;
    QComboBox *language;
    QSpacerItem *spacerItem7;
    QLabel *label_4;
    QComboBox *monetary_units;
    QHBoxLayout *hboxLayout6;
    QSpinBox *quantity;
    QGridLayout *gridLayout2;
    QPushButton *copiesButton;
    QPushButton *showUserButton;
    QSpacerItem *spacerItem8;
    QLabel *label_10;
    QHBoxLayout *hboxLayout7;
    QComboBox *location;
    QSpacerItem *spacerItem9;
    QLabel *label_7;
    QTextEdit *description;
    hyperlinked_text_edit *category;
    QLabel *label_20;
    hyperlinked_text_edit *place;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_19;
    QTextEdit *marc_tags;
    hyperlinked_text_edit *keyword;
    QLabel *label_21;
    QHBoxLayout *hboxLayout8;
    QSpacerItem *spacerItem10;
    QPushButton *okButton;
    QToolButton *queryButton;
    QToolButton *resetButton;
    QPushButton *printButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem11;

    void setupUi(QMainWindow *informationDialog)
    {
        if (informationDialog->objectName().isEmpty())
            informationDialog->setObjectName(QString::fromUtf8("informationDialog"));
        informationDialog->resize(1130, 1605);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        informationDialog->setWindowIcon(icon);
        centralwidget = new QWidget(informationDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1112, 1555));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
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

        dwnldFront = new QPushButton(coverImages);
        dwnldFront->setObjectName(QString::fromUtf8("dwnldFront"));
        dwnldFront->setMinimumSize(QSize(105, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        dwnldFront->setIcon(icon1);

        hboxLayout->addWidget(dwnldFront);

        frontButton = new QPushButton(coverImages);
        frontButton->setObjectName(QString::fromUtf8("frontButton"));
        frontButton->setMinimumSize(QSize(105, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        frontButton->setIcon(icon2);

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

        dwnldBack = new QPushButton(coverImages);
        dwnldBack->setObjectName(QString::fromUtf8("dwnldBack"));
        dwnldBack->setMinimumSize(QSize(105, 0));
        dwnldBack->setIcon(icon1);

        hboxLayout1->addWidget(dwnldBack);

        backButton = new QPushButton(coverImages);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setMinimumSize(QSize(105, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Times"));
        font.setPointSize(10);
        backButton->setFont(font);
        backButton->setIcon(icon2);

        hboxLayout1->addWidget(backButton);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        vboxLayout1->addLayout(hboxLayout1);

        splitter->addWidget(coverImages);
        specificGroup = new QGroupBox(splitter);
        specificGroup->setObjectName(QString::fromUtf8("specificGroup"));
        verticalLayout = new QVBoxLayout(specificGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        isbnAvailableCheckBox = new QGroupBox(specificGroup);
        isbnAvailableCheckBox->setObjectName(QString::fromUtf8("isbnAvailableCheckBox"));
        isbnAvailableCheckBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(isbnAvailableCheckBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(isbnAvailableCheckBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        id = new QLineEdit(isbnAvailableCheckBox);
        id->setObjectName(QString::fromUtf8("id"));
        id->setMaxLength(32);

        horizontalLayout->addWidget(id);

        isbn13to10 = new QPushButton(isbnAvailableCheckBox);
        isbn13to10->setObjectName(QString::fromUtf8("isbn13to10"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/16x16/convert.png"), QSize(), QIcon::Normal, QIcon::Off);
        isbn13to10->setIcon(icon3);

        horizontalLayout->addWidget(isbn13to10);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_11 = new QLabel(isbnAvailableCheckBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        isbn13 = new QLineEdit(isbnAvailableCheckBox);
        isbn13->setObjectName(QString::fromUtf8("isbn13"));
        isbn13->setMaxLength(16);

        horizontalLayout_3->addWidget(isbn13);

        isbn10to13 = new QPushButton(isbnAvailableCheckBox);
        isbn10to13->setObjectName(QString::fromUtf8("isbn10to13"));
        isbn10to13->setIcon(icon3);

        horizontalLayout_3->addWidget(isbn10to13);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 1, 1, 1);


        verticalLayout->addWidget(isbnAvailableCheckBox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(specificGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        edition = new QComboBox(specificGroup);
        edition->setObjectName(QString::fromUtf8("edition"));
        edition->setAutoFillBackground(false);

        hboxLayout2->addWidget(edition);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem4);


        gridLayout->addLayout(hboxLayout2, 0, 1, 1, 1);

        label_6 = new QLabel(specificGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        author = new hyperlinked_text_edit(specificGroup);
        author->setObjectName(QString::fromUtf8("author"));
        author->setReadOnly(false);
        author->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        author->setOpenLinks(false);

        gridLayout->addWidget(author, 1, 1, 1, 1);

        label_9 = new QLabel(specificGroup);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        binding = new QComboBox(specificGroup);
        binding->setObjectName(QString::fromUtf8("binding"));
        binding->setLayoutDirection(Qt::LeftToRight);
        binding->setFrame(true);

        hboxLayout3->addWidget(binding);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem5);


        gridLayout->addLayout(hboxLayout3, 2, 1, 1, 1);

        label_12 = new QLabel(specificGroup);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        lcnum = new QLineEdit(specificGroup);
        lcnum->setObjectName(QString::fromUtf8("lcnum"));
        lcnum->setMaxLength(64);

        gridLayout->addWidget(lcnum, 3, 1, 1, 1);

        label_17 = new QLabel(specificGroup);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 4, 0, 1, 1);

        callnum = new QLineEdit(specificGroup);
        callnum->setObjectName(QString::fromUtf8("callnum"));
        callnum->setMaxLength(64);

        gridLayout->addWidget(callnum, 4, 1, 1, 1);

        label_18 = new QLabel(specificGroup);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 5, 0, 1, 1);

        deweynum = new QLineEdit(specificGroup);
        deweynum->setObjectName(QString::fromUtf8("deweynum"));
        deweynum->setMaxLength(64);

        gridLayout->addWidget(deweynum, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        splitter->addWidget(specificGroup);
        generalGroup = new QGroupBox(splitter);
        generalGroup->setObjectName(QString::fromUtf8("generalGroup"));
        gridLayout1 = new QGridLayout(generalGroup);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        title = new QLineEdit(generalGroup);
        title->setObjectName(QString::fromUtf8("title"));

        gridLayout1->addWidget(title, 0, 1, 1, 1);

        label_13 = new QLabel(generalGroup);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout1->addWidget(label_13, 1, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        publication_date = new QDateEdit(generalGroup);
        publication_date->setObjectName(QString::fromUtf8("publication_date"));
        publication_date->setCalendarPopup(true);

        hboxLayout4->addWidget(publication_date);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem6);


        gridLayout1->addLayout(hboxLayout4, 1, 1, 1, 1);

        label_14 = new QLabel(generalGroup);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout1->addWidget(label_14, 2, 0, 1, 1);

        publisher = new hyperlinked_text_edit(generalGroup);
        publisher->setObjectName(QString::fromUtf8("publisher"));
        publisher->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        publisher->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        publisher->setReadOnly(false);
        publisher->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        publisher->setOpenLinks(false);

        gridLayout1->addWidget(publisher, 2, 1, 1, 1);

        label_15 = new QLabel(generalGroup);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout1->addWidget(label_15, 4, 0, 1, 1);

        label_16 = new QLabel(generalGroup);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout1->addWidget(label_16, 5, 0, 1, 1);

        price = new QDoubleSpinBox(generalGroup);
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

        gridLayout1->addWidget(price, 5, 1, 1, 1);

        label_3 = new QLabel(generalGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 6, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        language = new QComboBox(generalGroup);
        language->setObjectName(QString::fromUtf8("language"));

        hboxLayout5->addWidget(language);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem7);


        gridLayout1->addLayout(hboxLayout5, 6, 1, 1, 1);

        label_4 = new QLabel(generalGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 7, 0, 1, 1);

        monetary_units = new QComboBox(generalGroup);
        monetary_units->setObjectName(QString::fromUtf8("monetary_units"));
        sizePolicy.setHeightForWidth(monetary_units->sizePolicy().hasHeightForWidth());
        monetary_units->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(monetary_units, 7, 1, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        quantity = new QSpinBox(generalGroup);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setMinimum(1);
        quantity->setMaximum(5000);
        quantity->setValue(1);

        hboxLayout6->addWidget(quantity);

        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        copiesButton = new QPushButton(generalGroup);
        copiesButton->setObjectName(QString::fromUtf8("copiesButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons.d/16x16/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        copiesButton->setIcon(icon4);

        gridLayout2->addWidget(copiesButton, 0, 0, 1, 1);

        showUserButton = new QPushButton(generalGroup);
        showUserButton->setObjectName(QString::fromUtf8("showUserButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icons.d/16x16/members.png"), QSize(), QIcon::Normal, QIcon::Off);
        showUserButton->setIcon(icon5);

        gridLayout2->addWidget(showUserButton, 1, 0, 1, 1);


        hboxLayout6->addLayout(gridLayout2);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem8);


        gridLayout1->addLayout(hboxLayout6, 8, 1, 1, 1);

        label_10 = new QLabel(generalGroup);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout1->addWidget(label_10, 9, 0, 1, 1);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        location = new QComboBox(generalGroup);
        location->setObjectName(QString::fromUtf8("location"));

        hboxLayout7->addWidget(location);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem9);


        gridLayout1->addLayout(hboxLayout7, 9, 1, 1, 1);

        label_7 = new QLabel(generalGroup);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout1->addWidget(label_7, 10, 0, 1, 1);

        description = new QTextEdit(generalGroup);
        description->setObjectName(QString::fromUtf8("description"));
        description->setAcceptRichText(false);

        gridLayout1->addWidget(description, 10, 1, 1, 1);

        category = new hyperlinked_text_edit(generalGroup);
        category->setObjectName(QString::fromUtf8("category"));
        category->setReadOnly(false);
        category->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        category->setOpenLinks(false);

        gridLayout1->addWidget(category, 4, 1, 1, 1);

        label_20 = new QLabel(generalGroup);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout1->addWidget(label_20, 3, 0, 1, 1);

        place = new hyperlinked_text_edit(generalGroup);
        place->setObjectName(QString::fromUtf8("place"));
        place->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        place->setOpenLinks(false);

        gridLayout1->addWidget(place, 3, 1, 1, 1);

        label_8 = new QLabel(generalGroup);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout1->addWidget(label_8, 8, 0, 1, 1);

        label_2 = new QLabel(generalGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        label_19 = new QLabel(generalGroup);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout1->addWidget(label_19, 11, 0, 1, 1);

        marc_tags = new QTextEdit(generalGroup);
        marc_tags->setObjectName(QString::fromUtf8("marc_tags"));
        marc_tags->setAcceptRichText(false);

        gridLayout1->addWidget(marc_tags, 11, 1, 1, 1);

        keyword = new hyperlinked_text_edit(generalGroup);
        keyword->setObjectName(QString::fromUtf8("keyword"));
        keyword->setReadOnly(false);
        keyword->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        keyword->setOpenLinks(false);

        gridLayout1->addWidget(keyword, 12, 1, 1, 1);

        label_21 = new QLabel(generalGroup);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout1->addWidget(label_21, 12, 0, 1, 1);

        splitter->addWidget(generalGroup);

        verticalLayout_2->addWidget(splitter);

        scrollArea->setWidget(scrollAreaWidgetContents);

        vboxLayout->addWidget(scrollArea);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem10);

        okButton = new QPushButton(centralwidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        sizePolicy.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy);
        okButton->setMinimumSize(QSize(170, 0));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon6);

        hboxLayout8->addWidget(okButton);

        queryButton = new QToolButton(centralwidget);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));
        queryButton->setMinimumSize(QSize(170, 0));
        queryButton->setPopupMode(QToolButton::MenuButtonPopup);
        queryButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout8->addWidget(queryButton);

        resetButton = new QToolButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setMinimumSize(QSize(170, 0));
        resetButton->setPopupMode(QToolButton::MenuButtonPopup);

        hboxLayout8->addWidget(resetButton);

        printButton = new QPushButton(centralwidget);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        printButton->setMinimumSize(QSize(170, 0));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("icons.d/16x16/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        printButton->setIcon(icon7);

        hboxLayout8->addWidget(printButton);

        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(170, 0));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon8);

        hboxLayout8->addWidget(cancelButton);

        spacerItem11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem11);


        vboxLayout->addLayout(hboxLayout8);

        informationDialog->setCentralWidget(centralwidget);
        QWidget::setTabOrder(scrollArea, front_image);
        QWidget::setTabOrder(front_image, dwnldFront);
        QWidget::setTabOrder(dwnldFront, frontButton);
        QWidget::setTabOrder(frontButton, back_image);
        QWidget::setTabOrder(back_image, dwnldBack);
        QWidget::setTabOrder(dwnldBack, backButton);
        QWidget::setTabOrder(backButton, isbnAvailableCheckBox);
        QWidget::setTabOrder(isbnAvailableCheckBox, id);
        QWidget::setTabOrder(id, isbn13to10);
        QWidget::setTabOrder(isbn13to10, isbn13);
        QWidget::setTabOrder(isbn13, isbn10to13);
        QWidget::setTabOrder(isbn10to13, edition);
        QWidget::setTabOrder(edition, author);
        QWidget::setTabOrder(author, binding);
        QWidget::setTabOrder(binding, lcnum);
        QWidget::setTabOrder(lcnum, callnum);
        QWidget::setTabOrder(callnum, deweynum);
        QWidget::setTabOrder(deweynum, title);
        QWidget::setTabOrder(title, publication_date);
        QWidget::setTabOrder(publication_date, publisher);
        QWidget::setTabOrder(publisher, place);
        QWidget::setTabOrder(place, category);
        QWidget::setTabOrder(category, price);
        QWidget::setTabOrder(price, language);
        QWidget::setTabOrder(language, monetary_units);
        QWidget::setTabOrder(monetary_units, quantity);
        QWidget::setTabOrder(quantity, copiesButton);
        QWidget::setTabOrder(copiesButton, showUserButton);
        QWidget::setTabOrder(showUserButton, location);
        QWidget::setTabOrder(location, description);
        QWidget::setTabOrder(description, marc_tags);
        QWidget::setTabOrder(marc_tags, keyword);
        QWidget::setTabOrder(keyword, okButton);
        QWidget::setTabOrder(okButton, queryButton);
        QWidget::setTabOrder(queryButton, resetButton);
        QWidget::setTabOrder(resetButton, printButton);
        QWidget::setTabOrder(printButton, cancelButton);

        retranslateUi(informationDialog);

        QMetaObject::connectSlotsByName(informationDialog);
    } // setupUi

    void retranslateUi(QMainWindow *informationDialog)
    {
        informationDialog->setWindowTitle(QApplication::translate("informationDialog", "BiblioteQ", 0, QApplication::UnicodeUTF8));
        coverImages->setTitle(QApplication::translate("informationDialog", "Cover Images", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        front_image->setToolTip(QApplication::translate("informationDialog", "Front Cover Image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        dwnldFront->setText(QApplication::translate("informationDialog", "&Download", 0, QApplication::UnicodeUTF8));
        frontButton->setText(QApplication::translate("informationDialog", "&Select", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        back_image->setToolTip(QApplication::translate("informationDialog", "Back Cover Image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        dwnldBack->setText(QApplication::translate("informationDialog", "&Download", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("informationDialog", "&Select", 0, QApplication::UnicodeUTF8));
        specificGroup->setTitle(QApplication::translate("informationDialog", "Specific Information", 0, QApplication::UnicodeUTF8));
        isbnAvailableCheckBox->setTitle(QApplication::translate("informationDialog", "ISBNs", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("informationDialog", "ISBN-10", 0, QApplication::UnicodeUTF8));
        isbn13to10->setText(QApplication::translate("informationDialog", "From &ISBN-13", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("informationDialog", "ISBN-13", 0, QApplication::UnicodeUTF8));
        isbn10to13->setText(QApplication::translate("informationDialog", "From &ISBN-10", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("informationDialog", "Edition", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("informationDialog", "Author(s)", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("informationDialog", "Book Binding Type", 0, QApplication::UnicodeUTF8));
        binding->clear();
        binding->insertItems(0, QStringList()
         << QApplication::translate("informationDialog", "Hardcover", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("informationDialog", "Paperback", 0, QApplication::UnicodeUTF8)
        );
        label_12->setText(QApplication::translate("informationDialog", "LC Control Number", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("informationDialog", "Call Number", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("informationDialog", "Dewey Class Number", 0, QApplication::UnicodeUTF8));
        generalGroup->setTitle(QApplication::translate("informationDialog", "General Information", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("informationDialog", "Publication Date", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("informationDialog", "Publisher", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("informationDialog", "Categories", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("informationDialog", "Price", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("informationDialog", "Language", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("informationDialog", "Monetary Units", 0, QApplication::UnicodeUTF8));
        copiesButton->setText(QApplication::translate("informationDialog", "&Copies", 0, QApplication::UnicodeUTF8));
        showUserButton->setText(QApplication::translate("informationDialog", "&Reservation Status", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("informationDialog", "Location", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("informationDialog", "Abstract", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("informationDialog", "Place of Publication", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("informationDialog", "Copies", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("informationDialog", "Title", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("informationDialog", "MARC Tags", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("informationDialog", "Keywords", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("informationDialog", "&OK", 0, QApplication::UnicodeUTF8));
        queryButton->setText(QApplication::translate("informationDialog", "&Z39.50 Query", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("informationDialog", "&Reset", 0, QApplication::UnicodeUTF8));
        printButton->setText(QApplication::translate("informationDialog", "&Print", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("informationDialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class informationDialog: public Ui_informationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFO_H

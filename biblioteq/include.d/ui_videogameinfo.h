/********************************************************************************
** Form generated from reading UI file 'videogameinfo.ui'
**
** Created: Thu 28. Jun 15:34:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOGAMEINFO_H
#define UI_VIDEOGAMEINFO_H

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

class Ui_vgDialog
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
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *id;
    QLabel *label_5;
    QHBoxLayout *hboxLayout2;
    QComboBox *rating;
    QSpacerItem *spacerItem4;
    QLabel *label_6;
    QLabel *label_9;
    QHBoxLayout *hboxLayout3;
    QComboBox *platform;
    QSpacerItem *spacerItem5;
    QLabel *label_11;
    QHBoxLayout *hboxLayout4;
    QComboBox *mode;
    QSpacerItem *spacerItem6;
    hyperlinked_text_edit *developer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QLineEdit *title;
    QLabel *label_13;
    QHBoxLayout *hboxLayout5;
    QDateEdit *release_date;
    QSpacerItem *spacerItem7;
    QLabel *label_14;
    hyperlinked_text_edit *publisher;
    QLabel *label_15;
    QLabel *label_16;
    QDoubleSpinBox *price;
    QLabel *label_3;
    QHBoxLayout *hboxLayout6;
    QComboBox *language;
    QSpacerItem *spacerItem8;
    QLabel *label_4;
    QComboBox *monetary_units;
    QLabel *label_8;
    QHBoxLayout *hboxLayout7;
    QSpinBox *quantity;
    QGridLayout *gridLayout2;
    QPushButton *copiesButton;
    QPushButton *showUserButton;
    QSpacerItem *spacerItem9;
    QLabel *label_10;
    QHBoxLayout *hboxLayout8;
    QComboBox *location;
    QSpacerItem *spacerItem10;
    QLabel *label_7;
    QTextEdit *description;
    hyperlinked_text_edit *genre;
    QLabel *label_17;
    hyperlinked_text_edit *place;
    QLabel *label_12;
    hyperlinked_text_edit *keyword;
    QHBoxLayout *hboxLayout9;
    QSpacerItem *spacerItem11;
    QPushButton *okButton;
    QPushButton *queryButton;
    QToolButton *resetButton;
    QPushButton *printButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem12;

    void setupUi(QMainWindow *vgDialog)
    {
        if (vgDialog->objectName().isEmpty())
            vgDialog->setObjectName(QString::fromUtf8("vgDialog"));
        vgDialog->resize(1032, 1400);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        vgDialog->setWindowIcon(icon);
        centralwidget = new QWidget(vgDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1008, 1331));
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
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        id = new QLineEdit(groupBox_2);
        id->setObjectName(QString::fromUtf8("id"));
        id->setMaxLength(32);

        gridLayout->addWidget(id, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        rating = new QComboBox(groupBox_2);
        rating->setObjectName(QString::fromUtf8("rating"));

        hboxLayout2->addWidget(rating);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem4);


        gridLayout->addLayout(hboxLayout2, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        platform = new QComboBox(groupBox_2);
        platform->setObjectName(QString::fromUtf8("platform"));

        hboxLayout3->addWidget(platform);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem5);


        gridLayout->addLayout(hboxLayout3, 3, 1, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        mode = new QComboBox(groupBox_2);
        mode->setObjectName(QString::fromUtf8("mode"));

        hboxLayout4->addWidget(mode);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem6);


        gridLayout->addLayout(hboxLayout4, 4, 1, 1, 1);

        developer = new hyperlinked_text_edit(groupBox_2);
        developer->setObjectName(QString::fromUtf8("developer"));
        developer->setReadOnly(false);
        developer->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        developer->setOpenLinks(false);

        gridLayout->addWidget(developer, 2, 1, 1, 1);

        splitter->addWidget(groupBox_2);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        title = new QLineEdit(groupBox);
        title->setObjectName(QString::fromUtf8("title"));

        gridLayout1->addWidget(title, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout1->addWidget(label_13, 1, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        release_date = new QDateEdit(groupBox);
        release_date->setObjectName(QString::fromUtf8("release_date"));
        release_date->setCalendarPopup(true);

        hboxLayout5->addWidget(release_date);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem7);


        gridLayout1->addLayout(hboxLayout5, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout1->addWidget(label_14, 2, 0, 1, 1);

        publisher = new hyperlinked_text_edit(groupBox);
        publisher->setObjectName(QString::fromUtf8("publisher"));
        publisher->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        publisher->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        publisher->setReadOnly(false);
        publisher->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        publisher->setOpenLinks(false);

        gridLayout1->addWidget(publisher, 2, 1, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout1->addWidget(label_15, 4, 0, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout1->addWidget(label_16, 5, 0, 1, 1);

        price = new QDoubleSpinBox(groupBox);
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

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 6, 0, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        language = new QComboBox(groupBox);
        language->setObjectName(QString::fromUtf8("language"));

        hboxLayout6->addWidget(language);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem8);


        gridLayout1->addLayout(hboxLayout6, 6, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 7, 0, 1, 1);

        monetary_units = new QComboBox(groupBox);
        monetary_units->setObjectName(QString::fromUtf8("monetary_units"));
        sizePolicy.setHeightForWidth(monetary_units->sizePolicy().hasHeightForWidth());
        monetary_units->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(monetary_units, 7, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout1->addWidget(label_8, 8, 0, 1, 1);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        quantity = new QSpinBox(groupBox);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setMinimum(1);
        quantity->setMaximum(5000);
        quantity->setValue(1);

        hboxLayout7->addWidget(quantity);

        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        copiesButton = new QPushButton(groupBox);
        copiesButton->setObjectName(QString::fromUtf8("copiesButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        copiesButton->setIcon(icon2);

        gridLayout2->addWidget(copiesButton, 0, 0, 1, 1);

        showUserButton = new QPushButton(groupBox);
        showUserButton->setObjectName(QString::fromUtf8("showUserButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/16x16/members.png"), QSize(), QIcon::Normal, QIcon::Off);
        showUserButton->setIcon(icon3);

        gridLayout2->addWidget(showUserButton, 1, 0, 1, 1);


        hboxLayout7->addLayout(gridLayout2);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem9);


        gridLayout1->addLayout(hboxLayout7, 8, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout1->addWidget(label_10, 9, 0, 1, 1);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        location = new QComboBox(groupBox);
        location->setObjectName(QString::fromUtf8("location"));

        hboxLayout8->addWidget(location);

        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem10);


        gridLayout1->addLayout(hboxLayout8, 9, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout1->addWidget(label_7, 10, 0, 1, 1);

        description = new QTextEdit(groupBox);
        description->setObjectName(QString::fromUtf8("description"));
        description->setAcceptRichText(false);

        gridLayout1->addWidget(description, 10, 1, 1, 1);

        genre = new hyperlinked_text_edit(groupBox);
        genre->setObjectName(QString::fromUtf8("genre"));
        genre->setReadOnly(false);
        genre->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        genre->setOpenLinks(false);

        gridLayout1->addWidget(genre, 4, 1, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout1->addWidget(label_17, 3, 0, 1, 1);

        place = new hyperlinked_text_edit(groupBox);
        place->setObjectName(QString::fromUtf8("place"));
        place->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        place->setOpenLinks(false);

        gridLayout1->addWidget(place, 3, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout1->addWidget(label_12, 11, 0, 1, 1);

        keyword = new hyperlinked_text_edit(groupBox);
        keyword->setObjectName(QString::fromUtf8("keyword"));
        keyword->setReadOnly(false);
        keyword->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        keyword->setOpenLinks(false);

        gridLayout1->addWidget(keyword, 11, 1, 1, 1);

        splitter->addWidget(groupBox);

        verticalLayout->addWidget(splitter);

        scrollArea->setWidget(scrollAreaWidgetContents);

        vboxLayout->addWidget(scrollArea);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        spacerItem11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem11);

        okButton = new QPushButton(centralwidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        sizePolicy.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy);
        okButton->setMinimumSize(QSize(170, 0));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon4);

        hboxLayout9->addWidget(okButton);

        queryButton = new QPushButton(centralwidget);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));
        queryButton->setMinimumSize(QSize(170, 0));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icons.d/16x16/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        queryButton->setIcon(icon5);

        hboxLayout9->addWidget(queryButton);

        resetButton = new QToolButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setMinimumSize(QSize(170, 0));
        resetButton->setPopupMode(QToolButton::MenuButtonPopup);

        hboxLayout9->addWidget(resetButton);

        printButton = new QPushButton(centralwidget);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        printButton->setMinimumSize(QSize(170, 0));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("icons.d/16x16/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        printButton->setIcon(icon6);

        hboxLayout9->addWidget(printButton);

        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(170, 0));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon7);

        hboxLayout9->addWidget(cancelButton);

        spacerItem12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem12);


        vboxLayout->addLayout(hboxLayout9);

        vgDialog->setCentralWidget(centralwidget);
        QWidget::setTabOrder(scrollArea, front_image);
        QWidget::setTabOrder(front_image, frontButton);
        QWidget::setTabOrder(frontButton, back_image);
        QWidget::setTabOrder(back_image, backButton);
        QWidget::setTabOrder(backButton, id);
        QWidget::setTabOrder(id, rating);
        QWidget::setTabOrder(rating, developer);
        QWidget::setTabOrder(developer, platform);
        QWidget::setTabOrder(platform, mode);
        QWidget::setTabOrder(mode, title);
        QWidget::setTabOrder(title, release_date);
        QWidget::setTabOrder(release_date, publisher);
        QWidget::setTabOrder(publisher, place);
        QWidget::setTabOrder(place, genre);
        QWidget::setTabOrder(genre, price);
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

        retranslateUi(vgDialog);

        QMetaObject::connectSlotsByName(vgDialog);
    } // setupUi

    void retranslateUi(QMainWindow *vgDialog)
    {
        vgDialog->setWindowTitle(QApplication::translate("vgDialog", "BiblioteQ", 0, QApplication::UnicodeUTF8));
        coverImages->setTitle(QApplication::translate("vgDialog", "Cover Images", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        front_image->setToolTip(QApplication::translate("vgDialog", "Front Cover Image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        frontButton->setText(QApplication::translate("vgDialog", "&Select", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        back_image->setToolTip(QApplication::translate("vgDialog", "Back Cover Image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        backButton->setText(QApplication::translate("vgDialog", "&Select", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("vgDialog", "Specific Information", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("vgDialog", "UPC", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("vgDialog", "Game Rating", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("vgDialog", "Developer(s)", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("vgDialog", "Platform", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("vgDialog", "Mode", 0, QApplication::UnicodeUTF8));
        mode->clear();
        mode->insertItems(0, QStringList()
         << QApplication::translate("vgDialog", "Multiplayer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("vgDialog", "Single Player", 0, QApplication::UnicodeUTF8)
        );
        groupBox->setTitle(QApplication::translate("vgDialog", "General Information", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("vgDialog", "Title", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("vgDialog", "Release Date", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("vgDialog", "Publisher", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("vgDialog", "Genres", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("vgDialog", "Price", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("vgDialog", "Language", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("vgDialog", "Monetary Units", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("vgDialog", "Copies", 0, QApplication::UnicodeUTF8));
        copiesButton->setText(QApplication::translate("vgDialog", "&Copies", 0, QApplication::UnicodeUTF8));
        showUserButton->setText(QApplication::translate("vgDialog", "&Reservation Status", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("vgDialog", "Location", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("vgDialog", "Abstract", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("vgDialog", "Place of Publication", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("vgDialog", "Keywords", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("vgDialog", "&OK", 0, QApplication::UnicodeUTF8));
        queryButton->setText(QApplication::translate("vgDialog", "&Z39.50 Query", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("vgDialog", "&Reset", 0, QApplication::UnicodeUTF8));
        printButton->setText(QApplication::translate("vgDialog", "&Print", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("vgDialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class vgDialog: public Ui_vgDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOGAMEINFO_H

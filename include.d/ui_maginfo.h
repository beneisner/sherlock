/********************************************************************************
** Form generated from reading UI file 'maginfo.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGINFO_H
#define UI_MAGINFO_H

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

class Ui_magDialog
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
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label;
    QLineEdit *lcnum;
    QLineEdit *id;
    QHBoxLayout *hboxLayout2;
    QSpinBox *volume;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout3;
    QSpinBox *issue;
    QSpacerItem *spacerItem5;
    QLineEdit *callnum;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_18;
    QLineEdit *deweynum;
    QSpacerItem *spacerItem6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QLineEdit *title;
    QLabel *label_13;
    QHBoxLayout *hboxLayout4;
    QDateEdit *publication_date;
    QSpacerItem *spacerItem7;
    QLabel *label_14;
    hyperlinked_text_edit *publisher;
    QLabel *label_15;
    QLabel *label_16;
    QDoubleSpinBox *price;
    QLabel *label_3;
    QHBoxLayout *hboxLayout5;
    QComboBox *language;
    QSpacerItem *spacerItem8;
    QLabel *label_4;
    QComboBox *monetary_units;
    QLabel *label_8;
    QHBoxLayout *hboxLayout6;
    QSpinBox *quantity;
    QGridLayout *gridLayout2;
    QPushButton *copiesButton;
    QPushButton *showUserButton;
    QSpacerItem *spacerItem9;
    QLabel *label_10;
    QHBoxLayout *hboxLayout7;
    QComboBox *location;
    QSpacerItem *spacerItem10;
    QLabel *label_7;
    QTextEdit *description;
    hyperlinked_text_edit *category;
    hyperlinked_text_edit *place;
    QLabel *label_17;
    QLabel *label_12;
    QTextEdit *marc_tags;
    QLabel *label_19;
    hyperlinked_text_edit *keyword;
    QHBoxLayout *hboxLayout8;
    QSpacerItem *spacerItem11;
    QPushButton *okButton;
    QToolButton *queryButton;
    QToolButton *resetButton;
    QPushButton *printButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem12;

    void setupUi(QMainWindow *magDialog)
    {
        if (magDialog->objectName().isEmpty())
            magDialog->setObjectName(QString::fromUtf8("magDialog"));
        magDialog->resize(990, 1602);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        magDialog->setWindowIcon(icon);
        centralwidget = new QWidget(magDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 966, 1533));
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
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lcnum = new QLineEdit(groupBox);
        lcnum->setObjectName(QString::fromUtf8("lcnum"));
        lcnum->setMaxLength(64);

        gridLayout->addWidget(lcnum, 3, 1, 1, 1);

        id = new QLineEdit(groupBox);
        id->setObjectName(QString::fromUtf8("id"));
        id->setMaxLength(32);

        gridLayout->addWidget(id, 0, 1, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        volume = new QSpinBox(groupBox);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setMinimum(1);
        volume->setMaximum(10000);

        hboxLayout2->addWidget(volume);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem4);


        gridLayout->addLayout(hboxLayout2, 1, 1, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        issue = new QSpinBox(groupBox);
        issue->setObjectName(QString::fromUtf8("issue"));
        issue->setMinimum(1);
        issue->setMaximum(10000);
        issue->setValue(1);

        hboxLayout3->addWidget(issue);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem5);


        gridLayout->addLayout(hboxLayout3, 2, 1, 1, 1);

        callnum = new QLineEdit(groupBox);
        callnum->setObjectName(QString::fromUtf8("callnum"));
        callnum->setMaxLength(64);

        gridLayout->addWidget(callnum, 4, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 5, 0, 1, 1);

        deweynum = new QLineEdit(groupBox);
        deweynum->setObjectName(QString::fromUtf8("deweynum"));
        deweynum->setMaxLength(64);

        gridLayout->addWidget(deweynum, 5, 1, 1, 1);

        spacerItem6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem6, 6, 0, 1, 1);

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

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        publication_date = new QDateEdit(groupBox_2);
        publication_date->setObjectName(QString::fromUtf8("publication_date"));
        publication_date->setCalendarPopup(true);

        hboxLayout4->addWidget(publication_date);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem7);


        gridLayout1->addLayout(hboxLayout4, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout1->addWidget(label_14, 2, 0, 1, 1);

        publisher = new hyperlinked_text_edit(groupBox_2);
        publisher->setObjectName(QString::fromUtf8("publisher"));
        publisher->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        publisher->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        publisher->setReadOnly(false);
        publisher->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        publisher->setOpenLinks(false);

        gridLayout1->addWidget(publisher, 2, 1, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout1->addWidget(label_15, 4, 0, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout1->addWidget(label_16, 5, 0, 1, 1);

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

        gridLayout1->addWidget(price, 5, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 6, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        language = new QComboBox(groupBox_2);
        language->setObjectName(QString::fromUtf8("language"));

        hboxLayout5->addWidget(language);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem8);


        gridLayout1->addLayout(hboxLayout5, 6, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 7, 0, 1, 1);

        monetary_units = new QComboBox(groupBox_2);
        monetary_units->setObjectName(QString::fromUtf8("monetary_units"));
        sizePolicy.setHeightForWidth(monetary_units->sizePolicy().hasHeightForWidth());
        monetary_units->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(monetary_units, 7, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout1->addWidget(label_8, 8, 0, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        quantity = new QSpinBox(groupBox_2);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setMinimum(1);
        quantity->setMaximum(5000);
        quantity->setValue(1);

        hboxLayout6->addWidget(quantity);

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


        hboxLayout6->addLayout(gridLayout2);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem9);


        gridLayout1->addLayout(hboxLayout6, 8, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout1->addWidget(label_10, 9, 0, 1, 1);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        location = new QComboBox(groupBox_2);
        location->setObjectName(QString::fromUtf8("location"));

        hboxLayout7->addWidget(location);

        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem10);


        gridLayout1->addLayout(hboxLayout7, 9, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout1->addWidget(label_7, 10, 0, 1, 1);

        description = new QTextEdit(groupBox_2);
        description->setObjectName(QString::fromUtf8("description"));
        description->setAcceptRichText(false);

        gridLayout1->addWidget(description, 10, 1, 1, 1);

        category = new hyperlinked_text_edit(groupBox_2);
        category->setObjectName(QString::fromUtf8("category"));
        category->setReadOnly(false);
        category->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        category->setOpenLinks(false);

        gridLayout1->addWidget(category, 4, 1, 1, 1);

        place = new hyperlinked_text_edit(groupBox_2);
        place->setObjectName(QString::fromUtf8("place"));
        place->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        place->setOpenLinks(false);

        gridLayout1->addWidget(place, 3, 1, 1, 1);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout1->addWidget(label_17, 3, 0, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout1->addWidget(label_12, 11, 0, 1, 1);

        marc_tags = new QTextEdit(groupBox_2);
        marc_tags->setObjectName(QString::fromUtf8("marc_tags"));
        marc_tags->setAcceptRichText(false);

        gridLayout1->addWidget(marc_tags, 11, 1, 1, 1);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout1->addWidget(label_19, 12, 0, 1, 1);

        keyword = new hyperlinked_text_edit(groupBox_2);
        keyword->setObjectName(QString::fromUtf8("keyword"));
        keyword->setReadOnly(false);
        keyword->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        keyword->setOpenLinks(false);

        gridLayout1->addWidget(keyword, 12, 1, 1, 1);

        splitter->addWidget(groupBox_2);

        verticalLayout->addWidget(splitter);

        scrollArea->setWidget(scrollAreaWidgetContents);

        vboxLayout->addWidget(scrollArea);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        spacerItem11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem11);

        okButton = new QPushButton(centralwidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        sizePolicy.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy);
        okButton->setMinimumSize(QSize(170, 0));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon4);

        hboxLayout8->addWidget(okButton);

        queryButton = new QToolButton(centralwidget);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));
        queryButton->setMinimumSize(QSize(170, 0));
        queryButton->setPopupMode(QToolButton::MenuButtonPopup);

        hboxLayout8->addWidget(queryButton);

        resetButton = new QToolButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setMinimumSize(QSize(170, 0));
        resetButton->setPopupMode(QToolButton::MenuButtonPopup);
        resetButton->setArrowType(Qt::NoArrow);

        hboxLayout8->addWidget(resetButton);

        printButton = new QPushButton(centralwidget);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        printButton->setMinimumSize(QSize(170, 0));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icons.d/16x16/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        printButton->setIcon(icon5);

        hboxLayout8->addWidget(printButton);

        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(170, 0));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon6);

        hboxLayout8->addWidget(cancelButton);

        spacerItem12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem12);


        vboxLayout->addLayout(hboxLayout8);

        magDialog->setCentralWidget(centralwidget);
        QWidget::setTabOrder(scrollArea, front_image);
        QWidget::setTabOrder(front_image, frontButton);
        QWidget::setTabOrder(frontButton, back_image);
        QWidget::setTabOrder(back_image, backButton);
        QWidget::setTabOrder(backButton, id);
        QWidget::setTabOrder(id, volume);
        QWidget::setTabOrder(volume, issue);
        QWidget::setTabOrder(issue, lcnum);
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

        retranslateUi(magDialog);

        QMetaObject::connectSlotsByName(magDialog);
    } // setupUi

    void retranslateUi(QMainWindow *magDialog)
    {
        magDialog->setWindowTitle(QApplication::translate("magDialog", "BiblioteQ", 0, QApplication::UnicodeUTF8));
        coverImages->setTitle(QApplication::translate("magDialog", "Cover Images", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        front_image->setToolTip(QApplication::translate("magDialog", "Front Cover Image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        frontButton->setText(QApplication::translate("magDialog", "&Select", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        back_image->setToolTip(QApplication::translate("magDialog", "Back Cover Image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        backButton->setText(QApplication::translate("magDialog", "&Select", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("magDialog", "Specific Information", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("magDialog", "Issue (Number)", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("magDialog", "LC Control Number", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("magDialog", "ISSN ([0-9]{4}-[0-9]{3}[0-9X])", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("magDialog", "Volume", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("magDialog", "Call Number", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("magDialog", "Dewey Class Number", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("magDialog", "General Information", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("magDialog", "Title", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("magDialog", "Publication Date", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("magDialog", "Publisher", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("magDialog", "Categories", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("magDialog", "Price", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("magDialog", "Language", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("magDialog", "Monetary Units", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("magDialog", "Copies", 0, QApplication::UnicodeUTF8));
        copiesButton->setText(QApplication::translate("magDialog", "&Copies", 0, QApplication::UnicodeUTF8));
        showUserButton->setText(QApplication::translate("magDialog", "&Reservation Status", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("magDialog", "Location", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("magDialog", "Abstract", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("magDialog", "Place of Publication", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("magDialog", "MARC Tags", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("magDialog", "Keywords", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("magDialog", "&OK", 0, QApplication::UnicodeUTF8));
        queryButton->setText(QApplication::translate("magDialog", "&Z39.50 Query", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("magDialog", "&Reset", 0, QApplication::UnicodeUTF8));
        printButton->setText(QApplication::translate("magDialog", "&Print", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("magDialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class magDialog: public Ui_magDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGINFO_H

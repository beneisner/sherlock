/********************************************************************************
** Form generated from reading UI file 'allinfo.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLINFO_H
#define UI_ALLINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_allDialog
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *idnumber;
    QLabel *label_2;
    QLineEdit *title;
    QLabel *label_13;
    QHBoxLayout *hboxLayout;
    QDateEdit *publication_date;
    QSpacerItem *spacerItem;
    QLabel *label_14;
    QLineEdit *publisher;
    QLabel *label_17;
    QTextEdit *category;
    QLabel *label_16;
    QDoubleSpinBox *price;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QComboBox *language;
    QSpacerItem *spacerItem1;
    QLabel *label_4;
    QComboBox *monetary_units;
    QLabel *label_7;
    QTextEdit *description;
    QLabel *label_8;
    QHBoxLayout *hboxLayout1;
    QSpinBox *quantity;
    QSpacerItem *spacerItem2;
    QLabel *label_10;
    QHBoxLayout *hboxLayout2;
    QComboBox *location;
    QSpacerItem *spacerItem3;
    QLabel *label_5;
    QTextEdit *keyword;
    QLabel *label_6;
    QCheckBox *available;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem4;
    QPushButton *okButton;
    QToolButton *resetButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem5;

    void setupUi(QMainWindow *allDialog)
    {
        if (allDialog->objectName().isEmpty())
            allDialog->setObjectName(QString::fromUtf8("allDialog"));
        allDialog->resize(640, 1002);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        allDialog->setWindowIcon(icon);
        centralwidget = new QWidget(allDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 632, 963));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(scrollAreaWidgetContents_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        idnumber = new QLineEdit(frame);
        idnumber->setObjectName(QString::fromUtf8("idnumber"));

        formLayout->setWidget(0, QFormLayout::FieldRole, idnumber);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        title = new QLineEdit(frame);
        title->setObjectName(QString::fromUtf8("title"));

        formLayout->setWidget(1, QFormLayout::FieldRole, title);

        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_13);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        publication_date = new QDateEdit(frame);
        publication_date->setObjectName(QString::fromUtf8("publication_date"));
        publication_date->setCalendarPopup(true);

        hboxLayout->addWidget(publication_date);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        formLayout->setLayout(2, QFormLayout::FieldRole, hboxLayout);

        label_14 = new QLabel(frame);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_14);

        publisher = new QLineEdit(frame);
        publisher->setObjectName(QString::fromUtf8("publisher"));

        formLayout->setWidget(3, QFormLayout::FieldRole, publisher);

        label_17 = new QLabel(frame);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_17);

        category = new QTextEdit(frame);
        category->setObjectName(QString::fromUtf8("category"));
        category->setReadOnly(false);
        category->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(4, QFormLayout::FieldRole, category);

        label_16 = new QLabel(frame);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_16);

        price = new QDoubleSpinBox(frame);
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

        formLayout->setWidget(5, QFormLayout::FieldRole, price);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        language = new QComboBox(frame);
        language->setObjectName(QString::fromUtf8("language"));

        gridLayout->addWidget(language, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 1, 1, 1);


        formLayout->setLayout(6, QFormLayout::FieldRole, gridLayout);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_4);

        monetary_units = new QComboBox(frame);
        monetary_units->setObjectName(QString::fromUtf8("monetary_units"));
        sizePolicy.setHeightForWidth(monetary_units->sizePolicy().hasHeightForWidth());
        monetary_units->setSizePolicy(sizePolicy);

        formLayout->setWidget(7, QFormLayout::FieldRole, monetary_units);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_7);

        description = new QTextEdit(frame);
        description->setObjectName(QString::fromUtf8("description"));
        description->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        description->setAcceptRichText(false);

        formLayout->setWidget(8, QFormLayout::FieldRole, description);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_8);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        quantity = new QSpinBox(frame);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setMinimum(1);
        quantity->setMaximum(5000);
        quantity->setValue(1);

        hboxLayout1->addWidget(quantity);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);


        formLayout->setLayout(9, QFormLayout::FieldRole, hboxLayout1);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_10);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        location = new QComboBox(frame);
        location->setObjectName(QString::fromUtf8("location"));

        hboxLayout2->addWidget(location);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);


        formLayout->setLayout(10, QFormLayout::FieldRole, hboxLayout2);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_5);

        keyword = new QTextEdit(frame);
        keyword->setObjectName(QString::fromUtf8("keyword"));
        keyword->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        keyword->setAcceptRichText(false);

        formLayout->setWidget(11, QFormLayout::FieldRole, keyword);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_6);

        available = new QCheckBox(frame);
        available->setObjectName(QString::fromUtf8("available"));

        formLayout->setWidget(12, QFormLayout::FieldRole, available);


        verticalLayout->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        vboxLayout->addWidget(scrollArea);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);

        okButton = new QPushButton(centralwidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy1);
        okButton->setMinimumSize(QSize(170, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon1);

        hboxLayout3->addWidget(okButton);

        resetButton = new QToolButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setMinimumSize(QSize(170, 0));
        resetButton->setPopupMode(QToolButton::MenuButtonPopup);

        hboxLayout3->addWidget(resetButton);

        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(170, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon2);

        hboxLayout3->addWidget(cancelButton);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem5);


        vboxLayout->addLayout(hboxLayout3);

        allDialog->setCentralWidget(centralwidget);
        QWidget::setTabOrder(scrollArea, idnumber);
        QWidget::setTabOrder(idnumber, title);
        QWidget::setTabOrder(title, publication_date);
        QWidget::setTabOrder(publication_date, publisher);
        QWidget::setTabOrder(publisher, category);
        QWidget::setTabOrder(category, price);
        QWidget::setTabOrder(price, language);
        QWidget::setTabOrder(language, monetary_units);
        QWidget::setTabOrder(monetary_units, description);
        QWidget::setTabOrder(description, quantity);
        QWidget::setTabOrder(quantity, location);
        QWidget::setTabOrder(location, keyword);
        QWidget::setTabOrder(keyword, available);
        QWidget::setTabOrder(available, okButton);
        QWidget::setTabOrder(okButton, resetButton);
        QWidget::setTabOrder(resetButton, cancelButton);

        retranslateUi(allDialog);

        QMetaObject::connectSlotsByName(allDialog);
    } // setupUi

    void retranslateUi(QMainWindow *allDialog)
    {
        allDialog->setWindowTitle(QApplication::translate("allDialog", "BiblioteQ: General Database Search", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("allDialog", "ID Number", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("allDialog", "Title", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("allDialog", "Publication Date", 0, QApplication::UnicodeUTF8));
        publication_date->setDisplayFormat(QApplication::translate("allDialog", "MM/yyyy", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("allDialog", "Publisher", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("allDialog", "Categories", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("allDialog", "Price", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("allDialog", "Language", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("allDialog", "Monetary Units", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("allDialog", "Abstract", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("allDialog", "Copies", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("allDialog", "Location", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("allDialog", "Keywords", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("allDialog", "Available", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("allDialog", "&Search", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("allDialog", "&Reset", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("allDialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class allDialog: public Ui_allDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLINFO_H

/********************************************************************************
** Form generated from reading UI file 'adminsetup.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSETUP_H
#define UI_ADMINSETUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminBrowser
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_3;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_4;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_5;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QTableWidget *table;
    QVBoxLayout *_2;
    QToolButton *addButton;
    QToolButton *deleteButton;
    QToolButton *saveButton;
    QFrame *line;
    QToolButton *reloadButton;
    QSpacerItem *spacer;
    QToolButton *cancelButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminBrowser)
    {
        if (adminBrowser->objectName().isEmpty())
            adminBrowser->setObjectName(QString::fromUtf8("adminBrowser"));
        adminBrowser->resize(707, 386);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        adminBrowser->setWindowIcon(icon);
        centralwidget = new QWidget(adminBrowser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(frame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        scrollArea = new QScrollArea(splitter);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 956, 105));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 3, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 4, 1, 1);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 5, 1, 1);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 0, 6, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 0, 7, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 0, 8, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 0, 9, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_15, 1, 2, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_16, 1, 3, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_17, 1, 4, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_18, 1, 5, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_19, 1, 6, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_20, 1, 7, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_21, 1, 8, 1, 1);

        label_22 = new QLabel(scrollAreaWidgetContents);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_22, 1, 9, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_23 = new QLabel(scrollAreaWidgetContents);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_23, 2, 3, 1, 1);

        label_24 = new QLabel(scrollAreaWidgetContents);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_24, 2, 4, 1, 1);

        label_25 = new QLabel(scrollAreaWidgetContents);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_25, 2, 9, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_26 = new QLabel(scrollAreaWidgetContents);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_26, 3, 1, 1, 1);

        label_27 = new QLabel(scrollAreaWidgetContents);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_27, 3, 2, 1, 1);

        label_28 = new QLabel(scrollAreaWidgetContents);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_28, 3, 5, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_29 = new QLabel(scrollAreaWidgetContents);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_29, 4, 6, 1, 1);

        label_30 = new QLabel(scrollAreaWidgetContents);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_30->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_30, 4, 7, 1, 1);

        label_31 = new QLabel(scrollAreaWidgetContents);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setPixmap(QPixmap(QString::fromUtf8("icons.d/16x16/ok.png")));
        label_31->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_31, 4, 8, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        splitter->addWidget(scrollArea);
        table = new QTableWidget(splitter);
        if (table->columnCount() < 5)
            table->setColumnCount(5);
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
        table->setObjectName(QString::fromUtf8("table"));
        table->setFocusPolicy(Qt::StrongFocus);
        table->setEditTriggers(QAbstractItemView::DoubleClicked);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::SingleSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setCornerButtonEnabled(false);
        splitter->addWidget(table);

        verticalLayout->addWidget(splitter);


        horizontalLayout->addWidget(frame);

        _2 = new QVBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        addButton = new QToolButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/32x32/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon1);
        addButton->setIconSize(QSize(32, 32));
        addButton->setAutoRaise(true);

        _2->addWidget(addButton);

        deleteButton = new QToolButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/32x32/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);
        deleteButton->setIconSize(QSize(32, 32));
        deleteButton->setAutoRaise(true);

        _2->addWidget(deleteButton);

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


        horizontalLayout->addLayout(_2);

        adminBrowser->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(adminBrowser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminBrowser->setStatusBar(statusbar);
        QWidget::setTabOrder(table, addButton);
        QWidget::setTabOrder(addButton, deleteButton);
        QWidget::setTabOrder(deleteButton, saveButton);
        QWidget::setTabOrder(saveButton, reloadButton);
        QWidget::setTabOrder(reloadButton, cancelButton);

        retranslateUi(adminBrowser);

        QMetaObject::connectSlotsByName(adminBrowser);
    } // setupUi

    void retranslateUi(QMainWindow *adminBrowser)
    {
        adminBrowser->setWindowTitle(QApplication::translate("adminBrowser", "BiblioteQ: Administrator Browser", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("adminBrowser", "Item Creation", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("adminBrowser", "Item Deletion", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("adminBrowser", "Item Returns", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("adminBrowser", "Item Reservations", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("adminBrowser", "Item Updates", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("adminBrowser", "Member Creation", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("adminBrowser", "Member Deletion", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("adminBrowser", "Member Updates", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("adminBrowser", "Reservation Histories", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("adminBrowser", "Administrator", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_3->setText(QApplication::translate("adminBrowser", "Circulation", 0, QApplication::UnicodeUTF8));
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        label_4->setText(QApplication::translate("adminBrowser", "Librarian", 0, QApplication::UnicodeUTF8));
        label_26->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
        label_5->setText(QApplication::translate("adminBrowser", "Membership", 0, QApplication::UnicodeUTF8));
        label_29->setText(QString());
        label_30->setText(QString());
        label_31->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("adminBrowser", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("adminBrowser", "Administrator", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("adminBrowser", "Circulation", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("adminBrowser", "Librarian", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("adminBrowser", "Membership", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("adminBrowser", "Add Administrator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("adminBrowser", "Delete Selected Administrator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("adminBrowser", "Save Changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        saveButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        reloadButton->setToolTip(QApplication::translate("adminBrowser", "Refresh Table", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("adminBrowser", "Close Browser", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class adminBrowser: public Ui_adminBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSETUP_H

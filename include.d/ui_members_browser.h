/********************************************************************************
** Form generated from reading UI file 'members_browser.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERS_BROWSER_H
#define UI_MEMBERS_BROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_membersBrowser
{
public:
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QComboBox *filtertype;
    QLineEdit *filter;
    QCheckBox *filterBox;
    QTableWidget *table;
    QVBoxLayout *vboxLayout1;
    QToolButton *addButton;
    QToolButton *deleteButton;
    QToolButton *modifyButton;
    QToolButton *historyButton;
    QToolButton *listButton;
    QToolButton *printButton;
    QFrame *line;
    QToolButton *checkoutButton;
    QFrame *line_3;
    QToolButton *grantButton;
    QToolButton *overdueButton;
    QToolButton *reloadButton;
    QSpacerItem *spacerItem;
    QToolButton *cancelButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *membersBrowser)
    {
        if (membersBrowser->objectName().isEmpty())
            membersBrowser->setObjectName(QString::fromUtf8("membersBrowser"));
        membersBrowser->resize(456, 634);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        membersBrowser->setWindowIcon(icon);
        centralwidget = new QWidget(membersBrowser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        vboxLayout = new QVBoxLayout(frame);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout1->addWidget(label);

        filtertype = new QComboBox(frame);
        filtertype->setObjectName(QString::fromUtf8("filtertype"));

        hboxLayout1->addWidget(filtertype);

        filter = new QLineEdit(frame);
        filter->setObjectName(QString::fromUtf8("filter"));
        filter->setMaxLength(128);

        hboxLayout1->addWidget(filter);

        filterBox = new QCheckBox(frame);
        filterBox->setObjectName(QString::fromUtf8("filterBox"));

        hboxLayout1->addWidget(filterBox);


        vboxLayout->addLayout(hboxLayout1);

        table = new QTableWidget(frame);
        if (table->columnCount() < 11)
            table->setColumnCount(11);
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
        table->setObjectName(QString::fromUtf8("table"));
        table->setFocusPolicy(Qt::StrongFocus);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::SingleSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setSortingEnabled(true);
        table->setCornerButtonEnabled(false);

        vboxLayout->addWidget(table);


        hboxLayout->addWidget(frame);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        addButton = new QToolButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/32x32/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon1);
        addButton->setIconSize(QSize(32, 32));
        addButton->setAutoRaise(true);

        vboxLayout1->addWidget(addButton);

        deleteButton = new QToolButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/32x32/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);
        deleteButton->setIconSize(QSize(32, 32));
        deleteButton->setAutoRaise(true);

        vboxLayout1->addWidget(deleteButton);

        modifyButton = new QToolButton(centralwidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/32x32/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        modifyButton->setIcon(icon3);
        modifyButton->setIconSize(QSize(32, 32));
        modifyButton->setAutoRaise(true);

        vboxLayout1->addWidget(modifyButton);

        historyButton = new QToolButton(centralwidget);
        historyButton->setObjectName(QString::fromUtf8("historyButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons.d/32x32/history.png"), QSize(), QIcon::Normal, QIcon::Off);
        historyButton->setIcon(icon4);
        historyButton->setIconSize(QSize(32, 32));
        historyButton->setAutoRaise(true);

        vboxLayout1->addWidget(historyButton);

        listButton = new QToolButton(centralwidget);
        listButton->setObjectName(QString::fromUtf8("listButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icons.d/32x32/stamp.png"), QSize(), QIcon::Normal, QIcon::Off);
        listButton->setIcon(icon5);
        listButton->setIconSize(QSize(32, 32));
        listButton->setAutoRaise(true);

        vboxLayout1->addWidget(listButton);

        printButton = new QToolButton(centralwidget);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("icons.d/32x32/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        printButton->setIcon(icon6);
        printButton->setIconSize(QSize(32, 32));
        printButton->setAutoRaise(true);

        vboxLayout1->addWidget(printButton);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line);

        checkoutButton = new QToolButton(centralwidget);
        checkoutButton->setObjectName(QString::fromUtf8("checkoutButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("icons.d/32x32/checkout.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkoutButton->setIcon(icon7);
        checkoutButton->setIconSize(QSize(32, 32));
        checkoutButton->setAutoRaise(true);

        vboxLayout1->addWidget(checkoutButton);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line_3);

        grantButton = new QToolButton(centralwidget);
        grantButton->setObjectName(QString::fromUtf8("grantButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("icons.d/32x32/permissions.png"), QSize(), QIcon::Normal, QIcon::Off);
        grantButton->setIcon(icon8);
        grantButton->setIconSize(QSize(32, 32));
        grantButton->setAutoRaise(true);

        vboxLayout1->addWidget(grantButton);

        overdueButton = new QToolButton(centralwidget);
        overdueButton->setObjectName(QString::fromUtf8("overdueButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("icons.d/32x32/date.png"), QSize(), QIcon::Normal, QIcon::Off);
        overdueButton->setIcon(icon9);
        overdueButton->setIconSize(QSize(32, 32));
        overdueButton->setAutoRaise(true);

        vboxLayout1->addWidget(overdueButton);

        reloadButton = new QToolButton(centralwidget);
        reloadButton->setObjectName(QString::fromUtf8("reloadButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("icons.d/32x32/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        reloadButton->setIcon(icon10);
        reloadButton->setIconSize(QSize(32, 32));
        reloadButton->setAutoRaise(true);

        vboxLayout1->addWidget(reloadButton);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        cancelButton = new QToolButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("icons.d/32x32/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon11);
        cancelButton->setIconSize(QSize(32, 32));
        cancelButton->setAutoRaise(true);

        vboxLayout1->addWidget(cancelButton);


        hboxLayout->addLayout(vboxLayout1);

        membersBrowser->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(membersBrowser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        membersBrowser->setStatusBar(statusbar);
        QWidget::setTabOrder(filtertype, filter);
        QWidget::setTabOrder(filter, filterBox);
        QWidget::setTabOrder(filterBox, table);
        QWidget::setTabOrder(table, addButton);
        QWidget::setTabOrder(addButton, deleteButton);
        QWidget::setTabOrder(deleteButton, modifyButton);
        QWidget::setTabOrder(modifyButton, historyButton);
        QWidget::setTabOrder(historyButton, listButton);
        QWidget::setTabOrder(listButton, printButton);
        QWidget::setTabOrder(printButton, checkoutButton);
        QWidget::setTabOrder(checkoutButton, grantButton);
        QWidget::setTabOrder(grantButton, overdueButton);
        QWidget::setTabOrder(overdueButton, reloadButton);
        QWidget::setTabOrder(reloadButton, cancelButton);

        retranslateUi(membersBrowser);

        QMetaObject::connectSlotsByName(membersBrowser);
    } // setupUi

    void retranslateUi(QMainWindow *membersBrowser)
    {
        membersBrowser->setWindowTitle(QApplication::translate("membersBrowser", "BiblioteQ: Members Browser", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("membersBrowser", "Filter", 0, QApplication::UnicodeUTF8));
        filtertype->clear();
        filtertype->insertItems(0, QStringList()
         << QApplication::translate("membersBrowser", "Member ID", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("membersBrowser", "Last Name", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        filterBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        filterBox->setText(QApplication::translate("membersBrowser", "Apply Filter", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("membersBrowser", "Member ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("membersBrowser", "First Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("membersBrowser", "Last Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("membersBrowser", "Member Since", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("membersBrowser", "Expiration Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("membersBrowser", "Books Reserved", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("membersBrowser", "CDs Reserved", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("membersBrowser", "DVDs Reserved", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = table->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("membersBrowser", "Journals Reserved", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = table->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("membersBrowser", "Magazines Reserved", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = table->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("membersBrowser", "Video Games Reserved", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("membersBrowser", "Add Member", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("membersBrowser", "Delete Selected Member", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        modifyButton->setToolTip(QApplication::translate("membersBrowser", "Modify Selected Member", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        historyButton->setToolTip(QApplication::translate("membersBrowser", "Show Selected Member's Reservation History", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        historyButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        listButton->setToolTip(QApplication::translate("membersBrowser", "List Selected Member's Reserved Items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        printButton->setToolTip(QApplication::translate("membersBrowser", "Print Selected Member's Reserved Items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        printButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        checkoutButton->setToolTip(QApplication::translate("membersBrowser", "Reserve Selected Item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        grantButton->setToolTip(QApplication::translate("membersBrowser", "Grant Privileges", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        overdueButton->setToolTip(QApplication::translate("membersBrowser", "List All Overdue Items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        reloadButton->setToolTip(QApplication::translate("membersBrowser", "Refresh Table", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("membersBrowser", "Close Browser", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class membersBrowser: public Ui_membersBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERS_BROWSER_H

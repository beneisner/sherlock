/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_historyDialog
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QTableWidget *table;
    QHBoxLayout *hboxLayout;
    QToolButton *prevTool;
    QSpacerItem *spacerItem;
    QPushButton *reloadButton;
    QPushButton *printButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem1;
    QToolButton *nextTool;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *historyDialog)
    {
        if (historyDialog->objectName().isEmpty())
            historyDialog->setObjectName(QString::fromUtf8("historyDialog"));
        historyDialog->resize(537, 332);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        historyDialog->setWindowIcon(icon);
        centralwidget = new QWidget(historyDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        table = new QTableWidget(frame);
        if (table->columnCount() < 12)
            table->setColumnCount(12);
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
        table->setObjectName(QString::fromUtf8("table"));
        table->setFocusPolicy(Qt::StrongFocus);
        table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::SingleSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setSortingEnabled(true);
        table->setCornerButtonEnabled(false);

        vboxLayout1->addWidget(table);


        vboxLayout->addWidget(frame);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        prevTool = new QToolButton(centralwidget);
        prevTool->setObjectName(QString::fromUtf8("prevTool"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/32x32/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        prevTool->setIcon(icon1);
        prevTool->setIconSize(QSize(32, 32));
        prevTool->setAutoRaise(true);

        hboxLayout->addWidget(prevTool);

        spacerItem = new QSpacerItem(51, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        reloadButton = new QPushButton(centralwidget);
        reloadButton->setObjectName(QString::fromUtf8("reloadButton"));
        reloadButton->setMinimumSize(QSize(105, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        reloadButton->setIcon(icon2);

        hboxLayout->addWidget(reloadButton);

        printButton = new QPushButton(centralwidget);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        printButton->setMinimumSize(QSize(105, 0));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/16x16/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        printButton->setIcon(icon3);

        hboxLayout->addWidget(printButton);

        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(105, 0));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon4);

        hboxLayout->addWidget(cancelButton);

        spacerItem1 = new QSpacerItem(21, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        nextTool = new QToolButton(centralwidget);
        nextTool->setObjectName(QString::fromUtf8("nextTool"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icons.d/32x32/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextTool->setIcon(icon5);
        nextTool->setIconSize(QSize(32, 32));
        nextTool->setAutoRaise(true);

        hboxLayout->addWidget(nextTool);


        vboxLayout->addLayout(hboxLayout);

        historyDialog->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(historyDialog);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        historyDialog->setStatusBar(statusbar);

        retranslateUi(historyDialog);

        QMetaObject::connectSlotsByName(historyDialog);
    } // setupUi

    void retranslateUi(QMainWindow *historyDialog)
    {
        historyDialog->setWindowTitle(QApplication::translate("historyDialog", "BiblioteQ: Member's Reservation History", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("historyDialog", "Member ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("historyDialog", "First Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("historyDialog", "Last Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("historyDialog", "Title", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("historyDialog", "ID Number", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("historyDialog", "Barcode", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("historyDialog", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("historyDialog", "Reservation Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = table->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("historyDialog", "Due Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = table->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("historyDialog", "Returned Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = table->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("historyDialog", "Lender", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = table->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("historyDialog", "MYOID", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        prevTool->setToolTip(QApplication::translate("historyDialog", "Previous Member", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        reloadButton->setText(QApplication::translate("historyDialog", "&Reload", 0, QApplication::UnicodeUTF8));
        printButton->setText(QApplication::translate("historyDialog", "&Print", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("historyDialog", "&Close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nextTool->setToolTip(QApplication::translate("historyDialog", "Next Member", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class historyDialog: public Ui_historyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H

/********************************************************************************
** Form generated from reading UI file 'errordiag.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIAG_H
#define UI_ERRORDIAG_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_errordialog
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QTableWidget *table;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *copyButton;
    QPushButton *resetButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem1;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *errordialog)
    {
        if (errordialog->objectName().isEmpty())
            errordialog->setObjectName(QString::fromUtf8("errordialog"));
        errordialog->resize(531, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        errordialog->setWindowIcon(icon);
        centralwidget = new QWidget(errordialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        table = new QTableWidget(frame);
        if (table->columnCount() < 6)
            table->setColumnCount(6);
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
        table->setObjectName(QString::fromUtf8("table"));
        table->setFocusPolicy(Qt::StrongFocus);
        table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table->setDragEnabled(false);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setSortingEnabled(true);
        table->setCornerButtonEnabled(true);

        vboxLayout1->addWidget(table);


        vboxLayout->addWidget(frame);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        copyButton = new QPushButton(centralwidget);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        copyButton->setMinimumSize(QSize(105, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyButton->setIcon(icon1);

        hboxLayout->addWidget(copyButton);

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setMinimumSize(QSize(105, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetButton->setIcon(icon2);

        hboxLayout->addWidget(resetButton);

        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(105, 0));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon3);

        hboxLayout->addWidget(cancelButton);

        spacerItem1 = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);

        errordialog->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(errordialog);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        errordialog->setStatusBar(statusbar);

        retranslateUi(errordialog);

        QMetaObject::connectSlotsByName(errordialog);
    } // setupUi

    void retranslateUi(QMainWindow *errordialog)
    {
        errordialog->setWindowTitle(QApplication::translate("errordialog", "BiblioteQ: Error Log", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("errordialog", "Event Time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("errordialog", "Event Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("errordialog", "Summary", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("errordialog", "Full Description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("errordialog", "File", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("errordialog", "Line Number", 0, QApplication::UnicodeUTF8));
        copyButton->setText(QApplication::translate("errordialog", "&To Clipboard", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("errordialog", "&Reset", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("errordialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class errordialog: public Ui_errordialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIAG_H

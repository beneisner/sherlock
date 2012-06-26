/********************************************************************************
** Form generated from reading UI file 'customquery.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMQUERY_H
#define UI_CUSTOMQUERY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customquery
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QSplitter *splitter;
    QGroupBox *tables_gb;
    QVBoxLayout *vboxLayout2;
    QTreeWidget *tables_t;
    QGroupBox *query_gb;
    QVBoxLayout *vboxLayout3;
    QTextEdit *query_te;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *execute_pb;
    QPushButton *close_pb;
    QSpacerItem *spacerItem1;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *customquery)
    {
        if (customquery->objectName().isEmpty())
            customquery->setObjectName(QString::fromUtf8("customquery"));
        customquery->resize(328, 638);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../.designer/backup/icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        customquery->setWindowIcon(icon);
        centralwidget = new QWidget(customquery);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        vboxLayout1->addWidget(label);


        vboxLayout->addWidget(frame);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        tables_gb = new QGroupBox(splitter);
        tables_gb->setObjectName(QString::fromUtf8("tables_gb"));
        vboxLayout2 = new QVBoxLayout(tables_gb);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        tables_t = new QTreeWidget(tables_gb);
        tables_t->setObjectName(QString::fromUtf8("tables_t"));
        tables_t->setAlternatingRowColors(true);
        tables_t->setSelectionMode(QAbstractItemView::NoSelection);
        tables_t->setUniformRowHeights(true);
        tables_t->setAnimated(true);
        tables_t->setColumnCount(0);

        vboxLayout2->addWidget(tables_t);

        splitter->addWidget(tables_gb);
        query_gb = new QGroupBox(splitter);
        query_gb->setObjectName(QString::fromUtf8("query_gb"));
        vboxLayout3 = new QVBoxLayout(query_gb);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        query_te = new QTextEdit(query_gb);
        query_te->setObjectName(QString::fromUtf8("query_te"));

        vboxLayout3->addWidget(query_te);

        splitter->addWidget(query_gb);

        vboxLayout->addWidget(splitter);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        execute_pb = new QPushButton(centralwidget);
        execute_pb->setObjectName(QString::fromUtf8("execute_pb"));
        execute_pb->setMinimumSize(QSize(105, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        execute_pb->setIcon(icon1);

        hboxLayout->addWidget(execute_pb);

        close_pb = new QPushButton(centralwidget);
        close_pb->setObjectName(QString::fromUtf8("close_pb"));
        close_pb->setMinimumSize(QSize(105, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        close_pb->setIcon(icon2);

        hboxLayout->addWidget(close_pb);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);

        customquery->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(customquery);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        customquery->setStatusBar(statusbar);

        retranslateUi(customquery);

        QMetaObject::connectSlotsByName(customquery);
    } // setupUi

    void retranslateUi(QMainWindow *customquery)
    {
        customquery->setWindowTitle(QApplication::translate("customquery", "BiblioteQ: Custom Query", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("customquery", "This panel is intended for advanced users who have an intimate knowledge of SQL and the database layout of BiblioteQ. Please note that retrieving image information (front_cover, back_cover) will burden the query.", 0, QApplication::UnicodeUTF8));
        tables_gb->setTitle(QApplication::translate("customquery", "Database Tables", 0, QApplication::UnicodeUTF8));
        query_gb->setTitle(QApplication::translate("customquery", "Query Statement", 0, QApplication::UnicodeUTF8));
        execute_pb->setText(QApplication::translate("customquery", "Execute", 0, QApplication::UnicodeUTF8));
        close_pb->setText(QApplication::translate("customquery", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class customquery: public Ui_customquery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMQUERY_H

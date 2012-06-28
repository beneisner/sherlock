/********************************************************************************
** Form generated from reading UI file 'tracks.ui'
**
** Created: Thu 28. Jun 15:34:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKS_H
#define UI_TRACKS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tracksDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QTableWidget *table;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *saveButton;
    QPushButton *insertButton;
    QPushButton *deleteButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *tracksDialog)
    {
        if (tracksDialog->objectName().isEmpty())
            tracksDialog->setObjectName(QString::fromUtf8("tracksDialog"));
        tracksDialog->resize(501, 290);
        tracksDialog->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        tracksDialog->setWindowIcon(icon);
        tracksDialog->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(tracksDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(tracksDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        table = new QTableWidget(frame);
        if (table->columnCount() < 4)
            table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table->setObjectName(QString::fromUtf8("table"));
        table->setFocusPolicy(Qt::StrongFocus);
        table->setEditTriggers(QAbstractItemView::DoubleClicked);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::SingleSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setCornerButtonEnabled(false);

        vboxLayout1->addWidget(table);


        vboxLayout->addWidget(frame);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        saveButton = new QPushButton(tracksDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setMinimumSize(QSize(105, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon1);

        hboxLayout->addWidget(saveButton);

        insertButton = new QPushButton(tracksDialog);
        insertButton->setObjectName(QString::fromUtf8("insertButton"));
        insertButton->setMinimumSize(QSize(105, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        insertButton->setIcon(icon2);

        hboxLayout->addWidget(insertButton);

        deleteButton = new QPushButton(tracksDialog);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(105, 0));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/16x16/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon3);

        hboxLayout->addWidget(deleteButton);

        cancelButton = new QPushButton(tracksDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(105, 0));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon4);

        hboxLayout->addWidget(cancelButton);

        spacerItem1 = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(table, saveButton);
        QWidget::setTabOrder(saveButton, insertButton);
        QWidget::setTabOrder(insertButton, deleteButton);
        QWidget::setTabOrder(deleteButton, cancelButton);

        retranslateUi(tracksDialog);

        QMetaObject::connectSlotsByName(tracksDialog);
    } // setupUi

    void retranslateUi(QDialog *tracksDialog)
    {
        tracksDialog->setWindowTitle(QApplication::translate("tracksDialog", "BiblioteQ: Album Tracks Browser", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("tracksDialog", "Album Number", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("tracksDialog", "Track Number", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("tracksDialog", "Track Title", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("tracksDialog", "Track Runtime", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("tracksDialog", "&Save", 0, QApplication::UnicodeUTF8));
        insertButton->setText(QApplication::translate("tracksDialog", "&Insert", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("tracksDialog", "&Delete", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("tracksDialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tracksDialog: public Ui_tracksDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKS_H

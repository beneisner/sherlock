/********************************************************************************
** Form generated from reading UI file 'copybrowser.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYBROWSER_H
#define UI_COPYBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_copybrowser
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QFrame *dueDateFrame;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *label;
    QDateEdit *dueDate;
    QSpacerItem *spacerItem1;
    QTableWidget *table;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QPushButton *saveButton;
    QPushButton *deleteButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem3;

    void setupUi(QDialog *copybrowser)
    {
        if (copybrowser->objectName().isEmpty())
            copybrowser->setObjectName(QString::fromUtf8("copybrowser"));
        copybrowser->resize(403, 360);
        copybrowser->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        copybrowser->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(copybrowser);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(copybrowser);
        frame->setObjectName(QString::fromUtf8("frame"));
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        dueDateFrame = new QFrame(frame);
        dueDateFrame->setObjectName(QString::fromUtf8("dueDateFrame"));
        vboxLayout2 = new QVBoxLayout(dueDateFrame);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label = new QLabel(dueDateFrame);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        dueDate = new QDateEdit(dueDateFrame);
        dueDate->setObjectName(QString::fromUtf8("dueDate"));
        dueDate->setCalendarPopup(true);

        hboxLayout->addWidget(dueDate);

        spacerItem1 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout2->addLayout(hboxLayout);


        vboxLayout1->addWidget(dueDateFrame);

        table = new QTableWidget(frame);
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
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setCornerButtonEnabled(false);

        vboxLayout1->addWidget(table);


        vboxLayout->addWidget(frame);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        saveButton = new QPushButton(copybrowser);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setMinimumSize(QSize(105, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon1);

        hboxLayout1->addWidget(saveButton);

        deleteButton = new QPushButton(copybrowser);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(105, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);

        hboxLayout1->addWidget(deleteButton);

        cancelButton = new QPushButton(copybrowser);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(105, 0));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon3);

        hboxLayout1->addWidget(cancelButton);

        spacerItem3 = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        vboxLayout->addLayout(hboxLayout1);

        QWidget::setTabOrder(dueDate, table);
        QWidget::setTabOrder(table, saveButton);
        QWidget::setTabOrder(saveButton, deleteButton);
        QWidget::setTabOrder(deleteButton, cancelButton);

        retranslateUi(copybrowser);

        QMetaObject::connectSlotsByName(copybrowser);
    } // setupUi

    void retranslateUi(QDialog *copybrowser)
    {
        copybrowser->setWindowTitle(QApplication::translate("copybrowser", "BiblioteQ: Copies Browser", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("copybrowser", "Due Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("copybrowser", "Title", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("copybrowser", "Barcode", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("copybrowser", "Availability", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("copybrowser", "MYOID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("copybrowser", "Copy Number", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("copybrowser", "&Save", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("copybrowser", "&Delete", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("copybrowser", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class copybrowser: public Ui_copybrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYBROWSER_H

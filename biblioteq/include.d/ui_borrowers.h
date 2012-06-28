/********************************************************************************
** Form generated from reading UI file 'borrowers.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWERS_H
#define UI_BORROWERS_H

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

class Ui_checkedOutDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QTableWidget *table;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *eraseButton;
    QPushButton *saveButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *checkedOutDialog)
    {
        if (checkedOutDialog->objectName().isEmpty())
            checkedOutDialog->setObjectName(QString::fromUtf8("checkedOutDialog"));
        checkedOutDialog->resize(404, 290);
        checkedOutDialog->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkedOutDialog->setWindowIcon(icon);
        checkedOutDialog->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(checkedOutDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(checkedOutDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        table = new QTableWidget(frame);
        if (table->columnCount() < 9)
            table->setColumnCount(9);
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
        table->setObjectName(QString::fromUtf8("table"));
        table->setFocusPolicy(Qt::StrongFocus);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::SingleSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setSortingEnabled(false);
        table->setCornerButtonEnabled(false);

        vboxLayout1->addWidget(table);


        vboxLayout->addWidget(frame);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        eraseButton = new QPushButton(checkedOutDialog);
        eraseButton->setObjectName(QString::fromUtf8("eraseButton"));
        eraseButton->setMinimumSize(QSize(105, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        eraseButton->setIcon(icon1);

        hboxLayout->addWidget(eraseButton);

        saveButton = new QPushButton(checkedOutDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setMinimumSize(QSize(105, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon2);

        hboxLayout->addWidget(saveButton);

        cancelButton = new QPushButton(checkedOutDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(105, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Times"));
        font.setPointSize(10);
        cancelButton->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon3);

        hboxLayout->addWidget(cancelButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(table, eraseButton);
        QWidget::setTabOrder(eraseButton, saveButton);
        QWidget::setTabOrder(saveButton, cancelButton);

        retranslateUi(checkedOutDialog);

        QMetaObject::connectSlotsByName(checkedOutDialog);
    } // setupUi

    void retranslateUi(QDialog *checkedOutDialog)
    {
        checkedOutDialog->setWindowTitle(QApplication::translate("checkedOutDialog", "BiblioteQ: Current Borrowers", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("checkedOutDialog", "Copy Number", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("checkedOutDialog", "Barcode", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("checkedOutDialog", "Member ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("checkedOutDialog", "First Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("checkedOutDialog", "Last Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("checkedOutDialog", "Reservation Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("checkedOutDialog", "Due Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("checkedOutDialog", "Lender", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = table->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("checkedOutDialog", "MYOID", 0, QApplication::UnicodeUTF8));
        eraseButton->setText(QApplication::translate("checkedOutDialog", "&Return", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("checkedOutDialog", "&Save", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("checkedOutDialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class checkedOutDialog: public Ui_checkedOutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWERS_H

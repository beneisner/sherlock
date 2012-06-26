/********************************************************************************
** Form generated from reading UI file 'z3950results.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Z3950RESULTS_H
#define UI_Z3950RESULTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_z3950ResultsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QSplitter *splitter;
    QGroupBox *recRet;
    QVBoxLayout *vboxLayout2;
    QListWidget *list;
    QGroupBox *recCont;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *title;
    QTextEdit *textarea;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *z3950ResultsDialog)
    {
        if (z3950ResultsDialog->objectName().isEmpty())
            z3950ResultsDialog->setObjectName(QString::fromUtf8("z3950ResultsDialog"));
        z3950ResultsDialog->resize(622, 373);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        z3950ResultsDialog->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(z3950ResultsDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(z3950ResultsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        splitter = new QSplitter(frame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        recRet = new QGroupBox(splitter);
        recRet->setObjectName(QString::fromUtf8("recRet"));
        vboxLayout2 = new QVBoxLayout(recRet);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        list = new QListWidget(recRet);
        list->setObjectName(QString::fromUtf8("list"));

        vboxLayout2->addWidget(list);

        splitter->addWidget(recRet);
        recCont = new QGroupBox(splitter);
        recCont->setObjectName(QString::fromUtf8("recCont"));
        vboxLayout3 = new QVBoxLayout(recCont);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(recCont);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        title = new QLineEdit(recCont);
        title->setObjectName(QString::fromUtf8("title"));

        horizontalLayout->addWidget(title);


        vboxLayout3->addLayout(horizontalLayout);

        textarea = new QTextEdit(recCont);
        textarea->setObjectName(QString::fromUtf8("textarea"));
        textarea->setReadOnly(true);

        vboxLayout3->addWidget(textarea);

        splitter->addWidget(recCont);

        vboxLayout1->addWidget(splitter);


        vboxLayout->addWidget(frame);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(z3950ResultsDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setMinimumSize(QSize(105, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon1);

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(z3950ResultsDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(105, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon2);

        hboxLayout->addWidget(cancelButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(list, title);
        QWidget::setTabOrder(title, textarea);
        QWidget::setTabOrder(textarea, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(z3950ResultsDialog);

        QMetaObject::connectSlotsByName(z3950ResultsDialog);
    } // setupUi

    void retranslateUi(QDialog *z3950ResultsDialog)
    {
        z3950ResultsDialog->setWindowTitle(QApplication::translate("z3950ResultsDialog", "BiblioteQ: Z39.50 Query Results", 0, QApplication::UnicodeUTF8));
        recRet->setTitle(QApplication::translate("z3950ResultsDialog", "&Records Retrieved", 0, QApplication::UnicodeUTF8));
        recCont->setTitle(QApplication::translate("z3950ResultsDialog", "Record &Contents", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("z3950ResultsDialog", "Title", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("z3950ResultsDialog", "&Select", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("z3950ResultsDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class z3950ResultsDialog: public Ui_z3950ResultsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Z3950RESULTS_H

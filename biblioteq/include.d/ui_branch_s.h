/********************************************************************************
** Form generated from reading UI file 'branch_s.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRANCH_S_H
#define UI_BRANCH_S_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_branchSelect
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QComboBox *branch_name;
    QSpacerItem *spacerItem;
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QVBoxLayout *verticalLayout;
    QFrame *file_frame;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QPushButton *fileButton;
    QLineEdit *filename;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_2;
    QFrame *db_frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_6;
    QHBoxLayout *hboxLayout2;
    QLineEdit *userid;
    QCheckBox *adminCheck;
    QLabel *label_5;
    QLineEdit *password;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *resetButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem2;

    void setupUi(QDialog *branchSelect)
    {
        if (branchSelect->objectName().isEmpty())
            branchSelect->setObjectName(QString::fromUtf8("branchSelect"));
        branchSelect->resize(575, 225);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        branchSelect->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(branchSelect);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_4 = new QLabel(branchSelect);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout->addWidget(label_4);

        branch_name = new QComboBox(branchSelect);
        branch_name->setObjectName(QString::fromUtf8("branch_name"));
        branch_name->setEditable(false);

        hboxLayout->addWidget(branch_name);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        verticalLayout_3->addLayout(hboxLayout);

        stackedWidget = new QStackedWidget(branchSelect);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout = new QVBoxLayout(page_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        file_frame = new QFrame(page_5);
        file_frame->setObjectName(QString::fromUtf8("file_frame"));
        hboxLayout1 = new QHBoxLayout(file_frame);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(file_frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("icons.d/32x32/fileopen.png")));

        hboxLayout1->addWidget(label_2);

        fileButton = new QPushButton(file_frame);
        fileButton->setObjectName(QString::fromUtf8("fileButton"));

        hboxLayout1->addWidget(fileButton);

        filename = new QLineEdit(file_frame);
        filename->setObjectName(QString::fromUtf8("filename"));
        filename->setReadOnly(true);

        hboxLayout1->addWidget(filename);


        verticalLayout->addWidget(file_frame);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        verticalLayout_2 = new QVBoxLayout(page_6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        db_frame = new QFrame(page_6);
        db_frame->setObjectName(QString::fromUtf8("db_frame"));
        sizePolicy.setHeightForWidth(db_frame->sizePolicy().hasHeightForWidth());
        db_frame->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(db_frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(db_frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("icons.d/32x32/database.png")));

        gridLayout->addWidget(label, 0, 0, 2, 1);

        label_6 = new QLabel(db_frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        userid = new QLineEdit(db_frame);
        userid->setObjectName(QString::fromUtf8("userid"));

        hboxLayout2->addWidget(userid);

        adminCheck = new QCheckBox(db_frame);
        adminCheck->setObjectName(QString::fromUtf8("adminCheck"));

        hboxLayout2->addWidget(adminCheck);


        gridLayout->addLayout(hboxLayout2, 0, 2, 1, 1);

        label_5 = new QLabel(db_frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        password = new QLineEdit(db_frame);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 1, 2, 1, 1);


        verticalLayout_2->addWidget(db_frame);

        stackedWidget->addWidget(page_6);

        verticalLayout_3->addWidget(stackedWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);

        okButton = new QPushButton(branchSelect);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setMinimumSize(QSize(105, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon1);

        hboxLayout3->addWidget(okButton);

        resetButton = new QPushButton(branchSelect);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setMinimumSize(QSize(105, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetButton->setIcon(icon2);

        hboxLayout3->addWidget(resetButton);

        cancelButton = new QPushButton(branchSelect);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(105, 0));
        cancelButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon3);

        hboxLayout3->addWidget(cancelButton);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);


        verticalLayout_3->addLayout(hboxLayout3);

        QWidget::setTabOrder(fileButton, filename);
        QWidget::setTabOrder(filename, userid);
        QWidget::setTabOrder(userid, adminCheck);
        QWidget::setTabOrder(adminCheck, password);
        QWidget::setTabOrder(password, okButton);
        QWidget::setTabOrder(okButton, resetButton);
        QWidget::setTabOrder(resetButton, cancelButton);

        retranslateUi(branchSelect);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(branchSelect);
    } // setupUi

    void retranslateUi(QDialog *branchSelect)
    {
        branchSelect->setWindowTitle(QApplication::translate("branchSelect", "BiblioteQ: Branch Selection", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("branchSelect", "Branch Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        fileButton->setText(QApplication::translate("branchSelect", "&Select SQLite Database", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_6->setText(QApplication::translate("branchSelect", "Userid", 0, QApplication::UnicodeUTF8));
        adminCheck->setText(QApplication::translate("branchSelect", "Administrator", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("branchSelect", "Password", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("branchSelect", "&Connect", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("branchSelect", "&Reset", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("branchSelect", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class branchSelect: public Ui_branchSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRANCH_S_H

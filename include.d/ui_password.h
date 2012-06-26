/********************************************************************************
** Form generated from reading UI file 'password.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORD_H
#define UI_PASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_passSelect
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *userid;
    QLabel *label_5;
    QLineEdit *password;
    QLabel *label_2;
    QLineEdit *passwordAgain;
    QLabel *label_3;
    QLineEdit *currentpassword;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem2;

    void setupUi(QDialog *passSelect)
    {
        if (passSelect->objectName().isEmpty())
            passSelect->setObjectName(QString::fromUtf8("passSelect"));
        passSelect->resize(406, 242);
        passSelect->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        passSelect->setWindowIcon(icon);
        passSelect->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(passSelect);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(passSelect);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("icons.d/32x32/unlock.png")));

        hboxLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        userid = new QLineEdit(frame);
        userid->setObjectName(QString::fromUtf8("userid"));
        userid->setReadOnly(true);

        gridLayout->addWidget(userid, 0, 1, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        password = new QLineEdit(frame);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 2, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        passwordAgain = new QLineEdit(frame);
        passwordAgain->setObjectName(QString::fromUtf8("passwordAgain"));
        passwordAgain->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordAgain, 3, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        currentpassword = new QLineEdit(frame);
        currentpassword->setObjectName(QString::fromUtf8("currentpassword"));
        currentpassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(currentpassword, 1, 1, 1, 1);


        hboxLayout->addLayout(gridLayout);


        vboxLayout->addWidget(frame);

        spacerItem = new QSpacerItem(382, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        okButton = new QPushButton(passSelect);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setMinimumSize(QSize(105, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon1);

        hboxLayout1->addWidget(okButton);

        cancelButton = new QPushButton(passSelect);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(105, 0));
        cancelButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon2);

        hboxLayout1->addWidget(cancelButton);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);


        vboxLayout->addLayout(hboxLayout1);

        QWidget::setTabOrder(userid, currentpassword);
        QWidget::setTabOrder(currentpassword, password);
        QWidget::setTabOrder(password, passwordAgain);
        QWidget::setTabOrder(passwordAgain, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(passSelect);

        QMetaObject::connectSlotsByName(passSelect);
    } // setupUi

    void retranslateUi(QDialog *passSelect)
    {
        passSelect->setWindowTitle(QApplication::translate("passSelect", "BiblioteQ: Password Selection", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_6->setText(QApplication::translate("passSelect", "Userid", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("passSelect", "New Password", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("passSelect", "Confirm Password", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("passSelect", "Current Password", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("passSelect", "&Save", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("passSelect", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class passSelect: public Ui_passSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORD_H

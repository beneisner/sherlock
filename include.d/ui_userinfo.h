/********************************************************************************
** Form generated from reading UI file 'userinfo.ui'
**
** Created: Tue Jun 26 01:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFO_H
#define UI_USERINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfo
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLineEdit *memberid;
    QLabel *label_9;
    QHBoxLayout *hboxLayout;
    QDateEdit *membersince;
    QSpacerItem *spacerItem;
    QLabel *label;
    QLineEdit *firstName;
    QLabel *label_4;
    QLineEdit *lastName;
    QLabel *label_8;
    QHBoxLayout *hboxLayout1;
    QLineEdit *middle;
    QSpacerItem *spacerItem1;
    QLabel *label_10;
    QHBoxLayout *hboxLayout2;
    QDateEdit *dob;
    QSpacerItem *spacerItem2;
    QLabel *label_11;
    QHBoxLayout *hboxLayout3;
    QComboBox *sex;
    QSpacerItem *spacerItem3;
    QLabel *label_2;
    QLineEdit *street;
    QLabel *label_6;
    QLineEdit *city;
    QLabel *label_7;
    QHBoxLayout *hboxLayout4;
    QComboBox *state;
    QLineEdit *zip;
    QLabel *label_3;
    QLineEdit *telephoneNumber;
    QLabel *label_12;
    QLineEdit *email;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout;
    QDateEdit *expirationdate;
    QSpacerItem *horizontalSpacer;
    QLabel *label_14;
    QDoubleSpinBox *overduefees;
    QLabel *label_15;
    QTextEdit *comments;
    QWidget *tab_2;
    QFormLayout *formLayout;
    QLabel *label_17;
    QLineEdit *memberclass;
    QLabel *label_16;
    QLineEdit *generalregistrationnumber;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout5;
    QToolButton *prevTool;
    QSpacerItem *spacerItem5;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem6;
    QToolButton *nextTool;

    void setupUi(QDialog *UserInfo)
    {
        if (UserInfo->objectName().isEmpty())
            UserInfo->setObjectName(QString::fromUtf8("UserInfo"));
        UserInfo->resize(433, 568);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        UserInfo->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(UserInfo);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(UserInfo);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout_2 = new QFormLayout(tab);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        memberid = new QLineEdit(tab);
        memberid->setObjectName(QString::fromUtf8("memberid"));
        memberid->setMaxLength(16);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, memberid);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        membersince = new QDateEdit(tab);
        membersince->setObjectName(QString::fromUtf8("membersince"));
        membersince->setEnabled(true);
        membersince->setReadOnly(false);
        membersince->setCalendarPopup(true);

        hboxLayout->addWidget(membersince);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        formLayout_2->setLayout(1, QFormLayout::FieldRole, hboxLayout);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label);

        firstName = new QLineEdit(tab);
        firstName->setObjectName(QString::fromUtf8("firstName"));
        firstName->setMaxLength(128);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, firstName);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        lastName = new QLineEdit(tab);
        lastName->setObjectName(QString::fromUtf8("lastName"));
        lastName->setMaxLength(128);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lastName);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_8);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        middle = new QLineEdit(tab);
        middle->setObjectName(QString::fromUtf8("middle"));
        middle->setMinimumSize(QSize(25, 0));
        middle->setMaximumSize(QSize(25, 16777215));
        middle->setMaxLength(1);

        hboxLayout1->addWidget(middle);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        formLayout_2->setLayout(4, QFormLayout::FieldRole, hboxLayout1);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_10);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        dob = new QDateEdit(tab);
        dob->setObjectName(QString::fromUtf8("dob"));
        dob->setReadOnly(false);
        dob->setCalendarPopup(true);

        hboxLayout2->addWidget(dob);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);


        formLayout_2->setLayout(5, QFormLayout::FieldRole, hboxLayout2);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_11);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        sex = new QComboBox(tab);
        sex->setObjectName(QString::fromUtf8("sex"));

        hboxLayout3->addWidget(sex);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);


        formLayout_2->setLayout(6, QFormLayout::FieldRole, hboxLayout3);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_2);

        street = new QLineEdit(tab);
        street->setObjectName(QString::fromUtf8("street"));
        street->setMaxLength(256);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, street);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_6);

        city = new QLineEdit(tab);
        city->setObjectName(QString::fromUtf8("city"));
        city->setMaxLength(256);

        formLayout_2->setWidget(8, QFormLayout::FieldRole, city);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_7);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        state = new QComboBox(tab);
        state->setObjectName(QString::fromUtf8("state"));

        hboxLayout4->addWidget(state);

        zip = new QLineEdit(tab);
        zip->setObjectName(QString::fromUtf8("zip"));
        zip->setMaxLength(5);

        hboxLayout4->addWidget(zip);


        formLayout_2->setLayout(9, QFormLayout::FieldRole, hboxLayout4);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_3);

        telephoneNumber = new QLineEdit(tab);
        telephoneNumber->setObjectName(QString::fromUtf8("telephoneNumber"));
        telephoneNumber->setMaxLength(32);

        formLayout_2->setWidget(10, QFormLayout::FieldRole, telephoneNumber);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(11, QFormLayout::LabelRole, label_12);

        email = new QLineEdit(tab);
        email->setObjectName(QString::fromUtf8("email"));
        email->setMaxLength(128);

        formLayout_2->setWidget(11, QFormLayout::FieldRole, email);

        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(12, QFormLayout::LabelRole, label_13);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        expirationdate = new QDateEdit(tab);
        expirationdate->setObjectName(QString::fromUtf8("expirationdate"));
        expirationdate->setCalendarPopup(true);

        horizontalLayout->addWidget(expirationdate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout_2->setLayout(12, QFormLayout::FieldRole, horizontalLayout);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_2->setWidget(13, QFormLayout::LabelRole, label_14);

        overduefees = new QDoubleSpinBox(tab);
        overduefees->setObjectName(QString::fromUtf8("overduefees"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(overduefees->sizePolicy().hasHeightForWidth());
        overduefees->setSizePolicy(sizePolicy);
        overduefees->setMinimum(0);
        overduefees->setMaximum(10000);
        overduefees->setSingleStep(0.01);

        formLayout_2->setWidget(13, QFormLayout::FieldRole, overduefees);

        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(14, QFormLayout::LabelRole, label_15);

        comments = new QTextEdit(tab);
        comments->setObjectName(QString::fromUtf8("comments"));
        comments->setAcceptRichText(false);

        formLayout_2->setWidget(14, QFormLayout::FieldRole, comments);

        tabWidget->addTab(tab, QString());
        label_9->raise();
        label->raise();
        firstName->raise();
        label_4->raise();
        lastName->raise();
        label_8->raise();
        label_10->raise();
        label_11->raise();
        label_2->raise();
        street->raise();
        label_6->raise();
        city->raise();
        label_7->raise();
        label_3->raise();
        telephoneNumber->raise();
        label_12->raise();
        email->raise();
        label_13->raise();
        label_14->raise();
        overduefees->raise();
        label_15->raise();
        comments->raise();
        label_5->raise();
        memberid->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayout = new QFormLayout(tab_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_17);

        memberclass = new QLineEdit(tab_2);
        memberclass->setObjectName(QString::fromUtf8("memberclass"));

        formLayout->setWidget(0, QFormLayout::FieldRole, memberclass);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_16);

        generalregistrationnumber = new QLineEdit(tab_2);
        generalregistrationnumber->setObjectName(QString::fromUtf8("generalregistrationnumber"));

        formLayout->setWidget(1, QFormLayout::FieldRole, generalregistrationnumber);

        tabWidget->addTab(tab_2, QString());

        vboxLayout->addWidget(tabWidget);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(5);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        prevTool = new QToolButton(UserInfo);
        prevTool->setObjectName(QString::fromUtf8("prevTool"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons.d/32x32/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        prevTool->setIcon(icon1);
        prevTool->setIconSize(QSize(32, 32));
        prevTool->setAutoRaise(true);

        hboxLayout5->addWidget(prevTool);

        spacerItem5 = new QSpacerItem(47, 41, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem5);

        okButton = new QPushButton(UserInfo);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setMinimumSize(QSize(105, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons.d/16x16/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon2);

        hboxLayout5->addWidget(okButton);

        cancelButton = new QPushButton(UserInfo);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(105, 0));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons.d/16x16/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon3);

        hboxLayout5->addWidget(cancelButton);

        spacerItem6 = new QSpacerItem(47, 41, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem6);

        nextTool = new QToolButton(UserInfo);
        nextTool->setObjectName(QString::fromUtf8("nextTool"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons.d/32x32/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextTool->setIcon(icon4);
        nextTool->setIconSize(QSize(32, 32));
        nextTool->setAutoRaise(true);

        hboxLayout5->addWidget(nextTool);


        vboxLayout->addLayout(hboxLayout5);

        QWidget::setTabOrder(tabWidget, memberid);
        QWidget::setTabOrder(memberid, membersince);
        QWidget::setTabOrder(membersince, firstName);
        QWidget::setTabOrder(firstName, lastName);
        QWidget::setTabOrder(lastName, middle);
        QWidget::setTabOrder(middle, dob);
        QWidget::setTabOrder(dob, sex);
        QWidget::setTabOrder(sex, street);
        QWidget::setTabOrder(street, city);
        QWidget::setTabOrder(city, state);
        QWidget::setTabOrder(state, zip);
        QWidget::setTabOrder(zip, telephoneNumber);
        QWidget::setTabOrder(telephoneNumber, email);
        QWidget::setTabOrder(email, expirationdate);
        QWidget::setTabOrder(expirationdate, overduefees);
        QWidget::setTabOrder(overduefees, comments);
        QWidget::setTabOrder(comments, memberclass);
        QWidget::setTabOrder(memberclass, generalregistrationnumber);
        QWidget::setTabOrder(generalregistrationnumber, prevTool);
        QWidget::setTabOrder(prevTool, okButton);
        QWidget::setTabOrder(okButton, cancelButton);
        QWidget::setTabOrder(cancelButton, nextTool);

        retranslateUi(UserInfo);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserInfo);
    } // setupUi

    void retranslateUi(QDialog *UserInfo)
    {
        UserInfo->setWindowTitle(QApplication::translate("UserInfo", "BiblioteQ: Borrower Information", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("UserInfo", "Member ID", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("UserInfo", "Member Since", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UserInfo", "First Name", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UserInfo", "Last Name", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("UserInfo", "Middle Initial", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("UserInfo", "Date of Birth", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("UserInfo", "Sex", 0, QApplication::UnicodeUTF8));
        sex->clear();
        sex->insertItems(0, QStringList()
         << QApplication::translate("UserInfo", "Female", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "Male", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("UserInfo", "Street", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("UserInfo", "City", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("UserInfo", "State & ZIP Code", 0, QApplication::UnicodeUTF8));
        state->clear();
        state->insertItems(0, QStringList()
         << QApplication::translate("UserInfo", "N/A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "AK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "AL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "AR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "AZ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "CA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "CO", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "CT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "DE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "FL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "GA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "HI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "IA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "ID", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "IL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "IN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "KS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "KY", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "LA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "MA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "MD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "ME", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "MI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "MN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "MO", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "MS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "MT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "NC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "ND", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "NE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "NH", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "NJ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "NM", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "NV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "NY", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "OH", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "OK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "OR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "PA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "RI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "SC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "SD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "TN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "TX", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "UT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "VA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "VT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "WA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "WI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "WV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UserInfo", "WY", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("UserInfo", "Telephone Number", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("UserInfo", "E-Mail Address", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("UserInfo", "Expiration Date", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("UserInfo", "Overdue Fees", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("UserInfo", "Comments", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("UserInfo", "General", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("UserInfo", "Class", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("UserInfo", "General Registration Number", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("UserInfo", "Site", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        prevTool->setToolTip(QApplication::translate("UserInfo", "Previous Member", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        prevTool->setText(QString());
        okButton->setText(QApplication::translate("UserInfo", "&Save", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("UserInfo", "&Close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nextTool->setToolTip(QApplication::translate("UserInfo", "Next Member", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        nextTool->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserInfo: public Ui_UserInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFO_H

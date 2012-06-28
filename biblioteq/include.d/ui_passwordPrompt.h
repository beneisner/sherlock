/********************************************************************************
** Form generated from reading UI file 'passwordPrompt.ui'
**
** Created: Thu 28. Jun 15:34:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDPROMPT_H
#define UI_PASSWORDPROMPT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_passwordDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *messageLabel;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *usernameLineEdit;
    QLabel *label_2;
    QLineEdit *passwordLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *passwordDialog)
    {
        if (passwordDialog->objectName().isEmpty())
            passwordDialog->setObjectName(QString::fromUtf8("passwordDialog"));
        passwordDialog->resize(450, 113);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons.d/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        passwordDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(passwordDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        messageLabel = new QLabel(passwordDialog);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));

        verticalLayout->addWidget(messageLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(passwordDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        usernameLineEdit = new QLineEdit(passwordDialog);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));

        gridLayout->addWidget(usernameLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(passwordDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        passwordLineEdit = new QLineEdit(passwordDialog);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineEdit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(passwordDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(usernameLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, buttonBox);

        retranslateUi(passwordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), passwordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), passwordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(passwordDialog);
    } // setupUi

    void retranslateUi(QDialog *passwordDialog)
    {
        passwordDialog->setWindowTitle(QApplication::translate("passwordDialog", "BiblioteQ: Proxy Authentication Required", 0, QApplication::UnicodeUTF8));
        messageLabel->setText(QApplication::translate("passwordDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("passwordDialog", "Username", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("passwordDialog", "Password", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class passwordDialog: public Ui_passwordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDPROMPT_H

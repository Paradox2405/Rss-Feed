/********************************************************************************
** Form generated from reading UI file 'AddFeedDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFEEDDIALOG_H
#define UI_ADDFEEDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddFeedDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QLabel *label;
    QLineEdit *linkLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddFeedDialog)
    {
        if (AddFeedDialog->objectName().isEmpty())
            AddFeedDialog->setObjectName(QString::fromUtf8("AddFeedDialog"));
        AddFeedDialog->resize(391, 111);
        gridLayout_2 = new QGridLayout(AddFeedDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(AddFeedDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        nameLineEdit = new QLineEdit(AddFeedDialog);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        gridLayout->addWidget(nameLineEdit, 0, 1, 1, 1);

        label = new QLabel(AddFeedDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        linkLineEdit = new QLineEdit(AddFeedDialog);
        linkLineEdit->setObjectName(QString::fromUtf8("linkLineEdit"));

        gridLayout->addWidget(linkLineEdit, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AddFeedDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(AddFeedDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddFeedDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddFeedDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddFeedDialog);
    } // setupUi

    void retranslateUi(QDialog *AddFeedDialog)
    {
        AddFeedDialog->setWindowTitle(QCoreApplication::translate("AddFeedDialog", "Add RSS source", nullptr));
        label_2->setText(QCoreApplication::translate("AddFeedDialog", "Feed Name", nullptr));
        label->setText(QCoreApplication::translate("AddFeedDialog", "RSS Link", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddFeedDialog: public Ui_AddFeedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFEEDDIALOG_H

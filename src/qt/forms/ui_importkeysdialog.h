/********************************************************************************
** Form generated from reading UI file 'importkeysdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTKEYSDIALOG_H
#define UI_IMPORTKEYSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportKeysDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *tabImportPrivateKey;
    QVBoxLayout *verticalLayout_Display;
    QHBoxLayout *horizontalLayout_1_ImportPrivateKey;
    QLabel *privateKeyWidgetLabel;
    QLineEdit *privateKey;
    QHBoxLayout *horizontalLayout_2_ImportPrivateKey;
    QLabel *privateKeyLabelWidgetLabel;
    QLineEdit *privateKeyLabel;
    QCheckBox *rescanCheckBox;
    QLabel *privateKeyImportTextMessage;
    QSpacerItem *verticalSpacer_ImportPrivateKey;
    QFrame *frame;
    QVBoxLayout *verticalLayout_Bottom;
    QHBoxLayout *horizontalLayout_Bottom;
    QLabel *overriddenByCommandLineLabel;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer_1;
    QLabel *statusLabel;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ImportKeysDialog)
    {
        if (ImportKeysDialog->objectName().isEmpty())
            ImportKeysDialog->setObjectName(QStringLiteral("ImportKeysDialog"));
        ImportKeysDialog->resize(560, 200);
        ImportKeysDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ImportKeysDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabImportPrivateKey = new QWidget(ImportKeysDialog);
        tabImportPrivateKey->setObjectName(QStringLiteral("tabImportPrivateKey"));
        verticalLayout_Display = new QVBoxLayout(tabImportPrivateKey);
        verticalLayout_Display->setObjectName(QStringLiteral("verticalLayout_Display"));
        verticalLayout_Display->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_1_ImportPrivateKey = new QHBoxLayout();
        horizontalLayout_1_ImportPrivateKey->setObjectName(QStringLiteral("horizontalLayout_1_ImportPrivateKey"));
        privateKeyWidgetLabel = new QLabel(tabImportPrivateKey);
        privateKeyWidgetLabel->setObjectName(QStringLiteral("privateKeyWidgetLabel"));
        privateKeyWidgetLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_ImportPrivateKey->addWidget(privateKeyWidgetLabel);

        privateKey = new QLineEdit(tabImportPrivateKey);
        privateKey->setObjectName(QStringLiteral("privateKey"));

        horizontalLayout_1_ImportPrivateKey->addWidget(privateKey);


        verticalLayout_Display->addLayout(horizontalLayout_1_ImportPrivateKey);

        horizontalLayout_2_ImportPrivateKey = new QHBoxLayout();
        horizontalLayout_2_ImportPrivateKey->setObjectName(QStringLiteral("horizontalLayout_2_ImportPrivateKey"));
        privateKeyLabelWidgetLabel = new QLabel(tabImportPrivateKey);
        privateKeyLabelWidgetLabel->setObjectName(QStringLiteral("privateKeyLabelWidgetLabel"));

        horizontalLayout_2_ImportPrivateKey->addWidget(privateKeyLabelWidgetLabel);

        privateKeyLabel = new QLineEdit(tabImportPrivateKey);
        privateKeyLabel->setObjectName(QStringLiteral("privateKeyLabel"));

        horizontalLayout_2_ImportPrivateKey->addWidget(privateKeyLabel);


        verticalLayout_Display->addLayout(horizontalLayout_2_ImportPrivateKey);

        rescanCheckBox = new QCheckBox(tabImportPrivateKey);
        rescanCheckBox->setObjectName(QStringLiteral("rescanCheckBox"));

        verticalLayout_Display->addWidget(rescanCheckBox);

        privateKeyImportTextMessage = new QLabel(tabImportPrivateKey);
        privateKeyImportTextMessage->setObjectName(QStringLiteral("privateKeyImportTextMessage"));

        verticalLayout_Display->addWidget(privateKeyImportTextMessage);

        verticalSpacer_ImportPrivateKey = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Display->addItem(verticalSpacer_ImportPrivateKey);


        verticalLayout->addWidget(tabImportPrivateKey);

        frame = new QFrame(ImportKeysDialog);
        frame->setObjectName(QStringLiteral("frame"));
        verticalLayout_Bottom = new QVBoxLayout(frame);
        verticalLayout_Bottom->setObjectName(QStringLiteral("verticalLayout_Bottom"));
        horizontalLayout_Bottom = new QHBoxLayout();
        horizontalLayout_Bottom->setObjectName(QStringLiteral("horizontalLayout_Bottom"));

        verticalLayout_Bottom->addLayout(horizontalLayout_Bottom);

        overriddenByCommandLineLabel = new QLabel(frame);
        overriddenByCommandLineLabel->setObjectName(QStringLiteral("overriddenByCommandLineLabel"));
        overriddenByCommandLineLabel->setTextFormat(Qt::PlainText);
        overriddenByCommandLineLabel->setWordWrap(true);

        verticalLayout_Bottom->addWidget(overriddenByCommandLineLabel);


        verticalLayout->addWidget(frame);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QStringLiteral("horizontalLayout_Buttons"));
        resetButton = new QPushButton(ImportKeysDialog);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(resetButton);

        horizontalSpacer_1 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_1);

        statusLabel = new QLabel(ImportKeysDialog);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setMinimumSize(QSize(200, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        statusLabel->setFont(font);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout_Buttons->addWidget(statusLabel);

        okButton = new QPushButton(ImportKeysDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(ImportKeysDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);

#ifndef QT_NO_SHORTCUT
        privateKeyLabelWidgetLabel->setBuddy(privateKeyLabel);
#endif // QT_NO_SHORTCUT

        retranslateUi(ImportKeysDialog);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(ImportKeysDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportKeysDialog)
    {
        ImportKeysDialog->setWindowTitle(QApplication::translate("ImportKeysDialog", "Import Private Key", Q_NULLPTR));
        privateKeyWidgetLabel->setText(QApplication::translate("ImportKeysDialog", "Private Key:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        privateKey->setToolTip(QApplication::translate("ImportKeysDialog", "Private key to import into your wallet", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        privateKeyLabelWidgetLabel->setToolTip(QApplication::translate("ImportKeysDialog", "Label for this private key in your wallet", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        privateKeyLabelWidgetLabel->setText(QApplication::translate("ImportKeysDialog", "Label (optional):", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        privateKeyLabel->setToolTip(QApplication::translate("ImportKeysDialog", "Label for this private key in your wallet", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        rescanCheckBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        rescanCheckBox->setText(QApplication::translate("ImportKeysDialog", "Rescan", Q_NULLPTR));
        privateKeyImportTextMessage->setText(QString());
        overriddenByCommandLineLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("ImportKeysDialog", "Reset this form.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QApplication::translate("ImportKeysDialog", "&Reset", Q_NULLPTR));
        statusLabel->setText(QString());
        okButton->setText(QApplication::translate("ImportKeysDialog", "&Import", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("ImportKeysDialog", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImportKeysDialog: public Ui_ImportKeysDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTKEYSDIALOG_H

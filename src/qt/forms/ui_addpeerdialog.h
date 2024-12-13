/********************************************************************************
** Form generated from reading UI file 'addpeerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPEERDIALOG_H
#define UI_ADDPEERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPeerDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *peerAddress;
    QLineEdit *peerPort;
    QPushButton *pushButton;

    void setupUi(QWidget *AddPeerDialog)
    {
        if (AddPeerDialog->objectName().isEmpty())
            AddPeerDialog->setObjectName(QStringLiteral("AddPeerDialog"));
        AddPeerDialog->resize(466, 186);
        verticalLayout_2 = new QVBoxLayout(AddPeerDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(AddPeerDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(AddPeerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        peerAddress = new QLineEdit(AddPeerDialog);
        peerAddress->setObjectName(QStringLiteral("peerAddress"));

        horizontalLayout->addWidget(peerAddress);

        peerPort = new QLineEdit(AddPeerDialog);
        peerPort->setObjectName(QStringLiteral("peerPort"));

        horizontalLayout->addWidget(peerPort);


        verticalLayout_2->addLayout(horizontalLayout);

        pushButton = new QPushButton(AddPeerDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(AddPeerDialog);

        QMetaObject::connectSlotsByName(AddPeerDialog);
    } // setupUi

    void retranslateUi(QWidget *AddPeerDialog)
    {
        AddPeerDialog->setWindowTitle(QApplication::translate("AddPeerDialog", "Add Peer", Q_NULLPTR));
        label->setText(QApplication::translate("AddPeerDialog", "Enter the peer details below.", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddPeerDialog", "Be careful! Do not blindly trust anyone that tells you to add their node.", Q_NULLPTR));
        peerAddress->setPlaceholderText(QApplication::translate("AddPeerDialog", "Enter the peer's address", Q_NULLPTR));
        peerPort->setPlaceholderText(QApplication::translate("AddPeerDialog", "Enter the peer's port", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddPeerDialog", "Add!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddPeerDialog: public Ui_AddPeerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPEERDIALOG_H

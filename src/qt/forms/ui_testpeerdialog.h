/********************************************************************************
** Form generated from reading UI file 'testpeerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTPEERDIALOG_H
#define UI_TESTPEERDIALOG_H

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

class Ui_TestPeerDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *peerAddress;
    QLineEdit *peerPort;
    QPushButton *pushButton;

    void setupUi(QWidget *TestPeerDialog)
    {
        if (TestPeerDialog->objectName().isEmpty())
            TestPeerDialog->setObjectName(QStringLiteral("TestPeerDialog"));
        TestPeerDialog->resize(466, 186);
        verticalLayout_2 = new QVBoxLayout(TestPeerDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(TestPeerDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(TestPeerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        peerAddress = new QLineEdit(TestPeerDialog);
        peerAddress->setObjectName(QStringLiteral("peerAddress"));

        horizontalLayout->addWidget(peerAddress);

        peerPort = new QLineEdit(TestPeerDialog);
        peerPort->setObjectName(QStringLiteral("peerPort"));

        horizontalLayout->addWidget(peerPort);


        verticalLayout_2->addLayout(horizontalLayout);

        pushButton = new QPushButton(TestPeerDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(TestPeerDialog);

        QMetaObject::connectSlotsByName(TestPeerDialog);
    } // setupUi

    void retranslateUi(QWidget *TestPeerDialog)
    {
        TestPeerDialog->setWindowTitle(QApplication::translate("TestPeerDialog", "Test Peer", Q_NULLPTR));
        label->setText(QApplication::translate("TestPeerDialog", "Enter the peer details below.", Q_NULLPTR));
        label_2->setText(QApplication::translate("TestPeerDialog", "Be careful! Do not blindly trust anyone that tells you to add their node.", Q_NULLPTR));
        peerAddress->setPlaceholderText(QApplication::translate("TestPeerDialog", "Enter the peer's address", Q_NULLPTR));
        peerPort->setPlaceholderText(QApplication::translate("TestPeerDialog", "Enter the peer's port", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TestPeerDialog", "Test!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TestPeerDialog: public Ui_TestPeerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTPEERDIALOG_H

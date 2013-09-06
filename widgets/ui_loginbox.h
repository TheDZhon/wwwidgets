/********************************************************************************
** Form generated from reading UI file 'loginbox.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINBOX_H
#define UI_LOGINBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginBox
{
public:
    QGridLayout *gridLayout_2;
    QLabel *labelHost;
    QLineEdit *host;
    QLabel *labelPort;
    QSpinBox *port;
    QLabel *labelUser;
    QLineEdit *user;
    QLabel *labelPassword;
    QLineEdit *password;
    QLabel *labelRepeat;
    QLineEdit *repeat;
    QSpacerItem *horizontalSpacer;
    QCheckBox *remember;
    QGroupBox *proxy;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *proxyHost;
    QLabel *label_4;
    QSpinBox *proxyPort;
    QLabel *label_5;
    QLineEdit *proxyUser;
    QLabel *label_6;
    QLineEdit *proxyPassword;
    QLabel *labelProxyRepeat;
    QLineEdit *proxyRepeat;

    void setupUi(QWidget *LoginBox)
    {
        if (LoginBox->objectName().isEmpty())
            LoginBox->setObjectName(QStringLiteral("LoginBox"));
        LoginBox->resize(401, 299);
        gridLayout_2 = new QGridLayout(LoginBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelHost = new QLabel(LoginBox);
        labelHost->setObjectName(QStringLiteral("labelHost"));
        labelHost->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelHost, 0, 0, 1, 1);

        host = new QLineEdit(LoginBox);
        host->setObjectName(QStringLiteral("host"));

        gridLayout_2->addWidget(host, 0, 1, 1, 2);

        labelPort = new QLabel(LoginBox);
        labelPort->setObjectName(QStringLiteral("labelPort"));

        gridLayout_2->addWidget(labelPort, 0, 3, 1, 1);

        port = new QSpinBox(LoginBox);
        port->setObjectName(QStringLiteral("port"));
        port->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        port->setMinimum(1);
        port->setMaximum(65535);
        port->setValue(80);

        gridLayout_2->addWidget(port, 0, 4, 1, 1);

        labelUser = new QLabel(LoginBox);
        labelUser->setObjectName(QStringLiteral("labelUser"));
        labelUser->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelUser, 1, 0, 1, 1);

        user = new QLineEdit(LoginBox);
        user->setObjectName(QStringLiteral("user"));

        gridLayout_2->addWidget(user, 1, 1, 1, 2);

        labelPassword = new QLabel(LoginBox);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelPassword, 2, 0, 1, 1);

        password = new QLineEdit(LoginBox);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(password, 2, 1, 1, 2);

        labelRepeat = new QLabel(LoginBox);
        labelRepeat->setObjectName(QStringLiteral("labelRepeat"));
        labelRepeat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelRepeat, 3, 0, 1, 1);

        repeat = new QLineEdit(LoginBox);
        repeat->setObjectName(QStringLiteral("repeat"));
        repeat->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(repeat, 3, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 4, 1, 1, 1);

        remember = new QCheckBox(LoginBox);
        remember->setObjectName(QStringLiteral("remember"));

        gridLayout_2->addWidget(remember, 4, 2, 1, 1);

        proxy = new QGroupBox(LoginBox);
        proxy->setObjectName(QStringLiteral("proxy"));
        proxy->setCheckable(true);
        proxy->setChecked(false);
        gridLayout = new QGridLayout(proxy);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(proxy);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        proxyHost = new QLineEdit(proxy);
        proxyHost->setObjectName(QStringLiteral("proxyHost"));

        gridLayout->addWidget(proxyHost, 0, 1, 1, 1);

        label_4 = new QLabel(proxy);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        proxyPort = new QSpinBox(proxy);
        proxyPort->setObjectName(QStringLiteral("proxyPort"));
        proxyPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        proxyPort->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        proxyPort->setMinimum(1);
        proxyPort->setMaximum(65535);
        proxyPort->setValue(8080);

        gridLayout->addWidget(proxyPort, 0, 3, 1, 1);

        label_5 = new QLabel(proxy);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        proxyUser = new QLineEdit(proxy);
        proxyUser->setObjectName(QStringLiteral("proxyUser"));

        gridLayout->addWidget(proxyUser, 1, 1, 1, 1);

        label_6 = new QLabel(proxy);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        proxyPassword = new QLineEdit(proxy);
        proxyPassword->setObjectName(QStringLiteral("proxyPassword"));
        proxyPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(proxyPassword, 2, 1, 1, 1);

        labelProxyRepeat = new QLabel(proxy);
        labelProxyRepeat->setObjectName(QStringLiteral("labelProxyRepeat"));
        labelProxyRepeat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelProxyRepeat, 3, 0, 1, 1);

        proxyRepeat = new QLineEdit(proxy);
        proxyRepeat->setObjectName(QStringLiteral("proxyRepeat"));
        proxyRepeat->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(proxyRepeat, 3, 1, 1, 1);


        gridLayout_2->addWidget(proxy, 5, 0, 1, 5);

#ifndef QT_NO_SHORTCUT
        labelHost->setBuddy(host);
        labelPort->setBuddy(port);
        labelUser->setBuddy(user);
        labelPassword->setBuddy(password);
        labelRepeat->setBuddy(repeat);
#endif // QT_NO_SHORTCUT

        retranslateUi(LoginBox);

        QMetaObject::connectSlotsByName(LoginBox);
    } // setupUi

    void retranslateUi(QWidget *LoginBox)
    {
        LoginBox->setWindowTitle(QApplication::translate("LoginBox", "LoginBox", 0));
        labelHost->setText(QApplication::translate("LoginBox", "&Host:", 0));
        labelPort->setText(QApplication::translate("LoginBox", "P&ort:", 0));
        labelUser->setText(QApplication::translate("LoginBox", "&User:", 0));
        labelPassword->setText(QApplication::translate("LoginBox", "&Password:", 0));
        labelRepeat->setText(QApplication::translate("LoginBox", "&Confirm:", 0));
#ifndef QT_NO_TOOLTIP
        remember->setToolTip(QApplication::translate("LoginBox", "Remember password across sessions", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        remember->setWhatsThis(QApplication::translate("LoginBox", "Checking this field will cause your password to be saved for future use.", 0));
#endif // QT_NO_WHATSTHIS
        remember->setText(QApplication::translate("LoginBox", "&Remember password", 0));
#ifndef QT_NO_TOOLTIP
        proxy->setToolTip(QApplication::translate("LoginBox", "Enable network proxy", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        proxy->setWhatsThis(QApplication::translate("LoginBox", "Enabling this group will allow you to enter data for a network proxy if your Internet provider requires one.", 0));
#endif // QT_NO_WHATSTHIS
        proxy->setTitle(QApplication::translate("LoginBox", "Pro&xy", 0));
        label_3->setText(QApplication::translate("LoginBox", "Host:", 0));
        label_4->setText(QApplication::translate("LoginBox", "Port:", 0));
        label_5->setText(QApplication::translate("LoginBox", "User:", 0));
        label_6->setText(QApplication::translate("LoginBox", "Password:", 0));
        labelProxyRepeat->setText(QApplication::translate("LoginBox", "Confirm:", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginBox: public Ui_LoginBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINBOX_H

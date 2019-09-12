/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QLabel *testoLogin;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QString::fromUtf8("DialogLogin"));
        DialogLogin->resize(391, 159);
        QFont font;
        font.setPointSize(16);
        DialogLogin->setFont(font);
        verticalLayoutWidget = new QWidget(DialogLogin);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 361, 131));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox {\n"
"background:rgb(171, 222, 255);\n"
"}"));
        testoLogin = new QLabel(groupBox);
        testoLogin->setObjectName(QString::fromUtf8("testoLogin"));
        testoLogin->setGeometry(QRect(0, 0, 361, 131));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(testoLogin->sizePolicy().hasHeightForWidth());
        testoLogin->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        testoLogin->setFont(font1);

        verticalLayout_2->addWidget(groupBox);


        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Dialog", nullptr));
        groupBox->setTitle(QString());
        testoLogin->setText(QApplication::translate("DialogLogin", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H

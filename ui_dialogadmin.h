/********************************************************************************
** Form generated from reading UI file 'dialogadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADMIN_H
#define UI_DIALOGADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAdmin
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextBrowser *listaUtenti;
    QScrollBar *verticalScrollBar;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *titolo;

    void setupUi(QDialog *DialogAdmin)
    {
        if (DialogAdmin->objectName().isEmpty())
            DialogAdmin->setObjectName(QString::fromUtf8("DialogAdmin"));
        DialogAdmin->resize(915, 549);
        gridLayoutWidget = new QWidget(DialogAdmin);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 60, 891, 481));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        listaUtenti = new QTextBrowser(gridLayoutWidget);
        listaUtenti->setObjectName(QString::fromUtf8("listaUtenti"));
        QFont font;
        font.setPointSize(14);
        listaUtenti->setFont(font);

        gridLayout->addWidget(listaUtenti, 0, 0, 1, 1);

        verticalScrollBar = new QScrollBar(gridLayoutWidget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalScrollBar, 0, 1, 1, 1);

        verticalLayoutWidget = new QWidget(DialogAdmin);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(380, 10, 151, 41));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        titolo = new QLabel(verticalLayoutWidget);
        titolo->setObjectName(QString::fromUtf8("titolo"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        titolo->setFont(font1);
        titolo->setStyleSheet(QString::fromUtf8("#titolo {\n"
"background: white;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(titolo);


        retranslateUi(DialogAdmin);

        QMetaObject::connectSlotsByName(DialogAdmin);
    } // setupUi

    void retranslateUi(QDialog *DialogAdmin)
    {
        DialogAdmin->setWindowTitle(QApplication::translate("DialogAdmin", "Dialog", nullptr));
        titolo->setText(QApplication::translate("DialogAdmin", "Elenco Utenti", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAdmin: public Ui_DialogAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADMIN_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *pageLayoutVertical;
    QGroupBox *pageBox;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *bodyPageLayoutVertical;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *nome_box;
    QLineEdit *cognome_box;
    QVBoxLayout *verticalLayout_14;
    QLineEdit *username_box;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *nPassword_box;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_5;
    QSpinBox *giorno;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_4;
    QSpinBox *mese;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_3;
    QSpinBox *anno;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_20;
    QRadioButton *sessoD;
    QVBoxLayout *verticalLayout_22;
    QRadioButton *sessoM;
    QVBoxLayout *verticalLayout_13;
    QPushButton *iscriviti_button;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *headerPageLayoutVertical_5;
    QGroupBox *loginBox;
    QWidget *verticalLayoutWidget_14;
    QVBoxLayout *verticalLayoutPassDim;
    QPushButton *RecuperoPassword;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_11;
    QLabel *label;
    QLineEdit *emailLogin_box;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_2;
    QLineEdit *passwordLogin_box;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(979, 645);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 761, 421));
        pageLayoutVertical = new QVBoxLayout(verticalLayoutWidget);
        pageLayoutVertical->setSpacing(6);
        pageLayoutVertical->setContentsMargins(11, 11, 11, 11);
        pageLayoutVertical->setObjectName(QString::fromUtf8("pageLayoutVertical"));
        pageLayoutVertical->setContentsMargins(0, 0, 0, 0);
        pageBox = new QGroupBox(verticalLayoutWidget);
        pageBox->setObjectName(QString::fromUtf8("pageBox"));
        pageBox->setStyleSheet(QString::fromUtf8("#pageBox {\n"
"background: rgb(255, 255, 255);\n"
"}\n"
""));
        pageBox->setFlat(true);
        verticalLayoutWidget_3 = new QWidget(pageBox);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 130, 761, 291));
        bodyPageLayoutVertical = new QVBoxLayout(verticalLayoutWidget_3);
        bodyPageLayoutVertical->setSpacing(6);
        bodyPageLayoutVertical->setContentsMargins(11, 11, 11, 11);
        bodyPageLayoutVertical->setObjectName(QString::fromUtf8("bodyPageLayoutVertical"));
        bodyPageLayoutVertical->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, -1, 10, -1);
        nome_box = new QLineEdit(verticalLayoutWidget_3);
        nome_box->setObjectName(QString::fromUtf8("nome_box"));
        QFont font;
        font.setPointSize(16);
        nome_box->setFont(font);
        nome_box->setStyleSheet(QString::fromUtf8("#nome_box{ \n"
"	border-width: 1px;\n"
"    border-style: solid;\n"
"    border-radius: 4px;\n"
"}"));

        horizontalLayout_2->addWidget(nome_box);

        cognome_box = new QLineEdit(verticalLayoutWidget_3);
        cognome_box->setObjectName(QString::fromUtf8("cognome_box"));
        cognome_box->setFont(font);
        cognome_box->setStyleSheet(QString::fromUtf8("#cognome_box {\n"
"	border-width: 1px;\n"
"    border-style: solid;\n"
"    border-radius: 4px;\n"
"}"));

        horizontalLayout_2->addWidget(cognome_box);


        bodyPageLayoutVertical->addLayout(horizontalLayout_2);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(10, -1, 10, -1);
        username_box = new QLineEdit(verticalLayoutWidget_3);
        username_box->setObjectName(QString::fromUtf8("username_box"));
        username_box->setFont(font);
        username_box->setStyleSheet(QString::fromUtf8("#username_box {\n"
"	border-width: 1px;\n"
"    border-style: solid;\n"
"    border-radius: 4px;\n"
"}"));

        verticalLayout_14->addWidget(username_box);


        bodyPageLayoutVertical->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(10, -1, 10, -1);
        nPassword_box = new QLineEdit(verticalLayoutWidget_3);
        nPassword_box->setObjectName(QString::fromUtf8("nPassword_box"));
        nPassword_box->setFont(font);
        nPassword_box->setStyleSheet(QString::fromUtf8("#nPassword_box {\n"
"	border-width: 1px;\n"
"    border-style: solid;\n"
"    border-radius: 4px;\n"
"}"));
        nPassword_box->setEchoMode(QLineEdit::Password);

        verticalLayout_15->addWidget(nPassword_box);


        bodyPageLayoutVertical->addLayout(verticalLayout_15);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(100);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(10, -1, -1, -1);
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(12);
        label_5->setFont(font1);

        verticalLayout_17->addWidget(label_5);

        giorno = new QSpinBox(verticalLayoutWidget_3);
        giorno->setObjectName(QString::fromUtf8("giorno"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(giorno->sizePolicy().hasHeightForWidth());
        giorno->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(14);
        giorno->setFont(font2);
        giorno->setStyleSheet(QString::fromUtf8("#giorno {\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-radius: 5px;\n"
"}"));
        giorno->setMinimum(1);
        giorno->setMaximum(31);
        giorno->setSingleStep(1);
        giorno->setStepType(QAbstractSpinBox::DefaultStepType);
        giorno->setValue(1);
        giorno->setDisplayIntegerBase(10);

        verticalLayout_17->addWidget(giorno);


        horizontalLayout_6->addLayout(verticalLayout_17);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font1);

        verticalLayout_16->addWidget(label_4);

        mese = new QSpinBox(verticalLayoutWidget_3);
        mese->setObjectName(QString::fromUtf8("mese"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mese->sizePolicy().hasHeightForWidth());
        mese->setSizePolicy(sizePolicy3);
        mese->setFont(font2);
        mese->setStyleSheet(QString::fromUtf8("#mese {\n"
"	border-width: 1px;\n"
"	border-color:black;\n"
"	border-style: solid;\n"
"	border-radius: 4px;\n"
"}"));
        mese->setMinimum(1);
        mese->setMaximum(12);
        mese->setStepType(QAbstractSpinBox::DefaultStepType);
        mese->setValue(1);

        verticalLayout_16->addWidget(mese);


        horizontalLayout_6->addLayout(verticalLayout_16);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        label_3->setFont(font3);

        verticalLayout_18->addWidget(label_3);

        anno = new QSpinBox(verticalLayoutWidget_3);
        anno->setObjectName(QString::fromUtf8("anno"));
        sizePolicy2.setHeightForWidth(anno->sizePolicy().hasHeightForWidth());
        anno->setSizePolicy(sizePolicy2);
        anno->setFont(font2);
        anno->setStyleSheet(QString::fromUtf8("#anno {\n"
"	border-width: 1px;\n"
"	border-color:black;\n"
"	border-style: solid;\n"
"	border-radius: 4px;\n"
"}"));
        anno->setMinimum(1900);
        anno->setMaximum(2020);
        anno->setStepType(QAbstractSpinBox::DefaultStepType);

        verticalLayout_18->addWidget(anno);


        horizontalLayout_6->addLayout(verticalLayout_18);


        horizontalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, 10, -1);
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        sessoD = new QRadioButton(verticalLayoutWidget_3);
        sessoD->setObjectName(QString::fromUtf8("sessoD"));
        sizePolicy2.setHeightForWidth(sessoD->sizePolicy().hasHeightForWidth());
        sessoD->setSizePolicy(sizePolicy2);
        sessoD->setFont(font);

        verticalLayout_20->addWidget(sessoD);


        horizontalLayout_5->addLayout(verticalLayout_20);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        sessoM = new QRadioButton(verticalLayoutWidget_3);
        sessoM->setObjectName(QString::fromUtf8("sessoM"));
        sizePolicy2.setHeightForWidth(sessoM->sizePolicy().hasHeightForWidth());
        sessoM->setSizePolicy(sizePolicy2);
        sessoM->setFont(font);

        verticalLayout_22->addWidget(sessoM);


        horizontalLayout_5->addLayout(verticalLayout_22);


        horizontalLayout_4->addLayout(horizontalLayout_5);


        bodyPageLayoutVertical->addLayout(horizontalLayout_4);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(10, -1, 10, -1);
        iscriviti_button = new QPushButton(verticalLayoutWidget_3);
        iscriviti_button->setObjectName(QString::fromUtf8("iscriviti_button"));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setWeight(75);
        iscriviti_button->setFont(font4);
        iscriviti_button->setStyleSheet(QString::fromUtf8("#iscriviti_button {\n"
"	color: white;\n"
"	border-width: 1px;\n"
"    border-style: solid;\n"
"    border-radius: 4px;\n"
"	border-color: black;\n"
"	background: rgb(43, 140, 7);\n"
"}\n"
""));
        iscriviti_button->setFlat(false);

        verticalLayout_13->addWidget(iscriviti_button);


        bodyPageLayoutVertical->addLayout(verticalLayout_13);

        verticalLayoutWidget_2 = new QWidget(pageBox);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 761, 131));
        headerPageLayoutVertical_5 = new QVBoxLayout(verticalLayoutWidget_2);
        headerPageLayoutVertical_5->setSpacing(6);
        headerPageLayoutVertical_5->setContentsMargins(11, 11, 11, 11);
        headerPageLayoutVertical_5->setObjectName(QString::fromUtf8("headerPageLayoutVertical_5"));
        headerPageLayoutVertical_5->setContentsMargins(0, 0, 0, 0);
        loginBox = new QGroupBox(verticalLayoutWidget_2);
        loginBox->setObjectName(QString::fromUtf8("loginBox"));
        loginBox->setStyleSheet(QString::fromUtf8("#loginBox {\n"
"background-color:#3b5998;\n"
"}\n"
""));
        loginBox->setFlat(true);
        verticalLayoutWidget_14 = new QWidget(loginBox);
        verticalLayoutWidget_14->setObjectName(QString::fromUtf8("verticalLayoutWidget_14"));
        verticalLayoutWidget_14->setGeometry(QRect(0, 90, 761, 89));
        verticalLayoutPassDim = new QVBoxLayout(verticalLayoutWidget_14);
        verticalLayoutPassDim->setSpacing(6);
        verticalLayoutPassDim->setContentsMargins(11, 11, 11, 11);
        verticalLayoutPassDim->setObjectName(QString::fromUtf8("verticalLayoutPassDim"));
        verticalLayoutPassDim->setContentsMargins(35, 0, 0, 0);
        RecuperoPassword = new QPushButton(verticalLayoutWidget_14);
        RecuperoPassword->setObjectName(QString::fromUtf8("RecuperoPassword"));
        RecuperoPassword->setEnabled(true);
        sizePolicy3.setHeightForWidth(RecuperoPassword->sizePolicy().hasHeightForWidth());
        RecuperoPassword->setSizePolicy(sizePolicy3);
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        RecuperoPassword->setFont(font5);
        RecuperoPassword->setStyleSheet(QString::fromUtf8("#RecuperoPassword {\n"
"	color:#9cb4d8;\n"
"}"));
        RecuperoPassword->setFlat(true);

        verticalLayoutPassDim->addWidget(RecuperoPassword, 0, Qt::AlignTop);

        layoutWidget = new QWidget(loginBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 761, 91));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, -1, -1, -1);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"	color: white;\n"
"\n"
"}"));

        verticalLayout_11->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        emailLogin_box = new QLineEdit(layoutWidget);
        emailLogin_box->setObjectName(QString::fromUtf8("emailLogin_box"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(emailLogin_box->sizePolicy().hasHeightForWidth());
        emailLogin_box->setSizePolicy(sizePolicy5);
        emailLogin_box->setFont(font);
        emailLogin_box->setStyleSheet(QString::fromUtf8("#emailLogin_box {\n"
"	border-width: 1px;\n"
"    border-style: solid;\n"
"    border-radius: 4px;\n"
"}"));

        verticalLayout_11->addWidget(emailLogin_box, 0, Qt::AlignHCenter|Qt::AlignTop);


        horizontalLayout->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("#label_2{\n"
"	color: white;\n"
"}"));

        verticalLayout_12->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        passwordLogin_box = new QLineEdit(layoutWidget);
        passwordLogin_box->setObjectName(QString::fromUtf8("passwordLogin_box"));
        sizePolicy4.setHeightForWidth(passwordLogin_box->sizePolicy().hasHeightForWidth());
        passwordLogin_box->setSizePolicy(sizePolicy4);
        passwordLogin_box->setFont(font);
        passwordLogin_box->setStyleSheet(QString::fromUtf8("#passwordLogin_box {\n"
"	border-width: 1px;\n"
"    border-style: solid;\n"
"    border-radius: 4px;\n"
"}"));

        verticalLayout_12->addWidget(passwordLogin_box, 0, Qt::AlignHCenter|Qt::AlignTop);


        horizontalLayout->addLayout(verticalLayout_12);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 20, 25, -1);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        QFont font6;
        font6.setPointSize(18);
        font6.setBold(true);
        font6.setWeight(75);
        pushButton->setFont(font6);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton {\n"
"	border-width: 2px;\n"
"    border-style: solid;\n"
"    border-radius: 4px;\n"
"	border-color: #29487d;	\n"
"	background-color: #4267b2;\n"
" 	color: white;\n"
"}"));

        verticalLayout_10->addWidget(pushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addLayout(verticalLayout_10);


        headerPageLayoutVertical_5->addWidget(loginBox);


        pageLayoutVertical->addWidget(pageBox);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        iscriviti_button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pageBox->setTitle(QString());
        nome_box->setPlaceholderText(QApplication::translate("MainWindow", "*Nome", nullptr));
        cognome_box->setText(QString());
        cognome_box->setPlaceholderText(QApplication::translate("MainWindow", "*Cognome", nullptr));
        username_box->setText(QString());
        username_box->setPlaceholderText(QApplication::translate("MainWindow", "*Numero di celllulare o e-mail", nullptr));
        nPassword_box->setPlaceholderText(QApplication::translate("MainWindow", "*Nuova Password", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Giorno", nullptr));
        giorno->setSpecialValueText(QApplication::translate("MainWindow", "21", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Mese", nullptr));
        mese->setSpecialValueText(QApplication::translate("MainWindow", "1", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Anno", nullptr));
        anno->setSpecialValueText(QApplication::translate("MainWindow", "1995", nullptr));
        sessoD->setText(QApplication::translate("MainWindow", "Donna", nullptr));
        sessoM->setText(QApplication::translate("MainWindow", "Uomo", nullptr));
        iscriviti_button->setText(QApplication::translate("MainWindow", "Iscriviti", nullptr));
        loginBox->setTitle(QString());
        RecuperoPassword->setText(QApplication::translate("MainWindow", "Non riccordi pi\303\271 come accedere all'account?", nullptr));
        label->setText(QApplication::translate("MainWindow", "Email o telefono", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Accedi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

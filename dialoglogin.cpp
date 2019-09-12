#include "dialoglogin.h"
#include "ui_dialoglogin.h"

/**
 * Costruttore dato dal sistema
 * @brief DialogLogin::DialogLogin
 * @param parent
 */
DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin)
{
    ui->setupUi(this);
}

/**
 * Distruttore
 * @brief DialogLogin::~DialogLogin
 */
DialogLogin::~DialogLogin()
{
    delete ui;
}

/**
 * costruttore dato in in input una stringa
 * @brief DialogLogin::DialogLogin
 * @param testo
 */
DialogLogin::DialogLogin(QString testo) :
    DialogLogin(nullptr)
{
    ui->testoLogin->setText(testo);
}


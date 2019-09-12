#include "dialogadmin.h"
#include "ui_dialogadmin.h"

/**
 * costruttore di Sistema
 * @brief DialogAdmin::DialogAdmin
 * @param parent
 */
DialogAdmin::DialogAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAdmin)
{
    ui->setupUi(this);
}

/**
 * Costruttore dato una stringa come input
 * @brief DialogAdmin::DialogAdmin
 * @param testo
 */

DialogAdmin::DialogAdmin(QString testo) :
    DialogAdmin(nullptr)
{
    ui->listaUtenti->setText(testo);
}



DialogAdmin::~DialogAdmin()
{
    delete ui;
}

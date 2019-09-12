#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QString"
#include "QtDebug"
#include "QFile"
#include "QMessageBox"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_iscriviti_button_clicked();

    void on_pushButton_clicked();

    void on_RecuperoPassword_clicked();

private:
    Ui::MainWindow *ui;
};

/**
 * @brief iscrizione dell'utente su file
 * @param nome
 * @param cognome
 * @param username
 * @param password
 * @param sesso
 * @param giorno
 * @param mese
 * @param anno
 */
void iscrizione(QString nome, QString cognome, QString username, QString password, QString sesso, int giorno, int mese, int anno);

/**
 *Verifica che un utente sia stato già registrato
 * @brief utenteEsiste
 * @param username
 * @return
 */
bool utenteEsiste(QString username);

/**
 * Lista di tutti gli utenti accessibile solo dall'admin
 * @brief datiUtenti
 * @return
 */
QString datiUtenti();
#endif // MAINWINDOW_H

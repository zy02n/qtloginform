#include "mainwindow.h"
#include "dialoglogin.h"
#include "ui_mainwindow.h"
#include "dialogadmin.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * email abbia come carattere iniziale Una lettere
 * @brief MainWindow::on_iscriviti_button_clicked
 */
void MainWindow::on_iscriviti_button_clicked()
{
    QString nome, cognome, username, password, sesso;
    bool write = true;
    int giorno, mese, anno;

    nome = ui->nome_box->text();
    cognome = ui->cognome_box->text();
    username = ui->username_box->text();
    password = ui->nPassword_box->text();

    if(ui->sessoD->isChecked())
        sesso = "Donna";
    else if(ui->sessoM->isChecked())
        sesso = "Uomo";

    giorno = ui->giorno->value();
    mese = ui->mese->value();
    anno = ui->anno->value();

    //primo controllo: nei campi che sono obbligatori controllare
    if(nome == "" || cognome == "" || username == "" || password == "" || sesso == "")
    {
        QMessageBox::information(nullptr, "Error_rimpiere_campi_vuoti", nullptr);
        write = false;

    }

    else {
        //pattern per e-mail e numero di telefono
        QString pattern_mail("^[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,}$");
        QString pattern_num("^[+]*[0-9]{10,14}$");
        QString pattern_password("^[A-Z0-9._-]+$");

        //viene creata l'espressione regolare, che ignora le maiuscole e minuscole
        QRegularExpression regex_mail(pattern_mail, QRegularExpression::CaseInsensitiveOption);
        QRegularExpression regex_num(pattern_num, QRegularExpression::CaseInsensitiveOption);
        QRegularExpression regex_password(pattern_password, QRegularExpression::CaseInsensitiveOption);

        if(!(regex_mail.match(username).hasMatch()) && !(regex_num.match(username).hasMatch()))
        {
            QMessageBox::information(nullptr, "Error_email_numtel_incorretti", nullptr);
            write = false;
        }

        if(!(regex_password.match(password).hasMatch()))
        {
            QMessageBox::information(nullptr, "Error_password_invalida", nullptr);
            write = false;
        }


        /**
        * Controllo: anni bisestili
        * Si ricorda che un anno è bisestile se è divisibile per 4 (es, 2012).
        * Se però è divisibile per 100 (es., 1900), non è bisestile. E’
        * tuttavia bisestile se è divisibile per 400 (es, 2000)
        */
        if(anno%4 == 0)
        {
            if(anno%100 == 0)
            {
                    if(mese == 2 && giorno > 28)
                    {
                        QMessageBox::information(nullptr, "error_data", nullptr);
                        write = false;
                    }

            }
            else{
                if(mese == 2 && giorno > 29)
                {
                    QMessageBox::information(nullptr, "error_data_anno_bisestivo", nullptr);
                    write = false;
                }
            }
        }
        else
        {
            if(mese == 2 && giorno > 28)
            {
                QMessageBox::information(nullptr, "error_data", nullptr);
                write = false;
            }
        }
    }
    if(write)
        iscrizione(nome, cognome, username, password, sesso, giorno, mese,anno);
}

/**
 * Iscrizione dell'utente
 * @brief iscrizione
 * @param nome
 * @param cognome
 * @param username
 * @param password
 * @param sesso
 * @param giorno
 * @param mese
 * @param anno
 */
void iscrizione(QString nome, QString cognome, QString username, QString password, QString sesso, int giorno, int mese, int anno)
{
    if(!utenteEsiste(username))
    {
        //se non esite crea il file altrimenti lo apre
        QFile mFile("password.csv");

        //verifica se il file viene aperto correttamente e non sovrascrive
        if (mFile.open(QIODevice::WriteOnly | QIODevice::Append))
        {
            QTextStream stream( &mFile );
            stream << nome << ", " << cognome << ", " << username << ", " << password << ", " << sesso << ", " << giorno << "/ " <<  mese << "/ " << anno << endl;

            //apertura di una Dialog di benvenuto
            DialogLogin iscritto("Benvenuto nuovo utente");
            iscritto.exec();
        }
        mFile.close();
    }
    else {
        DialogLogin errore_iscrizione("Error_utente_già_iscritto");
        errore_iscrizione.exec();
    }
}

/**
 * Verifica tramite username(email/telefono) dell'esistenza dell'utente
 * @brief utenteEsiste
 * @param username
 * @return true se l'utente è stato trovato, false altrimenti
 */
bool utenteEsiste(QString username)
{
    QFile rFile("password.csv");

    if(!rFile.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(nullptr, "Error_load_file_user_exist", rFile.errorString());
        rFile.close();
        return false;
    }

    QTextStream in(&rFile);
    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList dati_utente = line.split(", ");
        if(dati_utente[2] == username)
        {
            return true;
        }
    }

    rFile.close();
    return false;

}

/**
 * controllo che l'utente esista dentro il file
 * @brief login
 * @param username
 * @param password
 * @return true se l'utente è stato trovato, false altrimenti
 */
bool login(QString username, QString password)
{
    QFile rFile("password.csv");

    if(!rFile.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(nullptr, "Error_load_file_login", rFile.errorString());
        rFile.close();
        return false;
    }

    QTextStream in(&rFile);
    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList dati_utente = line.split(", ");
        if(dati_utente[2] == username && dati_utente[3] == password)
        {
            return true;
        }
    }

    rFile.close();
    return false;
}
/**
 * Al click del bottone viene verificata la correttezza del login utente/admin
 * @brief MainWindow::on_pushButton_clicked
 */
void MainWindow::on_pushButton_clicked()
{
    QString email, password;

    email = ui->emailLogin_box->text();
    password = ui->passwordLogin_box->text();
    if(email != "" && password != "")
    {
        if (email == "admin@pas.it" && password == "admin")
        {
            QString utenti = datiUtenti();
            DialogAdmin a(utenti);
            a.exec();

        }
        else if(login(email, password))
        {
            DialogLogin g("Utente_logato");
            g.exec();
        }
        else
            QMessageBox::information(nullptr, "Error_utente_non_loggato_correttamente", nullptr);

    }
}

/**
 * Accesso a tutti i dati da admin
 * @brief datiUtenti
 * @return una stringa contente tutti i dati degli utenti
 */
QString datiUtenti()
{
    QFile rFile("password.csv");

    if(!rFile.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(nullptr, "Error_admin", rFile.errorString());
        rFile.close();
        return "";
    }

    QTextStream in(&rFile);
    QString listaUtenti = in.readAll();
    rFile.close();
    return listaUtenti;

}

/**
 * al click del bottone password dimenticata, viene messa in pratica la procedura di ripristino
 * @brief MainWindow::on_RecuperoPassword_clicked
 */
void MainWindow::on_RecuperoPassword_clicked()
{
    QString username;
    username = ui->emailLogin_box->text();

    if(username != "" && utenteEsiste(username))
    {
        DialogLogin g("E-mail con procedura di ripristino inviata");
        g.exec();
    }
    else {
            QMessageBox::information(nullptr, "Error_numtel_email_non_trovati", nullptr);
    }
}

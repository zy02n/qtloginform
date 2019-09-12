# qtloginform
A login form using Qt libraries

Il progetto prevede la creazione di un’interfaccia grafica per la creazione di un form di inscrizione e login. 

Struttura dati Si prevede una struttura dati che consente la registrazione di un utente salvando i suoi dati in un file nel seguente formato: 
nome, cognome, username(e-mail o numero di telefono), nuova password, sesso, gg/mm/anno 

La registrazione non può essere fatta se il corrispettivo numero di telefono o e-mail sono già presenti nel file. 

Il login viene verificato prendendo username e password e confrontandoli con gli utenti registrati nel file. 

Se il login da esito positivo viene aperto un QFileDialog con l’avvenuto successo di login. 

Non si è prevista la registrazione automatica di admin a causa di mancanza di dati, di conseguenza al login di admin vengono verificate al momento le sue credenziali. 

Al login dell’admin vengono caricati tutti le credenziali degli utenti del file e mostrati con una nuova QFileDialog.  

Funzionalità  Le funzionalità previste sono le seguenti: 
• Iscrizione obbligatoria se non si è già registrati, con l’obbligo di inserire tutti i dati richiesti con i campi contenenti (*).   

I controlli previsti sono i seguenti:  

o Controllo su tutti i campi obbligatori, se non sono stati riempiti viene presentato una ” QMessageBox; 

o Controllo sull’email che deve avere come formatto: per esempio testo@dominio.it.

Il testo può essere composto da lettere, numeri e caratteri speciali.
La medesima composizione viene fatta per il dominio.
Mentre per quello che viene dopo il punto c’è una restrizione di almeno due caratteri e composta solo da caratteri.
Tale email viene verificata con un’espressione regolare facendo il matching tra l’e-mail e l’espressione regolare specificata;

o La medesima verifica viene fatta per la password con la restrizione che possa contenere solo lettere e numeri;
o Controllo sulla data che si suddivide in due parti:
  1. Controllo dell’anno che sia bisestivo di conseguenza avrà 366 giorni;
  2. Controllo il giorno immesso sia giusto in corrispondenza del mese di Febbraio che porta solo 28 giorni; 

Ogni controllo se non è andato a buon fine conterrà un QMessageBox, in caso contrario sarà aperta automaticamente una QFileLog contente l’esito dell’operazione effettuata. 0

Inoltre gli esiti dei controlli vengono avviati solo al click del bottone scriviti. 

Se ci sono più di un controllo non rispettato saranno presentati diversi QMessageBox.

• Login previsto è suddiviso in due parti: o Login admin: che viene verificata la sua e-mail e password in locale senza la necessità di caricare il tutto il file. Una volta verificate le sue credenziali viene aperta una QFileDialog che mi carica automaticamente tutti i dati del file. o Login admin: vengono verificate le sue credenziali, caricando record riga per riga dal file e confrontandoli. Se non trova le credenziali dell’utente nel file presenta un QMessageBox, altrimenti apre una finistra QFileDialog con un testo dell’avvenuta correttezza del login.

• Recupero credenziali: si prevede il recupero della password se la e-mail/numero di telefono dell’utente che la vuole recuperare viene trovata nel file, anche in questo caso si deve fare una ricerca sequenziale nel file facendo un controllo riga per riga. 

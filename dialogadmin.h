#ifndef DIALOGADMIN_H
#define DIALOGADMIN_H

#include <QDialog>
#include <QString>

namespace Ui {
class DialogAdmin;
}

class DialogAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAdmin(QWidget *parent = nullptr);
    ~DialogAdmin();

    DialogAdmin(QString testo);
private:
    Ui::DialogAdmin *ui;
};

#endif // DIALOGADMIN_H

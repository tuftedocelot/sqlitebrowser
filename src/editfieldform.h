#ifndef EDITFIELDFORM_H
#define EDITFIELDFORM_H

#include <QDialog>
#include "sqlitedb.h"

namespace Ui {
class editFieldForm;
}

class editFieldForm : public QDialog
{
    Q_OBJECT

public:
    editFieldForm(QWidget* parent = 0, Qt::WindowFlags fl = Qt::Window);
    ~editFieldForm();

    void setDB(DBBrowserDB &db);

    QString table_name;
    QString field_name;
    QString field_type;
    QString original_field_name;
    bool is_new;

public slots:
    virtual void setInitialValues( bool is_new, QString table, QString fld_name, QString fld_type );
    virtual void accept();
    virtual void checkInput();

private:
    DBBrowserDB pdb;
    Ui::editFieldForm *ui;
};

#endif // EDITFIELDFORM_H

#include "AddFeedDialog.h"
#include "ui_AddFeedDialog.h"

AddFeedDialog::AddFeedDialog(QWidget *parent) :
    QDialog(parent),
    _ui(new Ui::AddFeedDialog)
{
    _ui->setupUi(this);
}

AddFeedDialog::~AddFeedDialog()
{
    delete _ui;
}


// Gets the Name as a text
QString AddFeedDialog::GetNameLink()
{
    return _ui->nameLineEdit->text();
}


//Gets the link as a text
QString AddFeedDialog::GetFeedLink()
{
    return _ui->linkLineEdit->text();
}
// Clears textfields
void AddFeedDialog::Clear()
{
    _ui->nameLineEdit->clear();
    _ui->linkLineEdit->clear();
}

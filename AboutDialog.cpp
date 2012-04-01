#include "AboutDialog.h"
#include "ui_AboutDialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
		ui->setupUi(this);
		setWindowFlags( windowFlags() & ~Qt::WindowContextHelpButtonHint );
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

#include "weighning_operation.h"
#include "ui_weighning_operation.h"
#include "m_c_connected.h"

weighning_operation::weighning_operation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weighning_operation)
{
    ui->setupUi(this);
}

weighning_operation::~weighning_operation()
{
    delete ui;
}

void weighning_operation::on_pushButton_clicked()
{
    hide();
    m_c_connected mcc;
    mcc.setModal(true);
    mcc.exec();
}

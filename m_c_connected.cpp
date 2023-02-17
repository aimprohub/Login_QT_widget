#include "m_c_connected.h"
#include "ui_m_c_connected.h"
#include "weighning_operation.h"
#include "template_list.h"
m_c_connected::m_c_connected(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::m_c_connected)
{
    ui->setupUi(this);
}

m_c_connected::~m_c_connected()
{
    delete ui;
}

void m_c_connected::on_pushButton_4_clicked()
{
    hide();
    weighning_operation wo;
    wo.setModal(true);
    wo.exec();
}

void m_c_connected::on_pushButton_clicked()
{
    hide();
template_list t;
t.setModal(true);
t.exec();
}

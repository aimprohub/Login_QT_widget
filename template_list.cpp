#include "template_list.h"
#include "ui_template_list.h"
#include "main_menu.h"
#include "m_c_connected.h"

template_list::template_list(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::template_list)
{
    ui->setupUi(this);
    setWindowTitle("Login Page");
    QStringList heading;
    ui->tableWidget->setColumnCount(3);
    heading << "Srno" << "Template" << "Select";
    ui->tableWidget->setHorizontalHeaderLabels(heading);
}

template_list::~template_list()
{
    delete ui;
}

void template_list::on_back_templatelist_clicked()
{
    hide();
    main_menu m;
            m.setModal(true);
    m.exec();
}

void template_list::on_next_templatelist_clicked()
{
    hide();
    m_c_connected mcc;
    mcc.setModal(true);
    mcc.exec();
}

#include "main_menu.h"
#include "ui_main_menu.h"
#include "template_list.h"
#include "mainwindow.h"
#include "m_c_connected.h"

main_menu::main_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::main_menu)
{
    ui->setupUi(this);
    Timer = new QTimer(this);
    connect(Timer,SIGNAL(timeout()),SLOT(Timer_Timeout()));
    Timer->setInterval(1000);
    Timer->start();


}

main_menu::~main_menu()
{
    delete ui;
}


void main_menu::on_next_mainmenu_clicked()
{
    hide();
template_list t;
t.setModal(true);
t.exec();
}

void main_menu::on_logoff_mainmenu_clicked()
{
    this->hide();
//   MainWindow mw;
//   mw.setVisible(true);
m_c_connected mcc;
mcc.setModal(true);
mcc.exec();
}

void main_menu::Timer_Timeout()
{
    ui->time_mainmenu->setText(QDateTime::currentDateTime().toString());
}

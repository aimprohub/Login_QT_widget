#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "interface.h"
#include "main_menu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/DB/sqlite-tools/mysqldb.db");

    if(db.open()){
        ui->lblStatus->setText("Connected");
    }
    else
        ui->lblStatus->setText("Not Connected");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnLogin_clicked()
{
    QString username = ui->txtUername->text();
    QString password = ui->txtPassword->text();

    QSqlQuery query;
    if(!db.open())
        QMessageBox::information(this,"Information","Database not opened");

    query.prepare("select * from names WHERE username = '"+username+"' AND password= '"+password+"' ");
    if(query.exec()){

        int count=0;
        while(query.next()){
            count++;
        }
        if(count==1)
        {
            ui->lblStatus->setText("Username and Password are correct");

            db.close();
            this->hide();
//            Interface inter;
//            inter.setModal(true);
//            inter.exec();

            main_menu m;
            m.setModal(true);
            m.exec();

        }
        else
            ui->lblStatus->setText("Username and Password are incorrect");
    }
}


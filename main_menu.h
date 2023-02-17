#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <QDialog>
#include <QDebug>
#include <QTimer>
#include <QDateTime>

namespace Ui {
class main_menu;
}

class main_menu : public QDialog
{
    Q_OBJECT

public:
    explicit main_menu(QWidget *parent = nullptr);
    ~main_menu();

private slots:

    void on_next_mainmenu_clicked();

    void on_logoff_mainmenu_clicked();

    void Timer_Timeout();

private:
    Ui::main_menu *ui;
    QTimer *Timer;
};

#endif // MAIN_MENU_H

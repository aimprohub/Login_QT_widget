#ifndef TEMPLATE_LIST_H
#define TEMPLATE_LIST_H

#include <QDialog>

namespace Ui {
class template_list;
}

class template_list : public QDialog
{
    Q_OBJECT

public:
    explicit template_list(QWidget *parent = nullptr);
    ~template_list();

private slots:


    void on_back_templatelist_clicked();

    void on_next_templatelist_clicked();

private:
    Ui::template_list *ui;
};

#endif // TEMPLATE_LIST_H

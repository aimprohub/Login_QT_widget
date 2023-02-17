#ifndef WEIGHNING_OPERATION_H
#define WEIGHNING_OPERATION_H

#include <QDialog>

namespace Ui {
class weighning_operation;
}

class weighning_operation : public QDialog
{
    Q_OBJECT

public:
    explicit weighning_operation(QWidget *parent = nullptr);
    ~weighning_operation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::weighning_operation *ui;
};

#endif // WEIGHNING_OPERATION_H

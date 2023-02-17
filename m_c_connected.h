#ifndef M_C_CONNECTED_H
#define M_C_CONNECTED_H

#include <QDialog>

namespace Ui {
class m_c_connected;
}

class m_c_connected : public QDialog
{
    Q_OBJECT

public:
    explicit m_c_connected(QWidget *parent = nullptr);
    ~m_c_connected();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::m_c_connected *ui;
};

#endif // M_C_CONNECTED_H

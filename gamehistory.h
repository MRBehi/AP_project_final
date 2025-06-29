#ifndef GAMEHISTORY_H
#define GAMEHISTORY_H

#include <QDialog>

namespace Ui {
class gamehistory;
}

class gamehistory : public QDialog
{
    Q_OBJECT

public:
    explicit gamehistory(QWidget *parent = nullptr);
    ~gamehistory();

private:
    Ui::gamehistory *ui;
};

#endif // GAMEHISTORY_H

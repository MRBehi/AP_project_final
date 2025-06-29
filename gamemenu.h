#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <QDialog>

namespace Ui {
class gamemenu;
}

class gamemenu : public QDialog
{
    Q_OBJECT

public:
    explicit gamemenu(QWidget *parent = nullptr);
    ~gamemenu();

private:
    Ui::gamemenu *ui;
};

#endif // GAMEMENU_H

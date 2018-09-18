#ifndef WEEREENPROJECT_H
#define WEEREENPROJECT_H

#include <QMainWindow>

namespace Ui {
class WeerEenProject;
}

class WeerEenProject : public QMainWindow
{
    Q_OBJECT

public:
    explicit WeerEenProject(QWidget *parent = nullptr);
    ~WeerEenProject();

private:
    Ui::WeerEenProject *ui;
};

#endif // WEEREENPROJECT_H

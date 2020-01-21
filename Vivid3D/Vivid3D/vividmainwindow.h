#ifndef VIVIDMAINWINDOW_H
#define VIVIDMAINWINDOW_H

#include <QMainWindow>
#include "DockManager.h"



QT_BEGIN_NAMESPACE
namespace Ui { class VividMainWindow; }
QT_END_NAMESPACE

class VividMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    VividMainWindow(QWidget *parent = nullptr);
    ~VividMainWindow();

private:
    Ui::VividMainWindow *ui;
};
#endif // VIVIDMAINWINDOW_H

#include "vividmainwindow.h"
#include "ui_vividmainwindow.h"

VividMainWindow::VividMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VividMainWindow)
{
    ui->setupUi(this);
}

VividMainWindow::~VividMainWindow()
{
    delete ui;
}


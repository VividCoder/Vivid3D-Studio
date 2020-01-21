#include "vividmainwindow.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VividMainWindow w;
    w.show();
    QPushButton but ("Hey!",&w);
    but.show();



    return a.exec();
}

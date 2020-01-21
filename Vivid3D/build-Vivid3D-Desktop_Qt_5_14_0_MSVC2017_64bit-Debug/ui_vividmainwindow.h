/********************************************************************************
** Form generated from reading UI file 'vividmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIVIDMAINWINDOW_H
#define UI_VIVIDMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VividMainWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuVivid3D_Editor;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QOpenGLWidget *openGLWidget;

    void setupUi(QMainWindow *VividMainWindow)
    {
        if (VividMainWindow->objectName().isEmpty())
            VividMainWindow->setObjectName(QString::fromUtf8("VividMainWindow"));
        VividMainWindow->resize(800, 600);
        centralwidget = new QWidget(VividMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        VividMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VividMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuVivid3D_Editor = new QMenu(menubar);
        menuVivid3D_Editor->setObjectName(QString::fromUtf8("menuVivid3D_Editor"));
        VividMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(VividMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        VividMainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(VividMainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setAutoFillBackground(false);
        dockWidget->setFloating(false);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        openGLWidget = new QOpenGLWidget(dockWidgetContents);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(250, 130, 300, 200));
        dockWidget->setWidget(dockWidgetContents);
        VividMainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menubar->addAction(menuVivid3D_Editor->menuAction());

        retranslateUi(VividMainWindow);

        QMetaObject::connectSlotsByName(VividMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VividMainWindow)
    {
        VividMainWindow->setWindowTitle(QCoreApplication::translate("VividMainWindow", "VividMainWindow", nullptr));
        menuVivid3D_Editor->setTitle(QCoreApplication::translate("VividMainWindow", "Vivid3D Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VividMainWindow: public Ui_VividMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIVIDMAINWINDOW_H

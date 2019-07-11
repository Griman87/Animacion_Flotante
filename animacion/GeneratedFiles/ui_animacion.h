/********************************************************************************
** Form generated from reading UI file 'animacion.ui'
**
** Created: Tue 25. Feb 12:05:41 2014
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMACION_H
#define UI_ANIMACION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_animacionClass
{
public:
    QWidget *centralWidget;
    QPushButton *Boton_fijo;
    QPushButton *Boton_movil;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *animacionClass)
    {
        if (animacionClass->objectName().isEmpty())
            animacionClass->setObjectName(QString::fromUtf8("animacionClass"));
        animacionClass->resize(600, 400);
        animacionClass->setCursor(QCursor(Qt::BlankCursor));
        animacionClass->setMouseTracking(true);
        animacionClass->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralWidget = new QWidget(animacionClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setCursor(QCursor(Qt::BlankCursor));
        centralWidget->setMouseTracking(true);
        Boton_fijo = new QPushButton(centralWidget);
        Boton_fijo->setObjectName(QString::fromUtf8("Boton_fijo"));
        Boton_fijo->setGeometry(QRect(510, 10, 75, 23));
        Boton_movil = new QPushButton(centralWidget);
        Boton_movil->setObjectName(QString::fromUtf8("Boton_movil"));
        Boton_movil->setGeometry(QRect(270, 300, 24, 10));
        Boton_movil->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.4, cy: -0.3,fx: 0.4, fy:-0.3,radius: 1.3, stop: 0 rgba(255,0,0, 255), stop: 1 rgba(255, 0,0,100));\n"
"min-width: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background: qradialgradient(cx: 0.4, cy: -0.3,fx: 0.4, fy: -0.3,radius: 1.35, stop: 0 rgba(203, 168,226,100), stop: 1 rgba(203, 168,226, 255));\n"
"}"));
        animacionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(animacionClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 20));
        animacionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(animacionClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        animacionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(animacionClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        animacionClass->setStatusBar(statusBar);

        retranslateUi(animacionClass);

        QMetaObject::connectSlotsByName(animacionClass);
    } // setupUi

    void retranslateUi(QMainWindow *animacionClass)
    {
        animacionClass->setWindowTitle(QApplication::translate("animacionClass", "animacion", 0, QApplication::UnicodeUTF8));
        Boton_fijo->setText(QApplication::translate("animacionClass", "PushButton", 0, QApplication::UnicodeUTF8));
        Boton_movil->setText(QApplication::translate("animacionClass", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class animacionClass: public Ui_animacionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMACION_H

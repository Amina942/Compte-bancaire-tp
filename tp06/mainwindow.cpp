#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <generaltab.h>
#include <parametre.h>
MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
, ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("La classe QTabWidget");
    this->resize(QSize(300,300));
    widget_onglets->setMovable(true); //Permet de dépm=lacer les onglets
    widget_onglets->setTabPosition(QTabWidget::North);
    GeneralTab *General = new GeneralTab;
    Parametres *Param = new Parametres;
    widget_onglets->addTab(General,"Géneral");
    widget_onglets->addTab(Param,"Paramètres");
    setCentralWidget(widget_onglets);
}
MainWindow::~MainWindow()
{
    delete ui;
}

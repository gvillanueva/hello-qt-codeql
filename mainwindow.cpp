#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    char buffer[10];
    sprintf(buffer, "This is too many characters");

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

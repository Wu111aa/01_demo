#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int array[][3] = {
        {0, 1, 2},
        {0, 1, 2},
        {0, 1, 2}
    };
    qDebug() << sizeof(array);
}

MainWindow::~MainWindow()
{
    delete ui;
}


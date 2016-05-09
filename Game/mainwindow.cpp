#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windows.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_StartButton_pressed()
{
    ui->StartButton->setEnabled(false);
    Sleep(1000);
    ui->Text->setPlainText("Hello!");
    ui->progressBar->setValue(50);
    Sleep(1500);
    ui->Text->appendPlainText("This is my story.");
    ui->progressBar->setValue(100);
}

void MainWindow::on_progressBar_valueChanged(int value)
{
}

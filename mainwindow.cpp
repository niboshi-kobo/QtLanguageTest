#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::MainWindow)
{
	ui->setupUi(this);


	ui->lineEdit->setText(tr("Let's go eat sushi"));

}

MainWindow::~MainWindow()
{
	delete ui;
}

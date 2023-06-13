#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>


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


void MainWindow::on_pushButton_clicked()
{
    hide();
    window = new Window2(this);
    window->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    QString login = ui->login->text();
    QString password = ui->password->text();

    if (login == "u1" && password == "123"){
        QMessageBox::about(this, "Title", "you are logged");
    }
    else{
        delete ui;
        QMessageBox::warning(this, "Title", "you are not logged");
    }
}

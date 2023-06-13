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
    ui->label->setText("кнопка нажата");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton answer = QMessageBox::question(this, "Title", "TextInside", QMessageBox::Yes | QMessageBox::No);

    if (answer == QMessageBox::Yes){
        QApplication::quit();
    }
    else{
        qDebug() << "No";
    }
}

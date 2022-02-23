#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <csvreader.h>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CSVReader csv("D:\\Qt\\labs\\lab2\\lab2\\workers.csv");
    if (csv.is_open()) {
        employes = csv.readAll();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::findEmploye() {
    bool check = false;
    for (const auto &worker: employes) {
        if (worker.name == ui->editSearch->text()) {
            check = true;
            ui->textBrowser->append(
                        "Уникальный индефикатор: " + QString::fromStdString(std::to_string(worker.num)) + ", "
                        + "ИФО: " + worker.name + ", "
                        + "Дата рождения: " + QString::fromStdString(std::to_string(worker.year)) + ", "
                        + "Гендер: " + (worker.gender==0 ? "Male" : "Female") + "." );
        }
    }
    if(!check) {
        ui->textBrowser->append("Работник не найдет, попробуйте еще раз!");
    }
}

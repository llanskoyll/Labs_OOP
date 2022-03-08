#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <csvreader.h>
#include <csvwriterr.h>
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
    bool check = true;
    for (const auto &worker: employes) {
        if (worker.name == ui->editSearch->text()) {
            check = false;
            ui->textBrowser->append(
                        "Уникальный индефикатор : " + QString::fromStdString(std::to_string(worker.id)) + ", "
                        + "И.Ф : " + worker.name + ", "
                        + "Дата рождения: " + QString::fromStdString(std::to_string(worker.year)) + ", "
                        + "Пол : " + (worker.gender==0 ? "Мужской" : "Женский") + "." );
        }
    }
    if(check) {
        ui->textBrowser->append("Работник не найдет, попробуйте еще раз!");
    }
}

void MainWindow::saveEmploye() {

    CSVWritter fout("D:\\Qt\\labs\\lab3\\lab3\\new_workers.csv");
    fout.CSVSave(employes);
    ui->textBrowser->append("Success!");
}

void MainWindow::addEmploye() {

    Employe worker;

    worker.id = ui->editId->text().toUInt();
    worker.name = ui->editName->text();
    worker.year = ui->editBrth->text().toUInt();
    worker.gender = static_cast<Gender>(ui->comboBox->currentIndex());
    // Проверка на уже существующий ID

    bool check = true;
    for(const auto &workers: employes) {
        if(workers.id == worker.id) {
            check = false;
        }
    }
    if(check) {
        employes.push_back(worker);
        ui->textBrowser->append("You have successfully added operations");
        ui->textBrowser->append("Уникальный индефикатор : " + QString::fromStdString(std::to_string(worker.id)) +
                                ", И.Ф : " + worker.name + ", Дата рождение : " + QString::fromStdString(std::to_string(worker.year)) + ", Пол: " + (worker.gender==0 ? "Мужской" : "Женский") + "\n");
    } else  {
        ui->textBrowser->append("Такой уникальный индификатор уже существует, попробуйте еще раз!");
    }

}

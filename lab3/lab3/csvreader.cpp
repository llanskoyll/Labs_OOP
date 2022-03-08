#include "csvreader.h"
#include <iostream>
#include "functions.h"

CSVReader::CSVReader(const QString& filename) {
    this -> fin.open(filename.toLatin1().data());
}

CSVReader::~CSVReader() {
    this -> fin.close();
}

// ReadAll
std::vector<Employe>CSVReader::readAll() {
    std::vector<Employe> workes;
    std::string line;
    while(getline(this -> fin, line)) {
        auto worker = split(line,';');
        std::cout << worker[1] << std::endl;
        Employe worker_;
        worker_.id = std::stoi(worker[0]);
        worker_.name = QString::fromStdString(worker[1]);
        worker_.year = std::stoi(worker[2]);
        worker_.gender = static_cast<Gender>(std::stoi(worker[3]));
        workes.push_back(worker_);
    }
    return workes;
}

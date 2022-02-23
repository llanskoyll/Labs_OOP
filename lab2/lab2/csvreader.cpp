#include "csvreader.h"
#include <iostream>

CSVReader::CSVReader(const QString& filename) {
    this -> fin.open(filename.toLatin1().data());
}

CSVReader::~CSVReader() {
    this -> fin.close();
}
// Split
std::vector<std::string> CSVReader::split(const std::string& str, char sym) {
    std::vector<std::string> result; // результат
       int length_str = str.length();
       if (!str.empty()) { // Проверка на пустое строку
            std::string count = "";
            for(int i = 0; i < length_str; i++) {
                if(str[i] == sym) {
                    result.push_back(count);
                    count = "";
                } else {
                    count += str[i];
                }
            }
            result.push_back(count);
        }
        return result;
}
// ReadAll
std::vector<Employe>CSVReader::readAll() {
    std::vector<Employe> workes;
    std::string line;
    while(getline(this -> fin, line)) {
        auto worker = CSVReader::split(line,';');
        std::cout << worker[1] << std::endl;
        Employe worker_;
        worker_.num = std::stoi(worker[0]);
        worker_.name = QString::fromStdString(worker[1]);
        worker_.year = std::stoi(worker[2]);
        worker_.gender = static_cast<Gender>(std::stoi(worker[3]));
        workes.push_back(worker_);
    }
    return workes;
}

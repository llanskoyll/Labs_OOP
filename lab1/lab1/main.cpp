#include <iostream>
#include <vector>
#include <fstream> // Для работы с файлами
#include <algorithm>


enum Gender{ // Словарь
    male = 0,
    female = 1
};

struct Worker // Структура Элемента
{
    int id;
    std::string name;
    int year;
    Gender gender;
};

std::vector<std::string> split(const std::string &str, char sym) {

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

int main() {

    // Начинаем сортировать строки
    std::fstream file("D:\\Qt\\labs\\lab1\\lab1\\workers.csv");
    std::vector<Worker> workers;
    if(file.is_open()) {
        // Проверка на считывания файла
        while(!file.eof()) {
            // fin.eof флаг конца файла
            std::string line;
            getline(file, line);
            // считывает из потока и записыввает в line
            if(line != "") {

                auto workersVector = split(line, ';');
                Worker worker;
                // инициализация объекта по структуре
                worker.id = std::stoi(workersVector[0]);
                // Избегаем ошибка с символами в числе
                worker.name = workersVector[1];
                worker.year = std::stoi(workersVector[2]);
                worker.gender = static_cast<Gender>(std::stoi(workersVector[3]));
                // Stoi из строки в Enum
                workers.push_back(worker);

            }
        }
    }
    // Отсортировали массив строк

    // сортируем вектор
    std::sort(workers.begin(), workers.end(), [](const Worker &worker1, const Worker &worker2){
       return worker1.year < worker2.year;
    });
    file.close();

    // заполняем новый файл
    std::fstream in_out("D:\\Qt\\labs\\lab1\\lab1\\new_workers.csv");
    if(in_out.is_open()) {
        for(const auto &worker : workers) {
            if(worker.year < 2022 - 31){
                in_out << worker.id << ";" << worker.name << ";" << worker.year << ";" << worker.gender << std::endl;
                std::cout << worker.id << ", " << worker.name << ", " << worker.year << ", ";
                if(worker.gender == 0) {
                    std::cout << "male" << std::endl;
                } else {
                    std::cout << "female" << std::endl;
                }
            }
        }
    }
    in_out.close();

    return 0;
}


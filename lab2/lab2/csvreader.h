#ifndef CSVREADER_H
#define CSVREADER_H

#include <QString>
#include <fstream>
#include <employe.h>
#include <vector>

class CSVReader
{
    std::ifstream fin;
public:
    CSVReader(const QString& filename);
    ~CSVReader();
    bool is_open() const {return fin.is_open();}
    std::vector<std::string> split(const std::string& str, char sym); // метод split
    std::vector<Employe> readAll(); // метод чтения
};

#endif // CSVREADER_H

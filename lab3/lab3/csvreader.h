#ifndef CSVREADER_H
#define CSVREADER_H

#include <QString>
#include <fstream>
#include <employe.h>
#include <vector>
#include "mainwindow.h"

class CSVReader
{
    std::ifstream fin;
public:
    CSVReader(const QString& filename);
    ~CSVReader();
    bool is_open() const {return fin.is_open();}

    std::vector<Employe> readAll(); // метод чтения
};

#endif // CSVREADER_H

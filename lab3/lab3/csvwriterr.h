#ifndef CSVWRITERR_H
#define CSVWRITERR_H

#include <QString>
#include <iostream>
#include <fstream>
#include <vector>
#include <employe.h>


class CSVWritter
{
    std::fstream fout;
public:
    CSVWritter(const std::string& filename);
    ~CSVWritter();
    bool isOpen() const {
        return this->fout.is_open();
    }
    void CSVSave(const std::vector<Employe>& workes);
};

#endif // CSVWRITERR_H

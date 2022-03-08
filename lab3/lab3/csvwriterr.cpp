#include "csvwriterr.h"

CSVWritter::CSVWritter(const std::string& filename) {
     this->fout.open(filename);
}
CSVWritter::~CSVWritter() {
    this-> fout.close();
}
void CSVWritter::CSVSave(const std::vector<Employe>& workers) {
    if(this->fout.is_open()){
        for( auto worker:workers ){
            this->fout << worker.id << ';' << worker.name.toStdString() << ';' << worker.year << ';' << worker.gender << std::endl;
        }
    }
}

#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QString>

enum Gender {
    male = 0,
    female = 1
};
struct Employe
{
    int id;
    int year;
    int age = 2022 - year;
    QString name;
    Gender gender;
};

#endif // EMPLOYE_H

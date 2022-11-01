#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include <iostream>
#include <string>
#include <list>
using namespace std;

class Estudante {
    string StudentCode;
    string StudentName;
    string ClassCode;
    string Uccode;
public:
    Estudante();
    Estudante(string StudentCode, string StudentName, string Uccode, string ClassCode);
    string get_StudentCode() const;
    void set_StudentCode(string StudentCode2);
    string get_StudentName() const;
    void set_StudentName(string StudentName2);
    string get_UcCode() const;
    void set_UcCode(string UcCode2);
    string get_ClassCode() const;
    void set_ClassCode(string ClassCode2);
};
#endif
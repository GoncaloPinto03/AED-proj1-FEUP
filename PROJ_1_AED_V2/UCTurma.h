#ifndef UCTURMA_H
#define UCTURMA_H

#include <iostream>
#include <string>
using namespace std;

class UCTurma {
    string UcCode;
    string ClassCode;


public:
    UCTurma();
    string get_UcCode() const;
    void set_UcCode(string UcCode2);
    string get_ClassCode() const;
    void set_ClassCode(string ClassCode2);

};


#endif 
#include "Estudante.h"

using namespace std;

Estudante::Estudante() {
    StudentCode = "";
    StudentName = "";
    UcCode = "";
    ClassCode = "";
}
Estudante::Estudante(string StudentCode, string StudentName, string UcCode, string ClassCode){
    StudentCode = StudentCode;
    StudentName = StudentName;
    UcCode = UcCode;
    ClassCode = ClassCode;
}

string Estudante::get_StudentCode() const{
    return StudentCode;
}
void Estudante::set_StudentCode(string StudentCode2) {
    StudentCode = StudentCode2;
}

string Estudante::get_StudentName() const{
    return StudentName;
}
void Estudante::set_StudentName(string StudentName2) {
    StudentName = StudentName2;
}

string Estudante::get_UcCode() const {
    return UcCode;
}

void Estudante::set_UcCode(string UcCode2) {
    UcCode = UcCode2;
}

string Estudante::get_ClassCode() const {
    return ClassCode;
}

void Estudante::set_ClassCode(string ClassCode2) {
    ClassCode = ClassCode2;
}






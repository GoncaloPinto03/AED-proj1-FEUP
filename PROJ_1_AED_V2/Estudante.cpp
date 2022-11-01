#include "Estudante.h"

using namespace std;

Estudante::Estudante() {
    StudentCode = "";
    StudentName = "";
    Uccode = "";
    ClassCode = "";
}
Estudante::Estudante(string StudentCode, string StudentName, string Uccode, string ClassCode){
    StudentCode = StudentCode;
    StudentName = StudentName;
    Uccode = Uccode;
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
    return Uccode;
}

void Estudante::set_UcCode(string Uccode2) {
    Uccode = Uccode2;
}

string Estudante::get_ClassCode() const {
    return ClassCode;
}

void Estudante::set_ClassCode(string Classcode2) {
    ClassCode = Classcode2;
}






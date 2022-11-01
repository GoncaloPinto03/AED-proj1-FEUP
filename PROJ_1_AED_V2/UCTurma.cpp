#include "UCTurma.h"

using namespace std;

UCTurma::UCTurma() {
    UcCode = "";
    ClassCode = "";
    ClassSize = 0;
}

string UCTurma::get_UcCode() const {
    return UcCode;
}

void UCTurma::set_UcCode(string UcCode2) {
    UcCode = UcCode2;
}

string UCTurma::get_ClassCode() const {
    return ClassCode;
}

void UCTurma::set_ClassCode(string ClassCode2) {
    ClassCode = ClassCode2;
}

int UCTurma::get_ClassSize() const{
    return ClassSize;
}

void UCTurma::set_ClassSize(int ClassSize2) {
    ClassSize = ClassSize2;

}
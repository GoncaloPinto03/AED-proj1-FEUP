#include "UCTurma.h"

using namespace std;

UCTurma::UCTurma() {
    UcCode = "";
    ClassCode = "";
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

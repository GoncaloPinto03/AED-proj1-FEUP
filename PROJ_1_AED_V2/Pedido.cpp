#include <iostream>
#include <string>
#include "Pedido.h"

using namespace std;

Pedido::Pedido(){
    UcCode = "";
    ClassCodeInicio = "";
    ClassCodeFim = "";
}
Pedido::Pedido(string UcCode,string ClassCodeInicio,string ClassCodeFim){
    UcCode = UcCode;
    ClassCodeInicio = ClassCodeInicio;
    ClassCodeFim = ClassCodeFim;
}

string Pedido::get_UcCode() const{return UcCode;}
string Pedido::get_ClassCodeInicio() const{return ClassCodeInicio;}
string Pedido::get_ClassCodeFim() const{return ClassCodeFim;}


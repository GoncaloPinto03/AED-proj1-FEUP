#include "HorarioUC.h"
#include <iostream>
#include <string>

HorarioUC::HorarioUC() {
    UcCode = "";
    ClassCode="";
    slot;

}
HorarioUC::HorarioUC(string UcCode,string ClassCode,list<Slot>slot) {
    UcCode = UcCode;
    ClassCode = ClassCode;
    slot = slot;
}

string HorarioUC::get_UcCode()const{
    return UcCode;
}
string HorarioUC::get_ClassCode()const{
    return ClassCode;
}
list<Slot> HorarioUC::get_slot()const{
    return slot;
}


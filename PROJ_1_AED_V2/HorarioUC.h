#ifndef HORARIOUC_H
#define HORARIOUC_H
#include "Slot.h"


using namespace std;

class HorarioUC{
    string UcCode;
    string ClassCode;
    list<Slot> slot;
public:
    HorarioUC();
    HorarioUC(string UcCode,string ClassCode,list<Slot>slot);
    string get_UcCode()const;
    string get_ClassCode()const;
    list<Slot> get_slot()const;

};
#endif

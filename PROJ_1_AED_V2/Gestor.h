#ifndef GESTOR_H
#define GESTOR_H

#include <iostream>
#include <string>
#include <list>
#include <set>
#include <vector>
#include <queue>
#include "Estudante.h"
#include "Slot.h"
#include "HorarioUC.h"
#include "Pedido.h"

using namespace std;

struct EstudanteSlot{
    string StudentCode;
    string StudentName;
    string ClassCode;
    string UcCode;
    int WeekDay;
    string Type;
    double Duration;
};

class Gestor {
public:
   vector<Slot> lerSlots();
   vector<Estudante> lerEstudantes();
   vector<EstudanteSlot> SlotsdeEstudante();
   vector<EstudanteSlot> HorarioEstudante(string StudentCode);
    
};

#endif
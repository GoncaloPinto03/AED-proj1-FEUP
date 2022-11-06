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


using namespace std;

struct EstudanteTurma{
    string StudentCode;
    string StudentName;
    string ClassCode;
    string UcCode;
    string WeekDay;
    string Type;
    string StartHour;
    string Duration;
};

class Gestor {
public:
   vector<Slot> lerSlots();
   vector<Estudante> lerEstudantes();
   set<EstudanteTurma> HorarioTurma();
   set<EstudanteTurma> HorarioEstudante(string StudentCode);
    
};

#endif
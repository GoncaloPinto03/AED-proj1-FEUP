
#include "Gestor.h"
#include <iostream>
#include <fstream>
#include "Estudante.h"
#include "Slot.h"


using namespace std;

vector<Slot>Gestor::lerSlots() {
    string filename="classes.csv";
    Slot slot;
    string ClassCode;
    string UcCode;
    string Weekday;
    string StartHour;
    string Duration;
    string Type;

    vector<Slot> slots;
    string dummy;

    ifstream input = ifstream(filename, ios_base::in);
    if (input.is_open()) {
        getline(input, dummy);
        while(input.good()) {
            getline(input, ClassCode, ',');
            getline(input, UcCode, ',');
            getline(input, Weekday, ',');
            getline(input, StartHour, ',');
            getline(input, Duration, ',');
            getline(input, Type, '\n');

            slot.set_ClassCode(ClassCode);
            slot.set_UcCode(UcCode);
            slot.set_Weekday(Weekday);
            slot.set_StartHour(StartHour);
            slot.set_Duration(Duration);
            slot.set_Type(Type);
            slots.push_back(slot);
        }
        cout << "Numero Aulas no vector: " << '\n';
        cout << slots.size() << '\n';
    } else {
        cout << "ERROR: File Not Open" << '\n';
    }
    input.close();
    return slots;
}

vector<Estudante>Gestor::lerEstudantes() {
    Estudante estudante;
    string filename="students_classes.csv";
    string StudentCode;
    string StudentName;
    string Uccode;
    string ClassCode;

    vector<Estudante> estudantes;
    string dummy;

    ifstream input = ifstream(filename, ios_base::in);
    if (input.is_open()) {
        getline(input, dummy);
        while(input.good()) {
            getline(input, StudentCode, ',');
            getline(input, StudentName, ',');
            getline(input, Uccode, ',');
            getline(input, ClassCode, '\n');

            estudante.set_StudentCode(StudentCode);
            estudante.set_StudentName(StudentName);
            estudante.set_UcCode(Uccode);
            estudante.set_ClassCode(ClassCode);
            estudantes.push_back(estudante);
        }
        cout << "Numero Estudantes no vector: " << '\n';
        cout << estudantes.size() << '\n';
    } else {
        cout << "ERROR: File Not Open" << '\n';
    }
    input.close();
    return estudantes;
}

/*Nao sei o que é suposto estes 2 serem mas a vossa amiga
   tinha no 1ºStudentClass em vez de HorarioTurma
 e tinha no 2ºStudentSchedule em vez de HorarioEstudante
 Assumo que 1 delas seja para o horario do estudante e outra para o horario da turma */


vector<EstudanteTurma>Gestor::HorarioTurma() {
    vector<Estudante> estudantes=lerEstudantes();
    vector<Slot> ucturmas= lerSlots();
    vector<EstudanteTurma> horarioturma={};
    for(int i=0;i<ucturmas.size();++i){
        for(Estudante est:estudantes){
            vector<string> esturma=est.get_ClassCode();/* perguntar get Class */
            if(esturma[1]==ucturmas[i].get_ClassCode() && esturma[0]==ucturmas[i].get_UcCode()){
                horarioturma.push_back({est.get_StudentCode(),est.get_StudentName(),ucturmas[i].get_UcCode(),ucturmas[i].get_Weekday(),ucturmas[i].get_Type(),ucturmas[i].get_Duration()});
            }
        }
    }

    return horarioturma;
}

vector<EstudanteTurma>Gestor::HorarioEstudante(string StudentCode){
    vector<EstudanteTurma> horarioturma =HorarioTurma();
    vector<EstudanteTurma> horarioestudante={};
    for (int i=0;i<horarioestudante.size();++i){
        if(horarioturma[i].StudentCode==StudentCode)
            horarioestudante.push_back(EstudanteTurma[i]);
    }
    return horarioestudante;
}

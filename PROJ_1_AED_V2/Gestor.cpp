
#include "Gestor.h"
#include <iostream>
#include <fstream>
#include "Estudante.h"
#include "Slot.h"
#include <iomanip>
#include <algorithm>


using namespace std;

bool operator< (const EstudanteTurma &left, const EstudanteTurma &right) {
    vector<pair<string,int>> intday={{"Monday",0},{"Twesday",1},{"Wednesday",2},{"Thursday",3},{"Friday",4},{"Saturday",5},{"Sunday",6}};
    int l,r;
    for(auto x :intday){
        if (x.first.compare(left.WeekDay))l=x.second;
        if (x.first.compare(right.WeekDay))r=x.second;
    }
    if(left.StudentCode.compare(right.StudentCode))
     return 1;
     else return l!=r || left.StartHour<right.StartHour;

}

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

    } else {
        cout << "ERROR: File Not Open" << '\n';
    }
    input.close();
    return estudantes;
}

set<EstudanteTurma>Gestor::HorarioTurma() {
    vector<Estudante> estudantes=lerEstudantes();
    vector<Slot> ucturmas= lerSlots();
    set<EstudanteTurma> horarioturma={};
    for(auto x: ucturmas){
        for(Estudante est:estudantes){
            if(est.get_ClassCode()==x.get_ClassCode() && est.get_UcCode()==x.get_UcCode()){
                horarioturma.insert({est.get_StudentCode(),est.get_StudentName(),x.get_ClassCode(),x.get_UcCode(),
                                     x.get_Weekday(), x.get_Type(),x.get_StarHour(),x.get_Duration()});
            }
        }
    }

    return horarioturma;
}

set<EstudanteTurma>Gestor::HorarioEstudante(string StudentCode){
    set<EstudanteTurma> horarioturma =HorarioTurma();
    set<EstudanteTurma> horarioestudante={};
    set<EstudanteTurma>::iterator itr;

    for (itr = horarioturma.begin();itr != horarioturma.end(); ++itr){
        if(!itr->StudentCode.compare(StudentCode)) {
            horarioestudante.insert(*itr);
        }}
    return horarioestudante;
}
void printhorarioturma(set<EstudanteTurma> horario,string classcode){
    for ( auto& i:horario){
        if(!+i.ClassCode.compare(classcode))
        cout<<i.StudentCode<<i.UcCode <<" "<< i.ClassCode <<" "<< i.WeekDay <<" "<< i.Type <<" Starts at:"<< i.StartHour <<"  Ends at:"<<fixed<< setprecision(2)<<std::to_string(std::stod(i.StartHour) + std::stod(i.Duration))<<"\n";
    }
}
void printhorarioestudante(set<EstudanteTurma> horario,string studentcode){
    for ( auto& i:horario){
        if(!i.StudentCode.compare(studentcode))
            cout<<i.UcCode <<" "<< i.ClassCode <<" "<< i.WeekDay <<" "<< i.Type <<" Starts at:"<< i.StartHour <<"  Ends at:"<< setprecision(3)<<fixed<<std::to_string(std::stod(i.StartHour) + std::stod(i.Duration))<<"\n";
    }
}
int Menu() {
    int choice;
    string estudante,turma,uc;
    do {
        cout << "\n 0. Ver horario de estudante \n 1. Ver horario de Turma \n 2. Alterar Turma de estudante(nao implementado)\n 3. Creditos\n 4. Exit\n\n";
        cin >> choice;
        switch (choice) {
            case 0:
            {
                cout << "Insira o numero de estudante \n";
                cin>>estudante;
                Gestor gestor;
                set<EstudanteTurma> horarioestudante =gestor.HorarioEstudante(estudante);
                printhorarioestudante(horarioestudante,estudante);
                break;
            }
            case 1:
            {   string turma;
                Gestor gestor;
                cout<<"Insira a turma de que quer ver horario \n";
                cin>>turma;
                printhorarioturma(gestor.HorarioTurma(),turma);
                break;
            }
            case 2:
            {   cout << "Insira o numero de estudante\n";
                cin >> estudante;
                cout << "Insira a UC de que pretende alterar a turma\n";
                cin >> uc;
                cout << "Insira a turma para a qual quer mudar \n";
                cin >> turma;

                break;
            }
            case 3:
                cout << "Done by Goncalo Pinto, Miguel Figueiredo and Miguel Santos\n";
                break;
            case 4:
                return 0;
            default:
                return 0;
        }
    } while (choice);
}


int main() {
    Menu();
}




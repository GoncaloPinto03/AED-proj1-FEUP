#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Slot.h"


using namespace std;

Slot procurarAula(){
    Slot aula;
    return aula;
}
vector<Slot> lerAulas(const string& filename) {
    Slot aula;
    string ClassCode;
    string UcCode;
    string Weekday;
    string StartHour;
    string Duration;
    string Type;

    vector<Slot> aulas;
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

            aula.set_ClassCode(ClassCode);
            aula.set_UcCode(UcCode);
            aula.set_Weekday(Weekday);
            aula.set_StartHour(StartHour);
            aula.set_Duration(Duration);
            aula.set_Type(Type);
            aulas.push_back(aula);
        }
        cout << "Numero Aulas no vector: " << '\n';
        cout << aulas.size() << '\n';
    } else {
        cout << "ERROR: File Not Open" << '\n';
    }
    input.close();
    return aulas;
}

/*------------teste---------*/
/*
int main() {
    lerAulas("../classes.csv");
    return 0;
}
*/

//
// Created by gpinto03 on 01-11-2022.
//

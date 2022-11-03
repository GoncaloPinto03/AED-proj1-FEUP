#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Estudante.h"


using namespace std;

/*
Estudante procurarEstudante(string estudanteprocura ,vector<Estudante> estudantes){
    Estudante estudante;
    /* sort(estudantes.begin(),estudantes.end()); sort e binary search ? */
//    return estudante;
//}

void lerEstudantes(const string& filename) {
  Estudante estudante;

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
  //return estudantes;
}


/*
int main() {
  lerEstudantes("../students_classes.csv");
  return 0;
}
*/

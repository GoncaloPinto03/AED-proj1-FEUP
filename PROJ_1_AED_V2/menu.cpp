#include <iostream>
#include <string>
#include <Estudante.h>

using namespace std;

 void Menu() {
    int choice;
    string nestudante,nturma,nuc;
    do {
    cout << "\n0. Ver horário de estudante \n1. Ver hórario de Turma \n2. Alterar Turma de estudante\n3. Alterar hórario de turma\n4. Exit\n\n";
    cin >> choice;
    switch (choice) {
        case 0:  /*Ver Horário de um estudante */

            cout << "Insira o numero de estudante \n";
            cin>>nestudante;
            /* ler estudantes
            break;
        case 1:  /*Ver Horario de uma turma */
        {   string turma;
            cout<<"Insira a turma de que quer ver horario";
            cin>>nturma;
            /* ler aulas ,listar todas slots que apareçam se forem igual á turma */
            break;
        }
        case 2:/*alterar turma de um estudante*/
        {   cout << "Diga-me numero de estudante\n";
            cin >> nestudante;
            cout << "Diga-me que UC pretende alterar hórario\n";
            cin >> nuc;
            cout << "Diga-me para que turma quer mudar \n";
            cin >> nturma;

            break;
        }
        case 3:  /*Alterar Horario de turma a uma UC*/
            cout << "Done by Goncalo Pinto ,Miguel Figueiredo and Miguel Santos\n";
            break;
        case 4:  /*Encerrar aplicaçao*/
            cout << "Ok, bye!\n";
            break;
        default:
        break;
    }
    } while (choice != 5);
}

/*
int main() {
    Menu();
}

*/
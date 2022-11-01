#include <iostream>
#include <string>
using namespace std;

void Menu() {
    int choice;
    do {
    cout << "Horários estudantes LEIC\n\n0. Turmas\n1. Settings\n2. Credicts\n3. Exit\n\n";
    cin >> choice;
    switch (choice) {
    case 0:
        cout << "You are playing the game!\n";
        break;
    case 1:
        cout << "You are in the settings.\n";
        break;
    case 2:
        cout << "By Goncalo Pinto\n";
        break;
    case 3:
        cout << "Ok, bye!\n";
        break;
    default:
        break;
    }
    } while (choice != 3);
}

/*
int main() {
    Menu();
}*/

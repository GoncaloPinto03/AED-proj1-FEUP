#ifndef GESTOR_H
#define GESTOR_H

#include <iostream>
#include <string>
#include <list>
#include <set>
#include <vector>
#include <queue>
#include "Estudante.h"
#include "HorarioUC.h"
#include "Pedido.h"

using namespace std;

class Gestor {
    set<Estudante> estudantes;
    vector<HorarioUC> horario;
    queue<Pedido> pedidos;
public:
    Gestor();
    set<Estudante> get_estudantes() const;
    vector<HorarioUC> get_horario() const;
    queue<Pedido> get_pedidos() const;
    

    
};

#endif
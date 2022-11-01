#ifndef PEDIDO_H
#define PEDIDO_H

using namespace std;

class Pedido {
    string UcCode;
    string ClassCodeInicio;
    string ClassCodeFim;

public:
    Pedido();
    Pedido(string UcCode,string ClassCodeInicio,string ClassCodeFim);
    string get_UcCode()const;
    string get_ClassCodeInicio()const;
    string get_ClassCodeFim()const;
    void setCodigoUCinit(string CodigoUC);
    void setCodigoUCfim(string CodigoUC);

};


#endif //PROJ_1_AED_PEDIDO_H

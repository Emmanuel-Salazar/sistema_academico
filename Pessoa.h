#ifndef _PESSOA_H_
#define _PESSOA_H_

#include "Universidade.h"

class Pessoa{
protected:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    string nomeP;

public:
    Pessoa(int diaNa, int mesNa, int anoNa, string nome);
    Pessoa();
    ~Pessoa();
    void Inicializa(int diaNa, int mesNa, int anoNa, string nome);
    void Calc_Idade(int diaAT, int mesAT, int anoAT);
    int  informaIdade();
};

#endif

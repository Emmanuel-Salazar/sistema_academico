#include "stdafx.h"
#include "Pessoa.h"


Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, string nome){
  Inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa() : diaP(0), mesP(0), anoP(0), nomeP(""){
}

Pessoa::~Pessoa(){
}

//sempre deixar nulo os ponteiros
void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, string nome)
{
   diaP = diaNa;
   mesP = mesNa;
   anoP = anoNa;
   nomeP = nome;
}

void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT)
{
     idadeP = anoAT - anoP;
     if (mesP > mesAT)
     {
       idadeP = idadeP - 1;
     }
     else
     {
       if (mesP == mesAT)
       {
           if (diaP > diaAT)
           {
              idadeP = idadeP - 1;
           }
       }
     }
    cout << "A idade da Pessoa " << nomeP << " eh " << idadeP << endl;
}

int Pessoa::informaIdade()
{
   return idadeP;
}
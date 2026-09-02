#include "stdafx.h"
#include "Universidade.h"

Universidade::Universidade(){
   for(int i = 0; i < QTD_DPTOS; i++)
        pDptos[i] = NULL;
}

Universidade::~Universidade(){
}

string Universidade::getNome(){
   return nome;
}

void Universidade::setNome(string n){
   nome = n;
}

void Universidade::setDepartamento(Departamento* pdep, int ctd){
   if(ctd < QTD_DPTOS)
      pDptos[ctd] = pdep;
   else
      cout << "Limite de apartamentos atingido" << endl;
}

void Universidade::imprimeDptos(){
    for(int i = 0; i < QTD_DPTOS; i++)
        if(pDptos[i] != NULL)
            cout << pDptos[i]->getNome() << endl;

}

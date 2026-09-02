#include "stdafx.h"
#include "Universidade.h"

Universidade::Universidade(){
}

Universidade::~Universidade(){
}

string Universidade::getNome(){
   return nome;
}

void Universidade::setNome(string n){
   nome = n;
}

void Universidade::setDepartamento(Departamento* pdep){
   pDptos.push_back(pdep);
}

void Universidade::imprimeDptos(){
   list<Departamento *>::iterator iterator;

   for(iterator = pDptos.begin(); iterator != pDptos.end(); iterator++)
      cout << (*iterator)->getNome() << endl;

}

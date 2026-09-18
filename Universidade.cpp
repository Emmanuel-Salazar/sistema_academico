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
   objLDepartamentos.incluaDepartamento(pdep);
}

void Universidade::imprimeDptos(){
   objLDepartamentos.listeDepartamentos();
}

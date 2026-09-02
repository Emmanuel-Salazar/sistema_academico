#include "stdafx.h"
#include "Departamento.h"

#include "Universidade.h"

Departamento::Departamento() : nome(""), pUniv(NULL){

}

Departamento::~Departamento()
{

}

void Departamento::setNome(string n)
{
   nome = n;
}

string Departamento::getNome()
{
   return nome;
}

void Departamento::setUniversidade(Universidade* pU){
    pUniv = pU;
}





#include "stdafx.h"
#include "Departamento.h"
#include "Disciplina.h"
#include "ListaDisciplinas.h"
#include "Universidade.h"

Departamento::Departamento(){
    objLDisciplinas = new ListaDisciplinas(-1, " ");
}

Departamento::~Departamento() {
    if(objLDisciplinas)
      delete objLDisciplinas;
}

void Departamento::setNome(string n)
{
   nome = n;
   objLDisciplinas->setNome(n);
}

string Departamento::getNome()
{
   return nome;
}

void Departamento::setUniversidade(Universidade* pU){
    pUniv = pU;
}

Universidade* Departamento::getUniversidade(){
    return pUniv;
}

void Departamento::incluaDisciplina(Disciplina* pd) {
    objLDisciplinas->incluaDisciplina(pd);
}

void Departamento::listeDisciplinas() {
    objLDisciplinas->listeDisciplinas();
}

void Departamento::listeDisciplinas2() {
    objLDisciplinas->listeDisciplinas2();
}
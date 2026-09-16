#include "stdafx.h"
#include "Departamento.h"
#include "Disciplina.h"

#include "Universidade.h"

Departamento::Departamento() : nome(""), pUniv(NULL){
    pDisciplPrim = NULL;
    pDisciplAtual = NULL;
}

Departamento::~Departamento()
{
    pDisciplPrim = NULL;
    pDisciplAtual = NULL;
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

void Departamento::incluaDisciplina(Disciplina* pd){
    if(pDisciplPrim == NULL){
      pDisciplAtual = pd;
      pDisciplPrim = pd;
    }
    else{
      pDisciplAtual->setProx(pd);
      pd->setAnt(pDisciplAtual);
      pDisciplAtual = pd;
    }
}

void Departamento::listeDisciplinas()
{
    Disciplina* pAux = pDisciplPrim;
    while(pAux != NULL){
        cout << "A disciplina " << pAux->getNome() << " pertence ao Departamento " << nome << endl;
        pAux = pAux->getProx();
    }
}
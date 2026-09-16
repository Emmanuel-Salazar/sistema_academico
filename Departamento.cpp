#include "stdafx.h"
#include "Departamento.h"
#include "Disciplina.h"

#include "Universidade.h"

Departamento::Departamento(){
    pDisciplPrim = NULL;
    pDisciplAtual = NULL;
}

Departamento::~Departamento() {
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

void Departamento::incluaDisciplina(Disciplina* pd) {
    if (pd == NULL) return;

    pd->setProx(NULL);

    if (pDisciplPrim == NULL) {
        pDisciplPrim = pd;
        pd->setAnt(NULL);
    } else {
        pDisciplAtual->setProx(pd);
        pd->setAnt(pDisciplAtual);
    }
    pDisciplAtual = pd; // Strictly tracks the tail of the list
}

void Departamento::listeDisciplinas() {
    Disciplina* pAux = pDisciplPrim;
    while (pAux != NULL) {
        cout << "A disciplina " << pAux->getNome() 
             << " pertence ao Departamento " << nome << endl;
        pAux = pAux->getProx();
    }
}
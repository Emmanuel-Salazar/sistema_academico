#include "ElDisciplina.h"

ElDisciplina::ElDisciplina(){
    pDisciplina = NULL;
    pProx = NULL;
    pAnt = NULL;
}

ElDisciplina::~ElDisciplina(){
    pDisciplina = NULL;
    pProx = NULL;
    pAnt = NULL;
}

void ElDisciplina::setDisciplina(Disciplina* pd){
    pDisciplina = pd;
}

Disciplina* ElDisciplina::getDisciplina(){
    return pDisciplina;
}

string ElDisciplina::getNome(){
    if (pDisciplina != NULL) {
        return pDisciplina->getNome();
    } else {
        return "";
    }
}
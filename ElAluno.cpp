#include "ElAluno.h"

ElAluno::ElAluno(){
    pAl = NULL;
    pProx = NULL;
    pAnt = NULL;
}

ElAluno::~ElAluno(){
    pAl = NULL;
    pProx = NULL;
    pAnt = NULL;
}

void ElAluno::setAluno(Aluno* a){
    pAl = a;
}

Aluno* ElAluno::getAluno(){
    return pAl;
}

string ElAluno::getNome(){
    if (pAl != NULL) {
        return pAl->getNome();
    } else {
        return "";
    }
}
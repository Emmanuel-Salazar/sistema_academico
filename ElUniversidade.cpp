#include "ElUniversidade.h"

ElUniversidade::ElUniversidade(){
    pUniv = NULL;
    pProx = NULL;
    pAnt = NULL;
}

ElUniversidade::~ElUniversidade(){
    pUniv = NULL;
    pProx = NULL;
    pAnt = NULL;
}

void ElUniversidade::setUniversidade(Universidade* u){
    pUniv = u;
}

Universidade* ElUniversidade::getUniversidade(){
    return pUniv;
}

string ElUniversidade::getNome(){
    if(pUniv != NULL)
        return pUniv->getNome();
    else 
        return "";
}
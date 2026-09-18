#include "ElDepartamento.h"
#include "stdafx.h"

ElDepartamento::ElDepartamento(){
    pDepto = NULL;
    pProx = NULL;
    pAnt = NULL;
}

ElDepartamento::~ElDepartamento(){
    pDepto = NULL;
    pProx = NULL;
    pAnt = NULL;
}

void ElDepartamento::setDepartamento(Departamento* d){
    pDepto = d;
}

Departamento* ElDepartamento::getDepartamento(){
    return pDepto;
}

string ElDepartamento::getNome(){
    if (pDepto != NULL) {
        return pDepto->getNome();
    } else {
        return "";
    }
}
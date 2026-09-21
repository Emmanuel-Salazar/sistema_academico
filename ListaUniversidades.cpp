#include "ListaUniversidades.h"

ListaUniversidades::ListaUniversidades(int nu, string n){
    nome = n;
    contUniv = 0;
    numUniv = nu;

    pElUniversidadeAtual = NULL;
    pElUniversidadePrim = NULL;
}

ListaUniversidades::~ListaUniversidades(){
    ElUniversidade* pAux1, *pAux2;
    pAux1 = pElUniversidadePrim;
    pAux2 = pAux1;

    while (pAux1 != NULL) {
        pAux2 = pAux1->pProx;
        delete pAux1;
        pAux1 = pAux2;
    }
}

void ListaUniversidades::incluaUniversidade(Universidade* u){
    if (
        ( ( contUniv < numUniv ) && ( u != NULL) ) ||
        ( ( numUniv == -1 ) && ( u != NULL) )
    ){
        ElUniversidade* pAux;
        pAux = new ElUniversidade();
        pAux->setUniversidade(u);

        if(pElUniversidadePrim == NULL){
            pElUniversidadePrim = pAux;
            pElUniversidadeAtual = pAux;
        } 
        else{
            pElUniversidadeAtual->pProx = pAux;
            pAux->pAnt = pElUniversidadeAtual;
            pElUniversidadeAtual = pAux;
        }
        contUniv++;
    }

    else
        cout << "Não é possível incluir a universidade. Quantidade lotada em: " << numUniv << endl;
}

void ListaUniversidades::listeUniversidades(){
    ElUniversidade* pAux;
    pAux = pElUniversidadePrim;

    while (pAux != NULL) {
        cout << pAux->getNome() << endl;
        pAux = pAux->pProx;
    }
}

void ListaUniversidades::listeUniversidades2(){
    ElUniversidade* pAux;
    pAux = pElUniversidadeAtual;

    while (pAux != NULL) {
        cout << pAux->getNome() << endl;
        pAux = pAux->pAnt;
    }
}

Universidade* ListaUniversidades::localizar(string n){
    ElUniversidade* pAux;
    pAux = pElUniversidadePrim;
    while(pAux != NULL){
        if(n == pAux->getNome()){
            return pAux->getUniversidade();
        }
        pAux = pAux->pProx;
    }
    return NULL;
}


#include "ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas(int nd, string n){
    nome = n;
    contDisc = 0;
    numDisc = nd;

    pElDisciplPrim = NULL;
    pElDisciplAtual = NULL;
}

ListaDisciplinas::~ListaDisciplinas(){
    ElDisciplina* pAux1, *pAux2;
    pAux1 = pElDisciplPrim;
    pAux2 = pAux1;

    while (pAux1 != NULL) {
        pAux2 = pAux1->pProx;
        delete pAux1;
        pAux1 = pAux2;
    }
}

void ListaDisciplinas::setNome(string n){
    nome = n;
}

void ListaDisciplinas::incluaDisciplina(Disciplina* pd){
    if (
        ( ( contDisc < numDisc ) && ( pd != NULL) ) ||
        ( ( numDisc == -1 ) && ( pd != NULL) )
    ){
        ElDisciplina* pAux;
        pAux = new ElDisciplina();
        pAux->setDisciplina(pd);

        if(pElDisciplPrim == NULL){
            pElDisciplPrim = pAux;
            pElDisciplAtual = pAux;
        } 
        else{
            pElDisciplAtual->pProx = pAux;
            pAux->pAnt = pElDisciplAtual;
            pElDisciplAtual = pAux;
        }
        contDisc++;
    }
    else
        cout << "Não é possível incluir a disciplina. Quantidade lotada em: " << numDisc << endl;
}

void ListaDisciplinas::listeDisciplinas(){
    ElDisciplina* pAux;
    pAux = pElDisciplPrim;

    while (pAux != NULL) {
        cout << "A disciplina " << pAux->getNome() 
             << " pertence ao Departamento " << nome << endl;
        pAux = pAux->pProx;
    }
}

void ListaDisciplinas::listeDisciplinas2(){
    ElDisciplina* pAux;
    pAux = pElDisciplAtual;

    while (pAux != NULL) {
        cout << "A disciplina " << pAux->getNome() 
             << " pertence ao Departamento " << nome << endl;
        pAux = pAux->pAnt;
    }
}
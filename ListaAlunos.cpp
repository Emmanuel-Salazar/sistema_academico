#include "ListaAlunos.h"

ListaAlunos::ListaAlunos(int na, string n){
    pELAlunoPrim = NULL;
    pELAlunoAtual = NULL;
    
    numAlunos = na;
    contAlunos = 0;
    
    nome = n;
}

ListaAlunos::~ListaAlunos(){
    ElAluno* pAux;
    pAux = pELAlunoPrim;
    while(pAux != NULL){
        pELAlunoPrim = pELAlunoPrim->pProx;
        delete pAux;
        pAux = pELAlunoPrim;
    }

    pELAlunoAtual = NULL;
    pELAlunoPrim = NULL;
}

void ListaAlunos::incluaAluno(Aluno* a){
if(contAlunos < numAlunos && a != NULL){
    ElAluno* pAux = NULL;
    pAux = new ElAluno();
    pAux->setAluno(a);

    if(pELAlunoPrim == NULL){
        pELAlunoPrim = pAux;
        pELAlunoAtual = pAux;
    }
    else{
        pELAlunoAtual->pProx = pAux;
        pAux->pAnt = pELAlunoAtual;
        pELAlunoAtual = pAux;
    }
    contAlunos++;   
}
else{
    if(a == NULL){
        cout << "Aluno não incluido. Aluno nulo" << endl;
    }
    else{
        cout << "Aluno não incluido. Turma já lotada" << nome << endl;
    }
    

}
}

void ListaAlunos::listeAlunos(){
    ElAluno* pAux = NULL;
    pAux = pELAlunoPrim;

    while(pAux != NULL){
        cout << "O aluno " << pAux->getNome() << " pertence a disciplina " << nome << endl;
        pAux = pAux->pProx;
    }
}

void ListaAlunos::listeAlunos2(){
    ElAluno* pAux = NULL;
    pAux = pELAlunoAtual;
    
    while(pAux != NULL){
        cout << "O aluno " << pAux->getNome() << " pertence a disciplina " << nome << endl;
        pAux = pAux->pAnt;
    }
}

void ListaAlunos::setNome(string n){
    nome = n;
}

string ListaAlunos::getNome(){
    return nome;
}
#include "Disciplina.h"
#include "stdafx.h"

Disciplina::Disciplina(int na, string ac){
    pDeptoAssociado = NULL;
    pProx = NULL;
    pAnt = NULL;
    pAlunoPrim = NULL;
    pAlunoAtual = NULL;
    areaConhecimento = ac;
    numAlunos = na;
    contAlunos = 0;
}

Disciplina::~Disciplina(){
    pDeptoAssociado = NULL;
    pProx = NULL;
    pAnt = NULL;
    pAlunoPrim = NULL;
    pAlunoAtual = NULL;
}

void Disciplina::setId(int i){
    id = i;
}

int Disciplina::getId(){
    return id;
}

void Disciplina::setNome(string n){
    nome = n;
}

string Disciplina::getNome(){
    return nome;
}

void Disciplina::setDepartamento(Departamento* d){
    pDeptoAssociado = d;
    d->incluaDisciplina(this);
}

Departamento* Disciplina::getDepartamento(){
    return pDeptoAssociado;
}

void Disciplina::setProx(Disciplina* p){
    pProx = p;
}

void Disciplina::setAnt(Disciplina* a){
    pAnt = a;
}

Disciplina* Disciplina::getProx(){
    return pProx;
}

Disciplina* Disciplina::getAnt(){
    return pAnt;
}

void Disciplina::incluaAluno(Aluno* a){
    if(contAlunos < numAlunos && a != NULL){
        if(pAlunoPrim == NULL){
            pAlunoPrim = a;
            pAlunoAtual = a;
        }
        else{
            pAlunoAtual->setProx(a);
            a->setAnt(pAlunoAtual);
            pAlunoAtual = a;
        }
        contAlunos++;   
    }
    else{
        cout << "Aluno não incluido. Turma já lotada" << nome << endl;

    }
}

void Disciplina::listeAlunos(){
    Aluno* pAux = pAlunoPrim;

    while(pAux != NULL){
        cout << "O aluno " << pAux->getNome() << " pertence a disciplina " << nome << endl;
        pAux = pAux->getProx();
    }
}

void Disciplina::listeAlunos2(){
    Aluno* pAux = pAlunoAtual;
    while(pAux != NULL){
        cout << "O aluno " << pAux->getNome() << " pertence a disciplina " << nome << endl;
        pAux = pAux->getAnt();
    }
}
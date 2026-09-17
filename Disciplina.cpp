#include "Disciplina.h"

Disciplina::Disciplina(int na, string ac): objAlunos(na, this->nome){
    pDeptoAssociado = NULL;
    pProx = NULL;
    pAnt = NULL;
    areaConhecimento = ac;
}

Disciplina::~Disciplina(){
    pDeptoAssociado = NULL;
    pProx = NULL;
    pAnt = NULL;
}

void Disciplina::setId(int i){
    id = i;
}

int Disciplina::getId(){
    return id;
}

void Disciplina::setNome(string n){
    objAlunos.setNome(n); 
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
    objAlunos.incluaAluno(a);
}

void Disciplina::listeAlunos(){
    objAlunos.listeAlunos();
}

void Disciplina::listeAlunos2(){
    objAlunos.listeAlunos2();
}
#include "Disciplina.h"

Disciplina::Disciplina(int na, string ac): objLAlunos(na, this->nome){
    pDeptoAssociado = NULL;
    areaConhecimento = ac;
}

Disciplina::~Disciplina(){
    pDeptoAssociado = NULL;
}

void Disciplina::setId(int i){
    id = i;
}

int Disciplina::getId(){
    return id;
}

void Disciplina::setNome(string n){
    objLAlunos.setNome(n); 
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

void Disciplina::incluaAluno(Aluno* a){
    objLAlunos.incluaAluno(a);
}

void Disciplina::listeAlunos(){
    objLAlunos.listeAlunos();
}

void Disciplina::listeAlunos2(){
    objLAlunos.listeAlunos2();
}
#ifndef _DISCIPLINA_H_
#define _DISCIPLINA_H_

#include "stdafx.h"
#include "Departamento.h"
#include "ListaAlunos.h"

class Disciplina{
private:
    int id;
    string nome;    
    string areaConhecimento;
    
    Departamento* pDeptoAssociado;
    ListaAlunos objLAlunos;

public:
    Disciplina(int na = 45, string ac = "");
    ~Disciplina(); 
    
    void setId(int i);
    int getId();
    void setNome(string n);
    string getNome();

    void setDepartamento(Departamento* d);
    Departamento* getDepartamento();

    void setProx(Disciplina* p);
    Disciplina* getProx();
    void setAnt(Disciplina* p);
    Disciplina* getAnt();

    void incluaAluno(Aluno* a);
    void listeAlunos();
    void listeAlunos2();
};	

#endif

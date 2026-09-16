#ifndef _DISCIPLINA_H_
#define _DISCIPLINA_H

#include "stdafx.h" 
#include "Aluno.h"
#include "Departamento.h"

class Disciplina{
private:
    int id;
    string nome;
    string areaConhecimento;
    int numAlunos;
    int contAlunos;
    Departamento* pDeptoAssociado;
    Disciplina* pProx;
    Disciplina* pAnt;
    Aluno* pAlunoPrim;
    Aluno* pAlunoAtual;

public:
    Disciplina(int na = 45, string ac = "");
    ~Disciplina(); 

    
    void setId(int i);
    int getId();

    void setProx(Disciplina* p);
    Disciplina* getProx();

    void setAnt(Disciplina* p);
    Disciplina* getAnt();

    void setNome(string n);
    string getNome();

    void setDepartamento(Departamento* d);
    Departamento* getDepartamento();

    void incluaAluno(Aluno* a);
    void listeAlunos();
    void listeAlunos2();
};	

#endif

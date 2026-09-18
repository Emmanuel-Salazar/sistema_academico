#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

#include "stdafx.h"
class Universidade;
class Disciplina;   
class ListaDisciplinas;

class Departamento
{
private:
    string nome;
    Universidade* pUniv;

    ListaDisciplinas* objLDisciplinas;

public:
    Departamento();
    ~Departamento();

    int getId();

    void setNome(string n);
    string getNome();

    void setUniversidade(Universidade *pU);
    Universidade* getUniversidade();  

    void incluaDisciplina(Disciplina* pd);
    void listeDisciplinas();
    void listeDisciplinas2();
};

#endif

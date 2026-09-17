#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

#include "stdafx.h"
class Universidade;
class Disciplina;

class Departamento
{
private:
    string nome;
    Universidade* pUniv;

    Disciplina* pDisciplPrim;
    Disciplina* pDisciplAtual;


public:
    Departamento();
    ~Departamento();

    int getId();

    void setNome(string n);
    string getNome();

    void setUniversidade(Universidade *pU);

    void incluaDisciplina(Disciplina* pd);
    void listeDisciplinas();
};

#endif

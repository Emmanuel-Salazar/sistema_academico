#ifndef _LISTADISCIPLINAS_H_
#define _LISTADISCIPLINAS_H_

#include "stdafx.h"
#include "Disciplina.h"
#include "ElDisciplina.h"

class ListaDisciplinas
{
private:
    int contDisc;
    int numDisc;
    string nome;

    ElDisciplina* pElDisciplPrim;
    ElDisciplina* pElDisciplAtual;

public:
    ListaDisciplinas(int nd, string n = "");
    ~ListaDisciplinas();

    void setNome(string n);
    void incluaDisciplina(Disciplina* pd);
    
    void listeDisciplinas();
    void listeDisciplinas2();
};

#endif
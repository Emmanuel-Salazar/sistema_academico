#ifndef _LISTAALUNOS_H_
#define _LISTAALUNOS_H_

#include "stdafx.h"
#include "ElAluno.h"
#include "Aluno.h"

class ListaAlunos{
private:
    ElAluno* pELAlunoPrim;
    ElAluno* pELAlunoAtual;
    int numAlunos;
    int contAlunos;
    string nome;

public:
    ListaAlunos(int na, string n = "");
    ~ListaAlunos();
    void setNome(string n);
    string getNome();
    void incluaAluno(Aluno* a);
    void listeAlunos();
    void listeAlunos2();
};

#endif
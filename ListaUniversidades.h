#ifndef _LISTAUNIVERSIDADES_H_
#define _LISTAUNIVERSIDADES_H_

#include "stdafx.h"
#include "ElUniversidade.h"

class ListaUniversidades{
private:
    int contUniv;
    int numUniv;
    string nome;

    ElUniversidade* pElUniversidadePrim;
    ElUniversidade* pElUniversidadeAtual;

public:
    ListaUniversidades(int nu = 100, string n = "");
    ~ListaUniversidades(); 
    void incluaUniversidade(Universidade* pU);
    void listeUniversidades();
    void listeUniversidades2();
    Universidade* localizar(string n);
};

#endif
#ifndef _ELUNIVERSIDADE_H_
#define _ELUNIVERSIDADE_H_

#include "stdafx.h"
#include "Universidade.h"

class ElUniversidade{
private:
    Universidade* pUniv;

public:
    ElUniversidade();
    ~ElUniversidade();
    ElUniversidade* pProx;
    ElUniversidade* pAnt;
    void setUniversidade(Universidade* u);
    Universidade* getUniversidade();
    string getNome();
};

#endif
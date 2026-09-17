#ifndef _ELALUNO_H_
#define _ELALUNO_H_

#include "Aluno.h"

class ElAluno{
private:
    Aluno* pAl;
  
public:
    ElAluno();
    ~ElAluno();
    ElAluno* pProx;
    ElAluno* pAnt;
    void setAluno(Aluno* al);
    Aluno* getAluno();
    string getNome();
};

#endif
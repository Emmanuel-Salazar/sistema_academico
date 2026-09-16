#ifndef _ALUNO_H_
#define _ALUNO_H_

#include "Pessoa.h"

class Aluno : public Pessoa{
private:
    int RA;
    Aluno* pProx;
    Aluno* pAnt;

public:

    Aluno(int diaNa, int mesNa,  int anoNa, string nome);
    Aluno(int i = -1);
    ~Aluno();
    int getRA();
    void setRA(int ra);
    void setProx(Aluno* prox);
    Aluno* getProx();
    void setAnt(Aluno* ant);
    Aluno* getAnt();
};

#endif
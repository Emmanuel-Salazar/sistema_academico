#ifndef _ELDICIPLINA_H_
#define _ELDISCIPLINA_H_

#include "Disciplina.h"

class ElDisciplina{
private:
    Disciplina* pDisciplina;

public:
    ElDisciplina();
    ~ElDisciplina();

    ElDisciplina* pProx;
    ElDisciplina* pAnt;

    void setDisciplina(Disciplina* pd);
    Disciplina* getDisciplina();

    string getNome();
};
#endif
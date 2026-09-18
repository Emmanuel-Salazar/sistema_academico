#ifndef _ELDEPARTAMENTO_H_
#define _ELDEPARTAMENTO_H_

#include "Departamento.h"

class ElDepartamento{
private:
    Departamento* pDepto;
public:
    ElDepartamento();
    ~ElDepartamento();

    ElDepartamento* pProx;
    ElDepartamento* pAnt;

    void setDepartamento(Departamento* d);
    Departamento* getDepartamento();

    string getNome();
};

#endif
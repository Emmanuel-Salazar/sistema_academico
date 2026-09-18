#ifndef _LISTADEPARTAMENTOS_H_
#define _LISTADEPARTAMENTOS_H_

#include "ElDepartamento.h"
class Universidade;

class ListaDepartamentos{
private:
    ElDepartamento* pELDeptoPrim;
    ElDepartamento* pELDeptoAtual;
    int numDeptos;
    int contDeptos;

public:
    ListaDepartamentos(int nd = 45);
    ~ListaDepartamentos();
    void incluaDepartamento(Departamento* d);
    void listeDepartamentos();
};

#endif
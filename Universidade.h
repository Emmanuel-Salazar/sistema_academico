
#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

#define QTD_DPTOS 50

#include "Departamento.h"

class Universidade
{
  private:
      string nome;
      Departamento* pDptos[QTD_DPTOS];

  public:
      Universidade();
      ~Universidade();

      void setNome(string n);
      string getNome();
      void setDepartamento(Departamento* pdep, int ctd);
      void imprimeDptos();
};

#endif

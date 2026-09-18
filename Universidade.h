#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

#include "stdafx.h"
#include "ListaDepartamentos.h"

class Universidade
{
  private:
      string nome;
      ListaDepartamentos objLDepartamentos;

  public:
      Universidade();
      ~Universidade();

      void setNome(string n);
      string getNome();
      void setDepartamento(Departamento* pdep);
      void imprimeDptos();
};

#endif

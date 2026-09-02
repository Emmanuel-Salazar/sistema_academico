#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_

#include "Pessoa.h"
#include "Professor.h"
#include "Universidade.h"

class Principal
{
  private:
    Professor Emmanuel;
    Professor Haide;
    Professor Marx;
    Professor Einstein;
    Professor Newton;

    Universidade UTFPR;
    Universidade UFPR;
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAELN;
    Departamento DSEAAG;
    Departamento FisicaPrinceton;
    Departamento MatematicaCambridge;
    Departamento ModaUTFPR;
    Departamento TecnologiaUTFPR;

    int diaAtual;
    int mesAtual;
    int anoAtual;

  public:
    Principal();
    void Executar();
};

#endif

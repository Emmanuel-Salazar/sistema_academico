#include "stdafx.h"
#include "Professor.h"

Professor::Professor(int diaNa, int mesNa,  int anoNa, string nome) : 
Pessoa(diaNa, mesNa, anoNa, nome){
    UnivFiliado = NULL;
    DptoFiliado = NULL;
}

Professor::Professor() : Pessoa(){
   UnivFiliado = NULL;
   DptoFiliado = NULL;
}

Professor::~Professor(){
}

void Professor::setUnivFiliado(Universidade* u)
{
     UnivFiliado = u;
}

void Professor::setDepartamento(Departamento* dep)
{
   DptoFiliado = dep;
}

void Professor::OndeTrabalho()
{
   if(UnivFiliado)
     cout << nomeP << " trabalha para a " << UnivFiliado->getNome() << endl;
   else
      cout << nomeP << " não está associado(a) a nenhuma universidade" << endl;
}

void Professor::QualDepartamentoTrabalho()
{
   if(DptoFiliado)
      cout  << nomeP << " trabalha para a " << UnivFiliado->getNome()
            <<  " no departamento de " <<DptoFiliado->getNome()
            << endl;
   else
      cout << nomeP << " não está associado(a) a nenhum departamento" << endl;
}



#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_

#include "Pessoa.h"
#include "Professor.h"
#include "Universidade.h"
#include "Disciplina.h"
#include "Aluno.h"

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

  Disciplina Computacao1;
  Disciplina IntrodAlgoritmo;
  Disciplina Computacao2;
  Disciplina Metodos2;

  Aluno Fulano;
  Aluno Ciclano;
  Aluno Beltrano;
  Aluno Jose;
  Aluno Maria;  

  int diaAtual;
  int mesAtual;
  int anoAtual;

public:
  Principal();

  void Inicializa();
  void InicializaUniversidades();
  void InicializaDepartamentos();
  void InicializaProfessores();
  void InicializaAlunos();
  void InicializaDisciplinas();

  void Executar();

  void CalcIdadeProfessores();
  void UnivOndeProfessoresTrabalham();
  void DepOndeProfessoresTrabalham();
  void ConhecPessoa();
  void ListarDiscDeptos();
  void ListarAlunosDisc();
};

#endif

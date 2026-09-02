
#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

class Universidade;

class Departamento
{
  private:
     string nome;
     Universidade* pUniv;

  public:
     Departamento();
     ~Departamento();

     void setNome(string n);
     string getNome();
     void setUniversidade(Universidade *pU);
};

#endif

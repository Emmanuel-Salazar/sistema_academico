#include "Aluno.h"

Aluno::Aluno (int diaNa, int mesNa, int anoNa, string nome): 
Pessoa(diaNa, mesNa, anoNa, nome){
    RA = 0;
}

Aluno::Aluno(int i){
}

Aluno::~Aluno(){
}

void Aluno::setRA(int ra){
    RA = ra;
}

int Aluno::getRA(){
    return RA;
}
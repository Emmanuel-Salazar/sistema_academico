#include "stdafx.h"
#include "Principal.h"

Principal::Principal()
{
    time_t now = time(nullptr);
    auto *data = localtime(&now);

    diaAtual = data->tm_mday;
	mesAtual = data->tm_mon + 1;
	anoAtual = data->tm_year + 1900;

	Inicializa();
    Executar();
}

void Principal::Inicializa(){
    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaAlunos();
    InicializaProfessores();
    InicializaDisciplinas();
}

void Principal::InicializaUniversidades(){
    UTFPR.setNome("Universidade Tecnologica Federal do Parana");
    UFPR.setNome("Universidade Federal do Parana");
    Princeton.setNome("Princeton");
    Cambridge.setNome("Cambridge");
}

void Principal::InicializaDepartamentos(){
    DAELN.setNome("Departamento de Eletronica");
    DSEAAG.setNome("Departamento de Agronomia");
    FisicaPrinceton.setNome("Departamento de Fisica");
    MatematicaCambridge.setNome("Departamento de Matematica");
    ModaUTFPR.setNome("Departamento de Moda");
    TecnologiaUTFPR.setNome("Departamento de Tecnologia");

    DAELN.setUniversidade(&UTFPR);
    DSEAAG.setUniversidade(&UFPR);
    ModaUTFPR.setUniversidade(&UTFPR);
    TecnologiaUTFPR.setUniversidade(&UTFPR);
    FisicaPrinceton.setUniversidade(&Princeton);
    MatematicaCambridge.setUniversidade(&Cambridge);
}

void Principal::InicializaProfessores(){
    Emmanuel.Inicializa(18, 12, 2006, "Emmanuel Salazar");
    Haide.Inicializa(4,1,2008, "Haide Monnerat dos Santos");
    Marx.Inicializa( 5, 5, 1818, "Karl Marx");
    Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
    Newton.Inicializa(4, 1, 1643, "Isaac Newton");

    Emmanuel.setUnivFiliado(&UTFPR);
    Haide.setUnivFiliado(&UFPR);
    Marx.setUnivFiliado(&Princeton);
    Einstein.setUnivFiliado(&Princeton);
    Newton.setUnivFiliado(&Cambridge);

    Emmanuel.setDepartamento(&DAELN);
    Haide.setDepartamento(&DSEAAG);
    Marx.setDepartamento(&FisicaPrinceton);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MatematicaCambridge);
}

void Principal::InicializaAlunos(){
    Fulano.Inicializa(1, 1, 2000, "Fulano de Tal");
    Ciclano.Inicializa(2, 2, 2001, "Ciclano de Tal");
    Beltrano.Inicializa(3, 3, 2002, "Beltrano de Tal");
    Jose.Inicializa(4, 4, 2003, "Jose da Silva");
    Maria.Inicializa(5, 5, 2004, "Maria da Silva");

    Fulano.setRA(1001);
    Ciclano.setRA(1002);
    Beltrano.setRA(1003);
    Jose.setRA(1004);
    Maria.setRA(1005);
}

void Principal::InicializaDisciplinas(){
    Computacao1.setNome("Computacao 1");
    IntrodAlgoritmo.setNome("Introducao a Algoritmos");
    Computacao2.setNome("Computacao 2");
    Metodos2.setNome("Metodos 2");
    
    DAELN.incluaDisciplina(&Computacao1);
    DAELN.incluaDisciplina(&IntrodAlgoritmo);
    DAELN.incluaDisciplina(&Computacao2);
    DAELN.incluaDisciplina(&Metodos2);

    Computacao1.setDepartamento(&DAELN);
    IntrodAlgoritmo.setDepartamento(&DAELN);
    Computacao2.setDepartamento(&DAELN);
    Metodos2.setDepartamento(&DAELN);

    IntrodAlgoritmo.incluaAluno(&Fulano);
    IntrodAlgoritmo.incluaAluno(&Ciclano);
    IntrodAlgoritmo.incluaAluno(&Beltrano);
    IntrodAlgoritmo.incluaAluno(&Jose);
    IntrodAlgoritmo.incluaAluno(&Maria);
}

void Principal::CalcIdadeProfessores()
{
    Emmanuel.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Haide.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Marx.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Einstein.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Newton.Calc_Idade(diaAtual, mesAtual, anoAtual);
}

void Principal::UnivOndeProfessoresTrabalham()
{
    Emmanuel.OndeTrabalho();
    Haide.OndeTrabalho();
    Marx.OndeTrabalho();
    Einstein.OndeTrabalho();
    Newton.OndeTrabalho();
}

void Principal::DepOndeProfessoresTrabalham()
{
    Emmanuel.QualDepartamentoTrabalho();
    Haide.QualDepartamentoTrabalho();
    Marx.QualDepartamentoTrabalho();
    Einstein.QualDepartamentoTrabalho();
    Newton.QualDepartamentoTrabalho();
}

void Principal::ListarDiscDeptos()
{
    DAELN.listeDisciplinas();
    
}

void Principal::ListarAlunosDisc(){
    IntrodAlgoritmo.listeAlunos();
}

void Principal::Executar()
{
    CalcIdadeProfessores();
    cout << endl;
    UnivOndeProfessoresTrabalham();
    cout << endl;
    DepOndeProfessoresTrabalham();
    cout << endl;
    ListarAlunosDisc();
    cout << endl;
    //ListarDiscDeptos();
    //cout << endl;
}


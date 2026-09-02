#include "stdafx.h"
#include "Principal.h"

Principal::Principal()
{
    time_t now = time(nullptr);
    auto *data = localtime(&now);

    diaAtual = data->tm_mday;
	mesAtual = data->tm_mon + 1;
	anoAtual = data->tm_year + 1900;

    Emmanuel.Inicializa(18, 12, 2006, "Emmanuel Salazar");
    Haide.Inicializa(4,1,2008, "Haide Monnerat dos Santos");
    Marx.Inicializa( 5, 5, 1818, "Karl Marx");
    Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
    Newton.Inicializa(4, 1, 1643, "Isaac Newton");

    UTFPR.setNome("Universidade Tecnologica Federal do Parana");
    UFPR.setNome("Universidade Federal do Parana");
    Princeton.setNome("Princeton");
    Cambridge.setNome("Cambridge");

    DAELN.setNome("Eletronica");
    ModaUTFPR.setNome("Moda");
    TecnologiaUTFPR.setNome("Tecnologia");
    DSEAAG.setNome("Agronomia");
    FisicaPrinceton.setNome("Fisica");
    MatematicaCambridge.setNome("Matematica");

    UTFPR.setDepartamento(&DAELN);
    UTFPR.setDepartamento(&ModaUTFPR);
    UTFPR.setDepartamento(&TecnologiaUTFPR);
    UFPR.setDepartamento(&DSEAAG);
    Princeton.setDepartamento(&FisicaPrinceton);
    Cambridge.setDepartamento(&MatematicaCambridge);

    DAELN.setUniversidade(&UTFPR);
    DSEAAG.setUniversidade(&UFPR);
    ModaUTFPR.setUniversidade(&UTFPR);
    TecnologiaUTFPR.setUniversidade(&UTFPR);
    FisicaPrinceton.setUniversidade(&Princeton);
    MatematicaCambridge.setUniversidade(&Cambridge);

	Executar();
}

void Principal::Executar()
{
    Emmanuel.setUnivFiliado(&UTFPR);
    Haide.setUnivFiliado(&UFPR);
    Marx.setUnivFiliado(&UTFPR);
    Einstein.setUnivFiliado(&Princeton);
    Newton.setUnivFiliado(&Cambridge);

    Emmanuel.setDepartamento(&TecnologiaUTFPR);
    Haide.setDepartamento(&DSEAAG);
    Marx.setDepartamento(&DAELN);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MatematicaCambridge);

    Emmanuel.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Haide.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Marx.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Einstein.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Newton.Calc_Idade(diaAtual, mesAtual, anoAtual);

    cout << endl;

    Emmanuel.OndeTrabalho();
    Haide.OndeTrabalho();
    Marx.OndeTrabalho();
    Einstein.OndeTrabalho();
    Newton.OndeTrabalho();

    cout << endl;

    Emmanuel.QualDepartamentoTrabalho();
    Haide.QualDepartamentoTrabalho();
    Marx.QualDepartamentoTrabalho();
    Einstein.QualDepartamentoTrabalho();
    Newton.QualDepartamentoTrabalho();
}


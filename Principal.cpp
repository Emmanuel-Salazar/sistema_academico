#include "stdafx.h"
#include "Principal.h"

namespace util {
    void limparTela() {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
    }
    void pausar() {
        cout << "Pressione ENTER para continuar...";
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }

    bool lerInteiro(int& valor) {
        if (cin >> valor) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return true;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    
    string lerLinha(const string& prompt) {
        cout << prompt << endl;
        if (cin.peek() == '\n') cin.ignore();
        string linha;
        getline(cin, linha);
        return linha;
    }
}

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

    LUniversidades.incluaUniversidade(&UTFPR);
    LUniversidades.incluaUniversidade(&UFPR);
    LUniversidades.incluaUniversidade(&Princeton);
    LUniversidades.incluaUniversidade(&Cambridge);
}

void Principal::InicializaDepartamentos(){
    DAELN.setNome("Departamento de Eletronica");
    DSEAAG.setNome("Departamento de Agronomia");
    FisicaPrinceton.setNome("Departamento de Fisica");
    MatematicaCambridge.setNome("Departamento de Matematica");
    ModaUTFPR.setNome("Departamento de Moda");
    TecnologiaUTFPR.setNome("Departamento de Tecnologia");

    LDepartamentos.incluaDepartamento(&DAELN);
    LDepartamentos.incluaDepartamento(&DSEAAG);
    LDepartamentos.incluaDepartamento(&FisicaPrinceton);
    LDepartamentos.incluaDepartamento(&MatematicaCambridge);
    LDepartamentos.incluaDepartamento(&ModaUTFPR);
    LDepartamentos.incluaDepartamento(&TecnologiaUTFPR);

    DAELN.setUniversidade(&UTFPR);
    DSEAAG.setUniversidade(&UFPR);
    ModaUTFPR.setUniversidade(&UTFPR);
    TecnologiaUTFPR.setUniversidade(&UTFPR);
    FisicaPrinceton.setUniversidade(&Princeton);
    MatematicaCambridge.setUniversidade(&Cambridge);

    UTFPR.setDepartamento(&DAELN);
    UTFPR.setDepartamento(&ModaUTFPR);
    UTFPR.setDepartamento(&TecnologiaUTFPR);
    UFPR.setDepartamento(&DSEAAG);
    Princeton.setDepartamento(&FisicaPrinceton);
    Cambridge.setDepartamento(&MatematicaCambridge);
}

void Principal::InicializaProfessores(){
    Emmanuel.Inicializa(18, 12, 2006, "Emmanuel Salazar");
    Haide.Inicializa(4,1,2008, "Haide Monnerat dos Santos");//oh, mae, qm eh essa?
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
    
    Computacao1.setDepartamento(&DAELN);
    IntrodAlgoritmo.setDepartamento(&DAELN);
    Computacao2.setDepartamento(&DAELN);
    Metodos2.setDepartamento(&DAELN);

    LDisciplinas.incluaDisciplina(&Computacao1);
    LDisciplinas.incluaDisciplina(&IntrodAlgoritmo);
    LDisciplinas.incluaDisciplina(&Computacao2);
    LDisciplinas.incluaDisciplina(&Metodos2);
    
    DAELN.incluaDisciplina(&Computacao1);
    DAELN.incluaDisciplina(&IntrodAlgoritmo);
    DAELN.incluaDisciplina(&Computacao2);
    DAELN.incluaDisciplina(&Metodos2);

    IntrodAlgoritmo.incluaAluno(&Fulano);
    IntrodAlgoritmo.incluaAluno(&Ciclano);
    IntrodAlgoritmo.incluaAluno(&Beltrano);
    IntrodAlgoritmo.incluaAluno(&Jose);
    IntrodAlgoritmo.incluaAluno(&Maria);

    Computacao1.incluaAluno(&Fulano);
    Computacao1.incluaAluno(&Ciclano);
    Computacao1.incluaAluno(&Beltrano);
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
    //cout << endl;
    //IntrodAlgoritmo.listeAlunos2();
    cout << endl;
    Computacao1.listeAlunos();
    //cout << endl;
    //Computacao1.listeAlunos2(); 
}

void Principal::CadUniversidade(){
    string nomeUniversidade;
    Universidade* pUniv;

    util::limparTela();

    nomeUniversidade = util::lerLinha("Qual é o nome da universidade?");

    if(nomeUniversidade.empty()){
        cout << "Nome vazio. Cancelando cadastro." << endl;
        return;
    }

    pUniv = new Universidade();
    pUniv->setNome(nomeUniversidade);
    LUniversidades.incluaUniversidade(pUniv);
}

void Principal::CadDepartamento(){
    string nomeUniversidade;
    string nomeDepartamento;
    Universidade* pUniv;
    Departamento* pDep;

    util::limparTela();

    nomeUniversidade = util::lerLinha("Qual é o nome da universidade do departamento?");
    pUniv = LUniversidades.localizar(nomeUniversidade);

    if(pUniv != NULL){
        nomeDepartamento = util::lerLinha("Qual é o nome do departamento?");
        if(nomeDepartamento.empty()){
            cout << "Nome vazio. Cadastro cancelado." << endl;
            return;
        }
        pDep = new Departamento();
        pDep->setNome(nomeDepartamento);
        pDep->setUniversidade(pUniv);
        LDepartamentos.incluaDepartamento(pDep);
        pUniv->setDepartamento(pDep);
    } 
    else {
        cout << "Universidade inexistente." << endl;
    }
}

void Principal::CadDisciplina(){
    /*falta implementar*/
}

void Principal::MenuCad(){
    int op = -1;
    while(op != 4){
        util::limparTela();
        cout << "Menu de Cadastro\n"
             << "1 - Cadastrar Disciplina \n"
             << "2 - Cadastrar Departamento \n"
             << "3 - Cadastrar Universidade \n"
             << "4 - Voltar ao Menu Principal \n" 
             << "Opção: ";

        if(! util::lerInteiro(op)){
            cout << "Entrada inválida." << endl;
            util::pausar();
            continue;
        }
        switch(op){
            case 1: CadDisciplina(); util::pausar(); break;
            case 2: CadDepartamento();util::pausar(); break;
            case 3: CadUniversidade();util::pausar(); break;
            case 4: break;
            default:
                cout << "Opção invalida. Tente novamente." << endl; util::pausar(); break;
        }
    }
}

void Principal::MenuExe() {
    int op = -1;
    while (op != 4) {
        util::limparTela();
        cout << "Menu de Execucao\n"
             << "1 - Listar Disciplinas\n"
             << "2 - Listar Departamentos\n"
             << "3 - Listar Universidades\n"
             << "4 - Voltar ao Menu Principal\n"
             << "Opção: ";

        if (!util::lerInteiro(op)) {
            cout << "Entrada invalida.\n";
            util::pausar();
            continue;
        }

        switch (op) {
            case 1: LDisciplinas.listeDisciplinas();   util::pausar(); break;
            case 2: LDepartamentos.listeDepartamentos(); util::pausar(); break;
            case 3: LUniversidades.listeUniversidades(); util::pausar(); break;
            case 4: break;
            default:
                cout << "Opção invalida. Tente novamente.\n";
                util::pausar();
                break;
        }
    }
}

void Principal::Menu() {
    int op = -1;
    while (op != 3) {
        util::limparTela();
        cout << "Menu Principal\n"
             << "1 - Cadastrar\n"
             << "2 - Executar\n"
             << "3 - Sair\n"
             << "Opção: ";

        if (!util::lerInteiro(op)) {
            cout << "Entrada invalida.\n";
            util::pausar();
            continue;
        }

        switch (op) {
            case 1: MenuCad(); break;
            case 2: MenuExe(); break;
            case 3: cout << "Saindo do programa...\n"; break;
            default:
                cout << "Opção invalida. Tente novamente.\n";
                util::pausar();
                break;
        }
    }
}
void Principal::Executar()
{
    //CalcIdadeProfessores();
    //cout << endl;
    //UnivOndeProfessoresTrabalham();
    //cout << endl;
    //DepOndeProfessoresTrabalham();
    //cout << endl;
    //ListarAlunosDisc();
    //cout << endl;
    //ListarDiscDeptos();
    //cout << endl;
//
    //Fulano.setNome("Fulano de Tal Alterado");
    //cout << "O nome do aluno Fulano foi alterado para: " << Fulano.getNome() << endl << endl;
    //Computacao1.listeAlunos2();
//
    //cout << endl << "Listando departamentos das universidades: " << endl;
    //UTFPR.imprimeDptos();
    //UFPR.imprimeDptos();

    Menu();
}


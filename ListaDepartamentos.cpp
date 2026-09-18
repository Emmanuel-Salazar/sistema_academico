#include "ListaDepartamentos.h"
#include "Universidade.h"

ListaDepartamentos::ListaDepartamentos(int nd){
    numDeptos = nd;
    contDeptos = 0;
    pELDeptoPrim = NULL;
    pELDeptoAtual = NULL;
}

ListaDepartamentos::~ListaDepartamentos(){
    ElDepartamento* pAux = pELDeptoPrim;
    while (pAux != NULL) {
        ElDepartamento* pProx = pAux->pProx;
        delete pAux;
        pAux = pProx;
    }
}

void ListaDepartamentos::incluaDepartamento(Departamento* d){
    if (contDeptos < numDeptos && d != NULL ) {
        ElDepartamento* novoEl = new ElDepartamento();
        novoEl->setDepartamento(d);
        
        if (pELDeptoPrim == NULL) {
            pELDeptoPrim = novoEl;
            pELDeptoAtual = novoEl;
        } else {
            pELDeptoAtual->pProx = novoEl;
            novoEl->pAnt = pELDeptoAtual;
            pELDeptoAtual = novoEl;
        }
        
        contDeptos++;
    } else {
       cout << "Não é possível incluir mais departamentos. Limite atingido." << endl;
    }
}

void ListaDepartamentos::listeDepartamentos(){
    ElDepartamento* pAux = pELDeptoPrim;
    while (pAux != NULL) {
        cout << pAux->getNome() << " pertence à universidade " << pAux->getDepartamento()->getUniversidade()->getNome() << endl;
        pAux = pAux->pProx;
    }
}
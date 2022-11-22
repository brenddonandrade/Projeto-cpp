// Bibliotecas
#include <iostream>
#include <string>
using namespace std;

// Arquivos
#include "Pessoa.h"
#include "Trabalhador.h"
#include "Medico.h"

    Medico::Medico(const string &crm, const string &ala, const int matricula, double salario, double plantao, const string &funcao, bool status, const string &nome, const string &cpf, const string &email, const string &fone): Trabalhador(matricula, salario, plantao, funcao, status, nome, cpf, email, fone), crm(crm), ala(ala) {}

    Medico::~Medico(){
        cout << "Objeto destruido: Medico." << endl;
    }

    string Medico::getCrm() const { return crm;}
    
    void Medico::mostra() const {
        Trabalhador::mostra();
        cout << "CRM: " << crm << "\n" << endl;
    }
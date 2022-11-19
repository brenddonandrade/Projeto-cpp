// Bibliotecas
#include <iostream>
#include <string>
using namespace std;

// Arquivos
#include "Pessoa.h"
#include "Trabalhador.h"
#include "Medico.h"

    Medico::Medico(const string &crm, const int matricula, double salario, double plantao, const string &funcao, bool status, const string &nome, const string &cpf, const string &email, const string &fone): Trabalhador(matricula, salario, plantao, funcao, status, nome, cpf, email, fone), crm(crm){}

    Medico::~Medico(){
        cout << "Objeto destruido: Medico." << endl;
    }

    string Medico::getCrm() const { return crm;}
    
    void Medico::mostra() const {
        cout    << "\n\nNome: " << getNome() << endl
                << "CPF: " << getCpf() << endl
                << "CRM: "<< crm << endl //Unico atributo acrescentado
                << "Email: " << getEmail() << endl 
                << "Fone: " << getFone() << endl
                << "Matricula: " << getMatricula() << endl
                << "Salario: R$" << getSalario() << endl
                << "Plantao: R$" << getPlantao() << endl
                << "Funcao: " << getFuncao() << endl;

        if(getStatus()){
            cout << "O trabalhador está ativo.\n" << endl;
        } else {
            cout << "O trabalhador está inativo. \n" << endl;
        }
    }
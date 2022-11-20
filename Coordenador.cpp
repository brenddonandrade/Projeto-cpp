// Bibliotecas
#include <iostream>
#include <string>
using namespace std;


// Arquivos
#include "Pessoa.h"
#include "Trabalhador.h"
#include "Coordenador.h"
#include "Medico.h"
#include "Enfermeiro.h"

    // Implementacao
    Coordenador::Coordenador(const int matricula, double salario, double plantao, const string &funcao, bool status, const string &nome, const string &cpf, const string &email, const string &fone) : Trabalhador(matricula, salario, plantao, funcao, status, nome, cpf, email, fone){ }
    Coordenador::~Coordenador(){
        cout << "Objeto destruido: Coordenador" << endl;
    }
    

    void Coordenador::muda_status(Trabalhador *t1){
        if(!this->getStatus()){
            cout << "Você não é funcionario e por isso não pode despedir ninguém." << endl;
            return;
        }
            
        bool status_atual = (t1->getStatus()) ? !t1->getStatus() : t1->getStatus();
        cout << "Funcionário: " << t1->getNome() << " foi desativo com sucesso." << endl;

        t1->setStatus(status_atual);
    }
    
    // Muda_status com sobrecarga
    void Coordenador::muda_status(Medico *m1){
        if(!this->getStatus()){
            cout << "Você não é funcionario e por isso não pode despedir ninguém." << endl;
            return;
        }
            
        bool status_atual = (m1->getStatus()) ? !m1->getStatus() : m1->getStatus();
        cout << "Funcionário: " << m1->getNome() << " foi desativo com sucesso." << endl;

        m1->setStatus(status_atual);
    }

    // Muda_status com sobrecarga
    void Coordenador::muda_status(Enfermeiro *e1){
        if(!this->getStatus()){
            cout << "Você não é funcionario e por isso não pode despedir ninguém." << endl;
            return;
        }
            
        bool status_atual = (e1->getStatus()) ? !e1->getStatus() : e1->getStatus();
        cout << "Funcionário: " << e1->getNome() << " foi desativo com sucesso." << endl;

        e1->setStatus(status_atual);
    }
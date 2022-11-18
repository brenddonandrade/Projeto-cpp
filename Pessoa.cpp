#include <iostream>
#include <string>
using namespace std;

//Incluindo o header
#include "Pessoa.h"

    // Implementando os atributos
    Pessoa::Pessoa(const string &nome, const string &cpf, const string &email, const string &fone): nome(nome), email(email), fone(fone), cpf(cpf){}
    Pessoa::~Pessoa(){
        cout << "Objeto destruido: Pessoa" << endl;
    }

    //Getters and Setters
    string Pessoa::getNome() const { return nome;}
    string Pessoa::getEmail() const { return email;}
    string Pessoa::getFone() const { return fone;}
    string Pessoa::getCpf() const { return cpf;}

    void Pessoa::setFone(const string &fo){ fone = fo; }
    void Pessoa::setEmail(const string &em){ email = em; }

    void Pessoa::mostra() const{
        cout    << "Nome: " << nome << endl
                << "CPF: " << cpf << endl
                << "Fone: " << fone << endl
                << "Email: " << email << "\n" << endl;
    }
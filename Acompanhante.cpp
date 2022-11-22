// Bibliotecas
#include <iostream>
#include <string>
using namespace std;

// Arquivos necessarios
#include "Pessoa.h"
#include "Acompanhante.h"


    Acompanhante::Acompanhante(int idade, bool sexo, bool infectado, const string &nome, const string &cpf, const string &email, const string &fone): Pessoa(nome, cpf, email, fone), idade(idade), sexo(sexo), infectado(infectado) {}

    Acompanhante::~Acompanhante(){
        cout << "Objeto destruido: Acompanhante." << endl;
    }

    int Acompanhante::getIdade() const { return idade;}
    bool Acompanhante::getSexo() const { return sexo;}
    bool Acompanhante::getInfectado() const { return infectado;}

    void Acompanhante::setIdade(int ida) { idade = ida;}
    void Acompanhante::setSexo(bool sex) { sexo = sex;}
    void Acompanhante::setInfectado(bool inf) { infectado = inf;}

    void Acompanhante::mostra() const {
        Pessoa::mostra();
        cout    << "Idade: " << idade << " anos" << endl;

        if(sexo){
            cout << "Sexo: Masculino" << endl;
        } else {
            cout << "Sexo: Feminino" << endl;
        }

        if(infectado){
            cout << "Paciente INFECTADO. Logo, precisa ficar isolado dos outros" << endl;
        } else {
            cout << "Paciente nao INFECTADO." << endl;
        }
    }
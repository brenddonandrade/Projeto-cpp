// Bibliotecas
#include <iostream>
#include <string>
using namespace std;

// Arquivos necessarios
#include "Pessoa.h"
#include "Paciente.h"



// Implementacao
    Paciente::Paciente(const string &estado,const string &doencas, int idade, bool dependente, bool sexo, bool infectado, const string &nome, const string &cpf, const string &email, const string &fone) : Pessoa(nome, cpf, email, fone), estado(estado), doencas(doencas), idade(idade), dependente(dependente), sexo(sexo), infectado(infectado){}

    Paciente::~Paciente(){
        cout << "Objeto destruido: Paciente." << endl;
    } 

    
    // Getts and setts
    string Paciente::getEstado()const { return estado;}
    string Paciente::getDoencas()const { return doencas;}
    int Paciente::getIdade() const { return idade;}
    bool Paciente::getDependente() const { return dependente;}
    bool Paciente::getSexo() const { return sexo;}
    bool Paciente::getInfectado() const { return infectado;}

    void Paciente::setEstado(const string &es) { estado = es;}
    void Paciente::setDoencas(const string &doen) { doencas = doen;}
    void Paciente::setIdade(int ida) { idade = ida;}
    void Paciente::setDependente( bool depe) { dependente = depe;}
    void Paciente::setSexo( bool sex) { sexo = sex;}
    void Paciente::setInfectado( bool inf) { infectado = inf;}


    // Membros
    void Paciente::mostra() const {
        cout    << "Nome: " << nome << endl
                << "CPF: " << cpf << endl
                << "Fone: " << fone << endl
                << "Email: " << email << endl
                << "Estado: " << estado << endl
                << "Doenca: " << doencas << endl
                << "Idade: " << idade << "anos" << endl;

        if(dependente){
            cout << "Paciente necessita de companhia" << endl;
        } else{
            cout << "Paciente nao precisa de companhia" << endl;
        }

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


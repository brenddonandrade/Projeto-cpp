// Bibliotecas
#include <iostream>
#include <string>
using namespace std;


// Arquivos necessarios
#include "Pessoa.h"
#include "Trabalhador.h"


    // Construtor de destrutor
    Trabalhador::Trabalhador(const int matricula, double salario, double plantao, const string &funcao, bool status, const string &nome, const string &cpf, const string &email, const string &fone) : Pessoa(nome, cpf, email, fone), matricula(matricula), salario(salario), plantao(plantao), funcao(funcao), status(status){}

    Trabalhador::~Trabalhador(){
        cout << "Objeto destruido: Trabalhador" <<  endl;
    }


    //Getts and setts
    int Trabalhador::getMatricula() const { return matricula;}
    double Trabalhador::getSalario() const { return salario;}
    double Trabalhador::getPlantao() const { return plantao;}
    string Trabalhador::getFuncao() const { return funcao;}
    bool Trabalhador::getStatus() const { return status;}

    void Trabalhador::setSalario(double sal) { salario = sal; }
    void Trabalhador::setPlantao(double pla) { plantao = pla;}
    void Trabalhador::setFuncao(const string &fun) { funcao = fun;}
    void Trabalhador::setStatus(bool sta) { status = sta;}


    //Metodo mostra com sobrecarga
    void Trabalhador::mostra() const {
        cout    << "Nome: " << nome << endl
                << "CPF: " << cpf << endl   
                << "Email: " << email << endl 
                << "Fone: " << fone << endl
                << "Matricula: " << matricula << endl
                << "Salario: R$" << salario << endl
                << "Plantao: R$" << plantao << endl
                << "Funcao: " << funcao << endl;

        if(status){
            cout << "O trabalhador está ativo.\n" << endl;
        } else {
            cout << "O trabalhador está inativo. \n" << endl;
        }
    }

// Bibliotecas
#include <iostream>
#include <string>
using namespace std;


// Arquivos
#include "Pessoa.h"
#include "Trabalhador.h"
#include "Enfermeiro.h"


// Implementacao

    Enfermeiro::Enfermeiro(const string &coren, const string &ala, const int matricula, double salario, double plantao, const string &funcao, bool status, const string &nome, const string &cpf, const string &email, const string &fone): Trabalhador(matricula, salario, plantao, funcao, status, nome, cpf, email, fone), coren(coren), ala(ala){}

    Enfermeiro::~Enfermeiro(){
        cout << "Objeto destruido: Efermeiro." << endl; 
    }


    string Enfermeiro::getAla() const { return ala;}
    string Enfermeiro::getCoren() const { return coren;}
    void Enfermeiro::setAla(const string &al) { ala = al;}


    void Enfermeiro::mostra() const {
        Trabalhador::mostra();
        cout << "COREN: " << coren << "\n" << endl;
    }
    

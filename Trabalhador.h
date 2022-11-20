// Empacotador de preprocessador
#ifndef TRABALHADOR_H
#define TRABALHADOR_H


// incluindo Classe pai
#include "Pessoa.h"


// Bibliotecas usadas
#include <iostream>
#include <string>
using namespace std;


// Classe
class Trabalhador : public Pessoa{
    private:
        const int matricula;
        double salario, plantao;
        string funcao;
        bool status; 

    public:

        // Construtor e destrutor
        Trabalhador(const int, double, double, const string &, bool, const string &, const string &, const string &, const string &);
        ~Trabalhador();

        // Getts and Setts
        int getMatricula() const;
        double getSalario() const;
        double getPlantao() const;
        string getFuncao() const;
        bool getStatus() const;

        void setSalario(double);
        void setPlantao(double);
        void setFuncao(const string &);
        void setStatus(bool);

        
        // Metodo Membro
        friend void desconto(Trabalhador);

        // Metodo mostra sobreposto ou sofrendo sobrecarga
        void mostra() const;

};

#endif
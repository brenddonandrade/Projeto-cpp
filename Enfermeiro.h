// Empacotador de Preprocessador
#ifndef ENFERMEIRO_H
#define ENFERMEIRO_H


// Bibliotecas
#include <iostream>
#include <string>
using namespace std;


// Arquivos
#include "Pessoa.h"
#include "Trabalhador.h"


//Classe
class Enfermeiro : public Trabalhador {
    private: 
        const string coren;
        string ala;
    
    public:
        // Construtor e destrutor
        Enfermeiro(const string &, const string &, const int, double, double, const string &, bool, const string &, const string &, const string &, const string &);
        ~Enfermeiro();

        
        // Getts and Setts
        string getCoren() const;
        string getAla() const;

        void setAla(const string &);


        // Metodos membros
        void mostra() const;
};


#endif
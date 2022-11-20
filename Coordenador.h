// Empacotador de Preprocessamento
#ifndef COORDENADOR_H
#define COORDENADOR_H


// Bibliotecas necessarias
#include <iostream>
#include <string>
using namespace std;


// Arquivos necessarios
#include "Pessoa.h"
#include "Trabalhador.h"
#include "Medico.h"
#include "Enfermeiro.h"


// Classe
class Coordenador : public Trabalhador {

    public: 
        Coordenador(const int, double, double, const string &, bool, const string &, const string &, const string &, const string &);
        ~Coordenador();

        void muda_status(Trabalhador *);
        void muda_status(Medico *);
        void muda_status(Enfermeiro *);
};

#endif
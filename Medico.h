// Empacotador de preprocessamento
#ifndef MEDICO_H
#define MEDICO_H


// Bibliotecas necessarias
#include <iostream>
#include <string>


// Arquivos necessarios
#include "Pessoa.h"
#include "Trabalhador.h"

class Medico : public Trabalhador {
    private:
        const string crm;

    public:
        // Construtor e destrutor
        Medico(const string &, const int, double, double, const string &, bool, const string &, const string &, const string &, const string &);

        ~Medico();


        // Getts and  Setts
        string getCrm() const;

        void mostra() const;
};

#endif
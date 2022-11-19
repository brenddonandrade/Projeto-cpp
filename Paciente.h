// Empacotador de Preprocessamento
#ifndef PACIENTE_H
#define PACIENTE_H


// Bibliotecas
#include <iostream>
#include <string>
using namespace std;


// Arquivos necessarios
#include "Pessoa.h"

class Paciente : public Pessoa{
    private:
        string estado, doencas;
        int idade;
        bool dependente, sexo, infectado;

    public:
        Paciente(const string &, const string &, int, bool, bool, const string &, const string &, const string &, const string &);
        ~Paciente();

        // Getts and setts
        string getEstado() const;
        string getDoencas() const;
        int getIdade() const;
        bool getDependente() const;
        bool getSexo() const;
        bool getInfectado() const;

        void setEstado(const string &);
        void setDoencas(const string &);
        void setIdade(int);
        void setDependente(bool);
        void setSexo(bool);
        void setInfectado(bool);

        //Membros
        void mostra() const;
};


#endif
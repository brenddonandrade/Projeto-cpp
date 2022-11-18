
// Empacotador de Preprocessador
#ifndef PESSOA_H
#define PESSOA_H

// Inclusoes necessarias
#include <iostream>
#include <string>
using namespace std;

class Pessoa {
    private:
        const string nome, cpf;
        string email, fone;

    public:
        Pessoa(const string &, const string &, const string &, const string &);
        ~Pessoa();

        string getNome() const;
        string getCpf() const;
        string getEmail() const;
        string getFone() const;

        void setEmail(const string &);
        void setFone(const string &);

        void mostra() const ;

};

#endif
// Empacotador de Preprocessamento
#ifndef ACOMPANHANTE_H
#define ACOMPANHANTE_H

// Bibliotecas necessarias
#include <iostream>
#include <string>
using namespace std;

//  Classe
class Acompanhante : public Pessoa{
    private:
        int idade;
        bool sexo, infectado;

    public: 
        Acompanhante(int, bool, bool, const string &, const string &, const string &, const string &);
        ~Acompanhante();

        // Getts and setts
        int getIdade() const;
        bool getSexo() const;
        bool getInfectado() const;

        void setIdade(int);
        void setSexo(bool);
        void setInfectado(bool);

        // Membro
        void mostra() const;
};




#endif
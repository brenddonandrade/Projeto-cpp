// Importando Bibliotecas
#include <iostream>
#include <string>
using namespace std;


// Importando arquivos
#include "Pessoa.h"
#include "Trabalhador.h"
#include "Medico.h"
#include "Enfermeiro.h"
#include "Paciente.h"
#include "Acompanhante.h"
#include "Coordenador.h"


//Implemtacao do metodo friend
void desconto(Trabalhador *t1){
    const double desconto = 0.15;
    double salario_novo;

    salario_novo = t1->getSalario() - (t1->getSalario() * desconto);

    t1->setSalario(salario_novo);
}


int main(){
    Pessoa *p; // ponteiro para facilitar o acesso
    {
        p = new Pessoa ("Brenddon", "18106747786", "brenddonandrade@gmail.com", "24993287019");
        p->mostra();

        delete p;
    }

    { 
        // Desse jeito, o ponteiro chama o metodo mostra da super classe. Pq?
        p = new Trabalhador (1122, 8000, 500, "Físico", true, "Brenddon Érick Andradre de Oliveira", "1810647786", "brenddonandrade@gmail.com", "24993287919");
        p->mostra();

        cout << "\n" ; 

        Trabalhador t1(1122, 8000, 500, "Físico", false, "Brenddon Érick Andradre de Oliveira", "1810647786", "brenddonandrade@gmail.com", "24993287919");
        cout << "Antes do desconto: " << endl;
        t1.mostra();


        cout << "\n" ; 
        desconto(&t1);
        cout << "Depois do desconto: " << endl;
        t1.mostra();

    }


    {
        cout << "Funcionario ativo." << endl;
        Medico m1 ("CRM/RJ 112233", "A e B", 1242, 20000, 5000, "Médico", true, "Luis Freire de Mello", "13212394588", "luisfreire@gmail.com", "24998383567");
        m1.mostra();
        

        Coordenador c1(1144, 20000, 1000, "Coordenador Geral", true, "Flavio Garcia", "54245688890", "flaviogarcia@cbpf.com", "21993849950");
        c1.mostra();


        cout << "\n\nFuncionario inativo." << endl;
        c1.muda_status(&m1);

        m1.mostra();


    }

    {
        Enfermeiro e1("COREN-RJ 132.997-AE", "B e C", 1155, 6000, 400, "Enfermeiro", true, "Nayara Andrade", "12444455690", "nayaraandrade@gmail.com", "24997786012");
        e1.mostra();
    }

    {
        Paciente p1 ("Grave", "Covid e Hipertensao", 47, true, true, true, "Ester Oliveira", "12343289809", "esteresquis@gmail.com", "24998384328");
        p1.mostra();
    }
    
    {
        Acompanhante a1 (19, false, false, "Pamela Andrade", "12343299880", "pampamescreve27@gmail.com", "24999566012");
        a1.mostra();
    }

    return 0;
}
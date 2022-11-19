// Importando Bibliotecas
#include <iostream>
#include <string>
using namespace std;


// Importando arquivos
#include "Pessoa.h"
#include "Trabalhador.h"
#include "Medico.h"

int main(){
    Pessoa *p; // ponteiro para facilitar o acesso
    {
        // Desse jeito nao chama o destrutor
        p = new Pessoa ("Brenddon", "18106747786", "brenddonandrade@gmail.com", "24993287019");
        p->mostra();

        //--------
        // Pessoa p1 ("Brenddon", "18106747786", "brenddonandrade@gmail.com", "24993287019");
        // p1.mostra();
    }

    { 
        // Desse jeito, o ponteiro chama o metodo mostra da super classe. Pq?
        // p = new Trabalhador (1122, 8000, 500, "Físico", true, "Brenddon Érick Andradre de Oliveira", "1810647786", "brenddonandrade@gmail.com", "24993287919");
        // p->mostra();


        Trabalhador t1(1122, 8000, 500, "Físico", false, "Brenddon Érick Andradre de Oliveira", "1810647786", "brenddonandrade@gmail.com", "24993287919");


        t1.mostra();
    }

    {
        Medico m1 ("CRM/RJ 112233", 1242, 20000, 5000, "Médico", true, "Luis Freire de Mello", "13212394588", "luisfreire@gmail.com", "24998383567");
        m1.mostra();
    }


    return 0;
}
#ifndef PERFIL_H
#define PERFIL_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "../header/str.h"
#include "../header/nomes.h"

// Classe de Perfil
class Perfil
{
    private:
        Nomes nome;
        std::vector<STR> sequencias;

    public:
        Perfil();
        Perfil(Nomes nome, std::vector<STR> sequencias);

        Nomes get_nome();
        std::vector<STR> get_sequencias();

        void set_nome(Nomes nome);
        void set_sequencias(std::vector<STR> sequencias);

        void print();
};

bool abrir_arquivo(std::string arquivo);

#endif
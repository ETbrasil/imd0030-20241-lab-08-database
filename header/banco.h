#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <vector>
#include <sstream>

#include "../header/perfil.h"
#include "../header/str.h"
#include "../header/nomes.h"

// Classe de banco de dados
class Banco
{
    private:
        std::vector<Perfil> perfis;

    public:
        Banco();
        Banco(std::vector<Perfil> perfis);

        std::vector<Perfil> get_perfis();
        void set_perfis(std::vector<Perfil> perfis);

        void ler_banco(std::string data_file);
};

#endif
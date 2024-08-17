#ifndef NOMES_H
#define NOMES_H

#include <iostream>
#include <string>
#include <fstream>

// Classe de nomes
class Nomes
{
    private:
        std::string nome;
        int id;

    public:
        Nomes();
        Nomes(std::string nome, int id);

        std::string get_nome();
        int get_id();

        void set_nome(std::string nome);
        void set_id(int id);
};

#endif
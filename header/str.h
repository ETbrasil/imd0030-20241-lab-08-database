#ifndef STR_H
#define STR_H

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

// Classe de STR
class STR
{
    private:
        std::string str;
        int tam;
        int qtd;
        int id;

    public:
        STR(std::string str, int qtd, int id);

        std::string get_str();
        int get_tam();
        int get_qtd();
        int get_id();

        void set_str(std::string str);
        void set_tam();
        void set_qtd(int qtd);
        void set_id(int id);
};

#endif
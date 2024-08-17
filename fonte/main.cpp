#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "../header/str.h"
#include "../header/nomes.h"
#include "../header/banco.h"
#include "../header/perfil.h"

// dna profiler

int main(int argc, char *argv[])
{
    if (argc !=5) return 1;

    std::string dna_file;
    std::string data_file;

    for (int i = 1; i < argc; i++)
    {
        if (std::string(argv[i]) == "-d") data_file = argv[i + 1];
        if (std::string(argv[i]) == "-s") dna_file = argv[i + 1];
    }

    if (!abrir_arquivo(data_file) || !abrir_arquivo(dna_file)) return 1;

    Banco banco = Banco();
    banco.ler_banco(data_file);

    /*
    std::fstream data(data_file);
    std::fstream dna(dna_file);

    if (!data.is_open() || !dna.is_open()) return 1;

    std::string data_linha;
    std::string dna_linha;

    while (std::getline(data, data_linha))
    {
        std::cout << data_linha << std::endl;
    }

    std::getline(dna, dna_linha);
    std::cout << dna_linha << std::endl;

    std::cout << "Arquivos apresentados são: " << std::endl
              << "Database: "<< data_file << std::endl
              << "DNA: "<< dna_file << std::endl;
    */

    return 0;
}

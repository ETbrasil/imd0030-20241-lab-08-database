#include "../header/banco.h"

Banco::Banco() : perfis() {}
Banco::Banco(std::vector<Perfil> perfis) : perfis(perfis) {}

std::vector<Perfil> Banco::get_perfis() { return perfis; }

void Banco::set_perfis(std::vector<Perfil> perfis) { this->perfis = perfis; }

void Banco::ler_banco(std::string data_file)
{
    std::fstream data(data_file);

    std::string linha_data;

    int id = 0;
    int qtd = 0;

    while (std::getline(data, linha_data))
    {
        std::cout << "Loop: " << id + 1 << std::endl;
        std::cout << "---------------------------" << std::endl;

        std::stringstream stream(linha_data);
        std::string nome;
        std::vector<STR> sequencias;
        std::string token;
        Nomes plvr;

        if (std::getline(stream, nome, ','))
        {
            plvr = Nomes(nome, id);
        }

        if (id == 0)
        {
            std::cout << "Cabecario " << std::endl;

            while (std::getline(stream, token, ','))
            {
                STR strs(token, 0, id);

                sequencias.push_back(strs);
                qtd++;
            }
        } else
        {
            std::cout << "Lista de Pessoas: " << std::endl;

            while (std::getline(stream, token, ','))
            {
                int valor = std::stoi(token);
                std::cout << valor << std::endl;

                for (int i = 0; i < qtd; i++)
                {
                    sequencias[i].set_qtd(valor);
                }
                //sequencias[id].set_qtd(qtd);
                //std::cout << sequencias[id].get_qtd() << std::endl;
            }
        }

        Perfil perfil(plvr, sequencias);
        perfil.print();
        perfis.push_back(perfil);
        id++;
        std::cout << "---------------------------" << std::endl;
    }
}

#include "../header/perfil.h"

Perfil::Perfil() : nome(), sequencias() {}
Perfil::Perfil(Nomes nome, std::vector<STR> sequencias) : nome(nome), sequencias(sequencias) {}

Nomes Perfil::get_nome() { return nome; }
std::vector<STR> Perfil::get_sequencias() { return sequencias; }

void Perfil::set_nome(Nomes nome) { this->nome = nome; }
void Perfil::set_sequencias(std::vector<STR> sequencias) { this->sequencias = sequencias; }

void Perfil::print()
{
    std::cout << "Nome: " << nome.get_nome() << std::endl;
    for (int i = 0; i < sequencias.size(); i++)
    {
        std::cout << "Sequencia: " << sequencias[i].get_str() << " | Qtd: " << sequencias[i].get_qtd() << std::endl;
    }
}

bool abrir_arquivo(std::string arquivo)
{
    std::ifstream stream(arquivo);
    
    if (!stream.is_open())
    {
        stream.close();

        return false;
    }
    stream.close();

    return true;
}
#include "../header/nomes.h"

Nomes::Nomes() : nome(""), id(0) {}
Nomes::Nomes(std::string nome, int id) : nome(nome), id(id) {}

std::string Nomes::get_nome() { return nome; }
int Nomes::get_id() { return id; }

void Nomes::set_nome(std::string nome) { this->nome = nome; }
void Nomes::set_id(int id) { this->id = id; }
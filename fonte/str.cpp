#include "../header/str.h"

STR::STR(std::string str, int qtd, int id) : str(str), qtd(qtd), id(id) {}

std::string STR::get_str() { return str; }
int STR::get_tam() { return tam; }
int STR::get_qtd() { return qtd; }
int STR::get_id() { return id; }

void STR::set_str(std::string str) { this->str = str;}
void STR::set_tam() { tam = str.length();}
void STR::set_qtd(int qtd) { this->qtd = qtd;}
void STR::set_id(int id) { this->id = id;}


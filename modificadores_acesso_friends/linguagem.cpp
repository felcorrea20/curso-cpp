#include <iostream>
#include "linguagem.hpp"

std::string linguagem::getNome()
{
   return this->nome;
}

void linguagem::setNome(const std::string &nome)
{
   this->nome = nome;
}

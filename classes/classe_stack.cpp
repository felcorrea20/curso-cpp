#include <string>
#include "classe_stack.hpp"

pilha::stack::stack()
{
}

bool pilha::stack::falhou()
{
   return !ultimo_erro.empty();
}

void pilha::stack::adiciona(const std::string &erro)
{
   ultimo_erro = erro;
}

void pilha::stack::reseta()
{
	ultimo_erro.clear();
}

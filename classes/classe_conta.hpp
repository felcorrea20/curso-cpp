#pragma once

#include "classe_stack.hpp"

namespace classe  {

class conta {
public:
	int numero;
	double saldo;

	conta(const int &numero, const double &saldo);
	double depositar(const double &deposito, pilha::stack &rs);
	double retirar(const double &quantidade, pilha::stack &rs);
};

} /* classe */

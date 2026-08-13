#include "classe_conta.hpp"
#include "classe_stack.hpp"

classe::conta::conta(const int &numero, const double &saldo)
{
	this->numero = numero;
	this->saldo = saldo;
}

double classe::conta::depositar(const double &deposito, pilha::stack &rs)
{
	if (deposito <= 0)
		rs.adiciona("Nao eh possivel depositar valor menor ou igual a 0!");
	else
		this->saldo += deposito;

	return this->saldo;
}

double classe::conta::retirar(const double &quantidade, pilha::stack &rs)
{
	if (quantidade > saldo)
		rs.adiciona("Saldo insuficiente para retirada");
	else if (quantidade <= 0)
		rs.adiciona("Nao eh possivel retirar valor menor ou igual a 0!");
	else
		this->saldo -= quantidade;

	return this->saldo;
}

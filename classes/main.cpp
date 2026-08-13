#include <iostream>

#include "classe_conta.hpp"
#include "classe_stack.hpp"

using namespace std;

int main(int argc, char *argv[])
{
	classe::conta c(1, 20);
	classe::conta *pc  = &c;

	double saldoAtual = pc->saldo;
	cout << "Saldo inicial: " << saldoAtual << endl;

	pilha::stack rs;

	saldoAtual = pc->depositar(100.5, rs);
	if (!rs.falhou())
		cout << "Saldo apos deposito: " << saldoAtual << endl;
	else
		cout << rs.ultimo_erro << endl;

	rs.reseta();
	saldoAtual = pc->retirar(50.5, rs);
	if (!rs.falhou())
		cout << "Saldo apos retirada: " << saldoAtual << endl;
	else
		cout << rs.ultimo_erro << endl;

	return 0;
}

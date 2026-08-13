#include <iostream>
#include "my_math.h"

using namespace std;

void mostraFatorial();
void mostraAreaQuadrado();
void mostraAreaRetangulo();
void mostraOpcaoInexistente();

int main() {
	
	cout << "1- Fatorial" << endl;
	cout << "2- Area do quadrado" << endl;
	cout << "3- Area do retangulo" << endl;
	cout << "Escolha: ";
		
	int opcao;
	cin >> opcao;
	
	switch (opcao) {
		case 1:
			mostraFatorial();
			break;
		case 2:
			mostraAreaQuadrado();
			break;
		case 3:
			mostraAreaRetangulo();
			break;
		default:
			mostraOpcaoInexistente();		
	}
	
	return 0;
}

void mostraFatorial() {
	
	int num;
	
	cout << endl << "Numero para fatorial: ";
	cin >> num;
	
	cout << "Fatorial: " << fatorial(num) << endl;
	
}


void mostraAreaQuadrado() {
	
	float lado;
	
	cout << endl <<  "Lado do quadrado: ";
	cin >> lado;
	
	cout << "Area do quadrado: " << area_quadrado(lado) << endl;
	
}

void mostraAreaRetangulo() {
	
	float lado, base;
	
	cout << endl <<  "Lado do retangulo: ";
	cin >> lado;
	
	cout << "Base do retangulo: ";
	cin >> base;
	
	cout << "Area do retangulo: " << area_retangulo(lado, base) << endl;	
	
}

void mostraOpcaoInexistente() {
	
	cout << "Opcao inexistente." << endl;
	
}








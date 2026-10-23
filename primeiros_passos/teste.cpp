#include <iostream>

using namespace std;

int main() {

	// criando um ponteiro que aponta para 10 enderecos de memoria do tipo int
	int *pvet = new int[10];
	
	cout << "Digite um numero: ";
	cin >> *pvet; // aqui eu acesso diretamente o conteudo do primeiro endereco
	
	cout << "Digite outro numero: ";
	cin >> *(pvet + 1);
	
	
	cout << "Primeiro voce digitou: " << *pvet << endl;
	cout << "Depois voce digitou: " << *(pvet + 1) << endl;
	
	// ao alocar memoria, eh importante desalocá-la e atribuir o valor NULL para o ptr.
	delete[] pvet; // libera os enderecos
	pvet = NULL;
	
	return 0;
}
#include <iostream>

using namespace std;

int fatorial(int num) {
	
	int resultado = 1;
	for(int i = 1; i <= num; i++) {
		resultado *= i;
	}
	
	return resultado;
}

int main() {
	
	cout << "Digite um numero: ";
	
	int num;
	cin >> num;
	
	cout << "Fatorial: " << fatorial(num) << endl;
			
	return 0;
}

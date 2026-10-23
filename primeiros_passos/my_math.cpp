/* Esse modulo contem funcoes matematicas */

int fatorial(int num) {
	
	int fat = 1;
	for(int i = 1; i <= num; i++) {
		fat *= i;
	}
	
	return fat;
}

float area_quadrado(float lado) {
	return lado * lado;
}

float area_retangulo(float lado, float base) {
	return lado * base;
}
#include <iostream>

using namespace std;

void foo(int *n) {
	*n = 100;
}

int main() {
	
	int var = 10;
	int *pvar = &var;
	
	foo(pvar);
	cout << var << endl << *pvar << endl; 
	
	return 0;
}
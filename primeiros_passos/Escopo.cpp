#include <iostream>

using namespace std;

int num_global = 2;

void foo() {
	
	int num = 10;
	static int num_static = 1;
	
	cout << "Local: "  << num        << endl;
	cout << "Static: " << ++num_static << endl;
	cout << "Global: " << ++num_global << endl;
		
}

int main() {
	
	foo();
	foo();
	
	return 0;
}
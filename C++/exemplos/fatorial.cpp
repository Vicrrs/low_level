#include <iostream>
using namespace std;

long long fatorial(int n) {
	long long resultado = 1;

	for (int i = 1; i <= n; i++) {
		resultado = resultado * i;
	}
	return resultado;
}

int main() {
	// a mesma funcao é chamada varias vezes
	for (int k = 0; k <= 10; k++) {
		cout << k << "! = " << fatorial(k) << endl;
	}
	return 0;
}


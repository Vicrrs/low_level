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
	int k;
	cout << "Digite o numero ao fatorial: " << endl;
	cin >> k;

	cout << k << " ! = " << fatorial(k) << endl;
	return 0;
}


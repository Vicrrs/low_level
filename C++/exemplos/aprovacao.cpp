#include <iostream>
using namespace std;

// bool so pode valer true ou false
bool ehPar(int n) {
	return n % 2 == 0; // a comparacao ja da true ou false
}


bool aprovado(double media) {
	return media >= 7.0;
}

int main() {
	int numero;

	cout << "Digite um numero: " << endl;
	cin >> numero;

	if (ehPar(numero)) {
		cout << "Par" << endl;
	} else {
		cout << "Impar" << endl;
	}
	


	if (aprovado(numero)) {
		cout << "Aprovado" << endl;
	} else {
		cout << "Reprovado" << endl;
	}
	return 0;
}


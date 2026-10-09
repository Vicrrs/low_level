#include <iostream>
using namespace std;

// funcao que recebe dois numeros e retorna a soma
double somar (double a, double b) {
	return a + b;
}

int main() {

	double x, y;

		cout << "Digite dois numeros: "<< endl;
	cin >> x >> y;

	double resultado = somar(x, y);

	cout << "Soma: " << resultado << endl;
	return 0;
}



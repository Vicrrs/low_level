// Exercicio 9: Soma de um neuronio: entradas [1, 0, 2], pesos [0.5, -1, 0.25], bias

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<double> entradas = {1, 0, 2};
	vector<double> pesos = {0.5, -1, 0.25};

	double bias = 0.5;
	double soma = bias;

	for (size_t i = 0; i < entradas.size(); ++i)
		soma += entradas[i] * pesos[i];
	cout << "Soma = " << soma << "\n";
	return 0;

}


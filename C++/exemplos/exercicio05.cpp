// Exercicio 5: 3 passos de descida do gradiente em f(w) = (w - 3)^2

#include <iostream>
using namespace std;

int main() {

	double w = 0.0;
	double taxa = 0.1;

	for (int passo = 1; passo <= 3; ++passo) {
		double gradiente = 2 * (w - 3); // f'(w) = 2(w-3)
		w -= taxa * gradiente;
		cout << "PASSO " << passo << ": w = " << w << "\n";
	}
	return 0;

}


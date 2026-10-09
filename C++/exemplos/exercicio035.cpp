// Exercicio 35: Descida do gradiente estocastica (SGD) com embaralhamento
// Treine a regressao y = 3x + 2 atualizando os pesos a CADA exemplo (nao so no fim
// da epoca), visitando os exemplos em ordem aleatoria a cada epoca.
// E assim que redes grandes costumam ser treinadas.

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main() {
	vector<double> xs, ys;
	for (int i = -5; i <= 5; ++i) {
		xs.push_back(i);
		ys.push_back(3.0 * i + 2.0);
	}

	vector<int> ordem(xs.size());
	for (size_t i = 0; i < ordem.size(); ++i) ordem[i] = i;
	mt19937 gerador(42);

	double w = 0, b = 0, taxa = 0.01;
	for (int epoca = 1; epoca <= 200; ++epoca) {
		shuffle(ordem.begin(), ordem.end(), gerador); // embaralha
		for (int i : ordem) {
			double diff = (w * xs[i] + b) - ys[i];
			w -= taxa * 2 * diff * xs[i];
			b -= taxa * 2 * diff;
		}
		if (epoca % 50 == 0)
			cout << "Epoca " << epoca << ": w = " << w << ", b = " << b << "\n";
	}
	return 0;
}

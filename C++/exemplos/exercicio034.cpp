// Exercicio 34: Softmax
// Implemente softmax: transforma um vetor de numeros em probabilidades que somam 1.
// softmax(v)[i] = e^v[i] / soma de e^v[j]. Para {1, 2, 3}: ~[0.090, 0.245, 0.665]
// Usado na saida de redes que classificam em varias classes.


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void imprimir(const vector<double>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i)
        cout << v[i] << (i < v.size() ? ", " : "");
    cout << "]\n";
}

vector<double> softmax(const vector<double>& v) {
	// subtrair o maior valor evita overflow em e^x e nao muda o resultado
	double maior = *max_element(v.begin(), v.end());
	vector<double> r(v.size());
	double soma = 0.0;
	for (size_t i = 0; i < v.size(); ++i) {
		r[i] = exp(v[i] - maior);
		soma += r[i];
	}
	for (double& x : r) x /= soma;
	return r;
}

int main() {
	vector<double> p = softmax({1, 2, 3});
	cout << "softmax({1, 2, 3}) = "; imprimir(p);
	double total = 0;
	for (double x : p) total += x;
	cout << "Soma = " << total << "\n";
	return 0;
}

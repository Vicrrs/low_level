// Exercicio 10: Operacoes com vetores: a + b, a - b, 2a 

#include <iostream>
#include <vector>
using namespace std;

void imprimir(const vector<double>& v) {

	cout << "[";

	for (size_t i = 0; i < v.size(); ++i)
		cout << v[i] << (i + 1 < v.size() ? ", " : "");
	cout << "]\n";

}

int main() {

	vector<double> a = {1, 2};
	vector<double> b = {3, -1};
	vector<double> soma(2), sub(2), dobro(2);

	for (size_t i = 0; i < a.size(); ++i) {
		soma[i] = a[i] + b[i];
		sub[i] = a[i] - b[i];
		dobro[i] = 2 * a[i];
	}
	cout << "a + b = "; imprimir(soma);
	cout << "a - b = "; imprimir(sub);
	cout << "2a    = "; imprimir(dobro);

	return 0;

}


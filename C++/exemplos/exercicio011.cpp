// Exercicio 11: Matriz [[1, 2], [3, 4]] x vetor [1, 1]

#include <iostream>
#include <vector>
using namespace std;

double produtoEscalar(const vector<double>& a, const vector<double>& b) {

	double soma  = 0.0;

	for (size_t i = 0; i < a.size(); ++i)
		soma += a[i] * b[i];
	return soma;
}

void imprimir(const vector<double>& v)	{

	cout << "[";
	for (size_t i = 0; i < v.size(); ++i)
		cout << v[i] << (i + 1 < v.size() ? ", " : "");
	cout << "]\n";
}

int main() {

	vector<vector<double>> M = {{1, 2}, {3, 4}};
	vector<double> v = {1, 1};
	vector<double> resultado;

	for (const auto& linha : M)
		resultado.push_back(produtoEscalar(linha, v));
	cout << "Resultado = "; imprimir(resultado);
	return 0;

}



// Exercicio 12: Soma dos elementos de um vetor

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<double> v = {2.5, 4.0, 1.5, 2.0};
	double soma = 0.0;

	for (size_t i = 0; i < v.size(); ++i)
		soma += v[i];
	cout << "Soma = " << soma << "\n";
	return 0;

}


// Exercicio 8: Produto escalar de [1, 2, 3] e [4, 5, 6]

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<double> a = {1, 2, 3};
	vector<double> b = {4, 5, 6};

	double soma = 0.0;

	for (size_t i = 0; i < a.size(); ++i)
		soma += a[i] * b[i];
	cout << "a . b = " << soma << "\n";
	return 0;

}


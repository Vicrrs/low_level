// Exercicio 13: Media dos elementos de um vetor

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<double> v = {2.5, 4.0, 1.5, 2.0};
	double soma = 0.0;

	for (double x : v) // laco for-each: percorre cada elemento
		soma += x;
	cout << "Media = " << soma / v.size() << "\n";
	return 0;

}


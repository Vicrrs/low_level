// Exercicio 14: Maior elemento de um vetor

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<double> v = {3, -1, 7, 2};
	double maior = v[0]; // comeca supondo que o primeiro e o maior
	
	for (size_t i = 1; i < v.size(); ++i)
		if (v[i] > maior)
			maior = v[i];
	cout << "Maior = " << maior << "\n";
	return 0;

}


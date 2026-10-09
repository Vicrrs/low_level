// Exercicio 15: Quadrados de 1 a 10 com push_back

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> quadrados;

	for (int i = 1; i <= 10; i++)
		quadrados.push_back(i * i);
	for (int q : quadrados)
		cout << q << " ";
	cout << "\n";
	return 0;

}


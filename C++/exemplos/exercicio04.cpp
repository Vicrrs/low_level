// Exercicio 4: dE/dw com x = 2, y = 8, w =1 

#include <iostream>
using namespace std;

int main() {

	double x = 2, y = 8, w = 1;
	double previsao = w * x;
	double gradiente = 2 * (previsao - y) * x; // regra da cadeia
	cout << "dE/dw = " << gradiente << "\n";

	if (gradiente < 0)
		cout << "Negativo: aumentar w diminui o erro \n";
	else
		cout << "Positivo: diminuir o w diminui o erro \n";
	return 0;

}


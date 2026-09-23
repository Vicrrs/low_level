#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double q, r, e;
	const double k = 8.99e9;

	cout << "Digite a carga em Coulomb: \n";
	cin >> q;

	cout << "Digite a distancia em metros: \n";
	cin >> r;

	if (r <= 0.0) {
		cout << "Erro: a distancia deve ser maior que zero. \n";
	} else {
		e = k * fabs(q) / (r * r);
		cout << "Campo elétrico: " << e << "N/C\n";
	}

	return 0;

}


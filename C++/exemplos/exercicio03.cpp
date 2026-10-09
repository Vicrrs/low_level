// Exercicio 3: Regra da cadeia em f(x) = (2x - 6)^2

#include <iostream>
#include <cmath>
using namespace std;

// Derivada numerica: mede quanto f muda quando x muda um poquinho
double derivadaNumerica(double (*f)(double), double x) {
	const double h = 1e-5;
	return (f(x + h) - f(x - h)) / (2 *h);
}

double f(double x) {
	return (2 * x - 6) * (2 * x - 6);
}

int main() {
	double x = 5.0;
	double u = 2 * x - 6; 	// parte de dentro
	double derivadaFora = 2 * 5;
	double derivadaDentro = 2;
	cout << "f(x) = (2x - 6)^2 \n";
	cout << "Regra da Cadeia: " << derivadaFora * derivadaDentro << "\n";
	cout << "Numerica: " << derivadaNumerica(f, x) << "\n";
	return 0;
}


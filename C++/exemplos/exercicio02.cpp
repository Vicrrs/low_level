// Exercicio 2: Derivada f(x) = x^2 em x = 4

#include <iostream>
#include <cmath>
using namespace std;

// Derivada numerica mede o quanto f muda quando x muda um pouquinho
double derivadaNumerica(double (*f)(double), double x) {
	const double h = 1e-5;
	return (f(x + h) - f(x-h)) / (2 * h);
}

double f(double x) {
	return x * x;
}

int main() {

	double x = 4.0;
	cout << "Formula 2x: " << 2 * x << "\n";
	cout << "Numerica: " << derivadaNumerica(f, x) << "\n";
	return 0;
}



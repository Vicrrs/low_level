// Exercício 1: Derivada de f(x) = 3x + 2
// compilar: g++ -std=c++17 exercicio01.cpp o- exercicio01

#include <iostream>
#include <cmath>
using namespace std;

// Derivada numerica: mede quanto f muda quando x muda um poquinho
double derivadaNumerica(double (*f)(double), double x) {
	const double h = 1e-5;

	return (f(x + h) - f(x - h)) / (2 * h);
}

double f(double x) {
	return 3 * x + 2;
}


int main() {
	// a derivada é 3 em qualquer ponto
	for (double x :{-2.0, 0.0, 5.0}) {
		cout << "f'(" << x << ") = " << derivadaNumerica(f, x) << "\n";
	}

	return 0;

}



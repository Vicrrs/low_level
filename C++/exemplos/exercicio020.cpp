// Exercicio 20: Derivada numerica de (2x - 6)^2 em x = 5

#include <iostream>
using namespace std;

// Derivada numerica: mede quanto f muda quando x muda um pouquinho
double derivadaNumerica(double (*f)(double), double x) {
    const double h = 1e-5;
    return (f(x+h) - f(x-h) / (2*h));
}

double f(double x) {
    return (2 * x - 6) * (2 * x - 6);
}

int main() {
    double x = 5.0;
    cout << "Numeria = " << derivadaNumerica(f, x) << "\n";
    cout << "Formula = " << 4 * (2 * x - 6) << "\n";
    return 0;
}

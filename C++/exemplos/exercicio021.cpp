// Exercicio 21: Derivada numerica de x^2 em varios pontos
// Calcul o numericamente a dererivada de f(x) = x^2 para x = -2, -1, 0, 1, 2 e compare com a formula 2x.

#include <iostream>
#include <cmath>
using namespace std;

double derivadaNumerica(double (*f)(double), double x) {
    const double h = 1e-5;
    return (f(x + h) - f(x - h)) / (2 * h);
}

double f(double x) {
    return x * x;
}

int main() {
    for (int i = -2; i <= 2; ++i) {
        double x = i;

        cout << "x = " << x
             << " | numerica = " << derivadaNumerica(f, x)
             << " | formula 2x = " << 2 * x << "\n";
    }
    return 0;
}

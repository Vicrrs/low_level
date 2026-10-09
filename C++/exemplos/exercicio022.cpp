// Exercicio 22: Derivadas parciais numericas
// Para f(x, y) = x^2 + 3y, calcule numericamente df/dx e df/dy no ponto (2, 1)
// Resposta esperada: df/dx = 2x = 4 e df/dy = 3
// Ideia: para a parcial em x, mexa so no x e deixe y parado

#include <iostream>
using namespace std;

double f(double x, double y) {
    return x * x + 3 * y;
}

int main() {

    double x = 2, y = 1;
    const double h = 1e-5;
    double dfdx = (f(x + h, y) - f(x - h, y)) / (2 * h); // so x muda
    double dfdy = (f(x, y + h) - f(x, y - h)) / (2 * h); // so y muda

    cout << "df/dx = " << dfdx << "\n";
    cout << "df/dy = " << dfdy << "\n";


    return 0;
}

// Exercicio 23: Descida do gradiente com duas variaveis
// Minimize f(x, y) = (x - 1)^2 + (y + 2)^2 comecando em (0, 0), taxa 0.1, 100 passos.
// O minimo esta em (1, -2). Numa rede, cada peso e uma variavel dessas.

#include <iostream>
using namespace std;

int main() {
    double x = 0, y = 0;
    double taxa = 0.1;

    for (int passo = 1; passo <= 100; ++passo) {
        double gx = 2 * (x - 1); // df/dx
        double gy = 2 * (y + 2); // df/dy

        x -= taxa * gx;
        y -= taxa * gy;

        if (passo % 20 == 0)
            cout << "Passo " << passo << ": x = " << x << ", y = " << y << "\n";
    }

    return 0;

} 

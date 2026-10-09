// Exercicio 19: Descida do gradiente com 50 passos

#include <iostream>
using namespace std;

int main() {
    double w = 0.0;
    double taxa = 0.1;

    for (int passo = 1; passo <= 50; ++passo) {
        double gradiente = 2.0 * (w - 3.0); // f'(w) = 2(w-3)
        w -= taxa * gradiente;
        if (passo <= 3 || passo % 10 == 0)
            cout << "Passo " << passo << ": w = " << w << "\n";
    }
    return 0;
}

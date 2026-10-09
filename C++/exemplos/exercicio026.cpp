// Exercicio 26: ReLU e sua derivada
// Implemente ReLU(x) = max(0, x) e sua derivada (1 se x > 0, senao 0). Mostre para x de -2 a 2.
// ReLU e a funcao de ativaao mais usada em redes modernas.

#include <iostream>
using namespace std;

double relu(double x) {
    return x > 0 ? x : 0.0;
}

double reluDerivada(double x) {
    return x > 0 ? 1.0 : 0.0;
}

int main() {
    for (double x = -2; x <= 2; x += 1)
        cout << "x = " << x << " | relu = " << relu(x)
             << " | derivada = " << reluDerivada(x) << "\n";
    return 0;
}

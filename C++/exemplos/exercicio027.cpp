// Exercicio 27: Gradient check (conferir gradiente)
// Para E(w, b) = (w*x + b - y)^2 com x = 2, y = 7, w = 1, b = 1, compare o gradiente
// pela formula com o gradiente numerico. Se baterem, a formula esta certa.
// Novidade: usamos uma lambda, uma funcao escrita dentro do main.

#include <iostream>
using namespace std;

int main() {
    double x = 2, y = 7, w = 1, b = 1;
    const double h = 1e-5;

    //Lambda: funcao "de bolso" que calcula o erro para quaisquer w e b
    auto erro = [&](double w_, double b_) {
        double diff = w_ * x + b_ - y;
        return diff * diff;
    };

    // Pela formula (derivada analitica)
    double diff = w * x + b - y;
    double gradW = 2 * diff * x;
    double gradB = 2 * diff;

    // Numericamente
    double numW = (erro(w + h, b) - erro(w - h, b)) / (2 * h);
    double numB = (erro(w, b + h) - erro(w, b - h)) / (2 * h);

    cout << "dE/dw: formula = " << gradW << " | numerica = " << numW << "\n";
    cout << "dE/db: formula = " << gradB << " | numerica = " << numB << "\n";

}


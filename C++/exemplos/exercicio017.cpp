// Exercicio 17: Neuronio completo com sigmoid

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double produtoEscalar(const vector<double>& a, const vector<double>& b) {
    double soma = 0.0;
    for (size_t i = 0; i < a.size(); ++i)
        soma += a[i] * b[i];
    return soma;
}

double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

int main() {
    vector<double> entradas = {1, 0, 2};
    vector<double> pesos = {0.5, -1, 0.25};
    double bias = 0.5;
    double soma = produtoEscalar(entradas, pesos) + bias;

    cout << "Soma = " << soma << "\n";
    cout << "Saida = " << sigmoid(soma) << "\n";

    return 0;
}

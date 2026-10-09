// Exercicio 28: Regressao Linear com dados ruidosos
// Gere pontos de y = 2x - 1 somando um ruido aleatorio e treine w e b
// Dados reais nunca sao perfeitos: w e b chegam PERTO de 2 e -1, nao exatos.

#include <iostream>
#include <vector>
#include <random>
using namespace std;

int main() {

    mt19937 gerador(42); // semente fixa
    normal_distribution<double>  ruido(0.0, 0.5); // media 0, desvio 0.5

    vector<double> xs, ys;
    for (double x = -5; x <= 5; x += 0.5) {
        xs.push_back(x);
        ys.push_back(2 * x - 1 + ruido(gerador));
    }

    double w = 0, b = 0, taxa = 0.01;
    int n =xs.size();

    for (int epoca = 1; epoca <= 2000; ++epoca) {
        double gradW = 0, gradB = 0;
        for (int i = 0; i < n; ++i) {
            double diff = (w * xs[i] + b) - ys[i];
            gradW += 2 * diff * xs[i];
            gradB += 2 * diff;
        }
        w -= taxa * gradW / n;
        b -= taxa * gradB / n;
    }

    cout << "Aprendido: y = " << w << " X + " << b << "\n";
    cout << "Real:      y = 2x + (-1) (mais ruido) \n";
    return 0;

}

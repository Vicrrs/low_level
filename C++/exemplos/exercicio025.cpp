// Exercicio 25: Erro quadratico medio (MSE)
// Calcule o MSE entre previsoes {2.5, 0, 2, 8} e alvos {3, -0.5, 2, 7}
// MSE =  media de (previsao - alvo)^2

#include <iostream>
#include <vector>
using namespace std;

double mse(const vector<double>& prev, const vector<double>& alvo) {
    double soma = 0.0;
    for (size_t i = 0; i < prev.size(); ++i) {
        double diff = prev[i] - alvo[i];
        soma += diff * diff;
    }
    return soma / prev.size();
}

int main() {
    vector<double> previsoes = {2.5, 0, 2, 8};
    vector<double> alvos = {3, -0.5, 2, 7};
    cout << "MSE = " << mse(previsoes, alvos) << "\n";
    return 0;
}

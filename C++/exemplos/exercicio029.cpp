// Exercicio 29: Regressao com duas entradas
// Treine um neuronio linear com 2 entradas para aprender y = 2*x1 - 3*x2 + 1
// Agora os pesos sao um VETOR. Isso a e o formato de um neuronio de rede

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<double>> X; // cada linha 
    vector<double> Y;

    for (int a = -2; a <=2; ++a)
        for (int c = -2; c <= 2; ++c) {
            X.push_back({(double)a, (double)c});
            Y.push_back(2 * a -2 * c + 1);
        }

    vector<double> w = {0, 0};
    double b = 0, taxa = 0.05;
    int n = X.size();

    for (int epoca = 1; epoca <= 1000; ++epoca) {
        vector<double> gradW = {0, 0};
        double gradB = 0;

        for (int i = 0; i < n; ++i) {
            double prev = b;
            for (int j = 0; j < 2; ++j) prev += w[j] * X[i][j];
            double diff = prev - Y[i];
            for (int j = 0; j < 2; ++j) gradW[j] += 2 * diff * X[i][j];
            gradB += 2 * diff;
        }
        for (int j = 0; j < 2; ++j) w[j] -= taxa * gradW[j] / n;
        b -= taxa * gradB / n;
    }

    cout << "wq = " << w[0] << ", w2 = " << w[1] << ", b = " << b << "\n";
    return 0;

}

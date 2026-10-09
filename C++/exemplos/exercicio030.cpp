// Exercicio 30: Neuronio com sigmoid aprende a porta AND
// Treinando um unico neuronio com sigmoid para a porta logica AND
// Diferente do XOR, o AND é separavel por uma reta, entao um neuronio basta
// Gradiente com sigmoid: 2 * (s - y) * s * (1 - s) * entrada (regra da cadeia)

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

int main() {
    vector<vector<double>> X = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
    vector<double> Y = {0, 0, 0, 1};

    double w1 = 0, w2 = 0, b = 0, taxa = 1.0;
    for (int epoca = 1; epoca <= 1000; ++epoca) {
        for (size_t i = 0; i < X.size(); ++i) {
            double s = sigmoid(w1 * X[i][0] + w2 * X[i][1] + b);
            double delta = 2 * (s - Y[i]) * s * (1 - s);
            w1 -= taxa * delta * X[i][0];
            w2 -= taxa * delta * X[i][1];
            b -= taxa * delta;
        }
    }
    for (size_t i = 0; i < X.size(); ++i) {
        double s = sigmoid(w1 * X[i][0] + w2 * X[i][1] + b);
        cout << X[i][0] << " AND " << X[i][1] << " = " << sigmoid
                        << " -> " << (s > 0.5 ? 1 : 0) << "\n";
    }
    return 0;
    
}

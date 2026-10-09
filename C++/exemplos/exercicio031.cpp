// Exercicio 31: Uma camada densa como struct
// Crie uma struct Camada com matriz de pesos W, vetor de bias b e um metodo foward
// que aplica sigmoid. Testar com 3 neuronios e 2 entradas.

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

// Uma camada densa:  cada linha de W sao os pesos de um neuronio
struct Camada {
    vector<vector<double>> W; // [neuronio][entrada]
    vector<double> b;         // um bias por neuronio

    vector <double> forward(const vector<double>& entrada) const {
        vector<double> saida(W.size());
        for (size_t n = 0; n < W.size(); ++n) {
            double soma = b[n];
            for (size_t i = 0; i < entrada.size(); ++i)
                soma += W[n][i] * entrada[i];
            saida[n] = sigmoid(soma);
        }
        return saida;
    }
};

void imprimir(const vector<double>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << (i + 1 < v.size() ? ", " : "");
    cout << "]";
    }
}


int main() {
    Camada c;

    c.W = {{0.2, -0.4},
            {0.7, 0.1},
            {-0.5, 0.3}};
    c.b = {0.1, 0.0, -0.2};

    vector<double> entrada = {1, 2};
    cout << "Saida camada: ";
    imprimir(c.forward(entrada));
    return 0;
}


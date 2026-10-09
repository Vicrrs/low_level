// Exercicio 32: Forward de uma rede 2-2-1
// Empilhe duas camadas (2 entradas ->  2 ocultos -> saida) com pesos fixos e
// calcule a saida para a entrada {1, 1}. Confira a conta no papel!
// Oculta: somas 0 e 0.5 -> sigmoid 0.5 e 0.6225. Saida: soma -0.245 -> -0.439

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

// Uma camada densa: cada linha de W sao os pesos de um neuronio
struct Camada {
    vector<vector<double>> W; // [neuronio][entrada]
    vector<double> b;         // um bias por neuronio

    vector<double> forward(const vector<double>& entrada) const {
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
    for (size_t i = 0; i < v.size(); ++i)
        cout << v[i] << (i + 1 < v.size() ? ", " : "");
    cout << "]\n";
}


int main() {
    Camada oculta;
    oculta.W = {{1, -1}, {0.5, 0.5}};
    oculta.b = {0, -0.5};

    Camada saida;
    saida.W = {{1, -2}};
    saida.b = {0.5};

    vector<double> entrada = {1, 1};
    vector<double> h = oculta.forward(entrada); // saida de uma...
    vector<double> y = saida.forward(h);        // ...e entrada da outra

    cout << "Camada oculta: "; imprimir(h);
    cout << "Saida da rede: "; imprimir(y);
    return 0;
}


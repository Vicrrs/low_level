// Exercicio 24: Efeito da taxa de aprendizado
// Minimize f(w) = (w - 3)^2 a partir de w = 0 por 30 passos, com taxas 0.01, 0.1, 0.9 e 1.1

#include <iostream>
using namespace std;

int main() {
    for (double taxa : {0.01, 0.1, 0.9, 1.1}) {
        double w = 0.0;

        for (int passo = 0; passo < 30; ++passo)
            w -= taxa * 2 * (w - 3);
        cout << "taxa " << taxa << " -> w final = " << w << "\n";
    }
    return 0;
}

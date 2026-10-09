// Exercicio 18: Matriz x vetor com lacos aninhados

#include <iostream>
#include <vector>
using namespace std;

void imprimir(const vector<double>& v){
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i)
        cout << v[i] << (i + 1 < v.size() ? ", " : "");
    cout << "] \n";
}

int main() {
    vector<vector<double>> M = {{1, 2}, {3, 4}};
    vector<double> v = {1, 1};
    vector<double> resultado(M.size(), 0.0); // cria [0, 0]

    for (size_t lin = 0; lin < M.size(); ++lin)
        for (size_t col = 0; col < v.size(); ++col)
            resultado[lin] += M[lin][col] * v[col];
    cout << "Resultado = "; imprimir(resultado);

    return 0;
}

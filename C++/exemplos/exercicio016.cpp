// Exercício 16: Funcao de produto escalar

#include <iostream>
#include <vector>
using namespace std;

double produtoEscalar(const vector<double>& a, const vector<double>& b) {
    double soma = 0.0;
    for (size_t i = 0; i < a.size(); ++i)
        soma += a[i] * b[i];
    return soma;
}

int main() {

    vector<double> a = {1, 2, 3};
    vector<double> b = {4, 5, 6};

    cout << "produtoEscalar(a, b) = " << produtoEscalar(a, b) << "\n";

    return 0;

}

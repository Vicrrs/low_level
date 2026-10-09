// Exercicio 33: Um passo de backpropagation num neuronio sigmoid
// Neuronio s = sigmoid(w*x + b), erro E = (s - y) ^2, com x = 1.5, y = 1, w = 0.5, b = -0.2
// 1) Calcule dE/dw e dE/db pela regra da cadeia e confira numericamente
// 2) Faca um passo de descida ( taxa 0.5) e mostre que o erro diminui

#include <iostream>
#include <cmath>

using namespace std;

double sigmoid(double x) {
	return 1.0 / (1.0 + exp(-x));
}


int main() {
	double x = 1.5, y = 1, w = 0.5, b = -0.2, taxa = 0.5;
	const double h = 1e-5;
	auto erro = [&](double w_, double b_) {
		double s = sigmoid(w_ * x + b_);
		return (s - y) * (s - y);
	};

	// Regra da cadeia: dW/ds * ds/dz * dz/dw
	double s = sigmoid(w * x + b);
	double dE_ds = 2 * (s - y);
	double ds_dz = s * (1 - s);
	double gradW = dE_ds * ds_dz * x;
	double gradB = dE_ds * ds_dz * 1;

	double numW = (erro(w + h, b) - erro(w - h, b)) / (2 * h);
	double numB = (erro(w, b + h) - erro(w, b - h)) / (2 * h);

	cout << "dE/dw: formula = " << gradW << " | numerica = " << numW << "\n";
	cout << "dE/db: formula = " << gradB << " | numerica = " << numB << "\n";

	double erroAntes = erro(w, b);
	w -= taxa * gradW;
	b -= taxa * gradB;

	cout << "Erro antes: " << erroAntes << " | depois: " << erro(w, b) << "\n";

	return 0;

}


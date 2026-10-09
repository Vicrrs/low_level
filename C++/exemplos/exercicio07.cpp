// Exercicio 7: sigmoid e sua derivada em 0

#include <iostream>
#include <cmath>
using namespace std;

double sigmoid(double x) {
	return 1.0 / (1.0 + exp(-x));
}

int main() {

	double s = sigmoid(0);
	
	cout << "sigmoid(0) = " << s << "\n";
	cout << "derivada = " << s * (1 - s) << "\n";
	return 0;
	
}


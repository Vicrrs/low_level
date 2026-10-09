 // Exercicio 6: Derivadas parciais de E(w, b) = (w*x + b - y)^2
 
#include <iostream>
using namespace std;

int main() {

	double x = 2, y = 7, w = 1, b = 1;
	double diff = (w * x + b) - y;
	double gradW = 2 * diff * x;
	double gradB = 2 * diff;

	cout << "dE/dw = " << gradW << "\n";
	cout << "dE/db = " << gradB << "\n";

	return 0;

}


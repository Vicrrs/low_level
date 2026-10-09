#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double raio, area;
	const double pi = 3.14159265;

	cout << "Digite o raio do circulo: " << endl;
	cin >> raio;

	area = pi * pow(raio, 2);

	cout << "Area do circulo é: " << area << endl;

	return 0;

}

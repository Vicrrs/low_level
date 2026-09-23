#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double v0, theta_graus, theta_rad;
	const double pi = 3.14159265;
	const double g = 9.8;
	double vx, vy, alcance, altura_maxima, tempo_total;

	cout << "Digite a velocidade inicial em m/s: \n";
	cin >> v0;

	cout << "Digite o angulo em graus: \n";
	cin >> theta_graus;

	// C++ tambem calcula sin e cos usando radianos, nao graus
	theta_rad = theta_graus * pi / 180.0;

	vx = v0 * cos(theta_rad);
	vy = v0 * sin(theta_rad);

	alcance = v0 * v0 * sin(2.0 * theta_rad) / g;
	altura_maxima = vy * vy / (2.0 * g);
	tempo_total = 2.0 * vy / g;

	cout << "Componente vx: " << vx << " m/s\n";
    	cout << "Componente vy: " << vy << " m/s\n";
    	cout << "Alcance: " << alcance << " m\n";
    	cout << "Altura maxima: " << altura_maxima << " m\n";
    	cout << "Tempo total: " << tempo_total << " s\n";

    	return 0;
}


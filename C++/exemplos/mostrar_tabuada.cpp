#include <iostream>
using namespace std;

/*
 *Use void quando a função só mostra algo ou executa uma ação e não precisa devolver resultado. Mesmo sem parâmetros, os parênteses () são obrigatórios.
 */

// void = "vazio": a funcao so FAZ algo, nao devolve valor
void mostrarTabuada(int numero) {
	for (int i = 1; i <= 10; i++) {
		cout << numero << " x " << i << " = " << numero * i << endl;
	}
	// nao tem return com valor
}

// funcao void sem nenhum parametro
void mostrarLinha() {
	cout << " ------------------------ " << endl;
}

int main() {
	mostrarLinha();
	mostrarTabuada(7);
	mostrarLinha();
	mostrarTabuada(3);
	mostrarLinha();
	return 0;
}


// Exercicio 34: Softmax
// Implemente softmax: transforma um vetor de numeros em probabilidades que somam 1.
// softmax(v)[i] = e^v[i] / soma de e^v[j]. Para {1, 2, 3}: ~[0.090, 0.245, 0.665]
// Usado na saida de redes que classificam em varias classes.


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

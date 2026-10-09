/*Vamos pegar os pontos da reta y = 3x + 2 e dar a rede apenas os pares (x, y). Ela nao sabe qual é a formula;o objetivo é que descubra sozinha que o peso é 3 e o bias é 2.
 *
 * O neuronio so faz isso: 
 * 	previsao = w . x + b
 *
 * Repare que é exatamente a equação de uma reta: "w" é a inclinação e "b" é onde a reta corta o eixo y. Os dois começam em zero (um chute), e o treino vai ajustando.
 *
 * Como o ajuste funciona:
 *	Para cada ponto, calculamos o erro `(previsao - y)²`. Depois precisamos saber para que lado mexer em `w` e `b` para o erro diminuir. É por isso que as derivadas dizem:
 *
 *		* derivada do erro em relação a `w`: `2 . (previsão - y) . x`
 *		* derivada do erro em relação a `b`: `2 . (previsao - y)`
 *
 * Tiramos a média dessas derivadas sobre todos os pontos e damos um passo no sentido contrário:
 *
 * 	w -= taxa * gradW / n;
 * 	b -= taxa * gradB / n;
 *
 * Intuição: se a previsão ficou acima do valor certo, a diferença é positiva, então o gradiente é positivo e subtrair faz w e b diminuírem. Se ficou abaixo, eles aumentam. A rede vai se corrigindo pouco a pouco.
 *
 * */

#include <iostream>
#include <vector>


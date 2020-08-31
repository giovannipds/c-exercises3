#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	float x, y;
	
	printf("Escreva dois números decimais: ");
	scanf("%f%f", &x, &y);
	
	if (x > 0 && y > 0) {
		printf("O ponto P está no 1º quadrante.");
	} else if (x < 0 && y > 0) {
		printf("O ponto P está no 2º quadrante.");
	} else if (x < 0 && y < 0) {
		printf("O ponto P está no 3º quadrante.");
	} else if (x > 0 && y < 0) {
		printf("O ponto P está no 4º quadrante.");
	} else if (x == 0 && y > 0) {
		printf("O ponto P está entre o 1º e 2º quadrante.");
	} else if (x == 0 && y < 0) {
		printf("O ponto P está entre o 3º e 4º quadrante.");
	} else if (y == 0 && x < 0) {
		printf("O ponto P está entre o 2º e 3º quadrante.");
	} else if (y == 0 && x > 0) {
		printf("O ponto P está entre o 1º e 4º quadrante.");
	} else {
		printf("O ponto P está no centro do plano cartesiano.");
	}
	
	return 1;
}

#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	float x, y;
	
	printf("Escreva dois n�meros decimais: ");
	scanf("%f%f", &x, &y);
	
	if (x > 0 && y > 0) {
		printf("O ponto P est� no 1� quadrante.");
	} else if (x < 0 && y > 0) {
		printf("O ponto P est� no 2� quadrante.");
	} else if (x < 0 && y < 0) {
		printf("O ponto P est� no 3� quadrante.");
	} else if (x > 0 && y < 0) {
		printf("O ponto P est� no 4� quadrante.");
	} else if (x == 0 && y > 0) {
		printf("O ponto P est� entre o 1� e 2� quadrante.");
	} else if (x == 0 && y < 0) {
		printf("O ponto P est� entre o 3� e 4� quadrante.");
	} else if (y == 0 && x < 0) {
		printf("O ponto P est� entre o 2� e 3� quadrante.");
	} else if (y == 0 && x > 0) {
		printf("O ponto P est� entre o 1� e 4� quadrante.");
	} else {
		printf("O ponto P est� no centro do plano cartesiano.");
	}
	
	return 1;
}

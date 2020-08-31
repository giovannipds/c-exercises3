#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	float n1, n2, n3;
	
	printf("Escreva três números decimais: ");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	if (n1 == n2 && n1 == n3) {
		printf("Estes números compõem um triângulo equilátero.");
	} else if (n1 == n2 && n1 != n3 || n1 == n3 && n1 != n2 || n2 == n3 && n2 != n1) {
		printf("Estes foram um triângulo isósceles.");
	} else {
		printf("Este é um triângulo escaleno.");
	}
	
	return 1;
}

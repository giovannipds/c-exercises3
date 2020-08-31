#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	float a, b, c, a2, b2, c2;
	
	printf("Escreva três números decimais: ");
	scanf("%f%f%f", &a, &b, &c);
	
	a2 = pow(a, 2);
	b2 = pow(b, 2);
	c2 = pow(c, 2);
	
	if (a2 == b2 + c2) {
		printf("Estes números foram um triângulo retângulo.");
	} else if (a2 > b2 + c2) {
		printf("Estes deve ser um triângulo obtusângulo.");
	} else {
		printf("Este deve ser triângulo acutângulo.");
	}
	
	return 1;
}

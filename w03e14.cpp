#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	float a, b, c, a2, b2, c2;
	
	printf("Escreva tr�s n�meros decimais: ");
	scanf("%f%f%f", &a, &b, &c);
	
	a2 = pow(a, 2);
	b2 = pow(b, 2);
	c2 = pow(c, 2);
	
	if (a2 == b2 + c2) {
		printf("Estes n�meros foram um tri�ngulo ret�ngulo.");
	} else if (a2 > b2 + c2) {
		printf("Estes deve ser um tri�ngulo obtus�ngulo.");
	} else {
		printf("Este deve ser tri�ngulo acut�ngulo.");
	}
	
	return 1;
}

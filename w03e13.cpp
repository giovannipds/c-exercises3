#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	float n1, n2, n3;
	
	printf("Escreva tr�s n�meros decimais: ");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	if (n1 == n2 && n1 == n3) {
		printf("Estes n�meros comp�em um tri�ngulo equil�tero.");
	} else if (n1 == n2 && n1 != n3 || n1 == n3 && n1 != n2 || n2 == n3 && n2 != n1) {
		printf("Estes foram um tri�ngulo is�sceles.");
	} else {
		printf("Este � um tri�ngulo escaleno.");
	}
	
	return 1;
}

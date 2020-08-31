#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	float temp;
	
	printf("Escreva um número decimal: ");
	scanf("%f", &temp);
	
	if (temp < 0) {
		printf("A temperatura está congelante!");
	} else if (temp < 10) {
		printf("Está muito frio!");
	} else if (temp < 20) {
		printf("Está frio, né?");
	} else if (temp < 30) {
		printf("Tá de boas.");
	} else if (temp < 40) {
		printf("Cara, deve tá quente.");
	} else {
		printf("Meu Deus, tá muito quente!");
	}
	
	return 1;
}

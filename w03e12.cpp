#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	float temp;
	
	printf("Escreva um n�mero decimal: ");
	scanf("%f", &temp);
	
	if (temp < 0) {
		printf("A temperatura est� congelante!");
	} else if (temp < 10) {
		printf("Est� muito frio!");
	} else if (temp < 20) {
		printf("Est� frio, n�?");
	} else if (temp < 30) {
		printf("T� de boas.");
	} else if (temp < 40) {
		printf("Cara, deve t� quente.");
	} else {
		printf("Meu Deus, t� muito quente!");
	}
	
	return 1;
}

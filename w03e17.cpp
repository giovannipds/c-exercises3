#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int n;
	bool invalid;
	
	do {
		printf("Digite um número de 1 a 7: ");
		fflush(stdin); // clear memory buffer
		scanf("%d", &n);
		
		invalid = ! (n >= 1 && n <= 7);
		// printf("Debug: número %d e %s se está entre 1 e 7.\n", n, invalid ? "false" : "true");
		if (invalid) {
			printf("Opa, acho que não. Tenta de novo.\n");
		}
	} while (invalid);
	
	if (n == 1) {
		printf("Domingo.");
	} else if (n == 2) {
		printf("Segunda-feira.");
	} else if (n == 3) {
		printf("Terça-feira.");
	} else if (n == 4) {
		printf("Quarta-feira.");
	} else if (n == 5) {
		printf("Quinta-feira.");
	} else if (n == 6) {
		printf("Sexta-feira.");
	} else {
		printf("Sábado.");
	}
	
	return 1;
}

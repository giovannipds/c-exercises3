#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int n, n2, digits = 0;
	
	printf("Escreva um números inteiro: ");
	scanf("%d", &n);
	
	n2 = n;
	while (n2 > 0) {
		n2 = n2 / 10;
		digits++;
	}
	
	if (n >= 100) {
		printf("O número %d tem quatro ou mais dígitos (?).\n", n);
	}
	
	printf("Precisamente, %d tem %d dígito(s).", n, digits);
	
	return 1;
}

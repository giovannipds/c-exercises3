#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int n;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &n);
	
	if (n % 2 == 0)
		printf("O número %d é par.", n);
	else
		printf("O número %d é ímpar.", n);
	
	return 1;
}

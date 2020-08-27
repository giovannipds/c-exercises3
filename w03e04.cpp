#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int n;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &n);
	
	if (n > 0)
		printf("O número %d é positivo.", n);
	else if (n < 0)
		printf("O número %d é negativo.", n);
	else
		printf("Este número é zero.");
	
	return 1;
}

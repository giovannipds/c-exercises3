#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int a, b;
	
	printf("Escreva dois números inteiros: ");
	scanf("%d%d", &a, &b);
	
	printf("O maior número entre %d e %d é %d.", a, b, a > b ? a : b);
	
	return 1;
}

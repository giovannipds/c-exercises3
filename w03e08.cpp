#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int a, b;
	
	printf("Escreva dois n�meros inteiros: ");
	scanf("%d%d", &a, &b);
	
	printf("O maior n�mero entre %d e %d � %d.", a, b, a > b ? a : b);
	
	return 1;
}

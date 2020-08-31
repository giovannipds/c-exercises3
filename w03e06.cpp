#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int y;
	
	printf("Digite um número inteiro que represente um ano: ");
	scanf("%d", &y);
	
	if (y % 4 == 0 && ! (y % 100 == 0 && ! (y % 400 == 0))) {
		printf("%d é um ano bissexto.", y);
	} else {
		printf("%d não é um ano bissexto.", y);
	}
	
	return 1;
}

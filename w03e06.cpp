#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int y;
	
	printf("Digite um n�mero inteiro que represente um ano: ");
	scanf("%d", &y);
	
	if (y % 4 == 0 && ! (y % 100 == 0 && ! (y % 400 == 0))) {
		printf("%d � um ano bissexto.", y);
	} else {
		printf("%d n�o � um ano bissexto.", y);
	}
	
	return 1;
}

#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int n;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &n);
	
	if (n % 2 == 0)
		printf("O n�mero %d � par.", n);
	else
		printf("O n�mero %d � �mpar.", n);
	
	return 1;
}

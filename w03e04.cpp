#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int n;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &n);
	
	if (n > 0)
		printf("O n�mero %d � positivo.", n);
	else if (n < 0)
		printf("O n�mero %d � negativo.", n);
	else
		printf("Este n�mero � zero.");
	
	return 1;
}

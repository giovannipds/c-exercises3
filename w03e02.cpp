#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int n1, n2, n3;
	
	printf("Digite tr�s n�meros inteiros: ");
	scanf("%d%d%d", &n1, &n2, &n3);
	
	if (n3 == n1 + n2)
		printf("A soma de %d e %d equivale ao terceiro n�mero %d.", n1, n2, n3);
	else
		printf("A soma de %d e %d n�o equivale a %d.", n1, n2, n3);
	
	return 1;
}

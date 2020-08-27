#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int n1, n2, n3;
	
	printf("Digite três números inteiros: ");
	scanf("%d%d%d", &n1, &n2, &n3);
	
	if (n3 == n1 + n2)
		printf("A soma de %d e %d equivale ao terceiro número %d.", n1, n2, n3);
	else
		printf("A soma de %d e %d não equivale a %d.", n1, n2, n3);
	
	return 1;
}

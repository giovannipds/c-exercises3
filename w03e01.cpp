#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int n1, n2;
	
	printf("Digite dois n�meros inteiros: ");
	scanf("%d%d", &n1, &n2);
	
	if (n1 == n2)
		printf("Os dois n�meros s�o iguais: %d.", n1);
	else
		printf("Os n�meros %d e %d s�o diferentes.", n1, n2);
	
	return 1;
}

#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int n1, n2;
	
	printf("Digite dois números inteiros: ");
	scanf("%d%d", &n1, &n2);
	
	if (n1 == n2)
		printf("Os dois números são iguais: %d.", n1);
	else
		printf("Os números %d e %d são diferentes.", n1, n2);
	
	return 1;
}

#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int a, b, c, higher;
	
	printf("Escreva três números inteiros: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a > b) {
		higher = a > c ? a : c;
	} else {
		higher = b > c ? b : c;
	}
	
	printf("O maior número entre estes é %d.", higher);
	
	return 1;
}

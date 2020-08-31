#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	float h;
	
	printf("Digite um decimal que represente sua altura: ");
	scanf("%f", &h);
	
	if (h < 1.5) {
		printf("Você é anão... kkkkk");
	} else if (h < 1.65) {
		printf("Você tem uma estatura média.");
	} else {
		printf("Você é alto!");
	}
	
	return 1;
}

#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	float h;
	
	printf("Digite um decimal que represente sua altura: ");
	scanf("%f", &h);
	
	if (h < 1.5) {
		printf("Voc� � an�o... kkkkk");
	} else if (h < 1.65) {
		printf("Voc� tem uma estatura m�dia.");
	} else {
		printf("Voc� � alto!");
	}
	
	return 1;
}

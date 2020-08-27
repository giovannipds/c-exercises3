#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int h, m, s;
	bool vh, vm, vs;
	
	printf("Vamos representar horas, minutos e segundos.\n");
	
	printf("Digite um número inteiro para horas (entre 0 e 23): ");
	scanf("%d", &h);
	
	printf("Digite um inteiro para minutos (0 e 59): ");
	scanf("%d", &m);
	
	printf("Digite para segundos (0 e 59): ");
	scanf("%d", &s);
	
	vh = h >= 0 && h <= 23;
	vm = m >= 0 && m <= 59;
	vs = s >= 0 && s <= 59;
	if (vh && vm && vs)
		printf("Esse é um horário válido: %02d:%02d:%02d.", h, m, s);
	else {
		printf("Os números digitados não são um horário válido: %02d:%02d:%02d.\n", h, m, s);
		if ( ! vh) {
			printf("A hora é inválida;\n");
		}
		if ( ! vm) {
			printf("Os minutos não são válidos;\n");
		}
		if ( ! vs) {
			printf("Os segundos são inválidos;");
		}
	}
	
	return 1;
}

#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	int h, m, s;
	bool vh, vm, vs;
	
	printf("Vamos representar horas, minutos e segundos.\n");
	
	printf("Digite um n�mero inteiro para horas (entre 0 e 23): ");
	scanf("%d", &h);
	
	printf("Digite um inteiro para minutos (0 e 59): ");
	scanf("%d", &m);
	
	printf("Digite para segundos (0 e 59): ");
	scanf("%d", &s);
	
	vh = h >= 0 && h <= 23;
	vm = m >= 0 && m <= 59;
	vs = s >= 0 && s <= 59;
	if (vh && vm && vs)
		printf("Esse � um hor�rio v�lido: %02d:%02d:%02d.", h, m, s);
	else {
		printf("Os n�meros digitados n�o s�o um hor�rio v�lido: %02d:%02d:%02d.\n", h, m, s);
		if ( ! vh) {
			printf("A hora � inv�lida;\n");
		}
		if ( ! vm) {
			printf("Os minutos n�o s�o v�lidos;\n");
		}
		if ( ! vs) {
			printf("Os segundos s�o inv�lidos;");
		}
	}
	
	return 1;
}

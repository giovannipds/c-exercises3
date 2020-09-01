#include <stdio.h>
#include <windows.h>

const char *months[12] = {
	"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
	"Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
}; 
  
int main()
{
	SetConsoleOutputCP(1252);
	
	int n;
	bool invalid;
	
	do {
		printf("Digite um número de 1 a 12: ");
		fflush(stdin); // clear memory buffer
		scanf("%d", &n);
		
		invalid = ! (n >= 1 && n <= 12);
		if (invalid) {
			printf("Não está entre o intervalo solicitado, por favor repita.\n");
		}
	} while (invalid);
	
	printf("%s", months[n - 1]);
	
	return 1;
}

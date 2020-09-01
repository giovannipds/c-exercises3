#include <stdio.h>
#include <windows.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    char conceito;
    
    printf("Informe o conceito final do aluno (A-F): ");
    scanf("%c", &conceito);

	switch (toupper(conceito))
	{
		case 'A':
			printf("A - Excelente\n");
			break;
		case 'B':
			printf("B - Muito Bom\n");
			break;
		case 'C':
			printf("C - Bom\n");
			break;
		case 'D':
			printf("D - Regular\n");
			break;
		case 'E':
			printf("E - Fraco\n");
			break;
		case 'F':
			printf("F - Ruim\n");
			break;
		default:
			printf("O conceito final %c informado é inválido.", conceito);
	}
		
    return 0;
}

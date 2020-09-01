#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int diaSemana;
    
    printf("Informe o n�mero do dia da semana (1-7): ");
    scanf("%d", &diaSemana);

	switch (diaSemana)
	{
		case 1:
			printf("1 - Domingo\n");
			break;
		case 2:
			printf("2 - Segunda-feira\n");
			break;
		case 3:
			printf("3 - Ter�a-feira\n");
			break;
		case 4:
			printf("4 - Quarta-feira\n");
			break;
		case 5:
			printf("5 - Quinta-feira\n");
			break;
		case 6:
			printf("6 - Sexta-feira\n");
			break;
		case 7:
			printf("7 - S�bado\n");
			break;			
		default:
			printf("N�mero do dia da semana %d � inv�lido.", diaSemana);
	}
		
    return 0;
}

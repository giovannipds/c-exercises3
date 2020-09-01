#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int mes;
    
    printf("Informe o número do mês (1-12): ");
    scanf("%d", &mes);

	switch (mes)
	{
		case 1:
			printf("01 - Janeiro\n");
			break;
		case 2:
			printf("02 - Fevereiro\n");
			break;
		case 3:
			printf("03 - Março\n");
			break;
		case 4:
			printf("04 - Abril\n");
			break;
		case 5:
			printf("05 - Maio\n");
			break;
		case 6:
			printf("06 - Junho\n");
			break;
		case 7:
			printf("07 - Julho\n");
			break;
		case 8:
			printf("08 - Agosto\n");
			break;
		case 9:
			printf("09 - Setembro\n");
			break;
		case 10:
			printf("10 - Outubro\n");
			break;
		case 11:
			printf("11 - Novembro\n");
			break;
		case 12:
			printf("12 - Dezembro\n");
			break;
		default:
			printf("Número do mês %d informado é inválido.", mes);
	}
		
    return 0;
}

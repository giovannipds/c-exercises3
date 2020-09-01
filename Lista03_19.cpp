#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int planeta;
    
    printf("1. Mercúrio\n");
    printf("2. Vênus\n");
    printf("3. Terra\n");
    printf("4. Marte\n");
    printf("5. Júpiter\n");
    printf("6. Saturno\n");
    printf("7. Netuno\n");
    printf("8. Urano\n");
    printf("9. Plutão\n");
    printf("Informe o número do planeta desejado: ");
    scanf("%d", &planeta);

	switch (planeta)
	{
		case 1:
			printf("A distância do Sol até Mercúrio é de aproximadamente 59 milhões de quilômetros.\n");
			break;
		case 2:
			printf("A distância do Sol até Vênus é de aproximadamente 108 milhões de quilômetros.\n");
			break;
		case 3:
			printf("A distância do Sol até a Terra é de aproximadamente 150 milhões de quilômetros.\n");
			break;
		case 4:
			printf("A distância do Sol até Marte é de aproximadamente 228 milhões de quilômetros.\n");
			break;
		case 5:
			printf("A distância do Sol até Júpiter é de aproximadamente 750 milhões de quilômetros.\n");
			break;
		case 6:
			printf("A distância do Sol até Saturno é de aproximadamente 1431 milhões de quilômetros.\n");
			break;
		case 7:
			printf("A distância do Sol até Netuno é de aproximadamente 2877 milhões de quilômetros.\n");
			break;
		case 8:
			printf("A distância do Sol até Urano é de aproximadamente 4509 milhões de quilômetros.\n");
			break;
		case 9:
			printf("A distância do Sol até Plutão é de aproximadamente 5916 milhões de quilômetros.\n");
			break;
		default:
			printf("Erro! O número %d não está associado a nenhum planeta.", planeta);
	}
		
    return 0;
}

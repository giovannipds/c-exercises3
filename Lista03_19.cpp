#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int planeta;
    
    printf("1. Merc�rio\n");
    printf("2. V�nus\n");
    printf("3. Terra\n");
    printf("4. Marte\n");
    printf("5. J�piter\n");
    printf("6. Saturno\n");
    printf("7. Netuno\n");
    printf("8. Urano\n");
    printf("9. Plut�o\n");
    printf("Informe o n�mero do planeta desejado: ");
    scanf("%d", &planeta);

	switch (planeta)
	{
		case 1:
			printf("A dist�ncia do Sol at� Merc�rio � de aproximadamente 59 milh�es de quil�metros.\n");
			break;
		case 2:
			printf("A dist�ncia do Sol at� V�nus � de aproximadamente 108 milh�es de quil�metros.\n");
			break;
		case 3:
			printf("A dist�ncia do Sol at� a Terra � de aproximadamente 150 milh�es de quil�metros.\n");
			break;
		case 4:
			printf("A dist�ncia do Sol at� Marte � de aproximadamente 228 milh�es de quil�metros.\n");
			break;
		case 5:
			printf("A dist�ncia do Sol at� J�piter � de aproximadamente 750 milh�es de quil�metros.\n");
			break;
		case 6:
			printf("A dist�ncia do Sol at� Saturno � de aproximadamente 1431 milh�es de quil�metros.\n");
			break;
		case 7:
			printf("A dist�ncia do Sol at� Netuno � de aproximadamente 2877 milh�es de quil�metros.\n");
			break;
		case 8:
			printf("A dist�ncia do Sol at� Urano � de aproximadamente 4509 milh�es de quil�metros.\n");
			break;
		case 9:
			printf("A dist�ncia do Sol at� Plut�o � de aproximadamente 5916 milh�es de quil�metros.\n");
			break;
		default:
			printf("Erro! O n�mero %d n�o est� associado a nenhum planeta.", planeta);
	}
		
    return 0;
}

#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num1, num2, num3;
    
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Informe o segundo n�mero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro n�mero: ");
    scanf("%d", &num3);
	
	if (num3==(num1+num2))
	   printf("O terceiro n�mero informado equivale � soma dos dois primeiros.\n");
	else
	   printf("O terceiro n�mero informado n�o equivale � soma dos dois primeiros.\n");

    return 0;
}

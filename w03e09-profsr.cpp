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
	
	if (num1>num2 && num1>num3)
	   printf("O maior n�mero lido � %d.\n", num1);
	else if (num2>num1 && num2>num3)
	   printf("O maior n�mero lido � %d.\n", num2);
	else
	   printf("O maior n�mero lido � %d.\n", num3);

    return 0;
}

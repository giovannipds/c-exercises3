#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num1, num2;
    
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Informe o segundo n�mero: ");
    scanf("%d", &num2);
	
	if (num1>num2)
	   printf("O maior n�mero lido � %d.\n", num1);
	else
	   printf("O maior n�mero lido � %d.\n", num2);

    return 0;
}

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
	
	if (num1==num2)
	   printf("Os dois n�meros informados s�o iguais.\n");
	else
	   printf("Os dois n�meros informados s�o diferentes.\n");

    return 0;
}

#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num1, num2, num3;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    printf("Informe o terceiro número: ");
    scanf("%d", &num3);
	
	if (num3==(num1+num2))
	   printf("O terceiro número informado equivale à soma dos dois primeiros.\n");
	else
	   printf("O terceiro número informado não equivale à soma dos dois primeiros.\n");

    return 0;
}

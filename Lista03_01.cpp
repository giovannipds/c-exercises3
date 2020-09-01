#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num1, num2;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
	
	if (num1==num2)
	   printf("Os dois números informados são iguais.\n");
	else
	   printf("Os dois números informados são diferentes.\n");

    return 0;
}

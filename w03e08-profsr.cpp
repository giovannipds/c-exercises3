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
	
	if (num1>num2)
	   printf("O maior número lido é %d.\n", num1);
	else
	   printf("O maior número lido é %d.\n", num2);

    return 0;
}

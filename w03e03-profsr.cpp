#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);
	
	if (num%2==0)
	   printf("O número %d é par.\n", num);
	else
	   printf("O número %d é ímpar.\n", num);

    return 0;
}

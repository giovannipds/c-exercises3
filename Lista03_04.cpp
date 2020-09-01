#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);
	
	if (num>0)
	   printf("O número %d é positivo.\n", num);
	else if (num<0)
	   printf("O número %d é negativo.\n", num);
	else
	   printf("O número é %d.\n", num);

    return 0;
}

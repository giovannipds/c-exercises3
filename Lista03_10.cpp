#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);
	
	if (num<10)
	   printf("O número %d possui 1 dígito.\n", num);
	else if (num<100)
	   printf("O número %d possui 2 dígitos.\n", num);
	else if (num<1000)
	   printf("O número %d possui 3 dígitos.\n", num);
	else
	   printf("O número %d possui 4 ou mais dígitos.\n", num);

    return 0;
}

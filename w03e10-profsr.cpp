#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num;
    
    printf("Informe um n�mero: ");
    scanf("%d", &num);
	
	if (num<10)
	   printf("O n�mero %d possui 1 d�gito.\n", num);
	else if (num<100)
	   printf("O n�mero %d possui 2 d�gitos.\n", num);
	else if (num<1000)
	   printf("O n�mero %d possui 3 d�gitos.\n", num);
	else
	   printf("O n�mero %d possui 4 ou mais d�gitos.\n", num);

    return 0;
}

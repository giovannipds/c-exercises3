#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num;
    
    printf("Informe um n�mero: ");
    scanf("%d", &num);
	
	if (num>0)
	   printf("O n�mero %d � positivo.\n", num);
	else if (num<0)
	   printf("O n�mero %d � negativo.\n", num);
	else
	   printf("O n�mero � %d.\n", num);

    return 0;
}

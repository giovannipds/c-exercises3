#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num;
    
    printf("Informe um n�mero: ");
    scanf("%d", &num);
	
	if (num%2==0)
	   printf("O n�mero %d � par.\n", num);
	else
	   printf("O n�mero %d � �mpar.\n", num);

    return 0;
}

#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int ano;
    
    printf("Informe o ano: ");
    scanf("%d", &ano);
    
	if (ano%4==0 && (!(ano%100==0 && ano%400!=0)))
		printf("O ano %d � bissexto.\n", ano);
	else
	   printf("O ano %d n�o � bissexto.\n", ano);

    return 0;
}

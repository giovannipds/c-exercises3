#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float altura;
    
    printf("Informe a altura (m): ");
    scanf("%f", &altura);
    
	if (altura<1.5)
		printf("Estatura de anão - %1.2f\n", altura);
	else if (altura<=1.64)
		printf("Estatura média - %1.2f\n", altura);
	else 
	   printf("Estatura alta - %1.2f\n", altura);

    return 0;
}

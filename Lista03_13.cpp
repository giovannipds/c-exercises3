#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float lado1,lado2,lado3;
    
    printf("Informe a medida do primeiro lado: ");
    scanf("%f", &lado1);
    printf("Informe a medida do segundo lado: ");
    scanf("%f", &lado2);
    printf("Informe a medida do terceiro lado: ");
    scanf("%f", &lado3);

    if(lado1<(lado2+lado3) && lado2<(lado1+lado3) && lado3<(lado1+lado2))
		if (lado1==lado2 && lado2==lado3)
			printf("Tri�ngulo equil�tero.");
		else if (lado1==lado2 || lado1==lado3 || lado2==lado3)
			printf("Tri�ngulo equil�tero.");
		else
			printf("Tri�ngulo escaleno.");
	else
		printf("N�o � um tri�ngulo.");
		
    return 0;
}

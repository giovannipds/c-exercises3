#include <stdio.h>
#include <windows.h>
#include <math.h>

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
		if (pow(lado1,2)==(pow(lado2,2)+pow(lado3,2)) ||
		    pow(lado2,2)==(pow(lado1,2)+pow(lado3,2)) ||
		    pow(lado3,2)==(pow(lado1,2)+pow(lado2,2))
		   )
			printf("Tri�ngulo ret�ngulo.");
		else if (pow(lado1,2)>(pow(lado2,2)+pow(lado3,2)) ||
		         pow(lado2,2)>(pow(lado1,2)+pow(lado3,2)) ||
		         pow(lado3,2)>(pow(lado1,2)+pow(lado2,2))
				)		         
			printf("Tri�ngulo obtus�ngulo.");
		else
			printf("Tri�ngulo acut�ngulo.");
	else
		printf("N�o � um tri�ngulo.");
		
    return 0;
}

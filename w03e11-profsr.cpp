#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float X,Y;
    
    printf("Informe a coordenada X do ponto P: ");
    scanf("%f", &X);
    printf("Informe a coordenada Y do ponto P: ");
    scanf("%f", &Y);
	
	if (X==0)
		if (Y==0)
	      printf("O ponto P(%f,%f) est� na origem.", X, Y);
		else
	      printf("O ponto P(%f,%f) est� sobre o Eixo Y.", X, Y);
	else
		if (Y==0)
	      printf("O ponto P(%f,%f) est� sobre o Eixo X.", X, Y);
	    else
	    	if (X>0)
	    		if (Y>0)
					printf("O ponto P(%f,%f) est� localizado no 1� quadrante.", X, Y);
				else
					printf("O ponto P(%f,%f) est� localizado no 4� quadrante.", X, Y);
			else
				if (Y>0)
					printf("O ponto P(%f,%f) est� localizado no 2� quadrante.", X, Y);
				else
					printf("O ponto P(%f,%f) est� localizado no 3� quadrante.", X, Y);

    return 0;
}

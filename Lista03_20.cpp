#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int horChegada,minChegada,horSaida,minSaida,horPermanencia,minPermanencia;
    float valorAPagar;
    
    printf("Informe a hora da chegada: ");
    scanf("%d", &horChegada);
    printf("Informe o minuto da chegada: ");
    scanf("%d", &minChegada);

    printf("Informe a hora da saída: ");
    scanf("%d", &horSaida);
    printf("Informe o minuto da saída: ");
    scanf("%d", &minSaida);

    horPermanencia = horSaida-horChegada;
    minPermanencia = minSaida-minChegada;
    
    if (horPermanencia==0 && minPermanencia<0)
    {
    	horPermanencia = 23;
    	minPermanencia = 60+minPermanencia;
	}     
    if (horPermanencia<0)
    {
    	horPermanencia = horPermanencia+24;
	}
    
    if (minPermanencia<0)
    {
    	horPermanencia = horPermanencia-1;
    	minPermanencia = 60+minPermanencia;
	}
    if (horPermanencia>0 && minPermanencia>0)
    {
    	horPermanencia = horPermanencia+1;
    	minPermanencia = 0;
	}
	
	if (horPermanencia>=17)
		valorAPagar = 50;
	else if (horPermanencia>=2)
		valorAPagar = 12+2.50*(horPermanencia-2);
	else if (horPermanencia==1)
	    valorAPagar = 7;
	else
	{
		if (minPermanencia<=5)
			valorAPagar = 0;
		else if (minPermanencia<=30)
			valorAPagar = 4;
		else
			valorAPagar = 7;
	}
	printf("\n");
	printf("Horário de Entrada: %02d:%02d\n", horChegada, minChegada);
	printf("Horário de Saída..: %02d:%02d\n", horSaida, minSaida);
	printf("                   ---------\n");
	printf("Permanência.......: %02d:%02d\n", horPermanencia, minPermanencia);
	printf("Valor a Pagar.....: R$ %2.2f\n", valorAPagar);
		
    return 0;
}

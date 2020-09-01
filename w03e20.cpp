#include <stdio.h>
#include <windows.h>
#include <math.h>

int getHours(char *msg)
{
	int hs;
	do {
		printf(msg);
		fflush(stdin); // clear memory buffer
		scanf("%i", &hs);
		if (hs < 0 || hs > 23) {
			printf("Esse hor�rio � inv�lido, tente novamente.\n");
		}
	} while (hs < 0 || hs > 23);
	return hs;
}

int getMinutes(char *msg)
{
	int mins;
	do {
		printf(msg);
		fflush(stdin); // clear memory buffer
		scanf("%i", &mins);
		if (mins < 0 || mins > 59) {
			printf("Essa quantidade de minutos n�o est� certa, tente novamente.\n");
		}
	} while (mins < 0 || mins > 59);
	return mins;
}

int main()
{
	SetConsoleOutputCP(1252);
	
	int ihours, imins, fhours, fmins, dhours, dmins;
	float price;
	
	ihours = getHours("Qual � o hor�rio de entrada? ");
	imins = getMinutes("Qual � o minuto de entrada? ");
	fhours = getHours("Qual foi o hor�rio de s�ida? ");
	fmins = getMinutes("Qual foi o minuto de sa�da? ");
	
	dhours = fhours >= ihours ? fhours - ihours : 24 - ihours + fhours;
	dmins = abs(fmins - imins);
	
	printf("O valor a pagar �: ");
	if (dhours >= 17) {
		printf("Pre�o �nico R$ 50,00.");
	} else if (dhours >= 3 && dhours <= 16) {
		price = 12;
		price += (dhours - 2) * 2.5;
		printf("R$ %.2f.", price);
	} else if (dhours <= 2 && dhours > 1) {
		printf("R$ 12,00.");
	} else if (dhours <= 1 && dhours != 0) {
		printf("R$ 7,00.");
	} else if (dmins <= 30 && dmins > 5) {
		printf("R$ 4,00.");
	} else {
		printf("Isento.");
	}
	
	// Hey, eu desisti desse exerc�cio,
	// confere a implementa��o do professor
	// que deve estar mais assertiva.
	
	return 1;
}

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
			printf("Esse horário é inválido, tente novamente.\n");
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
			printf("Essa quantidade de minutos não está certa, tente novamente.\n");
		}
	} while (mins < 0 || mins > 59);
	return mins;
}

int main()
{
	SetConsoleOutputCP(1252);
	
	int ihours, imins, fhours, fmins, dhours, dmins;
	float price;
	
	ihours = getHours("Qual é o horário de entrada? ");
	imins = getMinutes("Qual é o minuto de entrada? ");
	fhours = getHours("Qual foi o horário de sáida? ");
	fmins = getMinutes("Qual foi o minuto de saída? ");
	
	dhours = fhours >= ihours ? fhours - ihours : 24 - ihours + fhours;
	dmins = abs(fmins - imins);
	
	printf("O valor a pagar é: ");
	if (dhours >= 17) {
		printf("Preço único R$ 50,00.");
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
	
	// Hey, eu desisti desse exercício,
	// confere a implementação do professor
	// que deve estar mais assertiva.
	
	return 1;
}

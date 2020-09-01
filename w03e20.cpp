#include <stdio.h>
#include <windows.h>

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
	
	int ihours, imins, fhours, fmins;
	
	ihours = getHours("Qual � o hor�rio de entrada? ");
	imins = getMinutes("Qual � o minuto de entrada? ");
	fhours = getHours("Qual foi o hor�rio de s�ida? ");
	fmins = getMinutes("Qual foi o minuto de sa�da? ");
	
	return 1;
}

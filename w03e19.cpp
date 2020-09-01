#include <stdio.h>
#include <windows.h>

const char *planets[9] = {
	"Mercúrio", "Vênus", "Terra", "Marte", "Júpiter",
	"Saturno", "Netuno", "Urano", "Plutão"
};

const int distances[12] = {
	59, 108, 150, 228, 750,
	1431, 2877, 4509, 5916
};
  
int main()
{
	SetConsoleOutputCP(1252);
	
	int n;
	bool invalid;
	
	printf("1. %s\n", planets[0]);
	printf("2. %s\n", planets[1]);
	printf("3. %s\n", planets[2]);
	printf("4. %s\n", planets[3]);
	printf("5. %s\n", planets[4]);
	printf("6. %s\n", planets[5]);
	printf("7. %s\n", planets[6]);
	printf("8. %s\n", planets[7]);
	printf("9. %s\n\n", planets[8]);
	
	do {
		printf("Informe o número do planeta desejado: ");
		fflush(stdin); // clear memory buffer
		scanf("%i", &n);
		
		invalid = ! (n >= 1 && n <= 9);
		if (invalid) {
			printf("Erro! O número %i não está associado a nenhum planeta.\n", n);
		}
	} while (invalid);
	
	printf("\nA distância do Sol até %s é de %i milhões de km.", planets[n - 1], distances[n - 1]);
	
	return 1;
}

#include <stdio.h>
#include <windows.h>
#include <ctype.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	char mf, lmf;
	bool invalid;
	
	do {
		printf("Digite a média final do aluno: ");
		fflush(stdin); // clear memory buffer
		scanf("%c", &mf);

		lmf = tolower(mf);
		
		invalid = lmf != 'a' && lmf != 'b' && lmf != 'c' && lmf != 'd' && lmf != 'e';
		if (invalid) {
			printf("Não entendi, por favor repita.\n");
		}
	} while (invalid);
	
	if (lmf == 'a') {
		printf("Excelente!");
	} else if (lmf == 'b') {
		printf("Muito Bom.");
	} else if (lmf == 'c') {
		printf("Bom.");
	} else if (lmf == 'd') {
		printf("Regular.");
	} else if (lmf == 'e') {
		printf("Fraco...");
	} else {
		printf("Ruim...");
	}
	
	return 1;
}

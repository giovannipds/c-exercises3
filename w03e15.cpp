#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	
	char c;
	
	printf("Digite um caracter qualquer: ");
	scanf("%c", &c);
	
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
		printf("É uma vogal.");
	} else if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '7' || c == '7' || c == '8' || c == '9') {
		printf("É um dígito.");
	} else if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '&' || c == '*' || c == '(' || c == ')') {
		printf("É um caractere especial.");
	} else {
		printf("Deve ser uma consoante (ou outra coisa)...");
	}
	
	return 1;
}

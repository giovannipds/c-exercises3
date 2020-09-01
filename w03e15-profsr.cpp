#include <stdio.h>
#include <windows.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    char caractere;
    
    printf("Informe um caractere qualquer: ");
    scanf("%c", &caractere);

	switch (toupper(caractere))
	{
		case 'A'...'Z':
			switch (toupper(caractere))
			{
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					printf("O caractere %c � uma vogal.", caractere);
					break;
				default:
					printf("O caractere %c � uma consoante.", caractere);
			}
			break;
		case '0'...'9':
			printf("O caractere %c � um d�gito num�rico.", caractere);
			break;
		default:
			printf("O caractere %c � um caractere especial.", caractere);
	}
		
    return 0;
}

#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float temperatura;
    
    printf("Informe a temperatura (�C): ");
    scanf("%f", &temperatura);

	if (temperatura<0)
		printf("A temperatura � %2.2f�C, est� congelante.", temperatura);
	else if (temperatura<10)
		printf("A temperatura � %2.2f�C, est� muito frio.", temperatura);
	else if (temperatura<20)
		printf("A temperatura � %2.2f�C, est� frio.", temperatura);
	else if (temperatura<30)
		printf("A temperatura � %2.2f�C, est� normal.", temperatura);
	else if (temperatura<40)
		printf("A temperatura � %2.2f�C, est� quente.", temperatura);
	else
		printf("A temperatura � %2.2f�C, est� muito quente.", temperatura);
		
    return 0;
}

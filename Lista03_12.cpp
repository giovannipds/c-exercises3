#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float temperatura;
    
    printf("Informe a temperatura (°C): ");
    scanf("%f", &temperatura);

	if (temperatura<0)
		printf("A temperatura é %2.2f°C, está congelante.", temperatura);
	else if (temperatura<10)
		printf("A temperatura é %2.2f°C, está muito frio.", temperatura);
	else if (temperatura<20)
		printf("A temperatura é %2.2f°C, está frio.", temperatura);
	else if (temperatura<30)
		printf("A temperatura é %2.2f°C, está normal.", temperatura);
	else if (temperatura<40)
		printf("A temperatura é %2.2f°C, está quente.", temperatura);
	else
		printf("A temperatura é %2.2f°C, está muito quente.", temperatura);
		
    return 0;
}

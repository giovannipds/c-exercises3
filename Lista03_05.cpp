#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int hor,min,seg;
    
    printf("Informe a hora: ");
    scanf("%d", &hor);
    printf("Informe o minuto: ");
    scanf("%d", &min);
    printf("Informe o segundo: ");
    scanf("%d", &seg);
	
	if (hor<0 || hor>23)
	   printf("A hora %d � inv�lida.\n", hor);
	else if (min<0 || min>59)
	   printf("O minuto %d � inv�lido.\n", min);
	else if (seg<0 || seg>59)
	   printf("O segundo %d � inv�lido.\n", seg);
	else
	   printf("O hor�rio informado %02d:%02d:%02d � v�lido.\n", hor, min, seg);

    return 0;
}

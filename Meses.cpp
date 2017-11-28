#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

const char *mes[15]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
int a;
float b[13], suma;


int main()
{
	for(a=0;a<12;a++)
	{
		printf("Introduce los gastos del mes %s\n", mes[a]);
		scanf("%f", &b[a]);
		suma = suma + b[a];
	}
	system("cls");
	for(a=0;a<12;a++)
	{
		printf("Los gastos del mes %s son: %.2f\n", mes[a], b[a]);
	}
	printf("\n\nLa suma de gastos anual es igual a: %.2f\n", suma);
	printf("El promedio de gastos anual es igual a: %.2f\n", suma/12);
	
	printf("\nPresiona cualquier tecla para continuar\n");
	getch();
}

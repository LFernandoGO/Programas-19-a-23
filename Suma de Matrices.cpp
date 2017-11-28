#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

int matriz1[4][4],matriz2[4][4],matriz3[4][4];
int a,b;

int main()	
{
	printf("Se va a componer la matriz 1 a continuacion\n\n");
	for (b=1;b<4;b++)
	{
		for (a=1;a<4;a++)
		{
			printf ("Ingrese el valor de matriz(%d,%d):",b,a);
			scanf ("%d",&matriz1 [b][a]);
		}
	}
	printf("\nSe va a componer la matriz 2 a continuacion\n\n");
	for (b=1;b<4;b++)
	{
		for (a=1;a<4;a++)
		{
		 	printf ("Ingrese valor de Matriz(%d,%d):",b,a);
		 	scanf ("%d",&matriz2[b][a]);	
		}
	}
	system("cls");
	printf ("La matriz 1 quedo compuesta de la siguiente forma:\n");
	for (b=1;b<4;b++)
	{
		printf ("%d\t%d\t%d\n",matriz1 [b][1],matriz1 [b][2],matriz1 [b][3]);	
	}
	printf ("\nLa matriz 2 quedo compuesta de la siguiente forma:\n");
	for (b=1;b<4;b ++)
	{
		printf ("%d\t%d\t%d\n",matriz2 [b][1],matriz2 [b][2],matriz2 [b][3]);	
	}
		printf ("\nLa suma de las matrices es igual a:\n");
	for (b=1;b<4;b++)
	{
		printf ("%d\t%d\t%d\n",
				(matriz1[b][1]+matriz2[b][1]),
				(matriz1[b][2]+matriz2[b][2]),
				(matriz1[b][3]+matriz2[b][3]));
    }
    
    printf("\nPresiona cualquier tecla para continuar\n");
    getch();
	return 0;		
}

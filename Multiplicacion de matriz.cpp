#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

int matriz[4][4];
int a,b,c;
int main()	

{
	for (b=1;b<4;b++)
	{
		for (a=1;a<4;a++)
		{
			printf ("Ingrese valor de matriz(%d,%d):",b,a);
			scanf ("%d",&matriz [b][a]);
		}
	}
	system("cls");
	printf ("La matriz quedo de la siguiente manera:\n");
	for (b=1;b<4;b++)
	{
		printf ("%d\t%d\t%d\n",matriz [b][1],matriz [b][2],matriz [b][3]);	
	}
	printf ("Ingresar el valor por el cual desea multiplicar la matriz:\n");
	scanf ("%d",&c);
	printf ("\nEl resultado de multiplicar a la matriz por %d es:\n",c);
	for (b=1;b<4;b++)
	{
		printf ("%d\t%d\t%d\n",
				(matriz[b][1]*c),
				(matriz[b][2]*c),
				(matriz[b][3]*c));
    }
	return 0;		
}

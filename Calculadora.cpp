#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int suma();
int resta();
int producto();
int division();

float a, b, r;

int main()
{
	int op1, op2;
	do
	{
		system("cls");
		printf("\t\t\tCalculadora\n\n");
		puts("1).- Suma");
		puts("2).- Resta");
		puts("3).- Producto");
		puts("4).- Division");
		printf("\nElige la operacion que desees hacer\n");
		scanf("%d", &op1);
		
		switch(op1)
		{
			case 1:
					suma();
					break;
			case 2:
					resta();
					break;
			case 3:
					producto();
					break;
			case 4: 
					division();
					break;
			default:
					printf("No Existe Opcion\n");
	
		}
		printf("\nDeseas realizar otra operacion: Si (1) NO (0)\n");
		scanf("%d", &op2);
	}
	while(op2==1);
	printf("\nPresiona cualquier tecla para salir");
	getch();
}

int suma()
{
	printf("\nEscogiste realizar una suma\n");
	printf("Introduce el primer valor:\n");
	scanf("%f", &a);
	printf("Introduce el segundo valor:\n");
	scanf("%f", &b);
	r=a+b;
	printf("\nEl resultado es: %.2f", r);
}
int resta()
{
	printf("\nEscogiste realizar una resta\n");
	printf("Introduce el primer valor:\n");
	scanf("%f", &a);
	printf("Introduce el segundo valor:\n");
	scanf("%f", &b);
	r=a-b;
	printf("\nEl resultado es: %.2f", r);
}
int producto()
{
	printf("\nEscogiste realizar un producto\n");
	printf("Introduce el primer valor:\n");
	scanf("%f", &a);
	printf("Introduce el segundo valor:\n");
	scanf("%f", &b);
	r=a*b;
	printf("\nEl resultado es: %.2f", r);
}
int division()
{
	printf("\nEscogiste realizar una division\n");
	printf("Introduce el primer valor:\n");
	scanf("%f", &a);
	printf("Introduce el segundo valor:\n");
	scanf("%f", &b);
	r=a/b;
	printf("\nEl resultado es: %.2f", r);
}

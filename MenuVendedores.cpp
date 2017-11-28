#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int op1, op2, op3, op4;
	do
	{
		system("cls");
		puts("\t\t\tMENU");
		puts("1).- DIVISION AVENGERS");
		puts("2).- DIVISION JUSTICE LEAGUE");
		puts("3).- DIVISION POWER RANGERS");
		puts("4).- DIVISION WWE :v");
		printf("\nElige una Division\n");
		scanf("%d", &op1);
		
		switch(op1)
		{
			do
			{
			
			case 1:
					system("cls");
					puts("SELECCIONASTE LA DIVISION AVENGERS");
					puts("MENU DE VENDEDORES");
					printf("\n\t 1.- CAPITAN AMERICA\n");
					printf("\t 2.- IRON MAN\n");
					printf("\t 3.- HULK\n");
					printf("SELECCIONA UN VENDEDOR\n");
					scanf("%d", &op2);
					
					switch(op2)
					{
						case 1:
								printf("\t LAS VENTAS DEL CAPITAN AMERICA SON: 10000\n");
								break;
						case 2:
								printf("\t LAS VENTAS DE IRON MAN SON: 234567\n");
								break;
						case 3:
								printf("\t LAS VENTAS DE HULK SON: 9876\n");
								break;
						default:
								printf("\t NO EXISTE VENDEDOR");
					}
					printf("\nDeseas ver las ventas de otro vendedor: (1) Si (0) No\n");
					scanf("%d", &op3);
			}
			while(op3==1);
		}
		switch(op1)
		{
		
			do
			{
			case 2:
					system("cls");
					puts("SELECCIONASTE LA DIVISION JUSTICE LEAGUE");
					puts("MENU DE VENDEDORES");
					printf("\n\t 1.- SUPERMAN\n");
					printf("\t 2.- BATMAN\n");
					printf("\t 3.- MUJER MARAVILLA\n");
					printf("SELECCIONA UN VENDEDOR\n");
					scanf("%d", &op2);
					
					switch(op2)
					{
						case 1:
								printf("\t LAS VENTAS DE SUPERMAN SON: 91526\n");
								break;
						case 2:
								printf("\t LAS VENTAS DE BATMAN SON: 276189\n");
								break;
						case 3:
								printf("\t LAS VENTAS DE LA MUJER MARAVILLA SON: 79999\n");
								break;
						default:
								printf("\t NO EXISTE VENDEDOR");
					}
					printf("\nDeseas ver las ventas de otro vendedor: (1) Si (0) No\n");
					scanf("%d", &op3);
			}
			while(op3==1);
		}
		switch(op1)
		{
		
			do
			{
			case 3:
					system("cls");
					puts("SELECCIONASTE LA DIVISION POWER RANGERS");
					puts("MENU DE VENDEDORES");
					printf("\n\t 1.- ROJO\n");
					printf("\t 2.- AZUL\n");
					printf("\t 3.- AMARILLO\n");
					printf("SELECCIONA UN VENDEDOR\n");
					scanf("%d", &op2);
					
					switch(op2)
					{
						case 1:
								printf("\t LAS VENTAS DEL POWER RANGER ROJO SON: 99999\n");
								break;
						case 2:
								printf("\t LAS VENTAS POWER RANGER AZUL SON: 66666\n");
								break;
						case 3:
								printf("\t LAS VENTAS POWER RANGER VERDE SON: 33333\n");
								break;
						default:
								printf("\t NO EXISTE VENDEDOR");
					}
					printf("\nDeseas ver las ventas de otro vendedor: (1) Si (0) No\n");
					scanf("%d", &op3);
			}
			while(op3==1);
		}
		switch(op1)
		{
		
			do
			{
			case 4:
					system("cls");
					puts("SELECCIONASTE LA DIVISION WWE :v");
					puts("MENU DE VENDEDORES");
					printf("\n\t 1.- JOHN CENA\n");
					printf("\t 2.- UNDERTAKER\n");
					printf("\t 3.- EDGE\n");
					printf("SELECCIONA UN VENDEDOR\n");
					scanf("%d", &op2);
					
					switch(op2)
					{
						case 1:
								printf("\t LAS VENTAS DE JOHN CENA SON: 22222\n");
								break;
						case 2:
								printf("\t LAS VENTAS DE UNDERTAKER SON: 44444\n");
								break;
						case 3:
								printf("\t LAS VENTAS DE EDGE SON: 77777\n");
								break;
						default:
								printf("\t NO EXISTE VENDEDOR");
					}
					printf("\nDeseas ver las ventas de otro vendedor: (1) Si (0) No\n");
					scanf("%d", &op3);
			}
			while(op3==1);
		}		
		printf("\n Deseas volver al menu de Divisiones: (1) Si (0) No\n");
		scanf("%d", &op4);
	}
	while(op4==1);
	printf("\n Presiona cualquier tecla para salir");
	getch();
}

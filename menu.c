#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a;
do{
	system ("cls");
	printf ("MENU PRINCIPAL\
	        \n1) Distribuciones discretas de cargas.\
		    \n2) Distribuciones continuas de cargas.\
		    \n3) Potencial electrico.\
		    \n4) Capacidad.\
		    \n5) Corriente electrica y circuitos.\
			\n6) Salir del programa.\n");
	scanf ("%i", &a);
    switch (a)
	{
		case 1:
			system ("cls");
			int b;
			do{
			printf ("Escoge uno de los apartados marcando el numero correspondiente:\
			         \n1) Ley de Coulomb.\
					 \n2) El campo electrico.\
					 \n3) Accion del campo electrico sobre cargas.\
					 \n4) Volver a menu principal.\n");
			scanf ("%i", &b);
			switch (b)
			{
				case 1:
					printf ("Hola\n");
				    break;
				case 2:
					printf ("\n");
					break;
				case 3:
					printf ("\n");
					break;
				case 4:
					break;
				default:
					system("cls");
					printf ("Opcion no permitida.\n");
					getch();
					break;
			}
			} while (b!=4);
		break;
			
		case 2:
			system("cls");
			int c;
			do{
			printf ("Escoge uno de los apartados marcando el numero correspondiente:\
			         \n1) Calculo del campo electrico mediante la ley de Coulomb.\
					 \n2) Ley de Gauss.\
					 \n3) Calculo del campo electrico con la ley de Gauss utiliando la simetria.\
					 \n4) Equivalencia de la ley de Gauss y la ley de Coulomb en electrostatica.\
					 \n5) Volver a menu principal.\n");
			scanf ("%i", &c);
			switch (c)
			{
				case 1:
					printf ("\n");
					break;
				case 2:
					printf ("\n");
					break;
				case 3:
					printf ("\n");
					break;
				case 4:
					printf ("\n");
					break;
				case 5:
					break;
				default:
					system("cls");
					printf("Opcion no permitida.\n");
					getch();
					break;
			}
			} while (c!=5);
		break;
			
		case 3:
			system("cls");
			int d;
			do{
			printf ("Escoge uno de los apartados marcando el numero correspondiente:\
			        \n1) Diferencia de potencial.\
					\n2) Potencial debido a un sistema de cargas puntuales.\
					\n3) Determinacion del campo electrico a partir del potencial.\
					\n4) Calculo del potencial para distribuciones continuas de carga.\
					\n5) Energia potencial electrostatica.\
					\n6) Volver a menu principal.\n");
			scanf ("%i", &d);
			switch (d)
			{
				case 1:
					printf ("\n");
					break;
				case 2:
					printf ("\n");
					break;
				case 3:
					printf ("\n");
					break;
				case 4:
					printf ("\n");
					break;
				case 5:
					printf ("\n");
					break;
				case 6:
					break;
				default:
					system("cls");
					printf("Opcion no permitida.\n");
					getch();
					break;
			}
			} while (d!=6);
		break;
			
		case 4:
			system("cls");
			int e;
			do{
			printf ("Escoge uno de los apartados marcando el numero correspondiente:\
			        \n1) Capacidad.\
					\n2) Almacenamiento de la energia electrica.\
					\n3) Condensadores, baterias y circuitos.\
					\n4) Dielectricos.\
					\n5) Volver a menu principal.\n");
			scanf ("%i", &e);
			switch (e)
			{
				case 1:
					printf ("\n");
					break;
				case 2:
					printf ("\n");
					break;
				case 3:
					printf ("\n");
					break;
				case 4:
					printf ("\n");
				case 5:
					break;
				default:
					system("cls");
					printf("Opcion no permitida.\n");
					getch();
					break;
			}
			} while (e!=5);
		break;
			
		case 5:
			system("cls");
			int f;
			do{
			printf ("Escoge uno de los apartados marcando el numero correspondiente:\
			        \n1) Corriente y movimiento de cargas.\
					\n2) Resistencia y ley de Ohm.\
					\n3) La energia en los circuitos electricos.\
					\n4) Asociaciones de resistencias.\
					\n5) Reglas de Kirchhoff.\
					\n6) Circuitos RC.\
					\n7) Volver a menu principal.\n");
			scanf ("%i", &f);
			switch (f)
			{
				case 1:
					printf ("\n");
					break;
				case 2:
					printf ("\n");
					break;
				case 3:
					printf ("\n");
					break;
				case 4:
					printf ("\n");
					break;
				case 5:
					printf ("\n");
					break;
				case 6:
					printf ("\n");
					break;
				case 7:
					break;
				default:
					system("cls");
					printf("Opcion no permitida.\n");
					getch();
					break;
			}
			} while (f!=7);
		break;
	}
} while (a!=6);

return 0;
}

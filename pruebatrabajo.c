#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	    float x, y;
    } punto;

float vectorunitario1 (punto q1, punto p);
float vectorunitario2 (punto q2, punto p);
float distancia1 (punto q1, punto p);
float distancia2 (punto q2, punto p);
float campo1 (punto q1, punto p, float Q1);
float campo2 (punto q2, punto p, float Q2);
float CAMPO (punto q1, punto q2, punto p, float Q1, float Q2);

int main ()
{
    int a;
    float dist1, dist2, Q1, Q2;
	punto q1, q2, p;

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
			printf ("\n\nEscoge uno de los apartados marcando el numero correspondiente:\
			         \n1) Ley de Coulomb.\
					 \n2) El campo electrico.\
					 \n3) Accion del campo electrico sobre cargas.\
					 \n4) Volver a menu principal.\n");
			scanf ("%i", &b);
			switch (b)
			{
				case 1:
					printf ("\n");
				    break;
				case 2:
					system ("cls");
					//CAMPO ELÉCTRICO PRODUCIDO POR DOS CARGAS EN UN PUNTO
					printf ("CAMPO ELECTRICO PRODUCIDO POR DOS CARGAS EN UN PUNTO\n");

	                printf ("Esribe donde estan situadas las cargas q1 y q2, y el punto donde actua el campo, respectivamente:\n");
	                scanf ("%f %f %f %f %f %f", &q1.x, &q1.y, &q2.x, &q2.y, &p.x, &p.y);
	
	                //Campo eléctrico producido por la carga 1:
	                printf ("\nCAMPO ELECTRICO QUE PRODUCE LA PRIMERA CARGA\n");
	                dist1 = distancia1(q1,p);
	                printf ("Las componentes i y j del vector son, respectivamente: \n");
	                vectorunitario1(q1,p);
	                printf ("Dichas componentes deben dividirse por su modulo %.2f para que el vector sea unitario\n", dist1);
	                printf ("Introduce el valor de la primera carga:\n");
	                scanf ("%f", &Q1);
	                printf ("El modulo del campo electrico es:\n");
	                campo1(q1,p,Q1);
	
	                //Campo eléctrico producido por la carga 2:
	                printf ("\n\nCAMPO ELECTRICO QUE PRODUCE LA SEGUNDA CARGA\n");
	                dist2 = distancia2(q2,p);
	                printf ("Las componentes i y j del vector son, respectivamente: \n");
	                vectorunitario1(q2,p);
	                printf ("Dichas componentes deben dividirse por su modulo %.2f para que el vector sea unitario\n", dist2);
	                printf ("Introduce el valor de la primera carga:\n");
	                scanf ("%f", &Q2);
	                printf ("El modulo del campo electrico es:\n");
	                campo2(q2,p,Q2);
	
	                //CAMPO TOTAL:
	                printf ("\n\nCAMPO ELECTRICO PRODUCIDO POR AMBAS CARGAS\n");
	                CAMPO(q1,q2,p,Q1,Q2);
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

float vectorunitario1 (punto q1, punto p)
{
	float V1[2], u11, u12;
	int i;
	u11 = p.x-q1.x;
	u12 = p.y-q1.y;
	V1[0]=u11;
	V1[1]=u12;
	for (i=0; i<2; i++){
		printf (" %.2f\n", V1[i]);
	}
}

float vectorunitario2 (punto q2, punto p)
{
	float V2[2], u21, u22;
	int i;
	u21 = p.x-q2.x;
	u22 = p.y-q2.y;
	V2[0]=u21;
	V2[1]=u22;
	for (i=0; i<2; i++){
		printf (" %.2f\n", V2[i]);
	}
}

float distancia1 (punto q1, punto p)
{
	float r1;
	r1 = sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y));
	return r1;
}

float distancia2 (punto q2, punto p)
{
	float r2;
	r2 = sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y));
	return r2;
}

float campo1 (punto q1, punto p, float Q1)
{
	float k=9E9, E1;
	E1 = (k*Q1)/(pow(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)),2));
	printf ("%.2f", E1);
}

float campo2 (punto q2, punto p, float Q2)
{
	float k=9E9, E2;
	E2 = (k*Q2)/(pow(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)),2));
	printf ("%.2f", E2);
}

float CAMPO (punto q1, punto q2, punto p, float Q1, float Q2)
{
	float E1, E2, E11, E12, E21, E22, k=9E9, u11, u12, u21, u22;
	u11 = p.x-q1.x;
	u12 = p.y-q1.y;
	u21 = p.x-q2.x;
	u22 = p.y-q2.y;
	E11 = (((k*Q1)/(pow(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)),2)))*u11)/(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)));
	E21 = (((k*Q2)/(pow(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)),2)))*u21)/(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)));
	E12 = (((k*Q1)/(pow(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)),2)))*u12)/(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)));
	E22 = (((k*Q2)/(pow(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)),2)))*u22)/(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)));
	E1 = E11+E21;
	printf ("La componente i del campo total es: %.2f\n", E1);
	E2 = E12+E22;
	printf ("La componente j del campo total es: %.2f\n", E2);
	printf ("\nEl CAMPO ELECTRICO TOTAL producido por las dos cargas es:\n");
	printf ("(%.2f i, %.2f j) N/C", E1, E2);
}

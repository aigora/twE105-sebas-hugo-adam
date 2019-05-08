#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ADCESC.h"
#include "leydeGauss.h"
#include "campoelectrico.h"

int main ()
{
    int a;
    float dist1, dist2, Q1, Q2, Q3;
	punto q1, q2, p;
	float R, q, r, L, S, F, E;

do{
	system ("cls");
	printf ("MENU PRINCIPAL\
	        \n1) Distribuciones discretas y continuas de carga.\
		    \n2) Potencial electrico.\
		    \n3) Capacidad.\
		    \n4) Corriente electrica y circuitos.\
			\n5) Salir del programa.\n");
	scanf ("%i", &a);
    switch (a)
	{
		case 1:
			system ("cls");
			int b,g,h;
			float valor;
			do{
			printf ("\n\nDISTRIBUCIONES DISCRETAS Y CONTINUAS DE CARGA\
			         \nEscoge uno de los apartados marcando el numero correspondiente:\
			         \n1) Ley de Coulomb.\
					 \n2) El campo electrico.\
					 \n3) Accion del campo electrico sobre cargas.\
					 \n4) Ley de Guss.\
					 \n5) Volver a menu principal.\n");
			scanf ("%i", &b);
			switch (b)
			{
				case 1:
					system ("cls");
					printf ("LEY DE COULOMB\n");
                    printf ("Esribe donde estan situadas las cargas q1 y q2, y el punto donde se desea calcular la fuerza:\n");
	                scanf ("%f %f %f %f %f %f", &q1.x, &q1.y, &q2.x, &q2.y, &p.x, &p.y);
                    //Fuerza producida por la primera carga:
	                printf ("\nFUERZA PRODUCIDA POR LA PRIMERA CARGA\n");
	                dist1 = distancia1(q1,p);
	                printf ("Las componentes i y j del vector son, respectivamente: \n");
	                vectorunitario1(q1,p);
	                printf ("Dichas componentes deben dividirse por el modulo %.2f para que el vector sea unitario\n", dist1);
	                printf ("Introduce el valor de la primera carga y de la carga prueba en el punto:\n");
	                scanf ("%f %f", &Q1 , &Q3);
	                printf ("El modulo de la fuerza es:\n");
	                Fuer1(q1,p,Q1,Q3);
	                //Fuerza producida por la segunda carga:
	                printf ("\nFUERZA PRODUCIDA POR LA SEGUNDA CARGA\n"); 
	                dist2 = distancia2(q2,p);
	                printf ("Las componentes i y j del vector son, respectivamente: \n");
	                vectorunitario1(q2,p);
	                printf ("Dichas componentes deben dividirse por el modulo %.2f para que el vector sea unitario\n", dist2);
	                printf ("Introduce el valor de la segunda carga:\n");
	                scanf ("%f", &Q2);
	                printf ("El modulo de la fuerza es:\n");
	                Fuer2(q2,p,Q2,Q3);
	                printf("\nEl modulo de la fuerza total es de:\n");
	                FUER(q1,q2,p,Q1,Q2,Q3); 
				break;
				    
				case 2:
					system ("cls");
					printf ("EL CAMPO ELECTRICO\n");
  	                printf("Elige lo que deseas calcular: Campo(C) o Carga(Q) o Fuerza(F)\n");
                  	scanf(" %c", &h);
                  	while (h!='C' && h!='c' && h!='Q' && h!='q' && h!='F' && h!='f'){
                  		printf ("Debes introducir 'C', 'Q' o 'F':\n");
                  		scanf (" %c", &h);
					  }
                    switch (h)
                    {
                    case 'f':
                    case 'F':
                    printf("Introduce el valor del campo y la carga:\n");
                    scanf("%f %f", &E ,&q);  
                    valor = aFuer(E,q);
                    printf("El valor obtenido es %2f\n", valor);
                    break;
	                case 'c':
	                case 'C':
	                printf("Introduce el valor de la fuerza y la carga:\n");
                    scanf("%f %f", &F ,&q); 
	                valor = aCamp(F,q);
	                printf("El valor obtenido es %2f\n", valor);
	                break;
	                case 'q':
	                case 'Q':
	                printf("Introduce el valor de la fuerza y el campo:\n");
                    scanf("%f %f", &F, &E); 
	                valor = aCarg(F,E);
	                printf("El valor obtenido es %2f\n", valor);
	                break;	
                    }
                break;
					
				case 3:
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
					
				case 4:
					system ("cls");
	                printf ("LEY DE GAUSS");
                    do{
	                    printf ("\n\nIndica que esta creado el campo:\
	                            \n1) Esfera.\
			                    \n2) Hilo conductor de longitud infinita.\
			                    \n3) Plano infinito.\
			                    \n4) Volver a 'Distribuciones discretas y continuas de carga'.\n");
	                            scanf ("%i", &g);
	
	                    switch (g)
	                    {
		                    case 1:
			                    printf ("ESEFRA\n");
			                    printf ("Introduce el valor de la carga y el radio, respectivamente:\n");
			                    scanf ("%f %f", &q, &R);
			                    printf ("Si se trata de una esfera no maciza el campo es:\n");
			                    printf ("En el interior de la esfera el campo es nulo.\n");
			                    printf ("En el exterior de la esfera:\n");
			                    esferanomaciza(q,R);
			                    printf ("\n\nSi se trata de una esfera maciza el campo es:\n");
			                    printf ("Introduce el radio gaussiano (menor que el de la esfera):\n");
			                    scanf ("%f", &r);
			                    while (R<=r){
				                    printf ("El radio debe ser menor que el de la esfera.\n");
				                    scanf ("%f", &r);
			                    }
			                    printf ("\nEn el interior de la esfera:\n");
			                    esferamaciza(q,R,r);
			                    printf ("\nEn el exterior el campo es el mismo al de la esfera no maciza.");
			                break;
		                    case 2:
			                    printf ("HILO CONDUCTOR DE LONGITUD INFINITA\n");
			                    printf ("Para un linea indefinida de carga, tomamos como superficie cerrada un cilindro de radio R y longitud L.\nLa densidad de carga la definimos como la carga q por unidad de longitud: q/L.\n");
			                    printf ("Por tanto, introduzca el valor de la carga q, la longitud y el radio del cilindro tomado como superficie gaussiana:\n");
			                    scanf ("%f %f %f", &q, &L, &R);
			                    printf ("El campo creado por el hilo conductor es:\n");
			                    hilo(q,L,R);
			                break;
		                    case 3:
			                    printf ("PLANO INFINITO\n");
			                    printf ("Construimos un cilindro como superficie gaussiana de bases S y cuyas paredes son perpendiculares al plano.\n");
			                    printf ("El flujo solo atraviesa las dos bases, por lo tanto, introduzca la carga y superficie:\n");
			                    scanf ("%f %f", &q, &S);
			                    printf ("El campo que produce el plano es:\n");
			                    plano(q,S);
			                break;
		                    case 4:
			                break;
		                    default:
			                    system("cls");
			                    printf("Opcion no permitida.\n");
			                    getch();
			                break;
	                     }
                    } while(g!=4);
				break;
					
				case 5:
					break;
					
				default:
					system("cls");
					printf ("Opcion no permitida.\n");
					getch();
					break;
			}
			} while (b!=5);
		break;
			
		case 2:
			system("cls");
			int c;
			do{
			printf ("\n\nPOTENCIAL ELECTRICO\
			        \nEscoge uno de los apartados marcando el numero correspondiente:\
			        \n1) Diferencia de potencial.\
					\n2) Energia potencial electrostatica.\
					\n3) Volver a menu principal.\n");
			scanf ("%i", &c);
			switch (c)
			{
				case 1:
					system ("cls");
					printf ("DIFERENCIA DE POTENCIAL\n");
					printf ("Esribe donde estan situadas las cargas q1, q2 y el punto donde se desea calcular el potencial:\n");
					scanf ("%f %f %f %f %f %f", &q1.x, &q1.y, &q2.x, &q2.y, &p.x, &p.y);
	                //Potencial producido por la primera carga:
	                printf ("\nPotencial que produce la primera carga:\n");
	                dist1 = distancia1(q1,p);
	                printf ("Dichas componentes deben dividirse por el modulo %.2f\n", dist1);
	                printf ("Introduce el valor de la primera carga:\n");
	                scanf ("%f", &Q1);
	                printf ("El potencial  que produce la primera carga es:\n");
	                Poten1(q1,p,Q1);
	                //Potencial producido por la segunda carga:
	                printf ("\nPotencial que produce la segunda carga:\n"); 
	                dist2 = distancia2(q2,p);
	                printf ("Dichas componentes deben dividirse por el modulo %.2f\n", dist2);
	                printf ("Introduce el valor de la segunda carga:\n");
	                scanf ("%f", &Q2);
	                printf ("El modulo de la fuerza es:\n");
	                Poten2(q2,p,Q2);
	                //Potencial en el punto
	                printf("\nEl valor total del potencial en el punto es de:\n");
	                POTENTOTAL(q1,q2,p,Q1,Q2);
	                //Diferencia de potencial
	                printf("\nLa diferencia de potencia es de:\n");
	                POTENDIF(q1,q2,p,Q1,Q2);
				break;
			
				case 2:
					system ("cls");
					break;
			
				case 3:
					break;
					
				default:
					system("cls");
					printf("Opcion no permitida.\n");
					getch();
					break;
			}
			} while (c!=3);
		break;
			
		case 3:
			system("cls");
			int d;
			do{
			printf ("\n\nCAPACIDAD\
			        \nEscoge uno de los apartados marcando el numero correspondiente:\
			        \n1) Capacidad.\
					\n2) Almacenamiento de la energia electrica.\
					\n3) Condensadores, baterias y circuitos.\
					\n4) Dielectricos.\
					\n5) Volver a menu principal.\n");
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
				case 5:
					break;
				default:
					system("cls");
					printf("Opcion no permitida.\n");
					getch();
					break;
			}
			} while (d!=5);
		break;
			
		case 4:
			system("cls");
			int e;
			do{
			printf ("\n\nCORRIENTE ELECTRICA Y CIRCUITOS\
			        \nEscoge uno de los apartados marcando el numero correspondiente:\
			        \n1) Corriente y movimiento de cargas.\
					\n2) Resistencia y ley de Ohm.\
					\n3) La energia en los circuitos electricos.\
					\n4) Asociaciones de resistencias.\
					\n5) Reglas de Kirchhoff.\
					\n6) Circuitos RC.\
					\n7) Volver a menu principal.\n");
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
			} while (e!=7);
		break;
	}
} while (a!=5);

return 0;
}

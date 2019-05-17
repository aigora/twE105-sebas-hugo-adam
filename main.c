#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "FUNCIONES.h"
#include "Circuitos.h"

int main ()
{
    int a;
    float dist1, dist2, Q1, Q2, Q3;
	punto q1, q2, p;
	float R, q, r, L, S, F, E, Q, V, I, C, valor, resul;
	FILE *f;
	
do{
	system ("cls");
	
	f = fopen("datostrabajo.txt", "w");
	if (f==NULL){
	printf ("No ha podido abrirse el fichero.\n");
	return -1;
	}
	
	printf ("MENU PRINCIPAL\
	        \n1) Distribuciones discretas y continuas de carga.\
		    \n2) Potencial electrico.\
		    \n3) Capacidad.\
		    \n4) Corriente electrica y circuitos.\
			\n5) Salir del programa.\n");
	scanf ("%i", &a);
	fprintf (f,"TEMA ELEGIDO: %i\n",a);
    switch (a)
	{
		case 1:
			system ("cls");
			int b,g;
			char h;
			do{
			printf ("\n\nDISTRIBUCIONES DISCRETAS Y CONTINUAS DE CARGA\
			         \nEscoge uno de los apartados marcando el numero correspondiente:\
			         \n1) Ley de Coulomb.\
					 \n2) El campo electrico.\
					 \n3) Accion del campo electrico sobre cargas.\
					 \n4) Ley de Guss.\
					 \n5) Volver a menu principal.\n");
			scanf ("%i", &b);
			fprintf(f,"Ejercicio elegido (Distribuciones discretas y continuas de carga): %i",b);
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
	                fprintf(f,"\nDistancia 1: %.2f\n",dist1);
	                fprintf(f,"Distancia 2: %.2f\n",dist2);
	                fclose(f);
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
                    fprintf(f,"Ha elegido: %c\n",h);
                    fclose(f);
                    switch (h)
                    {
                    case 'f':
                    case 'F':
                    printf("Introduce el valor del campo y la carga:\n");
                    scanf("%f %f", &E ,&q);  
                    valor = Fuer(E,q);
                    printf("El valor obtenido es %2f\n", valor);
                    break;
	                case 'c':
	                case 'C':
	                printf("Introduce el valor de la fuerza y la carga:\n");
                    scanf("%f %f", &F ,&q); 
	                valor = Camp(F,q);
	                printf("El valor obtenido es %2f\n", valor);
	                break;
	                case 'q':
	                case 'Q':
	                printf("Introduce el valor de la fuerza y el campo:\n");
                    scanf("%f %f", &F, &E); 
	                valor = Carg(F,E);
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
	                printf ("Introduce el valor de la segunda carga:\n");
	                scanf ("%f", &Q2);
	                printf ("El modulo del campo electrico es:\n");
	                campo2(q2,p,Q2);
	                //CAMPO TOTAL:
	                printf ("\n\nCAMPO ELECTRICO PRODUCIDO POR AMBAS CARGAS\n");
	                CAMPO(q1,q2,p,Q1,Q2);
	                fprintf(f,"\nDistancia 1 y 2, respectivamente: %.2f, %.2f\n",dist1,dist2);
	                fclose(f);
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
			                    printf ("ESFERA NO MACIZA\n");
			                    printf ("En el interior de la esfera el campo es nulo.\n");
			                    printf ("En el exterior de la esfera:\n");
			                    esferanomaciza(q,R);
			                    printf ("\n\nESFERA MACIZA\n");
			                    printf ("Introduce el radio gaussiano (menor que el de la esfera):\n");
			                    scanf ("%f", &r);
			                    while (R<=r){
				                    printf ("El radio debe ser menor que el de la esfera.\n");
				                    scanf ("%f", &r);
			                    }
			                    printf ("\nEn el interior de la esfera:\n");
			                    esferamaciza(q,R,r);
			                    printf ("\nEn el exterior el campo es el mismo a el de la esfera no maciza.");
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
			fprintf (f,"Ejercicio elegido (potencial electrico): %i\n",c);
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
					printf ("ENERGIA POTENCIAL ELECTROSTATICA\n");
					int n, i=0;
	                punto q[30];
	                punto p;
	                float Q[30], U[30];
	                printf ("Introduzca el numero de cargas:\n");
	                scanf ("%i", &n);
	                //Distancia entre el punto y las cargas
	                i=0;
	                for (i=0; i<n; i++)
	                {
		                printf ("Introduza donde esta situda la carga q%i\n", i+1);
		                scanf ("%f %f", &q[i].x, &q[i].y);
	                }
	                printf ("Introduzca donde esta situado el punto:\n");
	                scanf ("%f %f", &p.x, &p.y);
	                distancia(p,q,n); 
	                //Energía que poduce cada carga en el punto y energía total
	                for (i=0; i<n; i++)
	                {
		                printf ("Introduzca el valor de la carga q%i\n", i+1);
		                scanf ("%f", &Q[i]);
	                }
	                for (i=0; i<n; i++)
	                {
	                	fprintf(f,"Valor de la carga q%i: %f C\n",i+1, Q[i]);
					}
					fclose(f);
	                energia(p,q,n,Q);
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
			char l;
			do{
			printf ("\n\nCAPACIDAD\
			        \nEscoge uno de los apartados marcando el numero correspondiente:\
			        \n1) Capacidad.\
					\n2) Almacenamiento de la energia electrica.\
					\n3) Volver a menu principal.\n");
			scanf ("%i", &d);
			switch (d)
			{
				case 1:
					system ("cls");
					printf ("CAPACIDAD\n");
  	                printf("Elige lo que deseas calcular: Capacidad(C) o Carga(Q) o Voltaje(V)\n");
  	                scanf("%c",&l);
  	                while (l!='v' && l!='V' && l!='c' && l!='C' && l!='q' && l!='Q'){
  		            printf ("Debes introducir C, Q o V\n");
  		            scanf (" %c", &l);}
  		            fprintf(f,"Ha elegido: %c",l);
  		            fclose(f);
                    switch (l)
                    {
                    case 'v':
                    case 'V':
                        printf("Introduce el valor de la carga almacenada y la capacidad del condensador\n");
                        scanf("%f %f", &Q ,&S);  
                        valor = aVolt(Q,S);
                    break;
    
	                case 'c':
	                case 'C':
	                    printf("Introduce el valor de la carga y el voltaje\n");
                        scanf("%f %f", &Q ,&V); 
	                    valor = aCapa(Q,V);
	                    break;
	
	                case 'q':
	                case 'Q':
	                    printf("Introduce el valor de la Capacidad y el Voltaje\n");
                        scanf("%f %f", &V, &S); 
	                    valor = aCarg(V,S);
	                break;	
                    }
                    printf("El valor obtenido es %.2f\n", valor);
				break;
				
				case 2:
					system ("cls");
					printf ("ALMACENAMIENTO DE LA ENERGIA ELECTRICA\n");
					int i,n;
	                punto q[20];
	                punto p;
	                float S[20], Q[20];  
	                printf ("Introduzca el numero de cargas:\n");
	                scanf ("%i", &n);
	                //Distancia entre el punto y las cargas
	                i=0;
	                for (i=0; i<n; i++)
	                {
		            printf ("Introduza donde esta situda la carga q%i\n", i+1);
		            scanf ("%f %f", &q[i].x, &q[i].y);
	                }
	                printf ("Introduzca donde esta situado el punto:\n");
	                scanf ("%f %f", &p.x, &p.y);
	                distancia(p,q,n);
                    printf("Introduce la capacidad del condensador:\n");
  	                scanf("%f", &C);
                    //Energia que poduce cada carga en el punto y energia total
	                for (i=0; i<n; i++)
	                {
		            printf ("Introduzca el valor de la carga q%i\n", i+1);
		            scanf ("%f", &Q[i]);
	                }
	                energias(p,q,n,C,Q);
				break;
				
				case 3:
				break;
					
				default:
					system("cls");
					printf("Opcion no permitida.\n");
					getch();
					break;
			}
			} while (d!=3);
		break;
			
		case 4:
			system("cls");
			int e;
			char m,z;
			do{
			printf ("\n\nCORRIENTE ELECTRICA Y CIRCUITOS\
			        \nEscoge uno de los apartados marcando el numero correspondiente:\
					\n1) Resistencia y ley de Ohm.\
					\n2) Potencia en los circuitos electricos.\
					\n3) Circuitos RC.\
					\n4) Volver a menu principal.\n");
			scanf ("%i", &e);
			switch (e)
			{	
				case 1:
					system ("cls");
					printf ("RESISTENCIA Y LEY DE OHM\n");
  	                printf("Elige lo que deseas calcular: Resistencia(R) o Intensidad(I) o Voltaje(V)\n");
  	                scanf("%c", &m);
  	                while (m!='v' && m!='V' && m!='r' && m!='R' && m!='i' && m!='I'){
  		            printf ("Debes introducir R, I o V.\n");
  		            scanf (" %c", &m);
	                }
                    switch (m)
                    {
                    case 'v':
                    case 'V':
                        printf("Introduce el valor de la resistencia y de la intensidad \n");
                        scanf("%f %f", &R ,&I);  
                        valor = Volt(R,I);
                    break;
	                case 'r':
	                case 'R':
	                    printf("Introduce el valor del voltaje y de la intensidad\n");
                        scanf("%f %f", &V ,&I); 
                        valor = Resis(V,I);
	                break;
	                case 'i':
	                case 'I':
	                    printf("Introduce el valor del voltaje y de la resistencia\n");
                        scanf("%f %f", &V, &R); 
	                    valor = Inten(V,R);
	                break;
                    }
                    printf("El valor obtenido es %.2f\n", valor);
				break;
				
				case 2:
					system("cls");
					printf ("POTENCIA EN LOS CIRCUITOS ELECTRICOS\n");
  	                printf("Elige la potencia que deseas calcular: disipada en una Resistencia(D) o en un conductor(C) o suministrada por una FEM(F)\n");
  	                scanf("%c", &z);
	                while (z!='f' && z!='F' && z!='d' && z!='D' && z!='c' && z!='C'){
		            printf("Debes introducir D, C o F.\n");
		            scanf(" %c", &z);
	                }
                    switch (z)
                    {
                    case 'f':
                    case 'F':
                        printf("Introduce el valor de la intensidad y de la FEM de la bateria\n");
                        scanf("%f %f", &I ,&E);  
                        resul = PotenSum(I,E);
                    break;
	                case 'd':
	                case 'D':
	                    printf("Introduce el valor del voltaje y de la Resistencia a la que se le desea calcular\n");
                        scanf("%f %f", &V ,&R); 
	                    resul = PotenDR(V,R);
	                break;
	                case 'c':
	                case 'C':
	                    printf("Introduce el valor del Voltaje y la Intensidad del sistema\n");
                        scanf("%f %f", &V, &I); 
	                    resul = PotenDC(V,I);
	                break;	
                    }
                    printf("El valor obtenido es %.2f W.\n", resul);
				break;
					
				case 3:
					system ("cls");
					printf ("CIRCUITOS RC\n");
					int k;
	                char circuito1[21][65], circuito2[21][65], circuito3[21][65];
	                do{
	                printf ("\n\nElige el tipo de circuito o volver:\
	                        \n1) Una malla (dos condensadores).\
			                \n2) Una malla (resistencias).\
			                \n3) Dos mallas (resistencias condensador e interruptor).\
			                \n4) Volver a 'Corriente electrica y circuitos'.\n");
	                scanf ("%i", &k);
	
	                switch (k)
	                {
		            case 1:
			        Intro_circuito1(circuito1);
		            break;
		            case 2:
			        Intro_circuito2(circuito2);
		            break;
		            case 3:
			        Intro_circuito3(circuito3);
		            break;
		            case 4:
		            break;
	                }
	                } while (k!=4);
				break;
					
				case 4:
				break;
					
				default:
					system("cls");
					printf("Opcion no permitida.\n");
					getch();
					break;
			}
			} while (e!=4);
		break;
    }
	
} while (a!=5);

return 0;
}

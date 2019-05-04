//Fuerza producida por dos cargas en un punto deseado
#include <stdio.h>
#include <math.h> 

typedef struct {
	float x, y;
} punto; 
 
float vectorunitario1 (punto q1, punto p);
float vectorunitario2 (punto q2, punto p);
float distancia1 (punto q1, punto p);
float distancia2 (punto q2, punto p); 
float Fuer1 (punto q1, punto p, float Q1, float Q3); 
float Fuer2 (punto q2, punto p, float Q2, float Q3); 
float FUER (punto q1, punto q2, punto p, float Q1, float Q2, float Q3);
 
void main () 
{ 
	float dist1, dist2, Q1, Q2, Q3;
	punto q1, q2, p;
  
	printf ("Esribe donde estan situadas las cargas q1 y q2, y el punto donde se desea calcular la fuerza:\n");
	scanf ("%f %f %f %f %f %f", &q1.x, &q1.y, &q2.x, &q2.y, &p.x, &p.y);
	
	//Fuerza producida por la primera carga:
 
	printf ("\nFuerza que produce la primera carga\n");
	dist1 = distancia1(q1,p);
	printf ("Las componentes i y j del vector son, respectivamente: \n");
	vectorunitario1(q1,p);
	printf ("Dichas componentes deben dividirse por el modulo %f para que el vector sea unitario\n", dist1);
	printf ("Introduce el valor de la primera carga y de la carga prueba en el punto:\n");
	scanf ("%f %f", &Q1 ,&Q3);
	printf ("El modulo de la fuerza es:\n");
	Fuer1(q1,p,Q1,Q3);

	//Fuerza producida por la segunda carga:

	printf ("\nFuerza producida por la segunda carga\n"); 
	dist2 = distancia2(q2,p);
	printf ("Las componentes i y j del vector son, respectivamente: \n");
	vectorunitario1(q2,p);
	printf ("Dichas componentes deben dividirse por el modulo %f para que el vector sea unitario\n", dist2);
	printf ("Introduce el valor de la segunda carga e introduce otra vez el valor de la carga en el punto:\n");
	scanf ("%f %f", &Q2 ,&Q3);
	printf ("El modulo de la fuerza es:\n");
	Fuer2(q2,p,Q2,Q3);
	printf("\nEl modulo de la fuerza total es de:\n");
	FUER(q1,q2,p,Q1,Q2,Q3);

	 
	
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

float Fuer1 (punto q1, punto p, float Q1, float Q3)
{
	float k=9E9, F1;
	F1 = (k*Q1*Q3)/(pow(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)),2));
	printf ("%.2f", F1);
}

float Fuer2 (punto q2, punto p, float Q2, float Q3) 
{
	float k=9E9, F2;
	F2 = (k*Q2*Q3)/(pow(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)),2));
	printf ("%.2f", F2);
}

float FUER (punto q1, punto q2, punto p, float Q1, float Q2, float Q3)
{
	float u11, u12, u21, u22, r1, r2, F1, F2, F, k=9E9;
	u11 = p.x-q1.x;
	u12 = p.y-q1.y;
	u21 = p.x-q2.x;
	u22 = p.y-q2.y;
	r1 = sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y));
	r2 = sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y));
	F1 = (k*Q1*Q3)/(pow(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)),2));
	F2 = (k*Q2*Q3)/(pow(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)),2));
	F= F1+ F2;
	printf("%.2f", F);
}

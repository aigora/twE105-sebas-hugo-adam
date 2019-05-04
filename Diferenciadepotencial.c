//Dierencia de potencial
#include <stdio.h>
#include <math.h> 

typedef struct {
	float x, y;
} punto; 
float distancia1 (punto q1, punto p);
float distancia2 (punto q2, punto p); 
float Poten1 (punto q1, punto p, float Q1); 
float Poten2 (punto q2, punto p, float Q2); 
float POTENTOTAL (punto q1, punto q2, punto p, float Q1, float Q2);
float POTENDIF (punto q1, punto q2, punto p, float Q1, float Q2);
 
void main () 
{ 
	float dist1, dist2, Q1, Q2;
	punto q1, q2, p;
  
	printf ("Esribe donde estan situadas las cargas q1, q2 y el punto donde se desea calcular el potencial:\n");
	scanf ("%f %f %f %f %f %f", &q1.x, &q1.y, &q2.x, &q2.y, &p.x, &p.y);
	
	//Potencial producido por la primera carga:
 
	printf ("\nPotencial que produce la primera carga\n");
	dist1 = distancia1(q1,p);
	printf ("Dichas componentes deben dividirse por el modulo %f\n", dist1);
	printf ("Introduce el valor de la primera carga:\n");
	scanf ("%f", &Q1);
	printf ("El potencial  que produce la primera carga es:\n");
	Poten1(q1,p,Q1);

	//Potencial producido por la segunda carga:

	printf ("\nPotencial que produce la segunda carga\n"); 
	dist2 = distancia2(q2,p);
	printf ("Dichas componentes deben dividirse por el modulo %f\n", dist2);
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

float Poten1 (punto q1, punto p, float Q1)
{
	float k=9E9, V1;
	V1 = (k*Q1)/(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)));
	printf ("%.2f", V1);
}

float Poten2 (punto q2, punto p, float Q2) 
{
	float k=9E9, V2;
	V2 = (k*Q2)/(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)));
	printf ("%.2f", V2);
}

float POTENTOTAL (punto q1, punto q2, punto p, float Q1, float Q2)
{
	float r1, r2, V1, V2, V, k=9E9;
	r1 = sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y));
	r2 = sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y));
	V1 = (k*Q1)/(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)));
	V2 = (k*Q2)/(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)));
	V= V1+ V2;
	printf("%.2f", V);
}

float POTENDIF (punto q1, punto q2, punto p, float Q1, float Q2)
{
	float r1, r2, V1, V2, Vd, k=9E9;
	r1 = sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y));
	r2 = sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y));
	V1 = (k*Q1)/(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)));
	V2 = (k*Q2)/(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)));
	Vd= V2-V1;
	printf("%.2f", Vd);
}

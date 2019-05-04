//Energia potencial
#include <stdio.h>
#include <math.h> 

typedef struct {
	float x, y;
} punto; 
float distancia1 (punto q1, punto p);
float distancia2 (punto q2, punto p);  
float EnergiaP1(punto q1, punto p, float Q1, float Q3);
float EnergiaP2(punto q2, punto p, float Q2, float Q4);
float EnergiaPOTEN(punto q1, punto q2, punto p, float Q1, float Q2, float Q3, float Q4);
 
void main () 
{ 
	float dist1, dist2, Q1, Q2, Q3, Q4;
	punto q1, q2, p;
  
	printf ("Esribe donde estan situadas las cargas q1, q2 y el punto donde se desea la suma de la energia potencial:\n");
	scanf ("%f %f %f %f %f %f", &q1.x, &q1.y, &q2.x, &q2.y, &p.x, &p.y);
	
	//Potencial producido por la primera carga:
 
	printf ("\nPotencial que produce la primera carga\n");
	dist1 = distancia1(q1,p);
	printf ("Dichas componentes deben dividirse por el modulo %f\n", dist1);
	printf ("Introduce el valor de la primera carga y una carga prueba:\n");
	scanf ("%f %f", &Q1, &Q3);
	printf ("La energia potencial  que produce la primera carga es:\n");
	EnergiaP1(q1,p,Q1,Q3);

	//Potencial producido por la segunda carga:

	printf ("\nPotencial que produce la segunda carga\n"); 
	dist2 = distancia2(q2,p);
	printf ("Dichas componentes deben dividirse por el modulo %f\n", dist2);
	printf ("Introduce el valor de la segunda carga y una otra carga de prueba:\n");
	scanf ("%f %f", &Q2, &Q4);
	printf ("La energia potencial  que produce la segunda carga es:\n");
	EnergiaP2(q2,p,Q2,Q4);
	
	//Energia potencial en el punto

	printf("\nLa energia potencial en ese punto es:\n");
	EnergiaPOTEN(q1,q2,p,Q1,Q2,Q3,Q4);
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

float EnergiaP1(punto q1, punto p, float Q1, float Q3)
{
	float k=9E9, V1, U1;
	V1 = (k*Q1)/(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)));
	U1= (Q3*V1)/2;
	printf ("%.2f", U1);
}

float EnergiaP2(punto q2, punto p, float Q2, float Q4)
{
	float k=9E9, V2, U2;
	V2 = (k*Q2)/(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)));
	U2=(Q4*V2)/2;
	printf ("%.2f", U2);
}

float EnergiaPOTEN(punto q1, punto q2, punto p, float Q1, float Q2, float Q3, float Q4)
{
	float V1, V2, U1, U2, U, k=9E9;
	V1 = (k*Q1)/(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)));
	V2 = (k*Q2)/(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)));
	U1= (Q3*V1)/2;
	U2=(Q4*V2)/2;
	U= U1+U2;
	printf("%.2f", U);
}


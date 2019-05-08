//ENERGÍA POTENCIAL ELECTROSTÁTICA
#include <stdio.h>
#include <math.h>

typedef struct {
	float x, y;
} punto; 

float distancia (punto p, punto q[30], int n);
float energias_parciales (punto p, punto q[30], int n, float Q[30]);

void main ()
{
	int n, i;
	punto q[30];
	punto p;
	float Q[30], U[30];
	
	printf ("Inroduzca el numero de cargas:\n");
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
	
	energias_parciales(p,q,n,Q);
	
}

float distancia (punto p, punto q[30], int n)
{
	int i;
	float dist[30];
	
	for (i=0; i<n; i++)
	{
		dist[i] = sqrt((p.x-q[i].x)*(p.x-q[i].x)+(p.y-q[i].y)*(p.y-q[i].y));
	}
	
	for (i=0; i<n; i++)
	{
		printf ("Distancia desde el punto a q%i: %.2f\n", i+1, dist[i]);
	}
}

float energias_parciales (punto p, punto q[30], int n, float Q[30])
{
	int i;
	float k=9E9, V[30], U[30];
	
	for (i=0; i<n; i++)
	{
		V[i] = (k*Q[i])/(sqrt((p.x-q[i].x)*(p.x-q[i].x)+(p.y-q[i].y)*(p.y-q[i].y)));
	}
	
	for (i=0; i<n; i++)
	{
		U[i] = (Q[i]*V[i])/2;
	}
	
	for (i=0; i<n; i++)
	{
		printf ("Energia potencial producido por la carga q%i sobre el punto: %.2f V.\n", i+1, U[i]);
	}
	
	float sum=0;
	for (i=0; i<n; i++)
	{
		sum += U[i];
	}
	printf ("Energia total: %.2f", sum);
}

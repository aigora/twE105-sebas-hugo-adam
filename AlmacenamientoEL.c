//Almacenamiento de energia potencial
#include <stdio.h>
#include <math.h> 

typedef struct {
	float x, y;
} punto; 
float distancia (punto p, punto q[20], int n);
float energias (punto p, punto q[20], int n, float C, float Q[20]);
 
void main () 
{ 
	int i, n;
	punto q[20];
	punto p;
	float C, S[20], Q[20];  
  	
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
	
}

float distancia (punto p, punto q[20], int n)
{
	int i;
	float dist[20];
	
	for (i=0; i<n; i++)
	{
		dist[i] = sqrt((p.x-q[i].x)*(p.x-q[i].x)+(p.y-q[i].y)*(p.y-q[i].y));
	}
	
	for (i=0; i<n; i++)
	{
		printf ("Distancia desde el punto a q%i: %.2f\n", i+1, dist[i]);
	}
}

float energias (punto p, punto q[20], int n, float C, float Q[20])
{
	int i;
	float k=9E9, V[20], S[20];
	
	for (i=0; i<n; i++)
	{
		V[i] = (k*Q[i])/(sqrt((p.x-q[i].x)*(p.x-q[i].x)+(p.y-q[i].y)*(p.y-q[i].y)));
	}
	
	for (i=0; i<n; i++)
	{
		S[i] = (C*(V[i]*V[i]))/2;
	}
	
	for (i=0; i<n; i++)
	{
		printf ("Energia potencial producido por la carga q%i sobre el punto: %.2f J.\n", i+1, S[i]);
	}
	
	float sum=0;
	for (i=0; i<n; i++)
	{
		sum += S[i];
	}
	printf ("Energia total: %.2f J.\n", sum);
}

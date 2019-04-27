//CAMPO ELÉCTRICO PRODUCIDO POR DOS CARGAS EN UN PUNTO
#include <stdio.h>
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

void main ()
{
	float dist1, dist2, Q1, Q2;
	punto q1, q2, p;

	printf ("Esribe donde estan situadas las cargas q1 y q2, y el punto donde actua el campo:\n");
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
	printf ("La componente i del campo total es: %2.f\n", E1);
	E2 = E12+E22;
	printf ("La componente j del campo total es: %.2f\n", E2);
	printf ("\nEl CAMPO ELECTRICO TOTAL producido por las dos cargas es:\n");
	printf ("(%.2f i, %.2f j) N/C", E1, E2);
}

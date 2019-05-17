#include "FUNCIONES.h"
#define pi 3.14159265359

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

//Ley de Coulomb

float Fuer1 (punto q1, punto p, float Q1, float Q3)
{
	float k=9E9, F1;
	F1 = (k*Q1*Q3)/(pow(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)),2));
	printf ("%.2f N", F1); 
}

float Fuer2 (punto q2, punto p, float Q2, float Q3)  
{
	float k=9E9, F2;
	F2 = (k*Q2*Q3)/(pow(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)),2));
	printf ("%.2f N", F2);
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
	printf("%.2f N", F);
}

//Campo eléctrico

float Fuer (float E, float q)
{
    return E*q ;
}

float Camp (float F, float q)
{
    return F/q ;
}

float Carg (float F, float E)
{
	return F/E ;
}

//Acción del campo eléctrico sobre cargas

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

//Ley de Gauss

float esferanomaciza (float q, float R){
	float k=9E9, E;
	E = (k*q)/(R*R);
	printf ("%.2f N/C", E);
}

float esferamaciza (float q, float R, float r){
	float per=8.85E-12, E, d;
	d = q/((4*pi*R)/3);
	E = (d*r)/(3*per);
	printf ("%.2f N/C", E);
}

float hilo (float q, float L, float R){
	float per=8.85E-12, E;
	E = (q/L)/(2*pi*per*R);
	printf ("%.2f N/C", E);
}

float plano (float q, float S){
	float per=8.85E-12, E;
	E = q/(2*per*S);
	printf ("%.2f N/C", E);
}

//Diferencia de potencial

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
	float r1, r2, V1, V2, V, k=9E9;
	r1 = sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y));
	r2 = sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y));
	V1 = (k*Q1)/(sqrt((p.x-q1.x)*(p.x-q1.x)+(p.y-q1.y)*(p.y-q1.y)));
	V2 = (k*Q2)/(sqrt((p.x-q2.x)*(p.x-q2.x)+(p.y-q2.y)*(p.y-q2.y)));
	V= V2-V1;
	printf("%.2f", V);
}

//Energía potencial electrostática

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

float energia (punto p, punto q[30], int n, float Q[30])
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
		printf ("Energia potencial producido por la carga q%i sobre el punto: %.2f J.\n", i+1, U[i]);
	}
	
	float sum=0;
	for (i=0; i<n; i++)
	{
		sum += U[i];
	}
	printf ("Energia total: %.2f J.\n", sum);
}

//Capacidad

float aVolt (float Q, float S)
{
    return Q/S;
}

float aCapa (float Q, float V)
{
    return Q/V;
}

float aCarg (float V, float S)
{
	return V*S;
}

//Almacenamiento de la energía eléctrica

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

//Resistencia y ley de Ohm

float Volt (float R, float I)
{
    return R*I ;
}

float Resis (float V, float I)
{
    return V/I ;
}

float Inten (float V, float R)
{
	return V/R ;
}

//Potencia en los circuitos eléctricos

float PotenSum (float I, float E)
{
    return I*E ;
}

float PotenDR (float V, float R)
{
    return V*V/R ;
}

  float PotenDC (float V, float I)
{
	return V*I;
}

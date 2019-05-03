#include "leydeGauss.h"
#define pi 3.14159265359
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

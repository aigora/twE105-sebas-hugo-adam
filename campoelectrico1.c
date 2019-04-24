#include <stdio.h>

  float aCamp (float F, float q);
  float aFuer (float E, float q); 
  float aCarg (float F, float E);
  int main()
  {
  	char elige;
  	float F,q,E;
  	float valor;
  	printf("Elige lo que deseas calcular: Campo(C) o Carga(Q) o Fuerza(F)\n");
  	scanf("%c",&elige);

   switch (elige)
  {
  case 'f':
  case 'F':
    printf("valor del campo y carga?\n");
    scanf("%f %f", &E ,&q);  
    valor = aFuer(E,q);
    break;
    
	case 'c':
	case 'C':
	printf("valor de la Fuerza y carga?\n");
    scanf("%f %f", &F ,&q); 
	valor = aCamp(F,q);
	break;
	
	case 'q':
	case 'Q':
	printf("valor de la Fuerza y el campo?\n");
    scanf("%f %f", &F, &E); 
	valor = aCarg(F,E);
	break;	
}
printf("El valor obtenido es %2f\n", valor);
return 0;
}

float aFuer (float E, float q)
{
    return E*q ;
}

float aCamp (float F, float q)
{
    return F/q ;
}

float aCarg (float F, float E)
{
	return F/E ;
}

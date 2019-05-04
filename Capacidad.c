#include <stdio.h>

  float aCapa (float Q, float V);
  float aVolt (float Q, float S); 
  float aCarg (float V, float S);
  int main()
  {
  	char l;
  	float V,Q,S;
  	float valor;
  	printf("Elige lo que deseas calcular: Capacidad(C) o Carga(Q) o Voltaje(V)\n");
  	scanf("%c",&l);

   switch (l)
  {
  case 'v':
  case 'V':
    printf("valor de la carga almacenada y la capacidad del condensador?\n");
    scanf("%f %f", &Q ,&S);  
    valor = aVolt(Q,S);
    break;
    
	case 'c':
	case 'C':
	printf("valor de la carga y el voltaje?\n");
    scanf("%f %f", &Q ,&V); 
	valor = aCapa(Q,V);
	break;
	
	case 'q':
	case 'Q':
	printf("valor de la Capacidad y el Voltaje?\n");
    scanf("%f %f", &V, &S); 
	valor = aCarg(V,S);
	break;	
}
printf("El valor obtenido es %2f\n", valor);
return 0;
}

float aVolt (float Q, float S)
{
    return Q/S ;
}

float aCapa (float Q, float V)
{
    return Q/V ;
}

float aCarg (float V, float S)
{
	return V*S ;
}

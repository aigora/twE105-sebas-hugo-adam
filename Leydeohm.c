//Ley de ohm
#include <stdio.h>

  float aResis (float V, float I);
  float aVolt (float R, float I); 
  float aInten (float V, float R);
  int main()
  {
  	char m;
  	float V,R,I;
  	float valor;
  	printf("Elige lo que deseas calcular: Resistencia(R) o Intensidad(I) o Voltaje(V)\n");
  	scanf("%c",&m);

   switch (m)
  {
  case 'v':
  case 'V':
    printf("Introduce el valor de la resistencia y de la intensidad \n");
    scanf("%f %f", &R ,&I);  
    valor = aVolt(R,I);
    break;
    
	case 'r':
	case 'R':
	printf("Introduce el valor del voltaje y de la intensidad\n");
    scanf("%f %f", &V ,&I); 
	valor = aResis(V,I);
	break;
	
	case 'i':
	case 'I':
	printf("Introduce el valor del voltaje y de la resistencia\n");
    scanf("%f %f", &V, &R); 
	valor = aInten(V,R);
	break;	
}
printf("El valor obtenido es %2f\n", valor);
return 0;
}

float aVolt (float R, float I)
{
    return R*I ;
}

float aResis (float V, float I)
{
    return V/I ;
}

float aInten (float V, float R)
{
	return V/R ;
}


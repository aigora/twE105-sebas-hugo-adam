#include <stdio.h>

  float PotenDC (float V, float I);
  float PotenSum (float I, float E); 
  float PotenDR (float V, float R);
  int main()
  {
  	char o;
  	float V,I,E,R;
  	float resul;
  	printf("Elige la potencia que deseas calcular: disipada en una Resistencia(D) o en un conductor (C) o suministrada por una FEM(F)\n");
  	scanf("%c",&o);

	while(o!='f' && o!='F' && o!='d' && o!='D' && o!='c' && o!='C'){
		printf("Tienes que introducir D o C o F");
		scanf(" %c",&o);
	}

   switch (o)
  {
  case 'f':
  case 'F':
    printf("valor de la intensidad y de la FEM de la bateria?\n");
    scanf("%f %f", &I ,&E);  
    resul = PotenSum(I,E);
    break;
    
	case 'd':
	case 'D':
	printf("valor del voltaje y de la Resistencia a la que se le desea calcular?\n");
    scanf("%f %f", &V ,&R); 
	resul = PotenDR(V,R);
	break;
	
	case 'c':
	case 'C':
	printf("valor del Voltaje y la Intensidad del sistema?\n");
    scanf("%f %f", &V, &I); 
	resul = PotenDC(V,I);
	break;	
}
printf("El valor obtenido es %.2f\n", resul);
return 0;
}

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

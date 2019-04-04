#include <stdio.h>

int main ()
{
	int a;
	printf ("Escoge uno de los siguientes temas marcando el numero correspondiente:\
	    \n1) Dsitribuciones discretas de cargas.\
		\n2) Distribuciones continuas de cargas.\
		\n3) Potencial electrico.\
		\n4) Capacidad.\
		\n5) Corriente electrica y circuitos.\n");
	scanf ("%i", &a);
	
	while (a!=1 && a!=2 && a!=3 && a!=4 && a!=5)
	{
		printf ("Debes marcar el numero correspondinte al tema elegido.\n");
	    scanf ("%i", &a);
	}
	
	switch (a)
	{
		case 1:
			printf ("\n");
			break;
			
		case 2:
			printf ("\n");
			break;
			
		case 3:
			printf ("\n");
			break;
			
		case 4:
			printf ("\n");
			break;
			
		case 5:
			printf ("\n");
			break;
	}
return 0;
}

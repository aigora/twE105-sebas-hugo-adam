#include "Circuitos.h"
#define R 21
#define C 65

void Intro_circuito1 (char circuito1[R][C])
{
	int i,j;
	float V,C1,C2,Ceq,Q,V1,V2;
	for (i=0; i<R; i++)
	{
		for (j=0; j<C; j++)
		{
			if(i==0 || i==R-1)
			circuito1[i][j]='-';
			
			else if(j==0 || j==C-1)
			circuito1[i][j]='|';
			
			else
			circuito1[i][j]=' ';
		}
	}
	//Aclaraciones, condensadores y batería:
	circuito1[6][0]='_';
	circuito1[7][0]='_';
	circuito1[15][0]='_';
	circuito1[16][0]='_';
	circuito1[10][64]='_';
	circuito1[10][63]='_';
	circuito1[10][62]='_';
	circuito1[9][64]='_';
	circuito1[10][60]='+';
	circuito1[9][60]='-';
	circuito1[7][2]='C';
	circuito1[7][3]='2';
	circuito1[16][2]='C';
	circuito1[16][3]='1';
	//Circuito:
	printf ("\t");
	for (i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("%c", circuito1[i][j]);
		}
	    printf ("\n\t");
    }
    printf ("\nIntroduce el voltaje de la bateria y la capacidad de los condensadores (en microfaradios), respectivamente:\n");
    scanf ("%f %f %f", &V, &C1, &C2);
    printf ("Capacidad de los condensadores:\n");
    Ceq = 1/((1/C1)+(1/C2));
    printf ("%.2f micro F", Ceq);
    printf ("\nCarga de cada condensador:\n");
    Q = Ceq*V;
    printf ("%.2f micro C", Q);
    printf ("\nDiferencia de potencial entre las placas de los condensadores:\n");
    V1 = Q/C1;
    V2 = Q/C2;
    printf ("Condensador 1: %.2f V\n", V1);
    printf ("Condensador 2: %.2f V\n", V2);
}

void Intro_circuito2 (char circuito2[R][C])
{
	int i,j;
	float V1,V2,r1,r2,R1,R2,R3,I,Va,Vb,Vc,Vd,Ve;
	for (i=0; i<R; i++)
	{
		for (j=0; j<C; j++)
		{
			if(i==0 || i==R-1)
			circuito2[i][j]='-';
			
			else if(j==0 || j==C-1)
			circuito2[i][j]='|';
			
			else
			circuito2[i][j]=' ';
		}
	}
	//Resistencias:
	for (i=5; i<10; i++)
	{
		for (j=0; j<1; j++)
		{
			circuito2[i][j]='Z';
		}
	}
	for (i=3; i<8; i++)
	{
		for (j=64; j<65; j++)
		{
			circuito2[i][j]='Z';
		}
	}
	for (i=14; i<19; i++)
	{
		for (j=64; j<65; j++)
		{
			circuito2[i][j]='Z';
		}
	}
	for (i=0; i<1; i++)
	{
		for (j=30; j<40; j++)
		{
			circuito2[i][j]='Z';
		}
	}
	for (i=20; i<21; i++)
	{
		for (j=30; j<40; j++)
		{
			circuito2[i][j]='Z';
		}
	}
	//Aclaraciones, puntos y baterías:
	circuito2[1][1]='a';
	circuito2[1][63]='b';
	circuito2[9][63]='c';
	circuito2[19][1]='e';
	circuito2[19][63]='d';
	circuito2[5][61]='R';
	circuito2[5][62]='2';
	circuito2[16][61]='r';
	circuito2[16][62]='2';
	circuito2[1][35]='R';
	circuito2[1][36]='1';
	circuito2[7][3]='r';
	circuito2[7][4]='1';
	circuito2[19][35]='R';
	circuito2[19][36]='3';
	circuito2[12][64]='_';
	circuito2[11][64]='_';
	circuito2[11][63]='_';
	circuito2[11][62]='_';
	circuito2[11][60]='+';
	circuito2[12][60]='-';
	circuito2[12][56]='V';
	circuito2[12][57]='2';
	circuito2[12][0]='_';
	circuito2[12][1]='_';
	circuito2[12][2]='_';
	circuito2[13][0]='_';
	circuito2[12][4]='+';
	circuito2[13][4]='-';
	circuito2[13][7]='V';
	circuito2[13][8]='1';
	//Circuito:
	printf ("\t");
	for (i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("%c", circuito2[i][j]);
		}
	    printf ("\n\t");
    }
    printf ("\nIntroduce el voltaje de las baterias V1 y V2, el valor de las resistencias internas r1 y r2, y de las externas R1, R2 y R3, respectivamente:\n");
    scanf ("%f %f %f %f %f %f %f", &V1, &V2, &r1, &r2, &R1, &R2, &R3);
    printf ("La corriente del circuito es:\n");
    I = (V1-V2)/(R1+R2+R3+r1+r2);
    printf ("%.2f A", I);
    printf("\nPotencial en cada uno de los puntos:\n");
    Ve = 0;
    Va = Ve+V1-I*r1;
    Vb = Va-I*R1;
    Vc = Vb-I*R2;
    Vd = Vc-V2-I*r2;
    Ve = Vd-I*R3;
    printf ("Valor de Va: %.2f\n", Va);
    printf ("Valor de Vb: %.2f\n", Vb);
    printf ("Valor de Vc: %.2f\n", Vc);
    printf ("Valor de Vd: %.2f\n", Vd);
    printf ("Valor de Ve: %.2f\n", Ve);
}

void Intro_circuito3 (char circuito3[R][C])
{
	int i,j;
	float V,R1,R2,C1,I1,It,Q;
	for (i=0; i<R; i++)
	{
		for (j=0; j<C; j++)
		{
			if(i==0 || i==R-1)
			circuito3[i][j]='-';
			
			else if (j==0 || j==31 || j==C-1)
			circuito3[i][j]='|';
			
			else 
			circuito3[i][j]=' ';
		}
	}
	//Resistencias:
	for (i=0; i<1; i++)
	{
		for (j=4; j<14; j++)
		{
			circuito3[i][j]='Z';
		}
	}
	for (i=8; i<13; i++)
	{
		for (j=31; j<32; j++)
		{
			circuito3[i][j]='Z';
		}
	}
	//Aclaraciones, condensadores, interruptor y batería:
	circuito3[9][64]='_';
	circuito3[10][64]='_';
	circuito3[10][62]='C';
	circuito3[9][0]='_';
	circuito3[9][1]='_';
	circuito3[9][2]='_';
	circuito3[10][0]='_';
	circuito3[9][4]='+';
	circuito3[10][4]='-';
	circuito3[1][8]='R';
	circuito3[1][9]='1';
	circuito3[10][28]='R';
	circuito3[10][29]='2';
	circuito3[0][20]='/';
	circuito3[0][21]=' ';
	circuito3[0][22]=' ';
	circuito3[0][23]=' ';
	circuito3[1][22]='S';
	//Circuito:
	printf ("\t");
	for (i=0; i<R; i++)
	{
		printf ("\t");
		for(j=0; j<C; j++)
		{
			printf("%c", circuito3[i][j]);
		}
	    printf ("\n\t");
    }
    printf("\nIntroduce el voltaje de la bateria, el valor de las resistencias (R1 y R2 respectivamente) y la capacidad del condensador (en microfaradios).\n");
    scanf ("%f %f %f %f", &V, &R1, &R2, &C1);
    printf ("Inmediatamente despues de cerrar el interruptor, el condensador aun no esta cargado.");
    printf ("\nLa corriente que atraviesa la primera resistencia es:\n");
    I1 = V/R1;
    printf ("I = %.2f A", I1);
    printf ("\nLa corriente que atraviesa la segunda resistencia es nula.\n");
    printf ("Despues de un tiempo, el condensador se carga y la corriente que circula por ambas resistencias es la misma:\n");
    It = V/(R1+R2);
    printf ("I = %.2f A", It);
    printf ("\nLa carga del condensador es:\n");
    Q = It*R2*C1;
    printf ("Q = %.2f microC", Q);
}

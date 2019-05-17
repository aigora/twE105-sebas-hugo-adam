typedef struct {
	    float x, y;
    } punto;

float vectorunitario1 (punto q1, punto p);
float vectorunitario2 (punto q2, punto p);
float distancia1 (punto q1, punto p);
float distancia2 (punto q2, punto p);
//Ley de Coulomb
float Fuer1 (punto q1, punto p, float Q1, float Q3); 
float Fuer2 (punto q2, punto p, float Q2, float Q3); 
float FUER (punto q1, punto q2, punto p, float Q1, float Q2, float Q3);
//Campo eléctrico
float Camp (float F, float q);
float Fuer (float E, float q); 
float Carg (float F, float E);
//Acción del campo eléctrico sobre cargas
float campo1 (punto q1, punto p, float Q1);
float campo2 (punto q2, punto p, float Q2);
float CAMPO (punto q1, punto q2, punto p, float Q1, float Q2);
//Ley de Gauss
float esferanomaciza (float q, float R);
float esferamaciza (float q, float R, float r);
float hilo (float q, float L, float R);
float plano (float q, float S);
//Diferencia potencial
float Poten1 (punto q1, punto p, float Q1); 
float Poten2 (punto q2, punto p, float Q2); 
float POTENTOTAL (punto q1, punto q2, punto p, float Q1, float Q2);
float POTENDIF (punto q1, punto q2, punto p, float Q1, float Q2);
//Energía potencial electrostática
float distancia (punto p, punto q[30], int n);
float energia (punto p, punto q[30], int n, float Q[30]);
//Capacidad
float aCapa (float Q, float V);
float aVolt (float Q, float S); 
float aCarg (float V, float S);
//Almacenamiento de la energía eléctrica
float distancia (punto p, punto q[20], int n);
float energias (punto p, punto q[20], int n, float C, float Q[20]);
//Resistencia y ley de Ohm
float Resis (float V, float I);
float Volt (float R, float I); 
float Inten (float V, float R);
//Potencia en los circuitos eléctricos
float PotenDC (float V, float I);
float PotenSum (float I, float E); 
float PotenDR (float V, float R);

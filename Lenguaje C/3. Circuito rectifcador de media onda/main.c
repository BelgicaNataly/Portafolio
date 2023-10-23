#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float V1, N1, N2, pi=3.1416, Vdiodo, resis, V2, Vpico, Vdc, I2, I1;
	
	printf("CIRCUITO RECTIFICADOR DE MEDIA ONDA \n");
	printf("Ingrese el voltaje inicial del circuito: ");
	scanf("%f", &V1);
	printf("Ingrese el embobinado primario del circuito: ");
	scanf("%f", &N1);
	printf("Ingrese el embobinado secundario del circuito: ");
	scanf("%f", &N2);
	printf("Ingrese el voltaje del diodo: ");
	scanf("%f", &Vdiodo);
	printf("Ingrese el valor de la resistencia del circuito: ");
	scanf("%f", &resis);
	
	V2 = (V1 * N2) / N1;
	Vpico = V2 * sqrt(2);
	Vdc = (Vpico - Vdiodo) / pi;
	I2 = Vdc / resis;
	I1 = (I2 * N2) / N1;
	
	printf("El voltaje final del circuito es: %f [V] \n", V2);
	printf("El voltaje de corriente directa del circuito es: %f [V] \n", Vdc);
	printf("La intensidad final del circuito es: %f [A]\n", I2);
	printf("La intensidad inicial del circuito es: %f [A]", I1);
	
	return 0;
}



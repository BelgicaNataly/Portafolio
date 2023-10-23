#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float V1, N1, N2, pi=3.1416, Vdiodo, V2, Vdev2, Vpico, Vdc;
	
	printf("CIRCUITO RECTIFICADOR DE ONDA COMPLETA CON DERIVACI%CN CENTRAL \n", 224);
	printf("Ingrese el voltaje inicial del circuito: ");
	scanf("%f", &V1);
	printf("Ingrese el embobinado primario del circuito: ");
	scanf("%f", &N1);
	printf("Ingrese el embobinado secundario del circuito: ");
	scanf("%f", &N2);
	printf("Ingrese el voltaje del diodo: ");
	scanf("%f", &Vdiodo);
	
	V2 = (V1 * N2) / N1;
	Vdev2 = V2 / 2;
	Vpico = Vdev2 * sqrt(2);
	Vdc = (2 * (Vpico - Vdiodo)) / pi;

	printf("El voltaje de corriente directa del circuito es: %f [V] \n", Vdc);
	
	return 0;
}

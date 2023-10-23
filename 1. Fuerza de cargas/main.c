#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float k=9000000000, q1, q2, d, F;
	
	printf("FUERZA DE CARGAS \n");
	printf("Ingrese el valor de la carga 1: ");
	scanf("%f", &q1);
	printf("Ingrese el valor de la carga 2: ");
	scanf("%f", &q2);
	printf("Ingrese el valor de la distancia entre las cargas: ");
	scanf("%f", &d);
	
	F = k * ((q1 * q2) / (pow(d,2)));
	
	printf("El Valor de la fuerza el%cctrica es: %.2f Newton", 130, F);
	
	return 0;
}




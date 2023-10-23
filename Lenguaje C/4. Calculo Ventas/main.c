#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float SueldoBasico, venta1, venta2, venta3, SueldoTotal;
	
	printf("SUELDO MENSUAL \n");
	printf("Ingresar el valor del sueldo b%csico: ", 160);
	scanf("%f", &SueldoBasico);
	printf("Ingresar el valor de la venta 1: ");
	scanf("%f", &venta1);
	printf("Ingresar el valor de la venta 2: ");
	scanf("%f", &venta2);
	printf("Ingresar el valor de la venta 3: ");
	scanf("%f", &venta3);
	
	SueldoTotal = SueldoBasico + ((venta1 + venta2 + venta3)  * 0.1);
	
	printf("El sueldo total a recibir es: %c%.2f", 36, SueldoTotal);
	
	return 0;
}




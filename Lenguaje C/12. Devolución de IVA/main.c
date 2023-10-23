#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int edad;
	float compra;
	
	printf("DEVOLUCION DE IVA \n");
	printf("Ingrese la edad del comprador: ");
	scanf("%d",&edad);
	printf("Ingrese el monto de compra: ");
	scanf("%f",&compra);
	
	if(edad > 65)
		compra;
	else
		compra = compra * 1.12;
	
	printf("El monto total a pagar es: %.2f",compra);
	
	return 0;
}

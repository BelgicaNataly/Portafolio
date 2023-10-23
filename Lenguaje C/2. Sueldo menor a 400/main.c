#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float sueldo;
	
	printf("AUMENTO DE SUELDO \n");
	printf("Ingrese el valor de su sueldo mensual: ");
	scanf("%f", &sueldo);
	
	if(sueldo < 401)
	{
		sueldo = sueldo + (sueldo * 0.15);
	}
	printf("El sueldo a recibir es: %c%.2f", 36, sueldo);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float v, r, i;
	
	printf("INTENSIDAD DE CORRIENTE DE UN CIRCUITO \n");
	printf("Ingrese el valor del voltaje: ");
	scanf("%f", &v);
	printf("Ingrese el valor de la resistencia: ");
	scanf("%f", &r);
	
	i = v / r;
	
	printf("La intensidad de corriente es: %.2f [A]", i);
	
	return 0;
}




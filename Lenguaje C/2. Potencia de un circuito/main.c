#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float v, i, p;
	
	printf("POTENCIA DE UN CIRCUITO \n");
	printf("Ingrese el valor del volaje: ");
	scanf("%f", &v);
	printf("Ingrese el valor de la intensidad: ");
	scanf("%f", &i);
	
	p = v * i;
	
	printf("La potencia del circuito es: %.2f W", p);
	
	return 0;
}












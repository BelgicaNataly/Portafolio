#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float b, h, A, P;
	
	printf("RECT%cNGULO \n", 181);
	printf("Ingrese el valor de la base: ");
	scanf("%f", &b);
	printf("Ingrese el valor de la altura: ");
	scanf("%f", &h);
	
	A = b * h;
	P = 2 * (b + h);
	
	printf("%crea: %.2f", 181, A);
	printf("\nPer%cmetro: %.2f", 161, P);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int A, B, aux;
	
	printf("INTERCAMBIO DE VARIABLES \n");	
	printf("Ingrese el valor de A: ");
	scanf("%d", &A);
	printf("Ingrese el valor de B: ");
	scanf("%d", &B);
	
	aux = A;
	A = B;
	B = aux;
	
	printf("El valor de A ahora es: %d \n", A);
	printf("El valor de B ahora es: %d", B);
	return 0;
}

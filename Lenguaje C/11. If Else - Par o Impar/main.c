#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int A;
	
	printf("Ingrese un numero: ");
	scanf("%d",&A);
	
	if(A %2 == 0)
		printf("El numero ingresado es PAR");
	else
		printf("El numero ingresado es IMPAR");
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	
	if(n>0)
		printf("El numero ingresado es positivo");
	else if(n<0)
		printf("El numero ingresado es negativo");
	else
		printf("El numero ingresado es cero");
	
	return 0;
}

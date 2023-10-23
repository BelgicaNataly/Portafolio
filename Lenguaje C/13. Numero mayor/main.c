#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b, c, mayor;
	
	printf("Ingrese el primer numero: ");
	scanf("%d",&a);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&b);
	printf("Ingrese el tercer numero: ");
	scanf("%d",&c);
	
	if(a>b)
			mayor = a;
	else 
			mayor = b;
	
	if(mayor>c)
		printf("El numero mayor es: %d", mayor);
	else
		printf("El numero mayor es: %d", c);

	return 0;
}

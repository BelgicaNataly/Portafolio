#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b;
	
	printf("Ingrese el valor de A: ");
	scanf("%d",&a);
	printf("Ingrese el valor de B: ");
	scanf("%d",&b);
	
	if (a>b)
	printf("A es mayor que B");
	else if (a<b)
	printf("B es mayor que A");
	else 
	printf("A y B son iguales");
	
	return 0;
}
